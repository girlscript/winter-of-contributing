# Convert Images to Pencil Sketch using OpenCV

## Image used:
https://pixabay.com/photos/girl-portrait-hairstyle-redhead-919048/

## OpenCV:
OpenCV (Open Source Computer Vision Library) is an open source computer vision and machine learning software library. By using it, one can process images and videos to identify objects, faces, or even handwriting of a human. When it integrated with various libraries, such as NumPy, python is capable of processing the OpenCV array structure for analysis.

### Applications of OpenCV:
* Face recognition
* Object recognition
* Medical image analysis
* Video/image search
* Automated inspection and surveillance
* Street view image stitching
* Robot and driverless car navigation

### Features of OpenCV:
* Read, write, show images
* Capture and save videos
* Process images
* Object/feature detection
* Computational photography
* Machine Learning and clustering

## Workflow:
* Import OpenCV library
* Read and display an image using cv.imread and cv2_imshow functions respectively
* Convert image into gray using cvtColor function of OpenCV
* Invert gray image using bitwise_not function of OpenCV
* Blur the image using GaussianBlur function
* Invert the blurred image using bitwise_not function
* Obtain the final pencil sketch image using divide function between gray image and inverted blurred image

## Output:
![Screenshot (184)](https://user-images.githubusercontent.com/89564985/139662862-89a9b5e4-5d42-4b14-a110-2681905463b9.png)

## Summary:
Computer vision is a field of Artificial Intelligence that enables computers to extract important and meaningful information from images or videos. In this task, we saw how to convert an image into a pencil sketch using a computer vision library i.e. OpenCV.

#### References:
* https://analyticsindiamag.com/converting-image-into-a-pencil-sketch-in-python/
* https://www.geeksforgeeks.org/opencv-overview/
