# Image Contours with Open CV

## What are Contours?
Contours are defined as the line joining all the points along the boundary of an image that are having the same intensity. Contours come handy in shape analysis, finding the size of the object of interest, and object detection.

Typically, a specific contour refers to boundary pixels that have the same color and intensity. OpenCV makes it really easy to find and draw contours in images. It provides two simple functions:

1. findContours()
2. drawContours()

Also, it has two different algorithms for contour detection:

1. CHAIN_APPROX_SIMPLE
2. CHAIN_APPROX_NONE

We will cover these in detail, in the examples below. The following figure shows how these algorithms can detect the contours of simple objects.

![image](https://user-images.githubusercontent.com/62233992/137801760-f8189df3-a50b-48b3-932d-4b04fada0d1e.png)

Comparative image, input image and output with contours overlaid.

Now that you have been introduced to contours, let’s discuss the steps involved in their detection.

### Steps for Detecting and Drawing Contours in OpenCV

OpenCV makes this a fairly simple task. Just follow these steps:

1. **Read the Image and convert it to Grayscale Format**

  Read the image and convert the image to grayscale format. Converting the image to grayscale is very important as it prepares the image for the next step. Converting the image   to a single channel grayscale image is important for thresholding, which in turn is necessary for the contour detection algorithm to work properly.

2. **Apply Binary Thresholding**

  While finding contours, first always apply binary thresholding or Canny edge detection to the grayscale image. Here, we will apply binary thresholding.

  This converts the image to black and white, highlighting the objects-of-interest to make things easy for the contour-detection algorithm. Thresholding turns the border of the object in the image completely white, with all pixels having the same intensity. The algorithm can now detect the borders of the objects from these white pixels.

  **Note:** *The black pixels, having value 0, are perceived as background pixels and ignored.*

  At this point, one question may arise. What if we use single channels like R (red), G (green), or B (blue) instead of grayscale (thresholded) images? In such a case, the contour detection algorithm will not work well. As we discussed previously, the algorithm looks for borders, and similar intensity pixels to detect the contours. A binary image provides this information much better than a single (RGB) color channel  image. In a later portion of the blog, we have resultant images when using only a single R, G, or B channel instead of grayscale and thresholded images.

3. **Find the Contours**

  Use the **findContours()** function to detect the contours in the image.

4. **Draw Contours on the Original RGB Image.**

  Once contours have been identified, use the **drawContours()** function to overlay the contours on the original RGB image.

The above steps will make much more sense, and become even clearer when we will start to code.
