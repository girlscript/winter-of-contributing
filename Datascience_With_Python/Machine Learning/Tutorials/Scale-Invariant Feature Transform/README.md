# Scale-Invariant Feature Transform

## Definition

Hello EveryOne ! In this tutorial , we are going to have a look on Scale Invariant Feature Transform.So let's get started ! Hope you like it.

## Basic Idea
After reading this tutorial , you will acquire  a basic knowledge of SIFT and its imortance in computer vision.

## Goal

To understand the concept of SIFT in images

## Topics to be Covered in this Tutorial :

**Introduction**

So, in this article, we will talk about an image matching algorithm that identifies the key features from the images and is able to match these features to a new image of       the same object. Let’s get rolling!  


**What is Scale Invariant Feature Transform**

SIFT, or Scale Invariant Feature Transform, is a feature detection algorithm in Computer Vision.
SIFT helps locate the local features in an image, commonly known as the ‘keypoints‘ of the image. These keypoints are scale & rotation invariant that can be used for various     computer vision applications, like image matching, object detection, scene detection, etc.
We can also use the keypoints generated using SIFT as features for the image during model training. The major advantage of SIFT features, over edge features or hog features,     is that they are not affected by the size or orientation of the image.


**Purpose Of SIFT**

This explains about the main purpose of using SIFT over other algorithms and what is the basic idea behind using this.

This section summarizes the original SIFT algorithm and mentions a few competing techniques available for object recognition under clutter and partial occlusion.


**Features Of SIFT**


The SIFT features are local and based on the appearance of the object at particular interest points, and are invariant to image scale and rotation. 

They are also robust to changes in illumination, noise, and minor changes in viewpoint. 

In addition to these properties, they are highly distinctive, relatively easy to extract and allow for correct object identification with low probability of mismatch.



**Applications**

**Object recognition using SIFT features**

Given SIFT's ability to find distinctive keypoints that are invariant to location, scale and rotation, and robust to affine transformations (changes in scale, rotation, shear, and position) and changes in illumination, they are usable for object recognition. 

SIFT features can essentially be applied to any task that requires identification of matching locations between images. Work has been done on applications such as recognition of particular object categories in 2D images, 3D reconstruction, motion tracking and segmentation, robot localization, image panorama stitching .


**Robot localization and mapping**

In this application, a trinocular stereo system is used to determine 3D estimates for keypoint locations. Keypoints are used only when they appear in all 3 images with consistent disparities, resulting in very few outliers. As the robot moves, it localizes itself using feature matches to the existing 3D map, and then incrementally adds features to the map while updating their 3D positions using a Kalman filter. This provides a robust and accurate solution to the problem of robot localization in unknown environments. 


**3D scene modeling, recognition and tracking**

This application uses SIFT features for 3D object recognition and 3D modeling in context of augmented reality, in which synthetic objects with accurate pose are superimposed on real images. SIFT matching is done for a number of 2D images of a scene or object taken from different angles. This is used with bundle adjustment initialized from an essential matrix or trifocal tensor to build a sparse 3D model of the viewed scene and to simultaneously recover camera poses and calibration parameters. 


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

**Scale-space extrema detection**

We begin by detecting points of interest, which are termed keypoints in the SIFT framework. The image is convolved with Gaussian filters at different scales, and then the difference of successive Gaussian-blurred images are taken. Keypoints are then taken as maxima/minima of the Difference of Gaussians (DoG) that occur at multiple scales. 

This explains how to extract and detect feature using SIFT in images .



**Keypoint localization**

Scale-space extrema detection produces too many keypoint candidates, some of which are unstable. The next step in the algorithm is to perform a detailed fit to the nearby data for accurate location, scale, and ratio of principal curvatures. This information allows to reject points which are low contrast (and are therefore sensitive to noise) or poorly localized along an edge.


**Orientation assignment**

In this step, each keypoint is assigned one or more orientations based on local image gradient directions. This is the key step in achieving invariance to rotation as the keypoint descriptor can be represented relative to this orientation and therefore achieve invariance to image rotation.



**Keypoint descriptor**

Previous steps found keypoint locations at particular scales and assigned orientations to them. This ensured invariance to image location, scale and rotation. Now we want to compute a descriptor vector for each keypoint such that the descriptor is highly distinctive and partially invariant to the remaining variations such as illumination, 3D viewpoint, etc. This step is performed on the image closest in scale to the keypoint's scale.



  

**Bibliography**

https://en.wikipedia.org/wiki/Scale-invariant_feature_transform#Overview

https://www.analyticsvidhya.com/blog/2019/10/detailed-guide-powerful-sift-technique-image-matching-python/

https://iq.opengenus.org/scale-invariant-feature-transform/


https://opencv24-python-tutorials.readthedocs.io/en/latest/py_tutorials/py_feature2d/py_sift_intro/py_sift_intro.html


https://colab.research.google.com/github/YoniChechik/AI_is_Math/blob/master/c_08_features/sift.ipynb#scrollTo=M-ypzqFA752X


https://socs.binus.ac.id/2017/06/13/feature-descriptor-sift-scale-invariant-feature-transform-part-1-introduction-to-sift/
