import cv2
import torch
import sys
import time
import h5py
import numpy as np
import torchvision
import pickle
import math


# Extract region of interest from CAMs
def extract_ROI(heatmap, threshold):
    th = threshold * np.max(heatmap)
    heatmap = heatmap > th
    # Find the largest connected component

    contours, hierarchy = cv2.findContours(heatmap.astype('uint8'), mode=cv2.RETR_EXTERNAL, method=cv2.CHAIN_APPROX_SIMPLE)

    areas = [cv2.contourArea(ctr) for ctr in contours]

    max_contour = contours[areas.index(max(areas))]

    x, y, w, h = cv2.boundingRect(max_contour)
    if w == 0:
        w = heatmap.shape[1]
    if h == 0:
        h = heatmap.shape[0]
    return x, y, w, h


def extract_feat_cam(model, model_name, batch_size, data, n_classes, specify_class=None, roi=False):

    num_samples = data.size()[0]
    class_list = np.zeros((num_samples, n_classes), dtype=np.int32)
    scores_vec = list()
    print 'Num of total samples: ', num_samples
    print 'Batch size: ', batch_size
    sys.stdout.flush()

    num_it = int(math.floor(num_samples / batch_size))
    last_batch = num_samples % batch_size
    batch_size_loop = batch_size

    model.eval()

    # Extract weights from Dense
    if model_name == 'DenseNet161':
        weights_fc = model.classifier.state_dict()['weight']
    elif model_name == 'ResNet50':
        weights_fc = model.module.fc.state_dict()['weight']

    weights_fc = np.transpose(weights_fc.cpu().numpy(), (1, 0))


    # Region of interest for re-ranking (bounding box coordinates --> (num samples, num_thresholds, x,y,dx,dy)
    if roi:
        bbox_coord = np.zeros((num_samples, 5, 4), dtype=np.int16)
    else:
        bbox_coord = None

    for i in range(0, num_it+1):
        t0 = time.time()
        if i == num_it:
            if last_batch != 0:
                conv_outputs_cam, scores = model.forward(data[i*batch_size:batch_size*i+last_batch, :, :, :])
                batch_size_loop = last_batch
                conv_outputs_cam = conv_outputs_cam.data.cpu().numpy()
                scores = scores.data.cpu().numpy()
                if i == 0:
                    features_conv = np.zeros((num_samples, conv_outputs_cam.shape[1], conv_outputs_cam.shape[2], conv_outputs_cam.shape[3]))
                    cams = np.zeros((num_samples, n_classes, conv_outputs_cam.shape[2], conv_outputs_cam.shape[3]))
                    features_conv[i * batch_size:batch_size * i + last_batch, :, :, :] = conv_outputs_cam
                else:
                    features_conv[i * batch_size:batch_size * i + last_batch, :, :, :] = conv_outputs_cam
            else:
                break
        else:
            conv_outputs_cam, scores = model.forward(data[i*batch_size:batch_size*(i+1), :, :, :])
            conv_outputs_cam = conv_outputs_cam.data.cpu().numpy()
            scores = scores.data.cpu().numpy()
            if i == 0:
                features_conv = np.zeros((num_samples, conv_outputs_cam.shape[1], conv_outputs_cam.shape[2], conv_outputs_cam.shape[3]))
                cams = np.zeros((num_samples, n_classes, conv_outputs_cam.shape[2], conv_outputs_cam.shape[3]))
                features_conv[i * batch_size:batch_size * (i + 1), :, :, :] = conv_outputs_cam
            else:
                features_conv[i*batch_size:batch_size*(i+1), :, :, :] = conv_outputs_cam
        print 'Batch number: ', i
        print ('Time elapsed to forward the batch: ', time.time()-t0)
        sys.stdout.flush()
        if specify_class is None:

            for ii in range(0, batch_size_loop):
                #print 'Image number: ', ii
                indexed_scores = scores[ii].argsort()[::-1]
                scores_vec.append(scores[ii])
                for k in range(0, n_classes):
                    w_class = weights_fc[:, indexed_scores[k]]
                    cam = np.zeros(dtype=np.float32, shape=conv_outputs_cam.shape[2:4])
                    for ind, w in enumerate(w_class):
                        cam += w * conv_outputs_cam[ii, ind, :, :]
                    cam /= np.max(cam)
                    cam[np.where(cam < 0)] = 0

                    cams[i*batch_size+ii, k, :, :] = cam

                    class_list[i*batch_size+ii, k] = indexed_scores[k]

        else:
            for ii in range(0, batch_size_loop):
                # print 'Image number: ', ii
                for k in range(0, n_classes):
                    w_class = weights_fc[:, specify_class[k]]
                    cam = np.zeros(dtype=np.float32, shape=conv_outputs_cam.shape[2:4])
                    for ind, w in enumerate(w_class):
                        cam += w * conv_outputs_cam[ii, ind, :, :]
                    cam /= np.max(cam)
                    cam[np.where(cam < 0)] = 0

                    cams[i * batch_size + ii, k, :, :] = cam

                # How to compute the ROI of the image, in the paper results we average 2 most probable classes
                if roi:
                    average = True

                    if average:
                        average_cam = np.zeros((cams.shape[2], cams.shape[3]))
                        for cam in cams[i*batch_size+ii, 0:2]:
                            average_cam += cam
                        heatmap = average_cam / 2
                    else:
                        heatmap = cams[i*batch_size+ii, 0]

                    bbox_coord[i*batch_size+ii, 0, :] = extract_ROI(heatmap=heatmap, threshold=0.01)# Full Image
                    bbox_coord[i*batch_size+ii, 1, :] = extract_ROI(heatmap=heatmap, threshold=0.1)
                    bbox_coord[i*batch_size+ii, 2, :] = extract_ROI(heatmap=heatmap, threshold=0.2)
                    bbox_coord[i*batch_size+ii, 3, :] = extract_ROI(heatmap=heatmap, threshold=0.3)
                    bbox_coord[i*batch_size+ii, 4, :] = extract_ROI(heatmap=heatmap, threshold=0.4)

        print 'Time elapsed to compute CAMs & Features: ', time.time()-t0
        sys.stdout.flush()
    if specify_class is None:
        return features_conv, cams, class_list, scores_vec
    else:
        return features_conv, cams, bbox_coord


def extract_feat_cam_all(model, model_name, batch_size, data, n_classes=1000):
    '''
    Extract CAM masks for all classes, for each image in the dataset. Also extract  features
    from layer
    :param model: The network
    :param batch_size: batch_size
    :param images: images in format [num_total,3,height, width]
    :return:
    '''

    num_samples = data.size()[0]
    print 'Num of total samples: ', num_samples
    print 'Batch size: ', batch_size
    sys.stdout.flush()

    num_it = int(math.floor(num_samples / batch_size))
    last_batch = num_samples % batch_size
    batch_size_loop = batch_size

    model.eval()

    # Extract weights from Dense
    if model_name == 'DenseNet161':
        weights_fc = model.classifier.state_dict()['weight']
    elif model_name == 'ResNet50':
        weights_fc = model.module.fc.state_dict()['weight']

    for i in range(0, num_it+1):
        t0 = time.time()
        if i == num_it:
            if last_batch != 0:
                conv_outputs_cam, _ = model.forward(data[i*batch_size:batch_size*i+last_batch, :, :, :])
                batch_size_loop = last_batch
                conv_outputs_cam = conv_outputs_cam.data.cpu().numpy()
                if i == 0:
                    features_conv = np.zeros((num_samples, conv_outputs_cam.shape[1], conv_outputs_cam.shape[2], conv_outputs_cam.shape[3]))
                    cams = np.zeros((num_samples, n_classes, conv_outputs_cam.shape[2], conv_outputs_cam.shape[3]))
                    features_conv[i * batch_size:batch_size * i + last_batch, :, :, :] = conv_outputs_cam
                else:
                    features_conv[i * batch_size:batch_size * i + last_batch, :, :, :] = conv_outputs_cam
            else:
                break
        else:
            conv_outputs_cam, _ = model.forward(data[i*batch_size:batch_size*(i+1), :, :, :])
            conv_outputs_cam = conv_outputs_cam.data.cpu().numpy()
            if i == 0:
                features_conv = np.zeros((num_samples, conv_outputs_cam.shape[1], conv_outputs_cam.shape[2], conv_outputs_cam.shape[3]))
                cams = np.zeros((num_samples, n_classes, conv_outputs_cam.shape[2], conv_outputs_cam.shape[3]))
                features_conv[i * batch_size:batch_size * (i + 1), :, :, :] = conv_outputs_cam
            else:
                features_conv[i*batch_size:batch_size*(i+1), :, :, :] = conv_outputs_cam

        print ('Time elapsed to forward the batch: ', time.time()-t0)
        sys.stdout.flush()

        for ii in range(0, batch_size_loop):
            for k in range(0, n_classes):
                w_class = weights_fc[:, k]
                cam = np.zeros(dtype=np.float32, shape=conv_outputs_cam.shape[2:4])
                for ind, w in enumerate(w_class):
                    cam += w * conv_outputs_cam[ii, ind, :, :]
                cam /= np.max(cam)
                cam[np.where(cam < 0)] = 0

                cams[i*batch_size+ii, k, :, :] = cam

        print 'Time elapsed to compute CAMs: ', time.time()-t0

    return features_conv, cams


# def extract_feat_cam_resnet(model, batch_size, data, n_classes, specify_class=None, roi=False):

# '''
#     :param model:
#     :param layer_features:
#     :param batch_size:
#     :param data:
#     :param n_classes:
#     :param specify_class:
#     :param roi:
#     :return:
#     '''
#
#     num_samples = data.size()[0]
#     class_list = np.zeros((num_samples, n_classes), dtype=np.int32)
#     scores_vec = list()
#     print 'Num of total samples: ', num_samples
#     print 'Batch size: ', batch_size
#     sys.stdout.flush()
#
#     num_it = int(math.floor(num_samples / batch_size))
#     last_batch = num_samples % batch_size
#     batch_size_loop = batch_size
#
#     model.eval()
#
#     # Extract weights from Dense
#     weights_fc = model.module.fc.state_dict()['weight']
#     weights_fc = np.transpose(weights_fc.cpu().numpy(), (1, 0))
#
#     # Region of interest for re-ranking (bounding box coordinates --> (num samples, num_thresholds, x,y,dx,dy)
#     if roi:
#         bbox_coord = np.zeros((num_samples, 5, 4), dtype=np.int16)
#     else:
#         bbox_coord = None
#
#     for i in range(0, num_it+1):
#         t0 = time.time()
#         if i == num_it:
#             if last_batch != 0:
#                 conv_outputs_cam, scores = model.forward(data[i*batch_size:batch_size*i+last_batch, :, :, :])
#                 batch_size_loop = last_batch
#                 conv_outputs_cam = conv_outputs_cam.data.cpu().numpy()
#                 scores = scores.data.cpu().numpy()
#                 if i == 0:
#                     features_conv = np.zeros((num_samples, conv_outputs_cam.shape[1], conv_outputs_cam.shape[2], conv_outputs_cam.shape[3]))
#                     cams = np.zeros((num_samples, n_classes, conv_outputs_cam.shape[2], conv_outputs_cam.shape[3]))
#                     features_conv[i * batch_size:batch_size * i + last_batch, :, :, :] = conv_outputs_cam
#                 else:
#                     features_conv[i * batch_size:batch_size * i + last_batch, :, :, :] = conv_outputs_cam
#             else:
#                 break
#         else:
#             conv_outputs_cam, scores = model.forward(data[i*batch_size:batch_size*(i+1), :, :, :])
#             conv_outputs_cam = conv_outputs_cam.data.cpu().numpy()
#             scores = scores.data.cpu().numpy()
#             if i == 0:
#                 features_conv = np.zeros((num_samples, conv_outputs_cam.shape[1], conv_outputs_cam.shape[2], conv_outputs_cam.shape[3]))
#                 cams = np.zeros((num_samples, n_classes, conv_outputs_cam.shape[2], conv_outputs_cam.shape[3]))
#                 features_conv[i * batch_size:batch_size * (i + 1), :, :, :] = conv_outputs_cam
#             else:
#                 features_conv[i*batch_size:batch_size*(i+1), :, :, :] = conv_outputs_cam
#         print 'Batch number: ', i
#         print ('Time elapsed to forward the batch: ', time.time()-t0)
#         sys.stdout.flush()
#         if specify_class is None:
#
#             for ii in range(0, batch_size_loop):
#                 #print 'Image number: ', ii
#                 indexed_scores = scores[ii].argsort()[::-1]
#                 scores_vec.append(scores[ii])
#                 for k in range(0, n_classes):
#                     w_class = weights_fc[:, indexed_scores[k]]
#                     cam = np.zeros(dtype=np.float32, shape=conv_outputs_cam.shape[2:4])
#                     for ind, w in enumerate(w_class):
#                         cam += w * conv_outputs_cam[ii, ind, :, :]
#                     cam /= np.max(cam)
#                     cam[np.where(cam < 0)] = 0
#
#                     cams[i*batch_size+ii, k, :, :] = cam
#
#                     class_list[i*batch_size+ii, k] = indexed_scores[k]
#
#         else:
#             for ii in range(0, batch_size_loop):
#                 # print 'Image number: ', ii
#                 for k in range(0, n_classes):
#                     w_class = weights_fc[:, specify_class[k]]
#                     cam = np.zeros(dtype=np.float32, shape=conv_outputs_cam.shape[2:4])
#                     for ind, w in enumerate(w_class):
#                         cam += w * conv_outputs_cam[ii, ind, :, :]
#                     cam /= np.max(cam)
#                     cam[np.where(cam < 0)] = 0
#
#                     cams[i * batch_size + ii, k, :, :] = cam
#
#                 # How to compute the ROI of the image, in the paper results we average 2 most probable classes
#                 if roi:
#                     average = True
#
#                     if average:
#                         average_cam = np.zeros((cams.shape[2], cams.shape[3]))
#                         for cam in cams[i*batch_size+ii, 0:2]:
#                             average_cam += cam
#                         heatmap = average_cam / 2
#                     else:
#                         heatmap = cams[i*batch_size+ii, 0]
#
#                     bbox_coord[i*batch_size+ii, 0, :] = extract_ROI(heatmap=heatmap, threshold=0.01)# Full Image
#                     bbox_coord[i*batch_size+ii, 1, :] = extract_ROI(heatmap=heatmap, threshold=0.1)
#                     bbox_coord[i*batch_size+ii, 2, :] = extract_ROI(heatmap=heatmap, threshold=0.2)
#                     bbox_coord[i*batch_size+ii, 3, :] = extract_ROI(heatmap=heatmap, threshold=0.3)
#                     bbox_coord[i*batch_size+ii, 4, :] = extract_ROI(heatmap=heatmap, threshold=0.4)
#
#         print 'Time elapsed to compute CAMs & Features: ', time.time()-t0
#         sys.stdout.flush()
#     if specify_class is None:
#         return features_conv, cams, class_list, scores_vec
#     else:
#         return features_conv, cams, bbox_coord


# def extract_feat_cam(model, layer_features, batch_size, data, n_classes, specify_class=None, roi=False):
#     '''
#     :param model:
#     :param layer_features:
#     :param batch_size:
#     :param data:
#     :param n_classes:
#     :param specify_class:
#     :param roi:
#     :return:
#     '''
#
#     num_samples = data.size()[0]
#     class_list = np.zeros((num_samples, n_classes), dtype=np.int32)
#     print 'Num of total samples: ', num_samples
#     print 'Batch size: ', batch_size
#     sys.stdout.flush()
#     scores_vec = list()
#     num_it = int(math.floor(num_samples / batch_size))
#     last_batch = num_samples % batch_size
#     batch_size_loop = batch_size
#
#     model.eval()
#
#     # Define Hook to Extract Convolutional Features
#     feats = list()
#
#     def hook_features(m, input, output):
#         print type(feats)
#         feats.append(output.data.cpu().numpy())
#         print 'features Extracted'
#
#     hookie = layer_features.register_forward_hook(hook_features)
#
#     # Extract weights from Dense
#     weights_fc = model.classifier[0].state_dict()['weight']
#     weights_fc = np.transpose(weights_fc.cpu().numpy(), (1, 0))
#
#     # Region of interest for re-ranking (bounding box coordinates --> (num samples, num_thresholds, x,y,dx,dy)
#     if roi:
#         bbox_coord = np.zeros((num_samples, 5, 4), dtype=np.int16)
#
#     for i in range(0, num_it+1):
#         print 'Batch number: ', i
#         feats = list()
#         t0 = time.time()
#         if i == num_it:
#             if last_batch != 0:
#                 conv_outputs_cam, scores = model.forward(data[i*batch_size:batch_size*i+last_batch, :, :, :])
#                 batch_size_loop = last_batch
#                 feats = np.array(feats)
#                 print feats.shape
#                 if i == 0:
#                     features_conv = np.zeros((num_samples, feats.shape[2], feats.shape[3], feats.shape[4]))
#                     cams = np.zeros((num_samples, n_classes, feats.shape[3], feats.shape[4]))
#                 if n_gpu == 3 and num_samples >= 2: # Not working yet
#                     features_conv[i*batch_size:batch_size*i+last_batch, :, :, :] = \
#                         np.concatenate((feats[0], feats[1], feats[2]))
#                 else:
#                     features_conv[i * batch_size:batch_size * i + last_batch, :, :, :] = feats[0]
#             else:
#                 break
#         else:
#             conv_outputs_cam, scores = model.forward(data[i*batch_size:batch_size*(i+1), :, :, :])
#             feats = np.array(feats)
#             print feats.shape
#             if i == 0:
#                 features_conv = np.zeros((num_samples, feats.shape[2], feats.shape[3], feats.shape[4]))
#                 cams = np.zeros((num_samples, n_classes, feats.shape[3], feats.shape[4]))
#             if n_gpu == 3 and num_samples >= 2: # Not working yet
#                 features_conv[i*batch_size:batch_size*(i+1), :, :, :] = \
#                     np.concatenate((feats[0], feats[1], feats[2]))
#             else:
#                 features_conv[i*batch_size:batch_size*(i+1), :, :, :] = feats[0]
#
#         conv_outputs_cam = conv_outputs_cam.data.cpu().numpy()
#         scores = scores.data.cpu().numpy()
#         print ('Time elapsed to forward the batch: ', time.time()-t0)
#         sys.stdout.flush()
#         if specify_class is None:
#
#             for ii in range(0, batch_size_loop):
#                 #print 'Image number: ', ii
#                 indexed_scores = scores[ii].argsort()[::-1]
#                 scores_vec.append(scores[ii])
#                 for k in range(0, n_classes):
#                     w_class = weights_fc[:, indexed_scores[k]]
#                     cam = np.zeros(dtype=np.float32, shape=conv_outputs_cam.shape[2:4])
#                     for ind, w in enumerate(w_class):
#                         cam += w * conv_outputs_cam[ii, ind, :, :]
#                     cam /= np.max(cam)
#                     cam[np.where(cam < 0)] = 0
#
#                     cams[i*batch_size+ii, k, :, :] = cam
#
#                     class_list[i*batch_size+ii, k] = indexed_scores[k]
#
#         else:
#             for ii in range(0, batch_size_loop):
#                 # print 'Image number: ', ii
#                 for k in range(0, n_classes):
#                     w_class = weights_fc[:, specify_class[k]]
#                     cam = np.zeros(dtype=np.float32, shape=conv_outputs_cam.shape[2:4])
#                     for ind, w in enumerate(w_class):
#                         cam += w * conv_outputs_cam[ii, ind, :, :]
#                     cam /= np.max(cam)
#                     cam[np.where(cam < 0)] = 0
#
#                     cams[i * batch_size + ii, k, :, :] = cam
#
#                 # How to compute the ROI of the image, in the paper results we average 2 most probable classes
#                 if roi:
#                     average = True
#
#                     if average:
#                         average_cam = np.zeros((cams.shape[2], cams.shape[3]))
#                         for cam in cams[i*batch_size+ii, 0:2]:
#                             average_cam += cam
#                         heatmap = average_cam / 2
#                     else:
#                         heatmap = cams[i*batch_size+ii, 0]
#
#                     bbox_coord[i*batch_size+ii, 0, :] = extract_ROI(heatmap=heatmap, threshold=0.01)# Full Image
#                     bbox_coord[i*batch_size+ii, 1, :] = extract_ROI(heatmap=heatmap, threshold=0.1)
#                     bbox_coord[i*batch_size+ii, 2, :] = extract_ROI(heatmap=heatmap, threshold=0.2)
#                     bbox_coord[i*batch_size+ii, 3, :] = extract_ROI(heatmap=heatmap, threshold=0.3)
#                     bbox_coord[i*batch_size+ii, 4, :] = extract_ROI(heatmap=heatmap, threshold=0.4)
#
#         print 'Time elapsed to compute CAMs & Features: ', time.time()-t0
#         sys.stdout.flush()
#     if specify_class is None:
#         hookie.remove()
#         return features_conv, cams, class_list, scores_vec
#     else:
#         hookie.remove()
#         return features_conv, cams, bbox_coord
#
#
# # Method for Online aggregation
# def extract_feat_cam_all(model, layer_features, batch_size, data, n_classes=1000):
#     '''
#     Extract CAM masks for all classes, for each image in the dataset. Also extract  features
#     from layer
#     :param model: The network
#     :param batch_size: batch_size
#     :param images: images in format [num_total,3,height, width]
#     :return:
#     '''
#
#     num_samples = data.size()[0]
#     print 'Num of total samples: ', num_samples
#     print 'Batch size: ', batch_size
#     sys.stdout.flush()
#
#     num_it = int(math.floor(num_samples / batch_size))
#     last_batch = num_samples % batch_size
#     batch_size_loop = batch_size
#
#     model.eval()
#
#     # Define Hook to Extract Convolutional Features
#     features = list()
#
#     def hook_features(m, input, output):
#         print type(feats)
#         feats.append(output.data.cpu().numpy())
#         print 'features Extracted'
#
#     hookie = layer_features.register_forward_hook(hook_features)
#
#     # Extract weights from Dense
#     weights_fc = model.classifier[0].state_dict()['weight']
#     weights_fc = np.transpose(weights_fc.cpu().numpy(), (1, 0))
#
#     for i in range(0, num_it+1):
#         print 'Batch number: ', i
#         feats = list()
#         t0 = time.time()
#         if i == num_it:
#             if last_batch != 0:
#                 conv_outputs_cam, scores = model.forward(data[i*batch_size:batch_size*i+last_batch, :, :, :])
#                 batch_size_loop = last_batch
#                 feats = np.array(feats)
#                 if i == 0:
#                     features_conv = np.zeros((num_samples, feats.shape[2], feats.shape[3], feats.shape[4]))
#                     cams = np.zeros((num_samples, n_classes, feats.shape[3], feats.shape[4]))
#
#                 features_conv[i * batch_size:batch_size * i + last_batch, :, :, :] = feats[0]
#             else:
#                 break
#         else:
#             conv_outputs_cam, scores = model.forward(data[i*batch_size:batch_size*(i+1), :, :, :])
#             feats = np.array(feats)
#             if i == 0:
#                 features_conv = np.zeros((num_samples, feats.shape[2], feats.shape[3], feats.shape[4]))
#                 cams = np.zeros((num_samples, n_classes, feats.shape[3], feats.shape[4]))
#
#             features_conv[i*batch_size:batch_size*(i+1), :, :, :] = feats[0]
#
#         conv_outputs_cam = conv_outputs_cam.data.cpu().numpy()
#
#         print ('Time elapsed to forward the batch: ', time.time()-t0)
#         sys.stdout.flush()
#
#         for ii in range(0, batch_size_loop):
#             for k in range(0, n_classes):
#                 w_class = weights_fc[:, k]
#                 cam = np.zeros(dtype=np.float32, shape=conv_outputs_cam.shape[2:4])
#                 for ind, w in enumerate(w_class):
#                     cam += w * conv_outputs_cam[ii, ind, :, :]
#                 cam /= np.max(cam)
#                 cam[np.where(cam < 0)] = 0
#
#                 cams[i*batch_size+ii, k, :, :] = cam
#
#         print 'Time elapsed to compute CAMs: ', time.time()-t0
#
#     hookie.remove()
#     return features_conv, cams