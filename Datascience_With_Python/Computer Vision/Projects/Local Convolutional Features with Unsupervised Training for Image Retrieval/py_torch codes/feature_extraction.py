from scipy.misc import imread
import sys
import getopt
import time
import h5py
import numpy as np
from cam_functions import extract_feat_cam_all, extract_feat_cam
from utils import create_folders, save_data, preprocess_images
from pooling_functions import weighted_cam_pooling, sum_pooling
import torch
import torchvision
import torch.nn.parallel
import torch.backends.cudnn as cudnn
import resnet
import densenet

# Instructions Arguments: python script.py -d 'Oxford/Paris' -a 'Offline/Online - 'DenseNet161/ResNet50'

try:
    opts, args = getopt.getopt(sys.argv[1:], "a:d:m:")
    flag_d = False
    flag_a = False
    flag_m = False
except getopt.GetoptError:
    print 'script.py -d <dataset> -a <aggregation> -m <model_name>'
    sys.exit(2)
for opt, arg in opts:
    if opt == '-d':
        if arg == 'Oxford' or arg == 'Paris':
            dataset = arg
            flag_d = True
    elif opt == '-m':
        if arg == 'ResNet50' or arg == 'DenseNet161':
            model_name = arg
            flag_m = True
    elif opt == "-a":
        if arg == 'Offline' or arg == 'Online':
            aggregation_type = arg
            flag_a = True


# Dataset Selection (Oxford/Paris) - Default
if not flag_d:
    dataset = 'Oxford'
    print 'Default dataset: ', dataset

# Extract Online or Offline (Online saves 1 file/image) - Default
if not flag_a:
    aggregation_type = 'Offline'
    print 'Default aggregation: ', aggregation_type

if not flag_m:
    model_name = 'ResNet50'
    print 'Default model: ', model_name

# Image Pre-processing (Size W x H)

# Horizontal Images
size_h = [1024, 720]
# Vertical Images
size_v = [720, 1024]

dim = '1024x720'

# Mean to substract
mean_data = 'Imagenet'

if mean_data == 'Imagenet':
    stats = list()
    mean = [0.485, 0.456, 0.406]
    std = [0.229, 0.224, 0.225]
    stats.append(mean)
    stats.append(std)

cudnn.benchmark = True

if model_name == 'ResNet50':
    # ResNet50
    model = resnet.resnet50(pretrained=True)
    model = torch.nn.DataParallel(model)
    dim_descriptor = 2048

elif model_name == 'DenseNet161':
    # DenseNet161
    model = densenet.densenet161(pretrained=True)
    model.features = torch.nn.DataParallel(model.features)
    dim_descriptor = 2208

model.cuda()

print model

# CAM Extraction (# CAMs)

if aggregation_type == 'Offline':
    num_classes = 64
elif aggregation_type == 'Online':
    num_classes = 1000

# Images to load into the net (+ images, + memory, + fast)
batch_size = 50
# Images to pre-load (+ images, + memory, + fast) (also saves feats & CAMs for this number when saving-CAMs)
image_batch_size = 500

# For saving also features & CAMs
saving_CAMs = False
# Index for saving chunks
ind = 0

nb_classes = 1000

if dataset == 'Oxford':
    n_img_dataset = 5063
    train_list_path_h = "../lists/list_oxford_horizontal_no_queries.txt"
    train_list_path_v = "../lists/list_oxford_vertical_no_queries.txt"
    path_descriptors = '/flush2/jim011/oxford/descriptors/' + model_name + '/' + dim + '/'
    descriptors_cams_path_wp = path_descriptors + 'oxford_all_' + str(num_classes) + '_wp.h5'
    descriptors_cams_path_sp = path_descriptors + 'oxford_all' + '_sp.h5'
    path_images_oxford = '/data/jim011/datasets_retrieval/Oxford5k/images/'

    create_folders(path_descriptors)

    if aggregation_type =='Online':
        path_descriptors += 'online/'

    # If you want to save features & CAMs
    #feature_path = '/imatge/ajimenez/work/ITR/oxford/features/' + model_name + '/' + layer + '/' + dim + '/'
    #cam_path = '/imatge/ajimenez/work/ITR/oxford/cams/' + model_name + '/' + layer + '/' + dim + '/'
    # create_folders(feature_path)
    # create_folders(cam_path)


if dataset == 'Paris':
    n_img_dataset = 6392
    train_list_path_h = "../lists/list_paris_horizontal_no_queries.txt"
    train_list_path_v = "../lists/list_paris_vertical_no_queries.txt"
    path_descriptors = '/flush2/jim011/paris/descriptors/' + model_name + '/' + dim + '/'
    descriptors_cams_path_wp = path_descriptors + 'paris_all_' + str(num_classes) + '_wp.h5'
    descriptors_cams_path_sp = path_descriptors + 'paris_all' + '_sp.h5'
    path_images_paris = '/data/jim011/datasets_retrieval/Paris6k/images/'

    if aggregation_type =='Online':
        path_descriptors += 'online/'

    create_folders(path_descriptors)

    # If you want to save features & CAMs
    #feature_path = '/imatge/ajimenez/work/ITR/paris/features/' + model_name + '/' + layer + '/' + dim + '/'
    #cam_path = '/imatge/ajimenez/work/ITR/paris/cams/' + model_name + '/' + layer + '/' + dim + '/'
    #create_folders(feature_path)
    #create_folders(cam_path)


def extract_cam_descriptors(model, model_name, batch_size, num_classes, size, stats, image_train_list_path,
                            desc_wp, desc_sp, ind=0):
    images = [0] * image_batch_size
    image_names = [0] * image_batch_size
    counter = 0
    num_images = 0
    t0 = time.time()

    print 'Horizontal size: ', size[0]
    print 'Vertical size: ', size[1]

    for line in open(image_train_list_path):
        if counter >= image_batch_size:
            print 'Processing image batch: ', ind
            t1 = time.time()
            data = preprocess_images(images, size[0], size[1], stats[0], stats[1])
            print data.size()
            data = torch.autograd.Variable(data, volatile=True)
            if aggregation_type == 'Offline':
                features, cams, cl, _ = extract_feat_cam(model, model_name, batch_size, data, num_classes)
                if saving_CAMs:
                    save_data(cams, cam_path, 'cams_' + str(ind) + '.h5')
                    save_data(features, feature_path, 'features_' + str(ind) + '.h5')
                d_wp = weighted_cam_pooling(features, cams)
                desc_wp = np.concatenate((desc_wp, d_wp))
                d_sp = sum_pooling(features)
                desc_sp = np.concatenate((desc_sp, d_sp))

            elif aggregation_type == 'Online':
                features, cams = extract_feat_cam_all(model, model_name, batch_size, data, num_classes)
                d_wp = weighted_cam_pooling(features, cams)
                for img_ind in range(0, image_batch_size):
                    print 'Saved ' + image_names[img_ind] + '.h5'
                    save_data(d_wp[img_ind*nb_classes:(img_ind+1)*nb_classes], path_descriptors,
                              image_names[img_ind]+'.h5')

            print 'Image batch processed, CAMs descriptors obtained!'
            print 'Time elapsed: ', time.time()-t1
            sys.stdout.flush()
            counter = 0
            ind += 1

        line = line.rstrip('\n')
        images[counter] = imread(line)
        if dataset == 'Oxford':
            line = line.replace('/data/jim011/datasets_retrieval/Oxford5k/images/', '')
        elif dataset == 'Paris':
            line = line.replace('/data/jim011/datasets_retrieval/Paris6k/images/', '')
        image_names[counter] = (line.replace('.jpg', ''))
        counter += 1
        num_images += 1

    #Last batch
    print 'Last Batch:'
    data = preprocess_images(images[0:counter], size[0], size[1], stats[0], stats[1])
    data = torch.autograd.Variable(data, volatile=True)
    if aggregation_type == 'Offline':
        features, cams, cl, _ = extract_feat_cam(model, model_name, batch_size, data, num_classes)
        if saving_CAMs:
            save_data(cams, cam_path, 'cams_' + str(ind) + '.h5')
            save_data(features, feature_path, 'features_' + str(ind) + '.h5')
        d_wp = weighted_cam_pooling(features, cams)
        desc_wp = np.concatenate((desc_wp, d_wp))
        d_sp = sum_pooling(features)
        desc_sp = np.concatenate((desc_sp, d_sp))

    elif aggregation_type == 'Online':
        features, cams = extract_feat_cam_all(model, model_name, batch_size, data, num_classes)
        d_wp = weighted_cam_pooling(features, cams)
        for img_ind in range(0, counter):
            save_data(d_wp[img_ind * nb_classes:(img_ind + 1) * nb_classes], path_descriptors,
                      image_names[img_ind] + '.h5')
    ind += 1
    print desc_wp.shape
    print 'Batch processed, CAMs descriptors obtained!'
    print 'Total time elapsed: ', time.time() - t0
    sys.stdout.flush()

    return desc_wp, desc_sp


########################################################################################################################
# Main Script

print 'Dataset: ', dataset
print 'Aggregation type ', aggregation_type
print 'Num classes: ', num_classes

t_0 = time.time()
desc_wp = np.zeros((0, dim_descriptor), dtype=np.float32)
desc_sp = np.zeros((0, dim_descriptor), dtype=np.float32)


# Horizontal Images
desc_wp, desc_sp = \
    extract_cam_descriptors(model,model_name, batch_size, num_classes, size_h, stats, train_list_path_h,
                            desc_wp, desc_sp)

# Vertical Images
desc_wp, desc_sp = \
    extract_cam_descriptors(model, model_name, batch_size, num_classes, size_v, stats, train_list_path_v,
                            desc_wp, desc_sp, ind)

print desc_wp.shape
print desc_sp.shape

# Queries
if dataset == 'Oxford':
    i = 0
    with open('../lists/list_queries_oxford.txt', "r") as f:
        for line in f:
            print i
            line = line.replace('\n', '')
            img = np.array(imread(path_images_oxford + line + '.jpg'), dtype=np.float32)

            #img = np.transpose(img, (2, 0, 1))
            print img.shape
            if img.shape[0] > img.shape[1]:
                size = size_v
            else:
                size = size_h

            img_tensor = preprocess_images(img, size[0], size[1], stats[0], stats[1])

            img_tensor = torch.autograd.Variable(img_tensor, volatile=True)

            if aggregation_type == 'Offline':
                features, cams, cl, _ = extract_feat_cam(model, model_name, 1, img_tensor, num_classes)
                if saving_CAMs:
                    save_data(cams, cam_path, 'cams_' + str(ind) + '.h5')
                    save_data(features, feature_path, 'features_' + str(ind) + '.h5')

                d_wp = weighted_cam_pooling(features, cams)
                desc_wp = np.concatenate((desc_wp, d_wp))
                d_sp = sum_pooling(features)
                desc_sp = np.concatenate((desc_sp, d_sp))

            elif aggregation_type == 'Online':
                features, cams = extract_feat_cam_all(model, model_name, feature_layer, 1, img_tensor)
                d_wp = weighted_cam_pooling(features, cams)
                print 'Saved ' + line + '.h5'
                save_data(d_wp, path_descriptors, line+'.h5')
            print desc_wp.shape
            i += 1
            ind += 1

elif dataset == 'Paris':
    i = 0
    with open('../lists/list_queries_paris.txt', "r") as f:
        for line in f:
            print i
            line = line.replace('\n', '')
            img = np.array(imread(path_images_paris + line + '.jpg'), dtype=np.float32)

            # img = np.transpose(img, (2, 0, 1))
            print img.shape
            if img.shape[0] > img.shape[1]:
                size = size_v
            else:
                size = size_h

            img_tensor = preprocess_images(img, size[0], size[1], stats[0], stats[1])
            img_tensor = torch.autograd.Variable(img_tensor, volatile=True)

            if aggregation_type == 'Offline':
                features, cams, cl, _ = extract_feat_cam(model, model_name, 1, img_tensor, num_classes)
                if saving_CAMs:
                    save_data(cams, cam_path, 'cams_' + str(ind) + '.h5')
                    save_data(features, feature_path, 'features_' + str(ind) + '.h5')
                d_wp = weighted_cam_pooling(features, cams)
                desc_wp = np.concatenate((desc_wp, d_wp))
                d_sp = sum_pooling(features)
                desc_sp = np.concatenate((desc_sp, d_sp))

            elif aggregation_type == 'Online':
                features, cams = extract_feat_cam_all(model, model_name, feature_layer, 1, img_tensor)
                d_wp = weighted_cam_pooling(features, cams)
                print 'Saved ' + line + '.h5'
                save_data(d_wp, path_descriptors, line+'.h5')

            i += 1
            ind += 1

print 'Saving Data...'
print desc_wp.shape
print desc_sp.shape
# Shape = [num_images * num_classes, dim_descriptor]
if aggregation_type =='Offline':
    save_data(desc_wp, descriptors_cams_path_wp, '')
    save_data(desc_sp, descriptors_cams_path_sp, '')
print 'Data Saved'
print 'Total time elapsed: ', time.time() - t_0