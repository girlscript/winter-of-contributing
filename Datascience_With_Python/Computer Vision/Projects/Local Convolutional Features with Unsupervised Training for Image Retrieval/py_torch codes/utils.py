import torchvision.transforms as transforms
import torch
import numpy as np
import os
import math
import h5py
import matplotlib.pyplot as plt
import sys
from scipy.misc import imread, imresize, imsave
import time


def create_folders(path):
    if not os.path.exists(path):
        print 'Creating path: ', path
        os.makedirs(path)
    else:
        print 'Path already exists'


def load_data(filepath):
    with h5py.File(filepath, 'r') as hf:
        data = np.array(hf.get('data'))
        #print 'Shape of the array features: ', data.shape
        return data


def save_data(data, path, name):
    with h5py.File(path + name, 'w') as hf:
        hf.create_dataset('data', data=data)


def preprocess_images(images, img_width, img_height, mean=[0.485, 0.456, 0.406], std=[0.229, 0.224, 0.225]):
    time_p = time.time()
    normalize = transforms.Normalize(mean, std)
    preprocess = transforms.Compose([transforms.ToTensor(), normalize])

    if isinstance(images, list):
        print ("Preprocessing Images... ")
        num_images = len(images)
        x = torch.FloatTensor(num_images, 3, img_height, img_width)
        for i in range(0, num_images):
            images[i] = imresize(images[i], [img_height, img_width]).astype(dtype=np.float32)
            x[i, :, :, :] = preprocess(images[i])
    else:
        print ("Preprocessing Image... ")
        x = torch.FloatTensor(1, 3, img_height, img_width)
        images = imresize(images, [img_height, img_width]).astype(dtype=np.float32)
        x[0, :, :, :] = preprocess(images)
    print x.size()
    print 'Time elapsed preprocessing: ', time.time()-time_p
    return x


def print_classes(dictionary_labels, vector_classes):
    for vc in vector_classes:
        print dictionary_labels[vc]