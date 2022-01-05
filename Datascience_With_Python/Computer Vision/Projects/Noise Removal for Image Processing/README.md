# :camera: **NOISE REMOVAL FOR IMAGE PROCESSING** *(COMPUTER VISION)*


<p align="center">
  <img width="350" height="300" src="https://user-images.githubusercontent.com/36481036/137945493-f3eb986e-6fb6-4682-9e31-4b69b1eda943.gif">
</p> 

## :bulb: **INTRODUCTION**
*   Digital Image Processing means processing digital image by means of a digital computer. 
We can also say that it is a use of computer algorithms, in order to get enhanced image either to extract some useful information. 
* Image denoising is the technique of removing noise or distortions from an image. There are a vast range of application such as blurred images can be made clear. 

## :question: **WHAT IS IMAGE DENOISING ?**
What denoising does is to estimate the original image by suppressing noise from the image. Image noise may be caused by different sources ( from sensor or from environment) which are often not possible to avoid in practical situations. Therefore, image denoising plays an important role in a wide range of applications such as image restoration, visual tracking, image registration, and image segmentation. While many algorithms have been proposed for the purpose of image denoising, the problem of image noise suppression remains an open challenge, especially in situations where the images are acquired under poor conditions where the noise level is very high.

There are two main types of noise in the image:

1. **Salt and Pepper Noise** : It has sparse light and dark disturbances.
"Pixels in the image are very different in color or intensity from their surrounding pixels; the defining characteristic is that the value of a noisy pixel bears no relation to the color of surrounding pixels. Generally this type of noise will only affect a small number of image pixels. When viewed, the image contains dark and white dots, hence the term salt and pepper noise.
<p align="center">
  <img width="250" height="300" src="https://www.bogotobogo.com/python/OpenCV_Python/images/Denoising/Salt_Pepper_Noise.png">
</p> 

2. **Gaussian noise**: Each pixel in the image will be changed from its original value by a (usually) small amount. A histogram, a plot of the amount of distortion of a pixel value against the frequency with which it occurs, shows a normal distribution of noise. While other distributions are possible, the Gaussian (normal) distribution is usually a good model, due to the central limit theorem that says that the sum of different noises tends to approach a Gaussian distribution.

<p align="center">
  <img width="300" height="300" src="https://www.bogotobogo.com/python/OpenCV_Python/images/Denoising/Gaussian-Noise.jpg">
</p> 

## 🉑**LIBRARIES USED**

### :question: **WHY MATPLOTLIB ?**
Matplotlib is a cross-platform, data visualization and graphical plotting library for Python and its numerical extension NumPy. 
As such, it offers a viable open source alternative to MATLAB. 
Developers can also use matplotlib's APIs (Application Programming Interfaces) to embed plots in GUI applications.

### :white_check_mark: **USAGE AND APPLICATIONS OF MATPLOTLIB**
The usage of matplotlib include:
1. Matplotlib is an amazing visualization library in Python for 2D plots of arrays.
2. Aids image processing.
3. Allows us visual access to huge amounts of data in easily digestible visuals.
4. Matplotlib consists of several plots like line, bar, scatter, histogram etc.

### :sparkles: **ADVANTAGES OF MATPLOTLIB**
The advantages of using matplotlib are as follows:
1. Simple and easy to grasp for beginners.
2. Easier to use for people who have had prior experience with Matlab or other graph plotting tools.
3. It provides high-quality images and plots in various formats such as png, pdf, pgf, etc.
4. Provides control to various elements of a figure such as DPI, figure colour, figure size.

### :question: **WHY OPENCV ?**
The cross-platform and open-source library plays a significant role when it comes to the growth of computer vision due to several intuitive factors. With its focus on real-time vision, this library assists students, professionals, and researchers in efficiently implementing computer vision projects, as it provides them with robust machine learning infrastructure which was previously available only in a few mature research labs. 

### :white_check_mark: **USAGE AND APPLICATIONS OF OPENCV**
The usage of OpenCV include:
  1. In-built data structures and input/output
  2. Building GUI
  3. 3D reconstruction
  4. Feature extraction
  5. Object detection

### :sparkles: **ADVANTAGES OF OPENCV**
The advantages of using OpenCV are as follows:
  1. First and foremost, OpenCV is available free of cost.
  2. Since OpenCV library is written in C/C++ it is quite fast.
  3. Low RAM usage (approx 60–70 mb).
  4. It is portable as OpenCV can run on any device that can run C.

## :dart: **THE GOAL OF THE NOISE REMOVAL**
One of the fundamental challenges in the field of image processing and computer vision is image denoising, where the underlying goal is to estimate the original image by suppressing noise from a noise-contaminated version of the image. 
Image noise may be caused by different intrinsic (i.e., sensor) and extrinsic (i.e., environment) conditions which are often not possible to avoid in practical situations.
Therefore, image denoising plays an important role in a wide range of applications such as image restoration, visual tracking, image registration, image segmentation, and image classification, where obtaining the original image content is crucial for strong performance.
While many algorithms have been proposed for the purpose of image denoising, the problem of image noise suppression remains an open challenge, especially in situations where the images are acquired under poor conditions where the noise level is very high.

<p align="center">
  <img width="350" height="300" src="https://uwaterloo.ca/vision-image-processing-lab/sites/ca.vision-image-processing-lab/files/uploads/images/hillbefore_1.jpg">
</p> 

## :information_source: **WORKFLOW OF THE CODE-**
<p align="center">
  <img width="500" height="300" src="https://user-images.githubusercontent.com/36481036/137946823-9dd245e8-c201-4fec-9677-d2780efd0155.png">
</p> 

## :thought_balloon: **PREREQUISITES**
All the dependencies and required libraries are included in the file <code>requirements.txt</code> [See here](./requirements.txt)

## :chart_with_upwards_trend:  **FINAL RESULT**
Using the test data, the image and the video were denoised as follows-
<p align="center">
  <img width="650" height="300" src="https://user-images.githubusercontent.com/36481036/137947466-fe8d62a6-8a97-48b3-97cc-13a274b084aa.png">
</p>
<p align="center">
  <img width="600" height="300" src="https://user-images.githubusercontent.com/36481036/137947473-277a4671-ff16-48e6-bd96-e849944defac.png">
</p>

## :page_facing_up: **CONCLUSION**
* Digital equipment can capture images at resolutions and with detail that far surpasses the human vision system. Computers can also detect and measure the difference between colors with very high accuracy. But making sense of the content of those images is a problem that computers have been struggling with for decades. To a computer, the above picture is an array of pixels, or numerical values that represent colors.

* Computer vision is the field of computer science that focuses on replicating parts of the complexity of the human vision system and enabling computers to identify and process objects in images and videos in the same way that humans do.

## :bust_in_silhouette: **CREDITS**
* https://opencv24-python-tutorials.readthedocs.io/en/latest/
* https://iq.opengenus.org/image-denoising-and-image-processing-techniques/
* https://uwaterloo.ca/vision-image-processing-lab/research-demos/image-denoising

## **:sunglasses:** **CREATOR**- https://github.com/theshredbox
