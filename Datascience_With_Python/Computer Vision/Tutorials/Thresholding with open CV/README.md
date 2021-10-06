>## What is Thresholding?

Thresholding is a frequent (and fundamental) segmentation approach in computer vision that allows us to distinguish the foreground (i.e., the items we're interested in) from the image's backdrop.

The binarization of an image is referred to as thresholding. In general, we want to transform a grayscale image to a binary image with either 0 or 255 pixels. Selecting a threshold value T and then changing all pixel intensities less than T to 0 and all pixel values larger than T to 255 is a simple thresholding example. We can generate a binary representation of the image in this way.
>## Types of Thresholding

There are three types of thresholding techniques:

1. We have **simple thresholding**, where we manually give parameters to segment the image – this works really well under regulated lighting settings when the foreground and background of the image have a strong contrast.

2. We also have approaches like **Otsu's thresholding**, which try to be more dynamic by automatically calculating the best threshold value based on the input image.

3. Finally, **adaptive thresholding** decomposes an image into smaller bits and thresholds each of these components separately and individually, rather than trying to threshold an image globally with a single value.

>## Implementing simple thresholding with OpenCV

Human intervention is required when using simple thresholding approaches. T is the threshold value that must be specified. Below T, all pixel intensities are set to 255. Also, any pixel intensities over T are set to 0.

By setting all pixels greater than T to 255 and all pixel intensities below T to 0, we can achieve the inverse of this binarization.

The image is then preprocessed using both:
- Changing the colour scheme to grayscale
- Using a Gaussian blur of 77%

Applying Gaussian blurring to the image helps remove some of the image's high frequency edges that we don't care about, resulting in a more "clean" segmentation.

The last task we are going to perform is to reveal the foreground objects in the image and hide everything else. 

>## Conclusion

Thresholding, as shown above, allows you to isolate specific objects in an image, which can be useful in a variety of situations. Thresholding is just one of many traditional image processing techniques; others include clustering, edge detection, and region expanding, to mention a few.

>## References

- [Thresholding Operations using inRange](https://docs.opencv.org/3.4.15/da/d97/tutorial_threshold_inRange.html)

- [Thresholding techniques using OpenCV](https://www.geeksforgeeks.org/python-thresholding-techniques-using-opencv-set-1-simple-thresholding/)