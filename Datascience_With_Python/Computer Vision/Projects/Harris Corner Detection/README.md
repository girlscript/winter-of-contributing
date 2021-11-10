# :star: Harris Corner Detection

## :stars: Objective

Explaining Harris corner detection using OpenCV.

## :stars: Introduction

A corner is a point whose local neighborhood stands in two dominant and different edge directions. In other words, a corner can be interpreted as the junction of two edges, where an edge is a sudden change in image brightness.[3] Corners are the important features in the image, and they are generally termed as interest points which are invariant to translation, rotation and illumination. Although corners are only a small percentage of the image, they contain the most important features in restoring image information, and they can be used to minimize the amount of processed data for motion tracking, image stitching, building 2D mosaics, stereo vision, image representation and other related computer vision areas.
In order to capture the corners from the image, researchers have proposed many different corner detectors including the Kanade-Lucas-Tomasi (KLT) operator and the Harris operator which are most simple, efficient and reliable for use in corner detection. These two popular methodologies are both closely associated with and based on the local structure matrix. Compared to the Kanade-Lucas-Tomasi corner detector, the Harris corner detector provides good repeatability under changing illumination and rotation, and therefore, it is more often used in stereo matching and image database retrieval. Although there still exists drawbacks and limitations, the Harris corner detector is still an important and fundamental technique for many computer vision applications.

<p align="center">
  <img width="400" height="300" src="https://miro.medium.com/max/950/0*PPJxP5y_k4GCWLBM.jpg">
  </p> 

The Harris Corner Detector is a mathematical operator that finds features (what are features?) in an image. It is simple to compute, and is fast enough to work on computers. Also, it is popular because it is rotation, scale and illumination variation independent. However, the Shi-Tomasi corner detector, the one implemented in OpenCV, is an improvement of this corner detector. 


## :stars: Equation Involved

To define the Harris corner detector, we have to go into a bit of math. We'll get into a bit of calculus
     <p align="center">
  <img width="400" height="100" src="https://aishack.in/static/img/tut/harris-equation1.jpg">
  </p>  
                         The equation

E is the difference between the original and the moved window.

u is the window's displacement in the x direction.

v is the window's displacement in the y direction.

w(x, y) is the window at position (x, y). This acts like a mask. Ensuring that only the desired window is used.

I is the intensity of the image at a position (x, y).

I(x+u, y+v) is the intensity of the moved window.

I(x, y) is the intensity of the original.

## :stars: Implementation

OpenCV has the function cv2.cornerHarris() for this purpose. Its arguments are :

img - Input image, it should be grayscale and float32 type.
blockSize - It is the size of neighbourhood considered for corner detection
ksize - Aperture parameter of Sobel derivative used.
k - Harris detector free parameter in the equation.

 <p align="center">
  <img width="400" height="300" src="https://opencv24-python-tutorials.readthedocs.io/en/latest/_images/harris_region.jpg">
  </p> 

Sometimes, you may need to find the corners with maximum accuracy. OpenCV comes with a function cv2.cornerSubPix() which further refines the corners detected with sub-pixel accuracy. Below is an example. As usual, we need to find the harris corners first. Then we pass the centroids of these corners (There may be a bunch of pixels at a corner, we take their centroid) to refine them. Harris corners are marked in red pixels and refined corners are marked in green pixels. For this function, we have to define the criteria when to stop the iteration. We stop it after a specified number of iteration or a certain accuracy is achieved, whichever occurs first. We also need to define the size of neighbourhood it would search for corners. 

## :stars: Output

  <p align="center">
  <img width="400" height="300" src="https://user-images.githubusercontent.com/66861391/140650371-3110df96-b037-420e-9f3e-c0104fbdfe4f.png">
  </p>  
  
  <p align="center">
  <img width="450" height="250" src="https://user-images.githubusercontent.com/66861391/141118759-4c8c6419-f708-499e-9937-08a31a6b9223.png">
  </p>  
  
## :stars: Application

:sparkles: Image Alignment, Stitching and Registration

:sparkles: 2D Mosaics Creation

:sparkles: 3D Scene Modeling and Reconstruction

:sparkles: Motion Detection

:sparkles: Object Recognition

:sparkles: Image Indexing and Content-based Retrieval

:sparkles: Video Tracking

## :stars: Conclusion
The Harris Corner Detector is just a mathematical way of determining which windows produce large variations when moved in any direction. With each window, a score R is associated. Based on this score, you can figure out which ones are corners and which ones are not.




