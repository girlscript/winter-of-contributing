import numpy as np
import os
import h5py
import sys
import time
from utils import preprocess_images
from pooling_functions import weighted_cam_pooling, descriptor_aggregation
from cam_functions import extract_feat_cam
from scipy.misc import imread
import torch




# Image Preprocessing
size_v = [720, 1024]
size_h = [1024, 720]

stats = list()
mean = [0.485, 0.456, 0.406]
std = [0.229, 0.224, 0.225]
stats.append(mean)
stats.append(std)

dim_descriptors = 512

n_images_oxford = 5063
n_images_paris = 6392


# Compute score using CAMs, PCA , Region of interest
def compute_scores_cams(desc_query, features_img, cams, roi, pca_matrix):
    #print 'Feat shape:', features_img.shape
    #print 'Cams shape', cams.shape
    nthres = 4
    scores = np.zeros(features_img.shape[0])
    feats = np.zeros((1, features_img.shape[1], features_img.shape[2], features_img.shape[3]), dtype=np.float32)
    cams_ = np.zeros((1, cams.shape[1], cams.shape[2], cams.shape[3]), dtype=np.float32)
    final_descriptors = np.zeros((features_img.shape[0], features_img.shape[1]), dtype=np.float32)
    for img_ind in range(features_img.shape[0]):
        #print features_img[img_ind].shape
        feats[0] = features_img[img_ind]
        cams_[0] = cams[img_ind]
        scores[img_ind] = -10
        #print 'Img: ', img_ind
        x, y, w, h = roi[img_ind, :, 0], roi[img_ind, :, 1], roi[img_ind, :, 2], roi[img_ind, :, 3]
        for th in range(0, nthres):
            #print y[th], y[th] + h[th]
            #print x[th], x[th] + w[th]
            sys.stdout.flush()
            if h[th] >= 5 and w[th] >= 5:
                d_wp = weighted_cam_pooling(feats[:, :,y[th]:y[th]+h[th], x[th]:x[th]+w[th]],
                                            cams_[:, :, y[th]:y[th]+h[th], x[th]:x[th]+w[th]], max_pool=False)
                descriptor = descriptor_aggregation(d_wp, 1, cams.shape[1], pca_matrix)

                score_aux = np.dot(desc_query, np.transpose(descriptor))

                #print 'Thresh: ', th
                #print 'Score:', score_aux
                if score_aux > scores[img_ind]:
                    #print 'Max in th:', th
                    scores[img_ind] = np.copy(score_aux)
                    final_descriptors[img_ind] = descriptor
            else:
                pass
    return scores, final_descriptors


def re_order(order, vector_h, vector_v):
    vector = list()
    count_h = 0
    count_v = 0
    for pos in order:
        if pos == 0:
            vector.append(vector_h[count_h])
            count_h += 1
        elif pos == 1:
            vector.append(vector_v[count_v])
            count_v += 1
    return vector


def re_ranking(desc_query, class_list, batch_size, image_names, indices, dataset, top_n_ranking, pca_matrix, model, model_name):
    if dataset == 'Oxford' or dataset == 'Oxford105k':
        images_path = '/data/jim011/datasets_retrieval/Oxford5k/images/'

    if dataset == 'Paris' or dataset == 'Paris106k':
        images_path = '/data/jim011/datasets_retrieval/Paris6k/images/'

    index_q = indices[0:top_n_ranking]
    tt = time.time()
    indexed_names = list()
    i = 0
    if top_n_ranking >= 1000:
        image_batch = 300
    else:
        image_batch = top_n_ranking

    n_iterations = int(math.floor(top_n_ranking / image_batch))
    last_batch = top_n_ranking % image_batch
    scores = np.zeros(top_n_ranking, dtype=np.float32)
    scores_h = np.zeros(top_n_ranking, dtype=np.float32)
    scores_v = np.zeros(top_n_ranking, dtype=np.float32)
    final_desc_h = np.zeros(top_n_ranking, dtype=np.float32)
    final_desc_v = np.zeros(top_n_ranking, dtype=np.float32)
    print desc_query.shape
    final_descriptors_all = np.zeros((top_n_ranking, desc_query.shape[1]), dtype=np.float32)
    image_ranked_names = image_names[index_q]

    num_cams = class_list.shape[0]

    for k in range(0, n_iterations+1):
        images_h = list()
        images_v = list()
        images_ver = False
        images_hor = False
        t1 = time.time()
        if k == n_iterations:
            #Last Batch
            if last_batch != 0:
                last_ind = image_batch * k + last_batch
            else:
                break
        else:
            last_ind = image_batch * (k+1)

        print image_names[index_q[k*image_batch:last_ind]]

        # Separate the images in Horizontal/Vertical for faster processing
        image_order = list()
        for ind_im, name in enumerate(image_names[index_q[k*image_batch:last_ind]]):
            if name[0] == '/':
                im = imread(name.replace('\n',''))
            else:
                im = imread(images_path + name.replace('\n', '') + '.jpg')
            if im.shape[0] >= im.shape[1]:
                images_v.append(im)
                images_ver = True
                image_order.append(1)
            else:
                images_h.append(im)
                images_hor = True
                image_order.append(0)

        # Extract Features/CAMs
        print 'Time loading images: ', time.time() - t1

        if images_hor:
            size = size_h
            t2 = time.time()
            images_tensor = preprocess_images(images_h, size[0], size[1], stats[0], stats[1])
            images_tensor = torch.autograd.Variable(images_tensor, volatile=True)
            features_h, cams_h, roi_h = extract_feat_cam(model, model_name, layer, batch_size, images_tensor, num_cams,
                                                         class_list, roi=True)
            print 'Time extracting features hor: ', time.time() - t2
            t3 = time.time()
            scores_h, final_desc_h = compute_scores_cams(desc_query, features_h, cams_h, roi_h, pca_matrix)
            print 'Time computing scores: ', time.time() - t3
            print scores_h

        if images_ver:
            size = size_v
            t2 = time.time()
            images_tensor = preprocess_images(images_v, size[0], size[1], stats[0], stats[1])
            images_tensor = torch.autograd.Variable(images_tensor, volatile=True)
            features_v, cams_v, roi_v = extract_feat_cam(model, model_name, layer, batch_size, images_tensor, num_cams,
                                                         class_list, roi=True)
            print 'Time extracting features ver: ', time.time() - t2
            t3 = time.time()
            scores_v, final_desc_v = compute_scores_cams(desc_query, features_v, cams_v, roi_v, pca_matrix)
            print 'Time computing scores: ', time.time() - t3
            print scores_v

        # Compute Scores
        print image_order
        # Re-order
        scores[k*image_batch:last_ind] = re_order(image_order, scores_h, scores_v)
        final_descriptors_all[k*image_batch:last_ind] = re_order(image_order, final_desc_h, final_desc_v)
        print final_descriptors_all.shape

        print scores[k*image_batch:image_batch*(k+1)]
        print 'Time loading computing scores: ', time.time() - t2
        print 'Time elapsed x image:', time.time() - t1

    print scores
    ordered_sc = scores.argsort()[::-1]
    print ordered_sc
    print image_names[index_q]
    print image_ranked_names[ordered_sc]
    # Index of the in order of relevance
    ordered_ind = index_q[ordered_sc]
    indexed_names.append(np.copy(image_ranked_names[ordered_sc]))
    indices[0:top_n_ranking] = ordered_ind
    i += 1
    print 'Time elapsed:', time.time()-tt
    # Return indices and data ordered by similarity with the query
    return indices, final_descriptors_all[ordered_sc]