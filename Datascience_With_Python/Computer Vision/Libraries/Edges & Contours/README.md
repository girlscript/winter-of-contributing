## Edges & Contours using OpenCV

## Introduction :

Contour detection is the process of joining all the continuous points along the boundary having same color intensity. Contour detection is a useful method for shape analysis in object detection and recognition. Whereas edge detection is the process of finding the boundaries/edges in images.Then there's the matter of how contour detection differs from edge detection, as both are eventually employed to determine an object's shape.

## Edge Detection

### Types of Edges

- Horizontal edges
- Vertical edges
- Diagonal edges

### Advantages of Edges detection

It helps define the boundaries between regions in an image which helps with segmentation and object recognition.It can show where the shadow falls on an image or any other distinct change in intensity of the image.It is fundamental for low level image processing and good edges are needed for high level image processing.

### Important Techniques for edge Detection

### Sobel Operator

The sobel is one of the most commonly used edge detectors. It is based on convolving the image with a small, separable, and integer valued filter in horizontal and vertical direction and is therefore relatively inexpensive in terms of computations. The Sobel edge enhancement filter has the advantage of providing differentiating (which gives the edge response) and smoothing (which reduces noise) concurrently.

### Laplacian Operator

Laplacian Operator is also a derivative operator which is used to find edges in an image. It is a second order derivative mask. In this mask we have two further classifications one is Positive Laplacian Operator and other is Negative Laplacian Operator.

Unlike other operators Laplacian didn’t take out edges in any particular direction but it takes out edges in following classification.

- Inward Edges
- Outward Edges

### Canny Operator

Canny Edge Detection is used to detect the edges in an image. It uses a multistage algorithm and returns a gray image as the output.

The basic steps involved in this algorithm are:

- Noise reduction using Gaussian filter

- Gradient calculation along the horizontal and vertical axis

- Non-Maximum suppression of false edges

- Double thresholding for segregating strong and weak edges

- Edge tracking by hysteresis

![edge detection photo](https://user-images.githubusercontent.com/84470487/134045699-664cd380-e274-4974-8679-8b08a4871435.png)

### Applications of Edge Detection

- pattern recognition
- image morphology
- feature extraction

### Contour Detection

Contours detection is a process can be explained simply as a curve joining all the continuous points (along with the boundary), having same colour or intensity. The contours are a useful tool for shape analysis and object detection and recognition.

Characteristics of Contours
Must close on themselves, on or off the map.
Perpendicular to the direction of max. ...
Slope between them is assumed uniform.
The distance between them indicates the steepness of the slope, gentle or steep.
Irregular signify rough, smooth signify gradual slopes.

### Advantages of Contour detection

contour detection is helpful in open cv, not only because of the obvious aspect of detecting contours of subjects contained in an image or video frame, but because of the derivative operations connected with identifying contours.

These operations are, namely computing bounding polygons, approximating shapes, and, generally, calculating regions of interest, which considerably simplifies the interaction with image data. This is because a rectangular region with numpy is easily defined with an array slice. Contour detection will be helpful for object detection (including faces) and object tracking.

<img width="329" alt="Screenshot 2021-09-20 at 10 50 09 PM" src="https://user-images.githubusercontent.com/84470487/134045853-146806e8-7530-4460-8924-6ac9fa4c8f53.png">

### Application of Contours

- Motion Detection
- Unattended object detection (Suspicious Objects),
- Background / Foreground Segmentation .

### Difference between contour detection & edge detection:

The aim of Contour detection is surrounded by the determination of shapes of closed objects particularly because for the continual points having the same color intensity the method to find out the contours is to ascertain whereas edge detection is carried by detecting the change within the color intensity. Edge detection is administered for the whole image whereas contour detection is administered just for the objects within the image.

### Conclusion

The article tells us about edge and contour detection and various ways of performing edge and contour detection and it also tells us about their importance through various applications and their differences. As edge detection and contour detection are useful for detecting images and boundaries it plays an important role for object detection so learning this technique will always be useful when you want to find out about different patterns.For edge using canny edge detector would be most optimal as it is less error prone when compared to other edge detection algorithms.With the help of contours it is easier for a forensic scientist to find the differences in patterns between the images. Having such techniques in our disposal makes our lives easier as some differences may not be visible to us, but with help of these techniques we can accurately judge the changes.
