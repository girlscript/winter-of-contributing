from cam_functions import extract_feat_cam
from utils import create_folders, save_data, preprocess_images, load_data, print_classes
from pooling_functions import weighted_cam_pooling, descriptor_aggregation, retrieve_n_descriptors, compute_pca, sum_pooling
from scipy.misc import imread
import math
from reranking import re_ranking
import pickle
import resnet
import densenet
import numpy as np
import os
import h5py
import sys
import getopt
import evaluate_oxford_paris as eval
import time
import torch
import torchvision
import torch.nn.parallel
import torch.backends.cudnn as cudnn


imagenet_dictionary = pickle.load(open("../imagenet1000_clsid_to_human.pkl", "rb"))

# Instructions Arguments: python script.py -d 'Oxford/Paris' -nc_q 32 -pca 1 -qe 10 -re 100 -nc_re 6

try:
    opts, args = getopt.getopt(sys.argv[1:], 'd:m:', ['nc_q=', 'pca=', 'qe=', 're=', 'nc_re='])
    flag_nc_q = False
    flag_pca = False
    flag_d = False
    flag_nc_re = False
    flag_qe = False
    flag_re = False
    flag_m = False
except getopt.GetoptError:
    print 'script.py -d <dataset> --nc_q <nclasses_query> --pca <n_classes_pca> --qe <n_query_exp> --re <n_re_ranking> ' \
          '--nc_re <n_classes_re_ranking> -m <model_name>'
    sys.exit(2)
for opt, arg in opts:
    if opt == '-d':
        if arg == 'Oxford' or arg == 'Paris' or arg == 'Oxford105k' or arg == 'Paris106k':
            dataset = arg
            flag_d = True

    elif opt == '--nc_q':
            num_cams = int(arg)
            flag_nc_q = True

    elif opt == '--pca':
            num_classes_pca = int(arg)
            flag_pca = True

    elif opt == '-m':
        if arg == 'ResNet50' or arg == 'DenseNet161':
            model_name = arg
            flag_m = True

    elif opt == '--qe':
            n_expand = int(arg)
            query_expansion = True
            flag_qe = True

    elif opt == '--re':
            do_re_ranking = True
            top_n_ranking = int(arg)
            flag_re = True

    elif opt == '--nc_re':
            num_cams2 = int(arg)
            flag_nc_re = True

if not flag_pca:
    num_classes_pca = 1
    print 'Default pca_classes: ', num_classes_pca

# N Class Activation Maps
if not flag_nc_q:
    num_cams = 64
    print 'Default classes: ', num_cams

# Num_cams2 --> Used to compute the descriptors when re-ranking
if not flag_nc_re:
    num_cams_re = 6
    print 'Default classes for re-ranking: ', num_cams_re

# Re-ranking
if not flag_re:
    do_re_ranking = False
    top_n_ranking = 0
    print 'Not doing Re-ranking'

# Query Expansion
if not flag_qe:
    # Re-ranking
    query_expansion = False
    n_expand = 0
    print 'Not doing Query Expansion'

if not flag_m:
    model_name = 'ResNet50'
    print 'Default model: ', model_name


# Num classes stored in the precomputed --> Have to be set up
num_prec_classes = 64

# SET FOR RE-RANKING
batch_size_re = 6

# Global params
n_images_distractors = 100070
n_images_oxford = 5063
n_images_paris = 6392
n_queries = 55

# Descriptors for Re-ranking  (Size W x H)
dim = '1024x720'
size_v = [720, 1024]
size_h = [1024, 720]

stats = list()
mean = [0.485, 0.456, 0.406]
std = [0.229, 0.224, 0.225]
stats.append(mean)
stats.append(std)

# Parameters to set

# Dataset
if not flag_d:
    dataset = 'Oxford'
    print 'Default dataset: ', dataset

cudnn.benchmark = True

if model_name == 'ResNet50':
    # ResNet50
    model = resnet.resnet50(pretrained=True)
    model = torch.nn.DataParallel(model)
    dim_descriptor = 2048
    pca_dim = 2048
elif model_name == 'DenseNet161':
    # DenseNet161
    model = densenet.densenet161(pretrained=True)
    model.features = torch.nn.DataParallel(model.features)
    dim_descriptor = 2208
    pca_dim = 2208

model.cuda()

# PCA Parameters
apply_pca = True

print 'Dataset: ', dataset
print 'Num_cams ', num_cams
print 'PCA with ', num_classes_pca
print 'Model: ', model_name

if do_re_ranking:
    print 'Re-ranking with first ', top_n_ranking
if query_expansion:
    print 'Applying query expansion using the first ', n_expand


if dataset == 'Oxford':
    image_path = '/data/jim011/datasets_retrieval/Oxford5k/images/'
    ranking_path = '/flush2/jim011/results/oxford/' + model_name + '/' + dim + '/'
    ranking_image_names_list = '../lists/list_oxford_rank.txt'
    create_folders(ranking_path)

    cam_descriptors_path = '/data/jim011/oxford/descriptors/' + model_name + '/' + dim + '/' + 'oxford_all_64_wp.h5'

    pca_descriptors_path = '/data/jim011/paris/descriptors/' + model_name + '/1024x720/' + 'paris_all_64_wp.h5'

    t = time.time()

    image_names = list()

    with open(ranking_image_names_list, "r") as f:
        for line in f:
            image_names.append(line)

    num_images = n_images_oxford
    num_img_pca = n_images_paris

    image_names = np.array(image_names)

    path_gt = "/data/jim011/datasets_retrieval/Oxford5k/ground_truth/"
    query_names = ["all_souls", "ashmolean", "balliol", "bodleian", "christ_church", "cornmarket", "hertford", "keble",
                   "magdalen", "pitt_rivers", "radcliffe_camera"]


elif dataset == 'Paris':
    ranking_path = '/flush2/jim011/results/paris/' + model_name + '/' + dim + '/'
    ranking_image_names_list = '../lists/list_paris_rank.txt'
    create_folders(ranking_path)

    descriptors_path = '/flush2/jim011/paris/descriptors/' + model_name + '/1024x720/'
    descriptors_name = 'paris_32_pca_2208_oxford_1.h5'

    cam_descriptors_path = '/flush2/jim011/paris/descriptors/' + model_name + '/' + dim + '/' \
                           'paris_all2_sp.h5'

    pca_descriptors_path = '/flush2/jim011/oxford/descriptors/' + model_name + '/1024x720/' \
                           'oxford_all2_sp.h5'

    image_path = '/data/jim011/datasets_retrieval/Paris6k/images/'

    num_images = n_images_paris
    num_img_pca = n_images_oxford

    path_gt = "/data/jim011/datasets_retrieval/Paris6k/ground_truth/"
    query_names = ["defense", "eiffel", "invalides", "louvre", "moulinrouge", "museedorsay", "notredame", "pantheon",
                   "pompidou", "sacrecoeur", "triomphe"]

    t = time.time()

    image_names = list()
    with open(ranking_image_names_list, "r") as f:
        for line in f:
            image_names.append(line)

    image_names = np.array(image_names)


elif dataset == 'Oxford105k':
    image_path = '/data/jim011/datasets_retrieval/Oxford5k/images/'
    ranking_path = '/home/jim011/workspace/retrieval-2017-icmr/results/oxford105k/' + model_name +  '/' \
                   + dim + '/' + '/R' + str(top_n_ranking) + 'QE' + str(n_expand)+'/'
    ranking_image_names_list = '/home/jim011/workspace/retrieval-2017-icmr/lists/list_oxford_rank.txt'
    ranking_distractors_list = '/home/jim011/workspace/retrieval-2017-icmr/lists/list_oxford_105k_rank.txt'
    create_folders(ranking_path)

    descriptors_path = '/data/jim011/oxford/descriptors/Vgg_16_CAM/relu5_1/1024x720/'
    distractors_path = '/data/jim011/oxford/descriptors/Vgg_16_CAM/relu5_1/1024x720/' \
                       'oxford_105k_32_pca_512_paris_1.h5'

    # descriptors_name = 'oxford_fusion_8_th_0_pca_paris_8_wp_wp.h5'
    descriptors_name = 'oxford_32_pca_512_paris_1.h5'
    pca_descriptors_path = '/data/jim011/paris/descriptors/Vgg_16_CAM/relu5_1/1024x720/' \
                           'paris_all_64_wp.h5'

    cam_distractors_path = '/data/jim011/descriptors100k/descriptors/' + model_name + '/' + '/' + dim + '/' \
                           'distractor_all_64_wp_'
    num_images = n_images_distractors
    num_img_pca = n_images_paris

    t = time.time()

    image_names = list()

    with open(ranking_image_names_list, "r") as f:
        for line in f:
            image_names.append(line)

    with open(ranking_distractors_list, "r") as f:
        for line in f:
            image_names.append(line)

    image_names = np.array(image_names)


    path_gt = "/data/jim011/datasets_retrieval/Oxford5k/ground_truth/"
    query_names = ["all_souls", "ashmolean", "balliol", "bodleian", "christ_church", "cornmarket", "hertford", "keble",
                   "magdalen", "pitt_rivers", "radcliffe_camera"]

elif dataset == 'Paris106k':
    ranking_path = '/home/jim011/workspace/retrieval-2017-icmr/results/paris106k/' + model_name + '/' + layer + '/' \
                   + dim + '/' + '/R' + str(top_n_ranking) + 'QE' + str(n_expand)+'/'
    ranking_image_names_list = '/home/jim011/workspace/retrieval-2017-icmr/lists/list_paris_rank.txt'
    ranking_distractors_list = '/home/jim011/workspace/retrieval-2017-icmr/lists/list_oxford_105k_rank.txt'
    create_folders(ranking_path)

    descriptors_path = '/data/jim011/oxford/descriptors/Vgg_16_CAM/relu5_1/1024x720/'
    descriptors_name = 'paris_32_pca_512_oxford_1.h5'
    distractors_path = '/data/jim011/'

    pca_descriptors_path = '/data/jim011/oxford/descriptors/Vgg_16_CAM/relu5_1/1024x720/' \
                           'oxford_all_32_wp.h5'
    image_path = '/data/jim011/datasets_retrieval/Paris6k/images/'

    num_images = n_images_distractors
    num_img_pca = n_images_oxford
    cam_distractors_path = '/data/jim011/descriptors100k/descriptors/' + model_name + '/' + '/' + dim + '/' \
                            'distractor_all_64_wp_'

    t = time.time()

    image_names = list()
    with open(ranking_image_names_list, "r") as f:
        for line in f:
            image_names.append(line)

    with open(ranking_distractors_list, "r") as f:
        for line in f:
            image_names.append(line)

    image_names = np.array(image_names)

    path_gt = "/data/jim011/datasets_retrieval/Paris6k/ground_truth/"
    query_names = ["defense", "eiffel", "invalides", "louvre", "moulinrouge", "museedorsay", "notredame", "pantheon",
                   "pompidou", "sacrecoeur", "triomphe"]

maps = list()

# Compute PCA
if apply_pca:
    tpca = time.time()
    pca_desc = retrieve_n_descriptors(num_classes_pca, num_img_pca, load_data(pca_descriptors_path))
    pca_matrix = compute_pca(pca_desc, pca_dim=pca_dim, whiten=True)
    print 'PCA matrix shape:', pca_matrix.components_.shape
    print 'Time elapsed PCA: ', time.time() - tpca
else:
    pca_matrix = None

if dataset == 'Oxford105k' or dataset == 'Paris106k':
    n_chunks = 10
    distractors = np.zeros((0, 512), dtype=np.float32)
    for n_in in range(0, n_chunks+1):
        desc = load_data(cam_distractors_path + str(n_in) + '.h5')
        print desc.shape
        distractors = np.concatenate((distractors, descriptor_aggregation(desc, desc.shape[0]/num_prec_classes,
                                                                          num_cams, pca_matrix)))
        print distractors.shape
        t = time.time()
        cam_descriptors = load_data(cam_descriptors_path)
        print 'Time elapsed loading: ', time.time() - t
        data = descriptor_aggregation(cam_descriptors, num_images, num_cams, pca_matrix)
        data = np.concatenate((data, distractors))

elif dataset == 'Oxford' or dataset == 'Paris':
    t = time.time()
    cam_descriptors = load_data(cam_descriptors_path)
    print 'Time elapsed loading: ', time.time() - t
    #data = cam_descriptors
    data = descriptor_aggregation(cam_descriptors, num_images, num_cams, pca_matrix)

for query_name in query_names:
    for i in range(1, 6):
        f = open(path_gt + query_name + '_' + str(i) + '_query.txt').readline()
        if dataset == 'Oxford' or dataset == 'Oxford105k':
            f = f.replace("oxc1_", "")
        f_list = f.split(" ")
        for k in range(1, 5):
            f_list[k] = (int(math.floor(float(f_list[k]))))

        query_img_name = f_list[0]
        img = imread(image_path + query_img_name + '.jpg')
        print 'Image Shape: ' + str(img.shape[0]) + 'x' + str(img.shape[1])

        # Query bounding box
        x, y, dx, dy = f_list[1], f_list[2], f_list[3], f_list[4]

        # Feature map query bounding box
        f_x, f_y, f_dx, f_dy = int((x - (x % 32)) / 32), int((y - (y % 32)) / 32), \
                               int((dx - (dx % 32)) / 32), int((dy - (dy % 32)) / 32)

        img_cropped = img[y:dy, x:dx]

        print 'Name of the query: ', query_img_name

        h = img_cropped.shape[0] - (img_cropped.shape[0] % 32)
        w = img_cropped.shape[1] - (img_cropped.shape[1] % 32)

        img_tensor = preprocess_images(img_cropped, w, h, stats[0], stats[1])
        img_tensor = torch.autograd.Variable(img_tensor, volatile=True)

        # Cropped Query
        features_c, cams_c, class_list, _ = extract_feat_cam(model, model_name, 1, img_tensor, num_cams)

        if img.shape[0] > img.shape[1]:
            size = size_v
        else:
            size = size_h

        img_tensor = preprocess_images(img, size[0], size[1], stats[0], stats[1])
        img_tensor = torch.autograd.Variable(img_tensor, volatile=True)

        # All image query (With bounding box classes, to be implemented in one step...)
        features, cams, _ = extract_feat_cam(model, model_name, 1, img_tensor, num_cams, class_list[0, 0:num_cams], roi=False)

        # Features that fall inside Bounding box query
        d_wp = weighted_cam_pooling(features[:, :, f_y:f_dy, f_x:f_dx], cams[:, :, f_y:f_dy, f_x:f_dx])

        #d_wp = weighted_cam_pooling(features_c, cams_c, max_pool=False)

        # Compute Query Descriptor
        desc = descriptor_aggregation(d_wp, 1, num_cams, pca_matrix)

        # desc = sum_pooling(features_c)

        # desc = sum_pooling(features[:, :, f_y:f_dy, f_x:f_dx])

        indices_local, data_local = eval.save_ranking_one_query(data, desc, image_names, ranking_path, query_img_name)

        if do_re_ranking:
            # When re-ranking descriptor for the query computed with less CAMs, as we know the relevant objects
            desc = descriptor_aggregation(d_wp, 1, num_cams_re, pca_matrix)
            t_rerank = time.time()
            indices_re_ranking, data_re_ranking = re_ranking(desc, class_list[0, 0:num_cams_re], batch_size_re, image_names,
                                                             indices_local, dataset, top_n_ranking, pca_matrix,
                                                             model, model_name)
            print 'Time reranking: ', time.time() - t_rerank
            eval.save_ranking_indices(indices_re_ranking, image_names, query_img_name, ranking_path)

        if query_expansion:
            if do_re_ranking:
                data_local[indices_re_ranking[0:top_n_ranking]] = data_re_ranking
                desc_expanded = eval.expand_query(n_expand, data_local, indices_re_ranking)
            else:
                desc_expanded = eval.expand_query(n_expand, data_local, indices_local)
            eval.save_ranking_one_query(data, desc_expanded, image_names, ranking_path, query_img_name)

        sys.stdout.flush()

print 'Time elapsed computing distances: ', time.time() - t

if dataset == 'Oxford' or dataset == 'Oxford105k':
    maps.append(eval.evaluate_oxford(ranking_path))
elif dataset == 'Paris' or dataset == 'Paris106k':
    maps.append(eval.evaluate_paris(ranking_path))

maps_file = open(ranking_path + 'maps' + dataset + '_pca_' + str(num_classes_pca) + '.txt', 'w')

print maps

for res in maps:
    maps_file.write(str(res) + '\n')

maps_file.close()
