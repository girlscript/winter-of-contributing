# Blurring and Smoothing images with open CV
Hello all 👋, In this tutorial, you will learn about smoothing and blurring of images with OpenCV along with the Code Sample & Examples, but before starting this make sure you know Python Programming Language. 

# Purpose of Smoothing and Blurring
Images may contain various types of noises that reduce the quality of the image. Blurring or smoothing is the technique for reducing the image noises and improve its quality. Usually, it is achieved by convolving an image with a low pass filter that removes high-frequency content like edges from the image.

Smoothing and blurring is one of the most important preprocessing steps in all of computer vision and image processing. By smoothing an image prior to applying techniques such as edge detection or thresholding we are able to reduce the amount of high-frequency content, such as noise and edges
Furthermore, this allows us to focus on the larger structural objects in the image.
we’ll be discussing the four main smoothing and blurring options that you’ll often use in your own projects:
* Simple average blurring
* Gaussian blurring
* Median filtering
* Bilateral filtering

# Average blurring
An average filter takes an area of pixels surrounding a central pixel, averages all these pixels together, and replaces the central pixel with the average.
By taking the average of the region surrounding a pixel, we are smoothing it and replacing it with the value of its local neighborhood. This allows us to reduce noise and the level of detail, simply by relying on the average.

Let’s go ahead and define a 3*3 average kernel that can be used to blur the central pixel with a 3 pixel radius:

![Image](https://github.com/harichandana1406/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Computer%20Vision/Tutorials/Blurring%20and%20Smoothing%20images%20with%20open%20CV/Images/kernel.png)\
Averaging of the image is done by applying a convolution operation on the image with a normalized box filter. In convolution operation, the filter or kernel slides across an image and the average of all the pixels is found under the kernel area and replaces this average with the central element of the image.\
**Note: The smoothing of an image depends upon the kernel size. If Kernel size is large then it removes the small feature of the image. But if the kernel size is too small then it is not able to remove the noise.**
>### Syntax
>**cv2.blur(src, ksize, dst, anchor, borderType)**

# Gaussian Blur
Gaussian blurring is similar to average blurring, but instead of using a simple mean, we are now using a weighted mean, where neighborhood pixels that are closer to the central pixel contribute more “weight” to the average.Gaussian smoothing is used to remove noise that approximately follows a Gaussian distribution.
The end result is that our image is less blurred, but more “naturally blurred,” than using the average method.\
In the gaussian blur technique, the image is convolved with a gaussian filter instead of a box or normalized filter. The Gaussian blur OpenCV function has the following syntax.
>### Syntax
>**cv2.GaussianBlur( src, dst, size, sigmaX, sigmaY = 0, borderType =BORDER_DEFAULT)**

# Median Filter
The median filter technique is very similar to the averaging filtering technique shown above. The only difference is cv2.medianBlur() computes the median of all the pixels under the kernel window and the central pixel is replaced with this median value instead of the average value.\
**Note: This is highly effective in removing salt-and-pepper noise.**\
Median Blurring always reduces the noise effectively because in this filtering technique the central element is always replaced by some pixel value in the image. But in the above filters, the central element is a newly calculated value which may be a pixel value in the image or a new value.
>### Syntax
>**cv2.medianBlur( src,dst,ksize )**

# Bilateral Filter
A bilateral filter is a non-linear, edge-preserving, and noise-reducing smoothing filter for images. It replaces the intensity of each pixel with a weighted average of intensity values from nearby pixels. This weight can be based on a Gaussian distribution. 
The main property of Bilateral Filtering is that it does not do averaging across edges. That is why it is also called an edge-preserving filter.
The important point which is considered in Bilateral filtering is that the two pixels are close to each other not only if they occupy nearby spatial locations but also if they have some similarity in the photometric range. These properties of bilateral filtering overcome the drawback of other techniques like Averaging Blur, Gaussian Blur, and Median Blur since it is able to preserve edges.
>### Syntax
>**cv2.bilateralFilter ( src, dst, d, sigmaColor,sigmaSpace, borderType = BORDER_DEFAULT )**

# Advantages of OpenCV Blur (Image Smoothing)
* It removes low-intensity edges. Smoothing reduces noise, giving us (perhaps) a more accurate intensity surface
* It helps in smoothing the image.
* It is beneficial in hiding the details; for example, blurring is required in many cases, such as police intentionally want to hide the victim's face.

# Conclusion
Blurring is an example of applying a low-pass filter to an image. In computer vision, the term “low-pass filter” applies to removing noise from an image while leaving the majority of the image intact. A blur is a very common operation we need to perform before other tasks such as edge detection.In fact, smoothing and blurring is one of the most common preprocessing steps in computer vision and image processing.

