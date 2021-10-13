# Detection of Bright Spots in Images

## Introduction
Computer vision is a field of computer science that focuses on replicating parts of the complexity of the human vision system and enabling computers to identify and process objects in images and videos in the same way that humans do. Thanks to the advances in artificial intelligence and innovations in deep learning and neural networks. The field has been able to take great leaps in recent years and has been able to surpass humans in some tasks related to detecting and labeling objects.

In this project I have detected the bright spot(s) present on an Image. The whole project was done in Python programming language on Google Colab. 

## Purpose
The main task was to separate the bright regions in an image from the dark. For that, after we load the image, we will do some pre-processing. Further, we will label the regions of the image based on their pixel values. Finally we will draw the contours to check if our task was successful. We will now see these steps in detail.  

## Applications
- Can be used in hospitals (Specially eye hospitals) where we can use this algorithm to detect the central retinal vein; as that area is more bright compared to rest.
- Can be used by smart vehicles to detect any sort of bright flashes (Example: street lights).
- Can we used for analysis of images recieved from space (Example: Computationally find craters on moon etc.)

## Advantages
- Reduces human intervension in most of the applications. 
- Saves a lot of time and memory for further analysis.
- Practically can somehow help in reducing accidents (For example, if the self driving car can detect streetlights, it can function more smoothly) 

## Libraries used
- **OpenCV-Python:** OpenCV (Open Source Computer Vision Library) is used in most of the real-time computer vision projects. Here too we have used OpenCV's functions from reading the image, pre-processing it, drawing the contours to showing the final image. 
- **imutils:** After finding the contours using OpenCV's function, we use imutil's grab_contours(). 
- **skimage:** We have used skimage's measure() to perform connected component labeling, i.e, to label the regions on the image. 
- **numpy:** numpy is imported as np here to mainly initialize all array elements to value - zero. numpy is also used in this project to find the unique labels present in All_labels. 

The library versions used for successful implementation of the project is given in [requirements.txt](requirements.txt). 

## Flowchart
![Flowchart](https://user-images.githubusercontent.com/51737416/136396367-f24aaada-d1bc-4f56-910b-eccbed9a4ded.jpg)

## Implementation
### Image pre-processing:
Read the image stored in local system using OpenCV's function 
```py
img = cv2.imread('/content/Single.jpg') 
```
<img src="https://user-images.githubusercontent.com/51737416/136415489-18241458-df13-43b3-a7c0-27e3b4fce54f.png" width=20% height=20%>

Convert the coloured image to gray scaled. By doing so, we are normalizing the range of pixel values. The image also gets more sharppened by this process. 
```py
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
```
<img src="https://user-images.githubusercontent.com/51737416/136416279-fbb4ffdd-da25-4af7-896e-524a556c0c8a.png" width=20% height=20%>

To remove the high frequency noise (or) other noise present on the image, we smoothen the image. For that, in this project we are using Gaussian filter of size (11,11). OpenCV's GaussianBlur() function is used to perform this action. 
```py
blur = cv2.GaussianBlur(gray, (11, 11), 0)
```
<img src="https://user-images.githubusercontent.com/51737416/136416366-6601c29f-73a3-4b9a-a010-ac2e78c18082.png" width=20% height=20%>

Thresholding is a segmentation process with which we are separating the bright parts from the dark regions of the image in this project. cv2.threshold() is used for this process and it actually plays a big role here. 
```py
thresh = cv2.threshold(blur, 200, 255, cv2.THRESH_BINARY)[1]
```
<img src="https://user-images.githubusercontent.com/51737416/136416447-1213bbe0-af19-48d9-aac0-c6202e8c33b3.png" width=20% height=20%>

To get the best results, we perform erosions and dilations on the thresholded image. Erosion is an operation that diminishes the size of the foreground object. It erodes away the boundary of the foreground object, just like how soil erosion takes place. 
```py
thresh1 = cv2.erode(thresh, None, iterations=2) 
```
<img src="https://user-images.githubusercontent.com/51737416/136416533-08489297-758c-4cbf-9e1d-684d4ad9d926.png" width=20% height=20%>

Dilation increases the object area and is used to accentuate the features. cv2.dilate() is used to perform this morphological process. 
```py
thresh2 = cv2.dilate(thresh1, None, iterations=4)
```
<img src="https://user-images.githubusercontent.com/51737416/136416606-e860e858-49bf-42f6-9996-1d1f7d944d94.png" width=20% height=20%>

### Label the regions on the image:
We use skimage's measure() to perform this task. Connected Component Labeling (CCL), also known by the names- Connected Component Analysis, Blob Extraction, Region Labeling etc. is actually an application of graph theory (using mathematics), where the subsets of connected components are uniquely labeled based on a given heuristic. The mask defined here stores only large component. In this code block, if the region refers to the dark background, its corresponding label is assigned as zero. 
```py
All_labels = measure.label(thresh2, connectivity=2, background=0) #Perform connected component labeling
mask = np.zeros(thresh2.shape, dtype="uint8") #Mask: Store only the large components
for label in np.unique(All_labels):
if label == 0:   #Background: Dark
  continue
```
After constructing the label-mask, count the number of pixels. Further classify the region as large bright region if it is. 
```py
#Construct the mask label and count the #Pixels 
label_mask = np.zeros(thresh2.shape, dtype="uint8")
label_mask[All_labels == label] = 255
Pixels = cv2.countNonZero(label_mask)
if Pixels > 300:
  mask = cv2.add(mask, label_mask)  #Large bright region
```
<img src="https://user-images.githubusercontent.com/51737416/136422379-f39d1c35-e812-4881-8f92-beb0cfce0124.png" width=20% height=20%>

### Find the contours in the mask and display the final output image:
OpenCV's and imutil's functions are used to find the contours present in the image. Contours refer to the line joining all the points along the boundary of an image which have the same intensity throughout. 
```py
#Find the contours in the mask
count = cv2.findContours(mask.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
count = imutils.grab_contours(count)
count = contours.sort_contours(count)[0]  #Sort them from left to right

#Draw the bright spot(s) on the image
for (i, c) in enumerate(count):
  (x, y, w, h) = cv2.boundingRect(c)
  ((cX, cY), radius) = cv2.minEnclosingCircle(c)
  cv2.circle(img, (int(cX), int(cY)), int(radius),(0, 0, 255), 3)
```
Even to display the output image, we use cv2's imshow() funtion.  
```py
#Show the bright spots detected image 
cv2_imshow(img)
cv2.waitKey(0)
```
<img src="https://user-images.githubusercontent.com/51737416/136422765-1e27e6f8-ec91-46f0-bf9e-afdec4f31e63.png" width=30% height=30%>
Here, we can see red circles (contours) displayed over the bright region (spot(s)) of the image. 

## Conclusion
The whole project was based on analysing the image after separating bright pixels from dark pixels. To detect the bright regions in an image, we have first loaded our image. Further, it was converted to grayscale and smoothened using Gaussian filter. By smoothening, we are actually blurring the image so that high frequency noise reduces. We then perform thresholding followed by series of erosions and dilations. Connected Componenet analysis is then performed to label the regions on the image. Once we get to know the bright and dark areas on an image, we will draw the contours on it for us to visualize. 

Let us execute and try if the program will work successfully in case there are multiple bulbs on the image:

```py
detect_bright_spots('/content/Multiple.jfif')
```
<img src="https://user-images.githubusercontent.com/51737416/136401261-832bc388-93c2-4bb0-b42e-b3396eaa779d.png" width=40% height=40%>

Yes, the program is working fine even in cases where there are multiple bright spots.

## References
### Code Reference:
- [OpenCV Python Documentation](https://buildmedia.readthedocs.org/media/pdf/opencv24-python-tutorials/latest/opencv24-python-tutorials.pdf)
- [Gaussian Blur](https://appdividend.com/2020/09/19/python-cv2-filtering-image-using-gaussianblur-method/)
- [Threshold](https://www.datasciencelearner.com/cv2-threshold-method-implementation-python/#:~:text=Steps%20to%20Implement%20cv2%20threshold%20in%20python%20Step,convert%20the%20color%20image%20into%20the%20grey%20image.)
- [Contours](https://docs.opencv.org/4.5.3/d4/d73/tutorial_py_contours_begin.html)
- [imutils](https://github.com/PyImageSearch/imutils)
- [Connected-component Labeling](https://cvexplained.wordpress.com/2020/06/17/connected-component-labeling/#:~:text=Connected-component%20labeling%20%28also%20known%20as%20connected-component%20analysis%2C%20blob,connectivity%20of%20%E2%80%9Cblob%E2%80%9D-like%20regions%20in%20a%20binary%20image.)
### Image Reference:
- [Single bulb](https://i2.wp.com/business-ethics.com/wp-content/uploads/2011/09/EarthTalkBULB.jpg)
- [Multiple bulbs](https://th.bing.com/th/id/R.237ea46e9d6b6f018ba43b9fdbd0e7e7?rik=cx5ktGDWsCdkvg&riu=http%3a%2f%2fi.ebayimg.com%2fimages%2fi%2f321747267106-0-1%2fs-l1000.jpg&ehk=LPh77U2i6xxuiUnoikMPOEJG2Cu6hE3rLVGLGQumSC4%3d&risl=&pid=ImgRaw&r=0)
