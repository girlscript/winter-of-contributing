# Scale-Invariant Feature Transform

## Video Link : [Scale-Invariant Feature Transform](https://drive.google.com/file/d/146y37KTmGVGYI-5XOwk_dVdIgrCKYRzf/view?usp=sharing)

- The scale-invariant feature transform (SIFT) is a computer vision algorithm to detect, describe, and match local features in images, invented by David Lowe in 1999.
- Applications include object recognition, robotic mapping and navigation, image stitching, 3D modeling, gesture recognition, video tracking, individual identification of wildlife and match moving.

- SIFT keypoints of objects are first extracted from a set of reference images and stored in a database. 
-  An object is recognized in a new image by individually comparing each feature from the new image to this database and finding candidate matching features based on Euclidean distance of their feature vectors.
-  From the full set of matches, subsets of keypoints that agree on the object and its location, scale, and orientation in the new image are identified to filter out good matches. The determination of consistent clusters is performed rapidly by using an efficient hash table implementation of the generalised Hough transform.
-   Each cluster of 3 or more features that agree on an object and its pose is then subject to further detailed model verification and subsequently outliers are discarded. Finally the probability that a particular set of features indicates the presence of an object is computed, given the accuracy of fit and number of probable false matches. Object matches that pass all these tests can be identified as correct with high confidence.


![image](https://user-images.githubusercontent.com/63282184/143863462-afd4d714-f269-439f-a1ec-39f3b8f4ff40.png)

## Types of features
- The detection and description of local image features can help in object recognition. The SIFT features are local and based on the appearance of the object at particular interest points, and are invariant to image scale and rotation. 
- They are also robust to changes in illumination, noise, and minor changes in viewpoint. In addition to these properties, they are highly distinctive, relatively easy to extract and allow for correct object identification with low probability of mismatch. They are relatively easy to match against a (large) database of local features but, however, the high dimensionality can be an issue, and generally probabilistic algorithms such as k-d trees with best bin first search are used.
-  Object description by set of SIFT features is also robust to partial occlusion; as few as 3 SIFT features from an object are enough to compute its location and pose. Recognition can be performed in close-to-real time, at least for small databases and on modern computer hardware.

## Comparison of SIFT features with other local features
- SIFT and SIFT-like GLOH features exhibit the highest matching accuracies (recall rates) for an affine transformation of 50 degrees. After this transformation limit, results start to become unreliable.
- Distinctiveness of descriptors is measured by summing the eigenvalues of the descriptors, obtained by the Principal components analysis of the descriptors normalized by their variance. This corresponds to the amount of variance captured by different descriptors, therefore, to their distinctiveness. PCA-SIFT (Principal Components Analysis applied to SIFT descriptors), GLOH and SIFT features give the highest values.
- SIFT-based descriptors outperform other contemporary local descriptors on both textured and structured scenes, with the difference in performance larger on the textured scene.
- For scale changes in the range 2–2.5 and image rotations in the range 30 to 45 degrees, SIFT and SIFT-based descriptors again outperform other contemporary local descriptors with both textured and structured scene content.
- Introduction of blur affects all local descriptors, especially those based on edges, like shape context, because edges disappear in the case of a strong blur. But GLOH, PCA-SIFT and SIFT still performed better than the others. This is also true for evaluation in the case of illumination changes.

## Applications

- Object recognition using SIFT features
- Robot localization and mapping
- Panorama stitching
- 3D scene modeling, recognition and tracking
- 3D SIFT-like descriptors for human action recognition
- Analyzing the Human Brain in 3D Magnetic Resonance Images

## Advantages:
- SIFT descriptor is a classic approach, also the "original" inspiration for most of the descriptors proposed later.
- It is more accurate than any other descriptors.
- It is Rotation and scale invariant.

## Disadvantages:
- The drawback is that it is mathematically complicated and computationally heavy.
- SIFT is based on the Histogram of Gradients. Thatis, the gradients of each Pixel in the patch need to be computed and these computations cost time.
- It is not effective for low powered devices.
