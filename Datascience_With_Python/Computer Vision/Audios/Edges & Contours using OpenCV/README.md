## Edges & Contours using OpenCV
## [Click here to listen the audio](https://drive.google.com/file/d/1wySG8CVecXl0Lmk6SkP0_5Yl_SnA1J4E/view?usp=sharing)

- Image Edge Detection Operators in Digital Image Processing.
- Edges are significant local changes of intensity in a digital image. 
- An edge can be defined as a set of connected pixels that forms a boundary between two disjoint regions. 
- There are three types of edges: 
    - Horizontal edges
    - Vertical edges
    - Diagonal edges
- Edge Detection is a method of segmenting an image into regions of discontinuity.
- It is a widely used technique in digital image processing like:
    - pattern recognition
    - image morphology
    - feature extraction
- Edge detection allows users to observe the features of an image for a significant change in the gray level. 
- This texture indicating the end of one region in the image and the beginning of another. 
- It reduces the amount of data in an image and preserves the structural properties of an image. 

![image](https://user-images.githubusercontent.com/79050917/144031807-b5ad8bfd-4217-42bf-a740-2c757447fa4e.png)

**Edge Detection Operators are of two types:** 
    - Gradient – based operator which computes first-order derivations in a digital image like, Sobel operator, Prewitt operator, Robert operator
    - Gaussian – based operator which computes second-order derivations in a digital image like, Canny edge detector, Laplacian of Gaussian 
- Contour detection is the process of joining all the continuous points along the boundary having same color intensity. 
- Contour detection is a useful method for shape analysis in object detection and recognition. 
- Whereas edge detection is the process of finding the boundaries/edges in images. 
- But then the question is how is contour detection different from edge detection as both of them are ultimately used for determining the shape of an object.

![image](https://user-images.githubusercontent.com/79050917/144031830-a948e2f6-befb-4e0a-aae2-0005dffd8c69.png)

**Contours:**
- When we join all the points on the boundary of an object, we get a contour. 
- Typically, a specific contour refers to boundary pixels that have the same color and intensity. 
- OpenCV makes it really easy to find and draw contours in images. 
- It provides two simple functions:
     - findContours()
     - drawContours()
- Also, it has two different algorithms for contour detection:
     - CHAIN_APPROX_SIMPLE
     - CHAIN_APPROX_NONE

![image](https://user-images.githubusercontent.com/79050917/144031897-ba80821e-d9d2-44a7-88e0-3b5c3d78f437.png)

**Difference between contour detection & edge detection:**
- Contour detection is mainly used to determine the shape of closed objects as the process to find the contours is to check for the continuous points having same color intensity whereas edge detection is carried by detecting the change in the color intensity. 
- Edge detection is carried out for whole image whereas contour detection is carried out only for the objects in the image.

**Advantages and disadvantages:**
![image](https://user-images.githubusercontent.com/79050917/144030766-5a9f5eb2-2521-4e36-a927-96fe874484c5.png)

**Overview:**
- The contour-detection algorithms in OpenCV work very well, when the image has a dark background and a well-defined object-of-interest. 
- But when the background of the input image is cluttered or has the same pixel intensity as the object-of-interest, the algorithms don’t fare so well.
