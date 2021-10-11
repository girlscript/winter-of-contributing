import numpy as np
import time
from sklearn.decomposition import PCA
import sys
import utils as ud
import time
from crow import compute_crow_channel_weight


def compute_pca(descriptors, pca_dim=512, whiten=True):
    print descriptors.shape
    t1 = time.time()
    print 'Computing PCA with dimension reduction to: ', pca_dim
    sys.stdout.flush()
    pca = PCA(n_components=pca_dim, whiten=whiten)
    pca.fit(descriptors)
    print pca.components_.shape
    print 'PCA finished!'
    print 'Time elapsed computing PCA: ', time.time() - t1
    return pca


def sum_pooling(features):
    num_samples = features.shape[0]
    num_features = features.shape[1]
    sys.stdout.flush()
    descriptors = np.zeros((num_samples, num_features), dtype=np.float32)
    for i in range(0, num_samples):
        #print 'Image: ', i
        #sys.stdout.flush()
        for f in range(0, num_features):
            descriptors[i, f] = features[i, f].sum()
    descriptors /= np.linalg.norm(descriptors, axis=1)[:, None]
    return descriptors


def max_pooling(features):
    num_samples = features.shape[0]
    num_features = features.shape[1]
    sys.stdout.flush()
    descriptors = np.zeros((num_samples, num_features), dtype=np.float32)
    for i in range(0, num_samples):
        #print 'Image: ', i
        #sys.stdout.flush()
        for f in range(0, num_features):
            descriptors[i, f] = np.amax(features[i, f])
    descriptors /= np.linalg.norm(descriptors, axis=1)[:, None]
    return descriptors


# Do complete aggregation, class vectors + aggregation
def weighted_pooling(features, cams, max_pool=False, region_descriptors=False, pca=None, q=False):
    t = time.time()
    num_samples = features.shape[0]
    num_features = features.shape[1]
    num_features_des = features.shape[1]
    num_classes = cams.shape[1]

    if pca != '':
        print 'Applying PCA...'
        sys.stdout.flush()
        num_features_des = int(pca.components_.shape[0])
        print pca.components_.shape[0]

    wp_batch_representations = np.zeros((num_samples, num_features_des), dtype=np.float32)
    wp_regions = np.zeros((num_features, num_classes), dtype=np.float32)
    wsp_descriptors_reg = np.zeros((num_samples * num_classes, num_features), dtype=np.float32)
    wmp_descriptors_reg = np.zeros((num_samples * num_classes, num_features), dtype=np.float32)

    if max_pool:
        mp_regions = np.zeros((num_features, num_classes), dtype=np.float32)
        mp_batch_representations = np.zeros((num_samples, num_features), dtype=np.float32)

    for i in range(0, num_samples):
        #CROW
        C = np.array(compute_crow_channel_weight(features[i]))

        for f in range(0, num_features):
            for k in range(0, num_classes):
                # For each region compute avg weighted sum of activations and l2 normalize
                if not q:
                    if max_pool:
                        mp_regions[f, k] = np.amax(np.multiply(features[i, f], cams[i, k]))

                    wp_regions[f, k] = np.multiply(features[i, f], cams[i, k]).sum()
                else:
                    if max_pool:
                        mp_regions[f, k] = np.amax(features[i, f])

                    wp_regions[f, k] = features[i, f].sum()

        wp_regions = wp_regions * C[:, None]
        wp_regions /= np.linalg.norm(wp_regions, axis=0)

        if max_pool:
            mp_regions = mp_regions * C[:, None]
            mp_regions /= np.linalg.norm(mp_regions, axis=0)

        if region_descriptors:
            wsp_descriptors_reg[num_classes*i:num_classes*(i+1)] = np.transpose(wp_regions)
            if max_pool:
                wmp_descriptors_reg[num_classes*i:num_classes*(i+1)] = np.transpose(mp_regions)

        if pca is not None:
            wp_regions = np.transpose(pca.transform(np.transpose(wp_regions)))
            wp_regions /= np.linalg.norm(wp_regions, axis=0)
            mp_regions = np.transpose(pca.transform(np.transpose(mp_regions)))
            mp_regions /= np.linalg.norm(mp_regions, axis=0)


        wp_batch_representations[i] = wp_regions.sum(axis=1)
        wp_batch_representations[i] /= np.linalg.norm(wp_batch_representations[i])

        #wp_batch_representations[i][np.where(wp_batch_representations[i] < 0.001)] = 0

        if max_pool:
            mp_batch_representations[i] = mp_regions.sum(axis=1)
            mp_batch_representations[i] /= np.linalg.norm(mp_batch_representations[i])

    print 'Time elapsed computing image representations for the batch: ', time.time() - t

    if region_descriptors and max_pool:
        print wp_batch_representations.shape
        print wsp_descriptors_reg.shape
        return wp_batch_representations, mp_batch_representations, wsp_descriptors_reg, wmp_descriptors_reg
    elif region_descriptors:
        return wp_batch_representations, wsp_descriptors_reg
    elif max_pool:
        return wp_batch_representations, mp_batch_representations
    else:
        return wp_batch_representations


# Return class vectors (1 per class)
def weighted_cam_pooling(features, cams, max_pool=False, channel_weights=True):
    '''
    :param features: Feature Maps
    :param cams: Class Activation Maps
    :param max_pool: Perform also Max pooling
    :param channel_weights: Channel Weighting as in Crow
    :return: A descriptor for each CAM.
    '''
    t = time.time()
    num_samples = features.shape[0]
    num_features = features.shape[1]
    num_classes = cams.shape[1]

    wp_regions = np.zeros((num_features, num_classes), dtype=np.float32)
    wsp_descriptors_reg = np.zeros((num_samples * num_classes, num_features), dtype=np.float32)
    wmp_descriptors_reg = np.zeros((num_samples * num_classes, num_features), dtype=np.float32)

    if max_pool:
        mp_regions = np.zeros((num_features, num_classes), dtype=np.float32)

    for i in range(0, num_samples):
        #CROW
        if channel_weights:
            C = np.array(compute_crow_channel_weight(features[i]))

        for f in range(0, num_features):
            for k in range(0, num_classes):
                # For each region compute avg weighted sum of activations and l2 normalize
                if max_pool:
                        mp_regions[f, k] = np.amax(np.multiply(features[i, f], cams[i, k]))
                wp_regions[f, k] = np.multiply(features[i, f], cams[i, k]).sum()

        if channel_weights:
            wp_regions = wp_regions * C[:, None]
        wp_regions /= np.linalg.norm(wp_regions, axis=0)

        if max_pool:
            if channel_weights:
                mp_regions = mp_regions * C[:, None]
            mp_regions /= np.linalg.norm(mp_regions, axis=0)

        wsp_descriptors_reg[num_classes*i:num_classes*(i+1)] = np.transpose(wp_regions)

        if max_pool:
            wmp_descriptors_reg[num_classes*i:num_classes*(i+1)] = np.transpose(mp_regions)

    #print 'Time elapsed computing image representations for the batch: ', time.time() - t

    if max_pool:
        return wsp_descriptors_reg, wmp_descriptors_reg
    else:
        return wsp_descriptors_reg


# General Descriptor Aggregation : PCA + Aggregation
def descriptor_aggregation(descriptors_cams, num_images, num_classes, pca=None):

    num_classes_ori = descriptors_cams.shape[0] / num_images
    descriptors = np.zeros((num_images, descriptors_cams.shape[1]), dtype=np.float32)

    if pca is not None:
        # Sometimes we may have errors during re-ranking due to bounding box generation on places where CAM=0
        try:
            descriptors_pca = pca.transform(descriptors_cams)
        except:
            print '---------------------------->Exception'
            desc_err = np.zeros((descriptors_cams.shape[0], descriptors_cams.shape[1]), dtype=np.float32)
            for j in range(0, descriptors_cams.shape[0]):
                try:
                    desc_err[j] = pca.transform(descriptors_cams[j])
                except:
                    print '------------------> Exception'
                    print j
                    desc_err[j] = desc_err[j-1]
            descriptors_pca = desc_err

        descriptors = np.zeros((num_images, descriptors_pca.shape[1]), dtype=np.float32)
        #print descriptors_pca.shape

    index = 0
    for i in range(0, num_images):
        index = num_classes_ori + index
        if i == 0:
            index = 0
        if pca is not None:
            for k in range(index, index+num_classes):
                descriptors_pca[k] /= np.linalg.norm(descriptors_pca[k])
                descriptors[i] += descriptors_pca[k]

            descriptors[i] /= np.linalg.norm(descriptors[i])
        else:
            for k in range(index, index+num_classes):
                descriptors[i] += descriptors_cams[k]
            descriptors[i] /= np.linalg.norm(descriptors[i])

    return descriptors


# Descriptor aggregation from list of classes : PCA + Aggregation
def descriptor_aggregation_cl(descriptors_cams, num_images, pca, class_list):
    num_classes_ori = descriptors_cams.shape[0] / num_images
    descriptors = np.zeros((num_images, 512), dtype=np.float32)
    for i in range(0, num_images):
        descriptors_good = descriptors_cams[i*num_classes_ori:(i+1)*num_classes_ori]
        descriptors_good = descriptors_good[class_list]
        # Sometimes we may have errors during re-ranking due to bounding box generation on places where CAM=0
        if pca is not None:
            try:
                descriptors_pca = pca.transform(descriptors_good)
            except:
                print '---------------------------->Exception'
                desc_err = np.zeros((descriptors_good.shape[0], descriptors_good.shape[1]), dtype=np.float32)
                for j in range(0, descriptors_good.shape[0]):
                    try:
                        desc_err[j] = pca.transform(descriptors_good[j])
                    except:
                        print '------------------> Exception'
                        print j
                        desc_err[j] = desc_err[j - 1]
                descriptors_pca = desc_err
        else:
            descriptors_pca = descriptors_good
        for k in range(0, descriptors_pca.shape[0]):
            descriptors_pca[k] /= np.linalg.norm(descriptors_pca[k])
            descriptors[i] += descriptors_pca[k]

        descriptors[i] /= np.linalg.norm(descriptors[i])

    return descriptors


# Retrieve n most probable class vectors (For PCA mainly)
def retrieve_n_descriptors(num_classes, num_images, all_descriptors):
    num_classes_ori = all_descriptors.shape[0] / num_images
    descriptors = np.zeros((num_images * num_classes, all_descriptors.shape[1]), dtype=np.float32)

    index = 0
    for i in range(0, num_images):
        index = num_classes_ori + index
        if i == 0:
            index = 0
        descriptors[i*num_classes:num_classes*(i+1)] = all_descriptors[index:index+num_classes]
    return descriptors


# Retrieve n most probable class vectors (For PCA mainly)
def retrieve_n_descriptors_concat(num_classes, num_images, all_descriptors):
    num_classes_ori = all_descriptors.shape[0] / num_images
    descriptors = np.zeros((num_images, all_descriptors.shape[1]*num_classes), dtype=np.float32)

    index = 0
    for i in range(0, num_images):
        index = num_classes_ori + index
        if i == 0:
            index = 0
        for k in range(index, index + num_classes):
            if k == index:
                d = all_descriptors[k]
            else:
                d = np.concatenate((d, all_descriptors[k]), axis=0)
        descriptors[i] = d
    return descriptors


# General Descriptor Aggregation : PCA + Aggregation
def descriptor_aggregation_concat(descriptors_cams, num_images, num_classes, pca=None):

    num_classes_ori = descriptors_cams.shape[0] / num_images
    descriptors = np.zeros((num_images, descriptors_cams.shape[1]*num_classes), dtype=np.float32)
    print descriptors_cams.shape
    index = 0
    for i in range(0, num_images):
        index = num_classes_ori + index
        if i == 0:
            index = 0
        if pca is not None:
            for k in range(index, index+num_classes):
                if k == index:
                    d = descriptors_cams[k]
                else:
                    d = np.concatenate((d, descriptors_cams[k]), axis=0)
            descriptors[i] = pca.transform(d)
            descriptors[i] /= np.linalg.norm(descriptors[i])

    return descriptors