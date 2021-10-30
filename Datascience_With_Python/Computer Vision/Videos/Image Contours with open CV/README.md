# Image Contours with Open CV

## Link for the Video:

[![image](https://user-images.githubusercontent.com/62233992/139556665-61af3043-8f17-44d0-856e-b2b6e051e13b.png)](https://youtu.be/hKXle9w8g5M)

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

### Python Implementation

```ruby
import cv2
import numpy as np
  
# Let's load a simple image with 3 black squares
image = cv2.imread('C://Users//gfg//shapes.jpg')
cv2.waitKey(0)
  
# Grayscale
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
  
# Find Canny edges
edged = cv2.Canny(gray, 30, 200)
cv2.waitKey(0)
  
# Finding Contours
# Use a copy of the image e.g. edged.copy()
# since findContours alters the image
contours, hierarchy = cv2.findContours(edged, 
    cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)
  
cv2.imshow('Canny Edges After Contouring', edged)
cv2.waitKey(0)
  
print("Number of Contours found = " + str(len(contours)))
  
# Draw all contours
# -1 signifies drawing all contours
cv2.drawContours(image, contours, -1, (0, 255, 0), 3)
  
cv2.imshow('Contours', image)
cv2.waitKey(0)
cv2.destroyAllWindows()
```

**OUTPUT**

![image](https://user-images.githubusercontent.com/62233992/137803555-7fb15bb6-0f77-4b25-bb03-239fb09522c5.png)

We see that there are three essential arguments in cv2.findContours() function. First one is source image, second is contour retrieval mode, third is contour approximation method and it outputs the image, contours, and hierarchy. ‘contours‘ is a Python list of all the contours in the image. Each individual contour is a Numpy array of (x, y) coordinates of boundary points of the object.

**Contours Approximation Method –**

Above, we see that contours are the boundaries of a shape with the same intensity. It stores the (x, y) coordinates of the boundary of a shape. But does it store all the coordinates? That is specified by this contour approximation method.

If we pass **cv2.CHAIN_APPROX_NONE**, all the boundary points are stored. But actually, do we need all the points? For eg, if we have to find the contour of a straight line. We need just two endpoints of that line. This is what **cv2.CHAIN_APPROX_SIMPLE** does. It removes all redundant points and compresses the contour, thereby saving memory.

### Application of Contours in Computer Vision

Some really cool applications have been built, using contours for motion detection or segmentation. Here are some examples:

* **Motion Detection:** In surveillance video, motion detection technology has numerous applications, ranging from indoor and outdoor security environments, traffic control, behaviour detection during sports activities, detection of unattended objects, and even compression of video. In the figure below, see how detecting the movement of people in a video stream could be useful in a surveillance application. Notice how the group of people standing still in the left side of the image are not detected. Only those in motion are captured. Do refer to this paper to study this approach in detail.

![image](https://user-images.githubusercontent.com/62233992/137803992-2d039d6d-cf70-4a69-a7a5-1cfc2a221ff5.png)

An example of moving object detection, identifying the persons in motion. Note that the person standing still on the left is not being detected.

* **Unattended object detection:** Any unattended object in public places is generally considered as a suspicious object. An effective and safe solution could be: *(Unattended Object Detection through Contour Formation using Background Subtraction).*


* **Background / Foreground Segmentation:** To replace the background of an image with another, you need to perform image-foreground extraction (similar to image segmentation). Using contours is one approach that can be used to perform segmentation. Refer to this post for more details. The following images show simple examples of such an application:

![image](https://user-images.githubusercontent.com/62233992/137804198-e67407f7-a786-4c0c-bd44-255289c28ff3.png)

An example of simple image foreground extraction, and adding a new background to the image using contour detection.

## Conclusion

You started with contour detection, and learned to implement that in OpenCV. Saw how applications use contours for mobility detection and segmentation. Next, we demonstrated the use of four different retrieval modes and two contour-approximation methods. You also learned to draw contours. We concluded with a discussion of contour hierarchies, and how different contour-retrieval modes affect the drawing of contours on an image.

Key takeaways:

* The contour-detection algorithms in OpenCV work very well, when the image has a dark background and a well-defined object-of-interest. 
* But when the background of the input image is cluttered or has the same pixel intensity as the object-of-interest, the algorithms don’t fare so well.

You have all the code here, why not experiment with different images now! Try images containing varied shapes, and experiment with different threshold values. Also, explore different retrieval modes, using test images that contain nested contours. This way, you can fully appreciate the hierarchical relationships between objects.
