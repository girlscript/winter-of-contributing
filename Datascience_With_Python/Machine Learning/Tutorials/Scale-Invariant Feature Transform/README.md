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


**What is Scale Invariant Feature Transform**

The scale-invariant feature transform (SIFT) is a computer vision algorithm to detect, describe, and match local features in images, invented by David Lowe in 1999.Applications include object recognition, robotic mapping and navigation, image stitching, 3D modeling, gesture recognition, video tracking, individual identification of wildlife and match moving.

SIFT keypoints of objects are first extracted from a set of reference images and stored in a database. An object is recognized in a new image by individually comparing each feature from the new image to this database and finding candidate matching features based on Euclidean distance of their feature vectors. From the full set of matches, subsets of keypoints that agree on the object and its location, scale, and orientation in the new image are identified to filter out good matches. The determination of consistent clusters is performed rapidly by using an efficient hash table implementation of the generalised Hough transform. Each cluster of 3 or more features that agree on an object and its pose is then subject to further detailed model verification and subsequently outliers are discarded. Finally the probability that a particular set of features indicates the presence of an object is computed, given the accuracy of fit and number of probable false matches. Object matches that pass all these tests can be identified as correct with high confidence.

**Purpose Of SIFT**

For any object in an image, interesting points on the object can be extracted to provide a "feature description" of the object. This description, extracted from a training image, can then be used to identify the object when attempting to locate the object in a test image containing many other objects. To perform reliable recognition, it is important that the features extracted from the training image be detectable even under changes in image scale, noise and illumination. Such points usually lie on high-contrast regions of the image, such as object edges.

Another important characteristic of these features is that the relative positions between them in the original scene shouldn't change from one image to another. For example, if only the four corners of a door were used as features, they would work regardless of the door's position; but if points in the frame were also used, the recognition would fail if the door is opened or closed. Similarly, features located in articulated or flexible objects would typically not work if any change in their internal geometry happens between two images in the set being processed. However, in practice SIFT detects and uses a much larger number of features from the images, which reduces the contribution of the errors caused by these local variations in the average error of all feature matching errors.

SIFT can robustly identify objects even among clutter and under partial occlusion, because the SIFT feature descriptor is invariant to uniform scaling, orientation, illumination changes, and partially invariant to affine distortion. This section summarizes the original SIFT algorithm and mentions a few competing techniques available for object recognition under clutter and partial occlusion.

The SIFT descriptor is based on image measurements in terms of receptive fields over which local scale invariant reference frames are established by local scale selection. A general theoretical explanation about this is given in the Scholarpedia article on SIFT.

**Types of features**

The detection and description of local image features can help in object recognition. The SIFT features are local and based on the appearance of the object at particular interest points, and are invariant to image scale and rotation. They are also robust to changes in illumination, noise, and minor changes in viewpoint. In addition to these properties, they are highly distinctive, relatively easy to extract and allow for correct object identification with low probability of mismatch. They are relatively easy to match against a (large) database of local features but, however, the high dimensionality can be an issue, and generally probabilistic algorithms such as k-d trees with best bin first search are used. Object description by set of SIFT features is also robust to partial occlusion; as few as 3 SIFT features from an object are enough to compute its location and pose. Recognition can be performed in close-to-real time, at least for small databases and on modern computer hardware.

**Comparison of SIFT features with other local features**


There has been an extensive study done on the performance evaluation of different local descriptors, including SIFT, using a range of detectors. The main results are summarized below:

SIFT and SIFT-like GLOH features exhibit the highest matching accuracies (recall rates) for an affine transformation of 50 degrees. After this transformation limit, results start to become unreliable.
Distinctiveness of descriptors is measured by summing the eigenvalues of the descriptors, obtained by the Principal components analysis of the descriptors normalized by their variance. This corresponds to the amount of variance captured by different descriptors, therefore, to their distinctiveness. PCA-SIFT (Principal Components Analysis applied to SIFT descriptors), GLOH and SIFT features give the highest values.
SIFT-based descriptors outperform other contemporary local descriptors on both textured and structured scenes, with the difference in performance larger on the textured scene.
For scale changes in the range 2–2.5 and image rotations in the range 30 to 45 degrees, SIFT and SIFT-based descriptors again outperform other contemporary local descriptors with both textured and structured scene content.
Introduction of blur affects all local descriptors, especially those based on edges, like shape context, because edges disappear in the case of a strong blur. But GLOH, PCA-SIFT and SIFT still performed better than the others. This is also true for evaluation in the case of illumination changes.
The evaluations carried out suggests strongly that SIFT-based descriptors, which are region-based, are the most robust and distinctive, and are therefore best suited for feature matching. However, most recent feature descriptors such as SURF have not been evaluated in this study.

SURF has later been shown to have similar performance to SIFT, while at the same time being much faster. Other studies conclude that when speed is not critical, SIFT outperforms SURF. Specifically, disregarding discretization effects the pure image descriptor in SIFT is significantly better than the pure image descriptor in SURF, whereas the scale-space extrema of the determinant of the Hessian underlying the pure interest point detector in SURF constitute significantly better interest points compared to the scale-space extrema of the Laplacian to which the interest point detector in SIFT constitutes a numerical approximation.

The performance of image matching by SIFT descriptors can be improved in the sense of achieving higher efficiency scores and lower 1-precision scores by replacing the scale-space extrema of the difference-of-Gaussians operator in original SIFT by scale-space extrema of the determinant of the Hessian, or more generally considering a more general family of generalized scale-space interest points.

Recently, a slight variation of the descriptor employing an irregular histogram grid has been proposed that significantly improves its performance. Instead of using a 4×4 grid of histogram bins, all bins extend to the center of the feature. This improves the descriptor's robustness to scale changes.

The SIFT-Rank descriptor was shown to improve the performance of the standard SIFT descriptor for affine feature matching. A SIFT-Rank descriptor is generated from a standard SIFT descriptor, by setting each histogram bin to its rank in a sorted array of bins. The Euclidean distance between SIFT-Rank descriptors is invariant to arbitrary monotonic changes in histogram bin values, and is related to Spearman's rank correlation coefficient.



**Applications**

**Object recognition using SIFT features**

Given SIFT's ability to find distinctive keypoints that are invariant to location, scale and rotation, and robust to affine transformations (changes in scale, rotation, shear, and position) and changes in illumination, they are usable for object recognition. The steps are given below.

First, SIFT features are obtained from the input image using the algorithm described above.
These features are matched to the SIFT feature database obtained from the training images. This feature matching is done through a Euclidean-distance based nearest neighbor approach. To increase robustness, matches are rejected for those keypoints for which the ratio of the nearest neighbor distance to the second-nearest neighbor distance is greater than 0.8. This discards many of the false matches arising from background clutter. Finally, to avoid the expensive search required for finding the Euclidean-distance-based nearest neighbor, an approximate algorithm called the best-bin-first algorithm is used. This is a fast method for returning the nearest neighbor with high probability, and can give speedup by factor of 1000 while finding nearest neighbor (of interest) 95% of the time.

Although the distance ratio test described above discards many of the false matches arising from background clutter, we still have matches that belong to different objects. Therefore, to increase robustness to object identification, we want to cluster those features that belong to the same object and reject the matches that are left out in the clustering process. This is done using the Hough transform. This will identify clusters of features that vote for the same object pose. When clusters of features are found to vote for the same pose of an object, the probability of the interpretation being correct is much higher than for any single feature. Each keypoint votes for the set of object poses that are consistent with the keypoint's location, scale, and orientation. Bins that accumulate at least 3 votes are identified as candidate object/pose matches.

For each candidate cluster, a least-squares solution for the best estimated affine projection parameters relating the training image to the input image is obtained. If the projection of a keypoint through these parameters lies within half the error range that was used for the parameters in the Hough transform bins, the keypoint match is kept. If fewer than 3 points remain after discarding outliers for a bin, then the object match is rejected. The least-squares fitting is repeated until no more rejections take place. This works better for planar surface recognition than 3D object recognition since the affine model is no longer accurate for 3D objects.
In this journal, authors proposed a new approach to use SIFT descriptors for multiple object detection purposes. The proposed multiple object detection approach is tested on aerial and satellite images.

SIFT features can essentially be applied to any task that requires identification of matching locations between images. Work has been done on applications such as recognition of particular object categories in 2D images, 3D reconstruction, motion tracking and segmentation, robot localization, image panorama stitching and epipolar calibration. Some of these are discussed in more detail below.

**Robot localization and mapping**

In this application, a trinocular stereo system is used to determine 3D estimates for keypoint locations. Keypoints are used only when they appear in all 3 images with consistent disparities, resulting in very few outliers. As the robot moves, it localizes itself using feature matches to the existing 3D map, and then incrementally adds features to the map while updating their 3D positions using a Kalman filter. This provides a robust and accurate solution to the problem of robot localization in unknown environments. Recent 3D solvers leverage the use of keypoint directions to solve trinocular geometry from three keypoints and absolute pose from only two keypoints, an often disregarded but useful measurement available in SIFT. These orientation measurements reduce the number of required correspondences, further increasing robustness exponentially.

**Panorama stitching**

SIFT feature matching can be used in image stitching for fully automated panorama reconstruction from non-panoramic images. The SIFT features extracted from the input images are matched against each other to find k nearest-neighbors for each feature. These correspondences are then used to find m candidate matching images for each image. Homographies between pairs of images are then computed using RANSAC and a probabilistic model is used for verification. Because there is no restriction on the input images, graph search is applied to find connected components of image matches such that each connected component will correspond to a panorama. Finally for each connected component bundle adjustment is performed to solve for joint camera parameters, and the panorama is rendered using multi-band blending. Because of the SIFT-inspired object recognition approach to panorama stitching, the resulting system is insensitive to the ordering, orientation, scale and illumination of the images. The input images can contain multiple panoramas and noise images (some of which may not even be part of the composite image), and panoramic sequences are recognized and rendered as output.

**3D scene modeling, recognition and tracking**

This application uses SIFT features for 3D object recognition and 3D modeling in context of augmented reality, in which synthetic objects with accurate pose are superimposed on real images. SIFT matching is done for a number of 2D images of a scene or object taken from different angles. This is used with bundle adjustment initialized from an essential matrix or trifocal tensor to build a sparse 3D model of the viewed scene and to simultaneously recover camera poses and calibration parameters. Then the position, orientation and size of the virtual object are defined relative to the coordinate frame of the recovered model. For online match moving, SIFT features again are extracted from the current video frame and matched to the features already computed for the world mode, resulting in a set of 2D-to-3D correspondences. These correspondences are then used to compute the current camera pose for the virtual projection and final rendering. A regularization technique is used to reduce the jitter in the virtual projection. The use of SIFT directions have also been used to increase robustness of this process. 3D extensions of SIFT have also been evaluated for true 3D object recognition and retrieval.

**3D SIFT-like descriptors for human action recognition**


Extensions of the SIFT descriptor to 2+1-dimensional spatio-temporal data in context of human action recognition in video sequences have been studied. The computation of local position-dependent histograms in the 2D SIFT algorithm are extended from two to three dimensions to describe SIFT features in a spatio-temporal domain. For application to human action recognition in a video sequence, sampling of the training videos is carried out either at spatio-temporal interest points or at randomly determined locations, times and scales. The spatio-temporal regions around these interest points are then described using the 3D SIFT descriptor. These descriptors are then clustered to form a spatio-temporal Bag of words model. 3D SIFT descriptors extracted from the test videos are then matched against these words for human action classification.

The authors report much better results with their 3D SIFT descriptor approach than with other approaches like simple 2D SIFT descriptors and Gradient Magnitude.

Analyzing the Human Brain in 3D Magnetic Resonance Images
The Feature-based Morphometry (FBM) technique uses extrema in a difference of Gaussian scale-space to analyze and classify 3D magnetic resonance images (MRIs) of the human brain. FBM models the image probabilistically as a collage of independent features, conditional on image geometry and group labels, e.g. healthy subjects and subjects with Alzheimer's disease (AD). Features are first extracted in individual images from a 4D difference of Gaussian scale-space, then modeled in terms of their appearance, geometry and group co-occurrence statistics across a set of images. FBM was validated in the analysis of AD using a set of ~200 volumetric MRIs of the human brain, automatically identifying established indicators of AD in the brain and classifying mild AD in new images with a rate of 80%.

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

For scale space extrema detection in the SIFT algorithm, the image is first convolved with Gaussian-blurs at different scales. 
Once DoG images have been obtained, keypoints are identified as local minima/maxima of the DoG images across scales. This is done by comparing each pixel in the DoG images to its eight neighbors at the same scale and nine corresponding neighboring pixels in each of the neighboring scales. If the pixel value is the maximum or minimum among all compared pixels, it is selected as a candidate keypoint.

This keypoint detection step is a variation of one of the blob detection methods developed by Lindeberg by detecting scale-space extrema of the scale normalized Laplacian; that is, detecting points that are local extrema with respect to both space and scale, in the discrete case by comparisons with the nearest 26 neighbors in a discretized scale-space volume. The difference of Gaussians operator can be seen as an approximation to the Laplacian, with the implicit normalization in the pyramid also constituting a discrete approximation of the scale-normalized Laplacian.Another real-time implementation of scale-space extrema of the Laplacian operator has been presented by Lindeberg and Bretzner based on a hybrid pyramid representation, which was used for human-computer interaction by real-time gesture recognition in Bretzner et al.

**Keypoint localization**

Scale-space extrema detection produces too many keypoint candidates, some of which are unstable. The next step in the algorithm is to perform a detailed fit to the nearby data for accurate location, scale, and ratio of principal curvatures. This information allows to reject points which are low contrast (and are therefore sensitive to noise) or poorly localized along an edge.


**Orientation assignment**

In this step, each keypoint is assigned one or more orientations based on local image gradient directions. This is the key step in achieving invariance to rotation as the keypoint descriptor can be represented relative to this orientation and therefore achieve invariance to image rotation.

The magnitude and direction calculations for the gradient are done for every pixel in a neighboring region around the keypoint in the Gaussian-blurred image L. An orientation histogram with 36 bins is formed, with each bin covering 10 degrees. Each sample in the neighboring window added to a histogram bin is weighted by its gradient magnitude and by a Gaussian-weighted circular window with a {\displaystyle \sigma }\sigma  that is 1.5 times that of the scale of the keypoint. The peaks in this histogram correspond to dominant orientations. Once the histogram is filled, the orientations corresponding to the highest peak and local peaks that are within 80% of the highest peaks are assigned to the keypoint. In the case of multiple orientations being assigned, an additional keypoint is created having the same location and scale as the original keypoint for each additional orientation.

**Keypoint descriptor**

Previous steps found keypoint locations at particular scales and assigned orientations to them. This ensured invariance to image location, scale and rotation. Now we want to compute a descriptor vector for each keypoint such that the descriptor is highly distinctive and partially invariant to the remaining variations such as illumination, 3D viewpoint, etc. This step is performed on the image closest in scale to the keypoint's scale.

First a set of orientation histograms is created on 4×4 pixel neighborhoods with 8 bins each. These histograms are computed from magnitude and orientation values of samples in a 16×16 region around the keypoint such that each histogram contains samples from a 4×4 subregion of the original neighborhood region. The image gradient magnitudes and orientations are sampled around the keypoint location, using the scale of the keypoint to select the level of Gaussian blur for the image. In order to achieve orientation invariance, the coordinates of the descriptor and the gradient orientations are rotated relative to the keypoint orientation. The magnitudes are further weighted by a Gaussian function with  equal to one half the width of the descriptor window. The descriptor then becomes a vector of all the values of these histograms. Since there are 4 × 4 = 16 histograms each with 8 bins the vector has 128 elements. This vector is then normalized to unit length in order to enhance invariance to affine changes in illumination. To reduce the effects of non-linear illumination a threshold of 0.2 is applied and the vector is again normalized. The thresholding process, also referred to as clamping, can improve matching results even when non-linear illumination effects are not present. The threshold of 0.2 was empirically chosen, and by replacing the fixed threshold with one systematically calculated, matching results can be improved

Although the dimension of the descriptor, i.e. 128, seems high, descriptors with lower dimension than this don't perform as well across the range of matching tasks[2] and the computational cost remains low due to the approximate BBF (see below) method used for finding the nearest neighbor. Longer descriptors continue to do better but not by much and there is an additional danger of increased sensitivity to distortion and occlusion. It is also shown that feature matching accuracy is above 50% for viewpoint changes of up to 50 degrees. Therefore, SIFT descriptors are invariant to minor affine changes. To test the distinctiveness of the SIFT descriptors, matching accuracy is also measured against varying number of keypoints in the testing database, and it is shown that matching accuracy decreases only very slightly for very large database sizes, thus indicating that SIFT features are highly distinctive.
  

**Bibliography**

https://en.wikipedia.org/wiki/Scale-invariant_feature_transform#Overview

https://www.analyticsvidhya.com/blog/2019/10/detailed-guide-powerful-sift-technique-image-matching-python/

https://iq.opengenus.org/scale-invariant-feature-transform/


https://opencv24-python-tutorials.readthedocs.io/en/latest/py_tutorials/py_feature2d/py_sift_intro/py_sift_intro.html


https://colab.research.google.com/github/YoniChechik/AI_is_Math/blob/master/c_08_features/sift.ipynb#scrollTo=M-ypzqFA752X


https://socs.binus.ac.id/2017/06/13/feature-descriptor-sift-scale-invariant-feature-transform-part-1-introduction-to-sift/
