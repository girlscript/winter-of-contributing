# Scale-Invariant Feature Transform

## Definition

Hello EveryOne ! In this tutorial , we are going to have a look on Scale Invariant Feature Transform.So let's get started ! Hope you like it.

## Basic Idea
After reading this tutorial , you will acquire  a basic knowledge of SIFT and its imortance in computer vision.

## Goal

To understand the concept of SIFT in images

## Topics to be Covered in this Tutorial :

**Introduction**

So, in this article, we will talk about an image matching algorithm that identifies the key features from the images and is able to match these features to a new image of       the same object. Let’s get rolling!  SIFT, or Scale Invariant Feature Transform, is a feature detection algorithm in Computer Vision.
SIFT helps locate the local features in an image, commonly known as the ‘keypoints‘ of the image. These keypoints are scale & rotation invariant that can be used for various     computer vision applications, like image matching, object detection, scene detection, etc.
We can also use the keypoints generated using SIFT as features for the image during model training. The major advantage of SIFT features, over edge features or hog features,     is that they are not affected by the size or orientation of the image.

**Major Advantages**

**Locality:** features are local, so robust to occlusion and clutter (no prior segmentation)

**Distinctiveness:** individual features can be matched to a large database of objects

**Quantity:** many features can be generated for even small objects

**Efficiency:** close to real-time performance

**Distadvantages of SIFT**

SIFT uses 128 dimensional feature vectors which are big and computational cost of SIFT due to this rises.
SIFT continues to be a good detector when the images that are to be matches are nearly identical but even a relatively small change will produce a big drop in matching           keypoints.
SIFT cannot find too many points in the image that are resistant to scale, rotation and distortion if the original image is out of focus (blurred). Thus, it does not work       well if the images are blurred.
    
**Implementation of algorithm in Python** 

This covers a detailed explaination of SIFT algorithm using Python on a given Image. Feature Extraction and FEature matching are done for a given image.

  

**Bibliography**
