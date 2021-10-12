
# Introduction to ORB (Oriented FAST and Rotated BRIEF)

One of the most challenging problems in computer vision is object detection. Object detection is the ability to recognize particular objects in images and being able to determine the location of those objects within the images. For example, if we perform car detection in the image below, we will not only be interested in saying how many cars are there in the image but also where those cars are in the image.

In order to perform this object-based image analysis, we will use ORB. ORB is a very fast algorithm that creates feature vectors from detected keypoints. You've learned that ORB has some great properties, such as being invariant to rotations, changes in illumination, and noise.

Oriented FAST and Rotated BRIEF (ORB) was developed at OpenCV labs by Ethan Rublee, Vincent Rabaud, Kurt Konolige, and Gary R. Bradski in 2011, as an efficient and viable alternative to SIFT and SURF. ORB was conceived mainly because SIFT and SURF are patented algorithms.

![image](https://user-images.githubusercontent.com/57637086/136788519-7412f9cd-d6fe-4f38-b086-f5ce21fa3e55.png)


ORB performs as well as SIFT on the task of feature detection (and is better than SURF) while being almost two orders of magnitude faster. ORB builds on the well-known FAST keypoint detector and the BRIEF descriptor. Both these techniques are attractive because of their good performance and low cost. ORB’s main contributions are as follows:

* The addition of a fast and accurate orientation component to FAST

* The efficient computation of oriented BRIEF features

* Analysis of variance and correlation of oriented BRIEF features

* A learning method for decorrelating BRIEF features under rotational invariance, leading to better performance in nearest-neighbor applications

## Basic Terms

**Keypoint** — Small region in an image that is particularly distinctive. Example: Corners where pixel values sharply change from light to dark.

**Descriptors** — A feature *descriptor* is an algorithm which takes an image and outputs *feature descriptors*/*feature vectors*. Feature descriptors encode interesting information into a series of numbers and act as a sort of numerical “fingerprint” that can be used to differentiate one feature from another. Ideally, this information would be invariant under image transformation, so we can find the feature again even if the image is transformed in some way.

## Fast(Features from Accelerated and Segments Test)

Given a pixel p in an array fast compares the brightness of p to surrounding 16 pixels that are in a small circle around p. Pixels in the circle is then sorted into three classes (lighter than p, darker than p or similar to p). If more than 8 pixels are darker or brighter than p than it is selected as a keypoint. So keypoints found by fast gives us information of the location of determining edges in an image.

<p align="center">
  <img src="https://cdn-images-1.medium.com/max/2000/0*CZ2Ub21iuBOgpMDb.jpg" />
</p>

However, FAST features do not have an orientation component and multiscale features. So orb algorithm uses multiscale image pyramid. An image pyramid is a multiscale representation of a single image, that consist of sequences of images all of which are versions of the image at different resolutions. Each level in pyramid contains the downsampled version of the image than the previous level. Once orb has created pyramid it uses the fast algorithm to detect keypoints in the image. By detecting keypoints at each level orb is effectively locating key points at a different scale. In this way, ORB is partial scale invariant.

<p align="center">
  <img src="https://cdn-images-1.medium.com/max/2000/0*wGPpgnPImtwLb8NX.png" />
</p>

After locating keypoints orb now assign an orientation to each keypoint like left or right facing depending on how the levels of intensity change around that keypoint. For detecting intensity change orb uses intensity centroid. The intensity centroid assumes that a corner’s intensity is offset from its center, and this vector may be used to impute an orientation.

First, the moments of a patch are defined as:

<p align="center">
  <img src="https://cdn-images-1.medium.com/max/2000/0*XIo9xHX5Hg3ofGbc" />
</p>

With these moments we can find the centroid, the “center of mass” of the patch as:

<p align="center">
  <img src="https://cdn-images-1.medium.com/max/2000/0*qPDKxkfyI_bYMGxc" />
</p>

We can construct a vector from the corner’s center O to the centroid -OC. The orientation of the patch is then given by:

<p align="center">
  <img src="https://cdn-images-1.medium.com/max/2000/0*lN39pOqABxi-fnXX" />
</p>

Here is an illustration to help explain the method:

<p align="center">   <img src="https://cdn-images-1.medium.com/max/2000/0*kpbH_bTsvFR35oan" />
</p>

Once we’ve calculated the orientation of the patch, we can rotate it to a canonical rotation and then compute the descriptor, thus obtaining some rotation invariance.

## Brief(Binary robust independent elementary feature)

Brief takes all keypoints found by the fast algorithm and convert it into a binary feature vector so that together they can represent an object. Binary features vector also know as binary feature descriptor is a feature vector that only contains 1 and 0. In brief, each keypoint is described by a feature vector which is 128–512 bits string.

<p align="center">   <img src="https://cdn-images-1.medium.com/max/2000/1*XWpgdt4Z4xeT-g8hn5JLsA.png" /> </p>

One important point is that BRIEF is a feature descriptor, it doesn’t provide any method to find the features. So you will have to use any other feature detectors like SIFT, SURF etc. The paper recommends to use CenSurE which is a fast detector and BRIEF works even slightly better for CenSurE points than for SURF points.

In short, BRIEF is a faster method feature descriptor calculation and matching. It also provides high recognition rate unless there is large in-plane rotation.

Brief start by smoothing image using a Gaussian kernel in order to prevent the descriptor from being from being sensitive to high-frequency noise. Than brief select a random pair of pixels in a defined neighborhood around that keypoint. The defined neighborhood around pixel is known as a patch, which is a square of some pixel width and height. The first pixel in the random pair is drawn from a Gaussian distribution centered around the keypoint with a stranded deviation or spread of sigma. The second pixel in the random pair is drawn from a Gaussian distribution centered around the first pixel with a standard deviation or spread of sigma by two. Now if the first pixel is brighter than the second, it assigns the value of 1 to corresponding bit else 0.

<p align="center">   <img src="https://cdn-images-1.medium.com/max/2000/1*8v4ZvgwE0DYiCzQDRvno1A.png" /> </p>

Again brief select a random pair and assign the value to them. For a 128-bit vector, brief repeat this process for 128 times for a keypoint. Brief create a vector like this for each keypoint in an image. However, BRIEF also isn’t invariant to rotation so orb uses rBRIEF(Rotation-aware BRIEF). ORB tries to add this functionality, without losing out on the speed aspect of BRIEF.

Consider a smoothed image patch, p. A binary test τ is defined by:

<p align="center">   <img src="https://cdn-images-1.medium.com/max/2292/1*4OnDKy41p6ycUmhIaE_xIQ.png" /> </p>

where p(x) is the intensity of p at a point x.The feature is defined as a vector of n binary tests:

<p align="center">   <img src="https://cdn-images-1.medium.com/max/2000/1*S4b76jxfiZLoshLxhsg3-A.png" /> </p>

The matching performance of BRIEF falls off sharply for in-plane rotation of more than a few degrees. ORB proposes a method to steer BRIEF according to the orientation of the keypoints. For any feature set of n binary tests at location (xi, yi), we need the 2 x n matrix:

<p align="center">   <img src="https://cdn-images-1.medium.com/max/2000/1*NUj3BNlhYLZyU7qQftqfoA.png" /> </p>

It uses the patch orientation θ and the corresponding rotation matrix Rθ, and construct a steered version Sθ of S:

<p align="center">   <img src="https://cdn-images-1.medium.com/max/2000/1*DiikAaA_ubNBq27684h3hQ.png" /> </p>

Now, the steered BRIEF operator becomes:

<p align="center">   <img src="https://cdn-images-1.medium.com/max/2000/1*_QJsuR_RjVl9D_HJ_OVNIw.png" /> </p>

Than it discretizes the angle to increments of 2π/30 (12 degrees), and construct a lookup table of precomputed BRIEF patterns. As long as the keypoint orientation θ is consistent across views, the correct set of points Sθ will be used to compute its descriptor.

ORB specifies the rBRIEF algorithm as follows:

1) Run each test against all training patches.

2) Order the tests by their distance from a mean of 0.5, forming the vector T.

3) Greedy search:

* Put the first test into the result vector R and remove it from T.

* Take the next test from T, and compare it against all tests in R. If its absolute correlation is greater than a threshold, discard it; else add it to R.

* Repeat the previous step until there are 256 tests in R. If there are fewer than 256, raise the threshold and try again

rBRIEF shows significant improvement in the variance and correlation over steered BRIEF.

# ORB's Main Properties

We will now explore each of the main properties of the ORB algorithm:

**Scale Invariance**: The ORB algorithm is scale invariant. This means that it is able to detect objects in images regardless of their size.

**Rotational Invariance**: The ORB algorithm is also rotationally invariant. This means that it is able to detect objects in images regardless of their orientation.

**Illumination Invariance**: The ORB algorithm is also illumination invariant. This means that it is able to detect objects in images regardless of their illumination.

**Noise Invariance**: The ORB algorithm is also noise invariant. This means that it is able to detect objects in images, even if the images have some degree of noise.

To conclude, ORB is binary descriptor that is similar to BRIEF, with the added advantages of rotation invariance and learned sampling pairs. You’re probably asking yourself, how does ORB perform in comparison to BRIEF? Well, in non-geometric transformation (those that are image capture dependent and do not rely on the viewpoint, such as blur, JPEG compression, exposure and illumination) BRIEF actually outperforms ORB. In affine transformation, BRIEF perform poorly under large rotation or scale change as it’s not designed to handle such changes. In perspective transformations, which are the result of view-point change, BRIEF surprisingly slightly outperforms ORB.

## References

* [https://gilscvblog.com/2013/10/04/a-tutorial-on-binary-descriptors-part-3-the-orb-descriptor/](https://gilscvblog.com/2013/10/04/a-tutorial-on-binary-descriptors-part-3-the-orb-descriptor/)

* [https://www.oreilly.com/library/view/computer-vision-with/9781788299763/](https://www.oreilly.com/library/view/computer-vision-with/9781788299763/)
