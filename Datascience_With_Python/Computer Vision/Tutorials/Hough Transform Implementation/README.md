<h1 align="left">Hough Transform Implementation</h1>

The Hough transform can be used to detect lines, circles or other parametric curves. It was introduced in 1962 (Hough 1962) and first used to find lines in images a decade later (Duda 1972).The main goal is to find the location of lines in images. It can give robust detection under noise and partial occlusion. 

## Brief Summary:
A brief summary of what this entails:
* Standard Hough Line Transform implementation.
* Probabilistic Hough Line Transform implementation.
* Hough Circle Transform implementation.

# Description:
## **EDGE:**
>The edges detected by various edge detection operators are not continuous. This could be due to non uniform illumination,noise or spurious edge points. There are two approaches to link the edges: 
>* Local processing, 
>* Global processing.

## **LOCAL PROCESSING APROACH:**
> An edge detected image is taken as input. Each pixel in small neighbourhood of (x. y) is analyzed and its similar neighbours (x' , y') are found. The similarity is measured by strength of the response of gradient operators and direction of the gradient. Points distance apart to (x , y) cannot be linked. The points (x , y) and(x' , y') are similar if:

<img align = center>![image](https://user-images.githubusercontent.com/66793093/143783121-60777790-b9bb-4007-9506-8c562dff8651.png)
</img>

## **GLOBAL PROCESSING APROACH:**
> Hough transform can detect lines, circles, ellipses, or other curves if their parametric equations are known. The problem of edge point detection can be solved by morphology and a linear structuring element, or by correlation but rotation, scaling, and distortion needs to be handled.
Input to the Hough transform is a thesholded edge image. There are n pixels that partially define boundary of some objects

# **BASIC IDEA BEHIND HOUGH LINE TRANSFORM:**

A line in image space can be expressed using two variables:

1. Cartesian coordinate form: (Equation 1)

![image](https://user-images.githubusercontent.com/66793093/143783440-83ef9ea4-16bf-49fd-bce6-b8718590095e.png)

2. Polar Coordinate form: (Equation 2)

![image](https://user-images.githubusercontent.com/66793093/143783529-d349b00b-0ebb-43a5-8e7d-e4dbdf53a41b.png)

The polar coordinate form can be re-written similar to equation 1 as:

![image](https://user-images.githubusercontent.com/66793093/143784555-d4907df8-e7c6-423c-af32-d92ec13a8b40.png)

![image](https://user-images.githubusercontent.com/66793093/143784910-55554a5f-ef93-4376-8d76-329d93e24496.png)

 r is the perpendicular distance from the origin to the line and
 Θ is the angle formed by this perpendicular line

A line in the (x,y) space still corresponds to a point in the (r, Θ) space. But a point in the (x,y) space is now equivalent to a sinusoidal curve in the (r, Θ) space.

![image](https://user-images.githubusercontent.com/66793093/143785310-5eaba5c3-abca-48e5-8c98-0a29b39abd86.png)

To find the point of intersection, Hough transform uses a voting method. In this, first, the parameter space (r, Θ) is discretized into bins called an accumulator. Then for each edge pixel, the r value corresponding to each Θ value is calculated. And corresponding to each (r, Θ) value obtained,the count of that (r, Θ) accumulator cell is increased. Then the bins with the highest value is found.

![image](https://user-images.githubusercontent.com/66793093/143785367-75c4b5b3-b3aa-4951-991b-39937c12a9ea.png)

## **OpenCV:**
>OpenCV finds the lines in a binary image taking as input the binary image, the size of the accumulator, the threshold value and outputs the array of (r, Θ) values. There are two ways of Hough Line Implementation:
>* The Standard Hough Line Transform - In OpenCV it is implemented with the function HoughLines()
>* The Probabilistic Hough Line Transform - In OpenCV it is implemented with the function HoughLinesP() 

### **WORKFLOW:**

The workflow is same for both the types:
* Input the image.
* Find the edges in the image using canny detector.
* Apply the function HoughLines() or HoughLinesP() for detecting points.
* Draw lines through the detected points.

### **OUTPUT IMAGE:**

![image](https://user-images.githubusercontent.com/66793093/143815555-e7d11f7c-2b06-4941-83ed-449e9b72027c.png)<img/>

![image](https://user-images.githubusercontent.com/66793093/143816078-6ce730b6-59f3-45a2-ba4d-b3bc94cd8a88.png)<img/>


# **BASIC IDEA BEHIND HOUGH CIRCLE TRANSFORM:**

In parametric form Circle can be expressed as:
x = a + rcosΘ
y = b + rsinΘ

Similarly in ab space it can be expressed as:
a = x' - rcosΘ
b = y' - rsinΘ

This is equivalent to circle with center (x',y')

![image](https://user-images.githubusercontent.com/66793093/143786009-b2af23f7-9740-489d-b023-211aa3089e9f.png)

First circles are drawn in the ab space corresponding to each edge point. Then the point of intersection which will correspond to the original circle center is found.
A sparsity problem would occur because only a few accumulator cells would be filled. So, to overcome this, OpenCV uses a method known as the Hough gradient method.

## **OpenCV:**
>In OpenCV it is implemented with the function HoughCircles().

### **WORKFLOW:**

* Input the image.
* Convert it to grayscale
* Smoothen the image by blurring (median blur/ Gaussian blur)
* Apply the function HoughCircles for detecting circles.
* Draw a outer circle on the detected circles.

### **OUTPUT IMAGE:**

![image](https://user-images.githubusercontent.com/66793093/143821205-509178ae-1662-46e3-a6ef-650adaeb3f78.png)

# **ADVANTAGES:**

* Conceptually simple.
* Easy implementation.
* Handles missing and occluded data very gracefully.
* Can be adapted to many types of forms, not just lines.

# **DISADVANTAGES:**

* Computationally complex for objects with many parameters.
* Looks for only one single type of object.
* Can be “fooled” by “apparent lines”.
* The length and the position of a line segment cannot be determined.
* Co-linear line segments cannot be separated.

## **References:**

* https://www.geeksforgeeks.org/line-detection-python-opencv-houghline-method/
* https://docs.opencv.org/2.4/modules/imgproc/doc/feature_detection.html?highlight=houghcircles#houghlines
* https://docs.opencv.org/3.4/d4/d70/tutorial_hough_circle.html
* https://datahacker.rs/opencv-circle-detection-hough-transform/
* https://docs.opencv.org/2.4/modules/imgproc/doc/feature_detection.html?highlight=houghcircles#houghcircles
