># What is Thresholding?

Thresholding is a frequent (and fundamental) segmentation approach in computer vision that allows us to distinguish the foreground (i.e., the items we're interested in) from the image's backdrop.

The binarization of an image is referred to as thresholding. In general, we want to transform a grayscale image to a binary image with either 0 or 255 pixels. Selecting a threshold value T and then changing all pixel intensities less than T to 0 and all pixel values larger than T to 255 is a simple thresholding example. We can generate a binary representation of the image in this way.

--- 

># Purpose of Thresholding

The process of segmentation is used to split a picture into specific regions (or their outlines) in image processing. As a result, thresholding is a natural technique to segment such areas. This is nothing more than the division of dark and light areas. If you have a grayscale image (with an intensity range of 0 to 255), you can use thresholding to convert it to a binary image by defining a threshold value.

Consider the following scenario:
Set the threshold to 60. (on a scale from 0 to 255). If a pixel's intensity exceeds the threshold value, it represents the bright region, or binary 1, otherwise it represents the dark region, or binary 0.

---

># Features of Thresholding

- Extracts the pixels from a image which represent an object (either text or other line image data such as graphs, maps). 
- Though the information is binary the pixels represent a range of intensities which is easier to analyze through plots.
- Binarization in thresholding marks the pixels that belong to true foreground regions with a single intensity and background regions with different intensities.

---

># Types of Thresholding

There are three types of thresholding techniques:

1. We have **simple thresholding**, where we manually give parameters to segment the image – this works really well under regulated lighting settings when the foreground and background of the image have a strong contrast.

2. We also have approaches like **Otsu's thresholding**, which try to be more dynamic by automatically calculating the best threshold value based on the input image. The advantage of Otsu's thresholding method is that we don't have to deal with manually establishing the threshold cutoff; instead, Otsu's method does it for us.

3. Finally, **adaptive thresholding** decomposes an image into smaller bits and thresholds each of these components separately and individually, rather than trying to threshold an image globally with a single value.

--- 

## **1. Implementing simple thresholding with OpenCV**

Human intervention is required when using simple thresholding approaches. T is the threshold value that must be specified. Below T, all pixel intensities are set to 255. Also, any pixel intensities over T are set to 0.

By setting all pixels greater than T to 255 and all pixel intensities below T to 0, we can achieve the inverse of this binarization. Then, we manually supply our T threshold value. We use a value of T=127. 

We used different Simple Thresholding Techniques are: 

`cv2.THRESH_BINARY`: If pixel intensity is greater than the set threshold, value set to 255, else set to 0 (black).

`cv2.THRESH_BINARY_INV`: Inverted or Opposite case of cv2.THRESH_BINARY.

`cv.THRESH_TRUNC`: If pixel intensity value is greater than threshold, it is truncated to the threshold. The pixel values are set to be the same as the threshold. All other values remain the same.

`cv.THRESH_TOZERO`: Pixel intensity is set to 0, for all the pixels intensity, less than the threshold value.

`cv.THRESH_TOZERO_INV`: Inverted or Opposite case of cv2.THRESH_TOZERO.

## **2. Implementing Otsu's thresholding with OpenCV**

The approach of Otsu presupposes that our image has two types of pixels: background and foreground. Additionally, Otsu's method assumes that the grayscale histogram of our image's pixel intensities, which essentially is indicated by the peaks in the histogram.

We then apply preprocessing by converting the image to grayscale and blurring it to reduce high frequency noise. Then we pass `cv2.THRESH_OTSU` argument on the blurred image. This results the histogram plot.

Based on the histogram, Otsu’s method then computes an optimal threshold value T such that the variance between the background and foreground peaks is minimal. And then with the help of matplotlib library we plot the results.



## **3. Implementing Adaptive thresholding with OpenCV**

The Adaptive thresholding has some advantages over the simple thresholding. In the simple thresholding, the threshold value is global, i.e., it is same for all the pixels in the image. So, a constant threshold value may not be good in all the conditions where image has different lighting conditions in different areas. In adaptive thresholding, the threshold value is calculated for smaller regions and therefore, there will be different threshold values for different regions. So, we can get different thresholds for different regions of the same image and it gives us better results for images with varying illumination.

**Adaptive thresholding types are:**

`cv.ADAPTIVE_THRESH_MEAN_C` - The mean of the neighbourhood area minus the constant C.

`cv.ADAPTIVE_THRESH_GAUSSIAN_C` - A gaussian-weighted sum of the neighbourhood values minus the constant C.

In the program, I have compared the above mentioned Adaptive Thresholding types with the global thresholding

---

># Advantages of Thresholding

- The advantage of thresholding is that it reduces the complexity of the data and simplifies the process of recognition and classification. 
- Thresholding simplifies and/or change the representation of an image into something that is more meaningful and easier to analyze.
- Thresholding is typically used to locate objects and boundaries (lines, curves, etc.) in images.

># Applications of Thresholding

- Content-based image retrieval.
- Machine vision.
- Medical imaging, including volume rendered images from computed tomography and magnetic resonance imaging.
- Object detection.
- Recognition Tasks.
- Traffic control systems.
- Video surveillance.

># Conclusion

Therefore, in this tutorial we used three thresholding techniques i.e a) Simple thresholding, b) Otsu's thresholding, c) Adaptive thresholding. Thresholding, as shown above, allows you to isolate specific objects in an image, which can be useful in a variety of situations. Thresholding is just one of many traditional image processing techniques; others include clustering, edge detection, and region expanding, to mention a few.

---

># References

- [Thresholding Operations using inRange](https://docs.opencv.org/3.4.15/da/d97/tutorial_threshold_inRange.html)

- [Thresholding techniques using OpenCV](https://www.geeksforgeeks.org/python-thresholding-techniques-using-opencv-set-1-simple-thresholding/)

---