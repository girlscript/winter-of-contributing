# Convert Images to Pencil Sketch using OpenCV

## Image used:
https://pixabay.com/photos/girl-portrait-hairstyle-redhead-919048/

## OpenCV:
OpenCV (Open Source Computer Vision Library) is an open source computer vision and machine learning software library. By using it, one can process images and videos to identify objects, faces, or even handwriting of a human. When it integrated with various libraries, such as NumPy, python is capable of processing the OpenCV array structure for analysis.

### Applications of OpenCV:
* Face detection
* Face recognition
* Object detection
* Medical image analysis
* Video/image search
* Automated inspection and surveillance
* Street view image stitching
* Robot and driverless car navigation

### Features of OpenCV:
* Open Source i.e. the source code is publicly available.
* Fast speed
* Easy to integrate

### Basic functions of OpenCV:
* Read images
  > img = cv2.imread('path_to_image')

* Write images (used to save an image to any storage device)
  > cv2.imwrite(filename, img)

* Display images
  > from google.colab.patches import cv2_imshow <br>
  > cv2_imshow(img)

* cvtColor (used to convert an image from one color space to another)
  > cv2.cvtColor(img,cv2.COLOR_BGR2RGB)<br>

  In this case we are converting image from BGR format to RGB format<br>
  You can also convert it into GRAY, HSV, YUV, etc.

* Resize image
  > cv2.resize(image, dimension, interpolation = cv2.INTER_AREA)

* Rotate an image
  > rotationMatrix = cv2.getRotationMatrix2D((width/2, height/2), 90, 1) 
    rotatedImage = cv2.warpAffine(img, rotationMatrix, (width, height))
    cv2_imshow(rotatedImage)

## Workflow:
* Import OpenCV library.
* Read and display an image using cv.imread and cv2_imshow functions respectively.
* STEP 1: Convert image into gray image using cvtColor function of OpenCV.<br>
  Gray image: converting an image from other color spaces e.g. RGB, CMYK, HSV, etc. to shades of gray. A grayscale image has only 1 channel where the channel represents dimension.
* STEP 2: Invert (negative) gray image using bitwise_not function of OpenCV.<br>
  A negative of the image can also be obtained by inverting the grayscale value of every pixel. Since by   default grayscale values are represented as integers in the range [0,255] the inverse of a        grayscale value x is simply 255-x.
* STEP 3: Blur the image using GaussianBlur function.<br>
  A Gaussian blur is an effective way to both reduce noise and reduce the amount of detail in an image.
* STEP 4: Invert the blurred image using bitwise_not function.
* STEP 5: Obtain the final pencil sketch image using divide function between gray image and inverted blurred image.

## Output:
![Screenshot (184)](https://user-images.githubusercontent.com/89564985/139662862-89a9b5e4-5d42-4b14-a110-2681905463b9.png)

## Summary:
Computer vision is a field of Artificial Intelligence that enables computers to extract important and meaningful information from images or videos. In this task, we saw how to convert an image into a pencil sketch using a computer vision library i.e. OpenCV.

#### References:
* https://analyticsindiamag.com/converting-image-into-a-pencil-sketch-in-python/
* https://www.geeksforgeeks.org/opencv-overview/
