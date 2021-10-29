# **Introduction to OpenCV Library**

## [Click this to listen to the audio](https://drive.google.com/file/d/1t2ojGhGJ9a8wnA5_lgS4qhlTS3VsRMm2/view?usp=sharing)


## Outline
*  Introduction
*  How OpenCV works
*  Installation of OpenCV
*  Sample and basic tasks to give overview of OpenCV
*  Features of OpenCV
*  Resources and References
*  Summary

## Introduction

OpenCV is a cross-platform library using which we can develop real-time computer vision applications. It mainly focuses on image processing, video capture and analysis including features like face detection and object detection.
When it integrated with various libraries, such as NumPy, python is capable of processing the OpenCV array structure for analysis. To Identify image pattern and its various features we use vector space and perform mathematical operations on these features. 

![Computer vision](https://th.bing.com/th/id/OIP.nW1KlCH9L_GP90gH8YXzNwHaEA?w=326&h=180&c=7&r=0&o=5&dpr=1.5&pid=1.7)

## How OpenCV works

A pixel is the smallest unit of a digital image or graphics that can be displayed and represented on a digital display device.
The picture intensity at the particular location is represented by the numbers. In the above image, we have shown the pixel values for a grayscale image consist of only one value, the intensity of the black color at that location.
There are two common ways to identify the images:
1. Grayscale
Grayscale images are those images which contain only two colors black and white. The contrast measurement of intensity is black treated as the weakest intensity, and white as the strongest intensity. When we use the grayscale image, the computer assigns each pixel value based on its level of darkness.
2. RGB
An RGB is a combination of the red, green, blue color which together makes a new color. The computer retrieves that value from each pixel and puts the results in an array to be interpreted.

![rgb pixels](https://static.packt-cdn.com/products/9781783984244/graphics/4244OS_01_05.jpg)

## Installation of OpenCV

The first step is to download the latest Anaconda graphic installer for Windows from it official site. Choose your bit graphical installer. You are suggested to install 3.7 working with Python 3.
Choose the graphical bit installer
After installing it, open the Anaconda prompt and type the following command.
```
conda install -c conda-forge opencv  
```
Press the Enter button and it will download all the related OpenCV configuration.

 ### Install OpenCV in the Windows via pip

 OpenCV is a Python library so it is necessary to install Python in the system and install OpenCV using pip command:
 ```
 pip install opencv-contrib-python --upgrade  
 ```
 We can install it without extra modules by the following command:
 ```
 pip install opencv-python 
 ```
 Open the command prompt and type the following code to check if the OpenCV is installed or not.
 ```
 import cv2
 print(cv2.__version__)
 ```

![install OpenCV](https://th.bing.com/th/id/OIP.jQTLg2Y1KtQ1h_NI7wQ8RwHaD-?w=307&h=180&c=7&r=0&o=5&dpr=1.5&pid=1.7)

 For further installation in operating systems, refer to the resources link.

## Sample and basic tasks to give overview of OpenCV


* Reading an image

```python
# Importing the OpenCV library
import cv2
# Reading the image using imread() function
image = cv2.imread('image.png')

# Extracting the height and width of an image
h, w = image.shape[:2]
# Displaying the height and width
print("Height = {}, Width = {}".format(h, w))
```

* Extracting the RGB values of a pixel

```python
# Extracting RGB values. 
# Here we have randomly chosen a pixel
# by passing in 100, 100 for height and width.
(B, G, R) = image[100, 100]
  
# Displaying the pixel values
print("R = {}, G = {}, B = {}".format(R, G, B))
  
# We can also pass the channel to extract 
# the value for a specific channel
B = image[100, 100, 0]
print("B = {}".format(B))
```
## Features of OpenCV

Using OpenCV library, you can −

1. Read and write images
2. Capture and save videos
3. Process images (filter, transform)
4. Perform feature detection
5. Detect specific objects such as faces, eyes, cars, in the videos or images.
6. Analyze the video, i.e., estimate the motion in it, subtract the background, and track objects in it.

## Resources and References
* https://www.geeksforgeeks.org/introduction-to-opencv/
* https://www.javatpoint.com/opencv
* https://www.tutorialspoint.com/opencv/opencv_overview.htm
* https://www.geeksforgeeks.org/opencv-overview/
* https://www.javatpoint.com/opencv-installation
* https://th.bing.com/th/id/OIP.nW1KlCH9L_GP90gH8YXzNwHaEA?w=326&h=180&c=7&r=0&o=5&dpr=1.5&pid=1.7
* https://static.packt-cdn.com/products/9781783984244/graphics/4244OS_01_05.jpg
* https://th.bing.com/th/id/OIP.jQTLg2Y1KtQ1h_NI7wQ8RwHaD-?w=307&h=180&c=7&r=0&o=5&dpr=1.5&pid=1.7

## Summary

I hope you learned some basics of OpenCV library. It’s really helpful for computer vision applications.We can implement it to enhance our projects and integrate more sophisticated variations in our learning.



