# Edges & Contours using OpenCV

## Video Link : [Edges & Contours using OpenCV](https://drive.google.com/file/d/1W6a9Ln1y-qml3Xjpy44DVi5ws_jIVgA_/view?usp=sharing)

- Contour detection is the process of joining all the continuous points along the boundary having same color intensity. Contour detection is a useful method for shape analysis in object detection and recognition. Whereas edge detection is the process of finding the boundaries/edges in images. But then the question is how is contour detection different from edge detection as both of them are ultimately used for determining the shape of an object.

- Contour detection is mainly used to determine the shape of closed objects as the process to find the contours is to check for the continuous points having same color intensity whereas edge detection is carried by detecting the change in the color intensity. Edge detection is carried out for whole image whereas contour detection is carried out only for the objects in the image.

## Edge Detection:
```
import cv2 
img = cv2.imread("path to image",0) 
edges = cv2.Canny(img,100,200) 
cv2.imshow("input_image", img) 
cv2.imshow("edge_detection", edges) 
cv2.waitKey(0)
```

- Import cv2 library
- Read the image in a variable. The arguments 0 in cv2.imread denotes that image should be read in grayscale format
- cv2.Canny function in opencv module is used for edge detection. The arguments are the image,threshold values(lower limit and upper limit).

![image](https://user-images.githubusercontent.com/63282184/143771811-e29b3675-85d6-4daf-ae76-eac330453f06.png)

## Contour Detection:

```
import cv2 
image = cv2.imread("path to image") 
image_copy = image 
image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB) gray = cv2.cvtColor(image, cv2.COLOR_RGB2GRAY) 
_, binary = cv2.threshold(gray, 225, 255, cv2.THRESH_BINARY_INV)
```

- Import cv2 library
- Read the image in a variable and make a copy of it for future use.
- Convert the image to RGB format using cv2.COLOR_BGR2RGB function and then to grayscale using cv2.COLOR_RGB2GRAY function
- Binary thresholding the grayscale image using cv2.threshold function. The input arguments are the grayscale image,threshold values and the thresholding technique to be used. cv2.THRESH_BINARY_INV is the thresholding technique in which if the pixel intensity is less than specified threshold value set to 255 else 0.
- cv2.findContours is used to detect the contours in the input image. The arguments are the input image,contour retrieval method and contour approximation method.
the output of this code is the contours which contains the co-ordinates of the detected objects & hierarchy which is used when to keep track of the object whose contours are being detected. Because in an image there might be more than one objects hence it is necessary to keep track of the relationship between the contours and the objects.
- Contour approximation method is used to specify how to store the co-ordinates of the objects. It is used to specify which co-ordinates to store and which to ignore.
- contour retrieval method specifies how to establish a relationship between the contours and the objects.

```
image = cv2.drawContours(image, contours, -1, (0, 255, 0), 2) 
cv2.imshow("input_image", image_copy) cv2.imshow("contour_detected_image", image) 
cv2.waitKey(0)
```

![image](https://user-images.githubusercontent.com/63282184/143771892-0f166132-6973-4773-8ca9-e069b02d9c5e.png)

## Conclusion: 

This is how contour detection and edge detection is done in opencv. Hope that now you have a clear understanding of it.

