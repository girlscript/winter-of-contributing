# Contrast Stretching Using Matplotlib

## What is contrast stretching and why do we need it?

Oftenly, photographs or medical images obtained from CT-Scan, MRI-Scan, etc. require some particular image enhancements for viewing the details hidden in the images which may not be visible through naked eyes.

Thus, here contrast stretching can be proved useful! It is basically an operation applied on images, which improves the contrast and visibility of the image so that even minor details can be examined.

## How does contrast stretching work ?

So, basically it works on the principle of point operation. Now, we will see in detail what exactly is point operation.

Point Operation means directly applying contrast stretching on the image by modifying each pixel rather then doing it with a kernel.

By using kernel, we usually determine each pixel value on the basis of its neighbourhood pixel values. But instead, here we will use a normalization formula to modify the intensity value of each pixel.

<b>In short, we are transforming intensities of pixels to a bigger range.</b>

As, this whole process of contrast stretching is a linear operation, so the value of new pixel is linearly dependent on the value of the original pixel. Also, because the transformation applied is linear, so we can convert the contrast-enhanced image to the original image.

In this process, we map original intensity range to new intensity range, which is determined using the histogram of an image, so that the minimum and maximum intensity values present in the image are accurately selected excluding the outliers.

```
Histogram is a graphical representation of the distribution of numerical data.
```

## Image Normalization Formula

```
P_out = (P_in - Min_P) * (((Max_P_out - Min_P_out) / (Max_P_in - Min_P_in)) + Min_P_out) 

P_out = Value of Output Pixel
P_in = Value of Input Pixel
Max_P_out = Maximum value of pixel in output image
Min_P_out = Minimum value of pixel in output image
Max_P_in = Maximum value of pixel in input image
Min_P_in = Minimum value of pixel in input image
```

## Why to use Matplotlib Library For Contrast Stretching and its advantages:

As we know, matplotlib supports various graphical representation like Bar Graphs, Histograms, Line Graph, Scatter Plot, etc. It is basically a 2-D plotting library.

With the help of matplotlib, we can plot histograms of both original and contrast stretched image. 

We can compare both histograms(you can find the histogram in the implementation part) and draw some conclusions like,

```
1. In the histogram of original image, the amount of white pixels is more than that of gray. 
2. Also, the histogram of original image is less densed.
3. In the histogram of the contrast-stretched image, the amount of gray pixels have increased significantly and the histogram is also more densed than the original one, thus contrast of the image got increased.
```

## Implementation

Now, we will see the implementation of contrast stretching using matplotlib:

Here, we will require libraries like cv2, numpy and matplotlib. 'cv2' library for image reading, resizing and converting. 'maptplotlib.pyplot' will be used for displaying histogrms.

```
# import the required library
from cv2 import cv2
import numpy as np
import matplotlib.pyplot as plt
```

Using the cv2.imread() function, we will load the image into variable called img and with the help of cv2.resize function, we will resize the image to our desired dimensions. Using img.shape, we can view the shape i.e. the dimensions of the image.

```
# load the image into variable called img and resize it
img = cv2.imread('flower.jpeg')
img = cv2.resize(img, (600,400))
img.shape
```

### Output:

```
(400, 600, 3)
```

Here, with the use of cv2, we can convert the RGB image to binary image i.e. gray scaled image. Also, the cv2.convertScales is used to adjust the contrast value and the brightness of the image.

```
# cv2 converts the RGB image to binary image. 
gray_img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
# increasing the contrast value by alpha and brightening the image by beta
gray_img = cv2.convertScaleAbs(gray_img, alpha=1.10, beta=40)
```

Now, we will display the unstretched i.e. the original image which we converted into gray image. You can see that the white pixels are more in quantity than the gray pixels, so we need to balance out the constrast.

```
# unstretched image
cv2.imshow('original image', gray_img)
cv2.waitKey(0)
```

### Output:

<img src='https://user-images.githubusercontent.com/65852362/141204140-de7b03e3-f1bd-44f8-98c1-ecf702c464a1.png'>

Here, I have used an user-defined histogram function, you can also use the in-built histogram function available in the pyplot submodule of python library.

```
# Histogram of original image
def hist(image):
    h = np.zeros(shape=(256,1))
    s = image.shape
    for i in range(s[0]):
        for j in range(s[1]):
            k = image[i,j]
            h[k,0] = h[k,0] + 1
    return h
histg = hist(gray_img)
plt.plot(histg)
plt.show()
```
### Output:

<img src='https://user-images.githubusercontent.com/65852362/141204320-792ebe91-7923-45b2-a041-4c83fd319b0d.png'>

Now comes the main stretching code. I have used the normalization formula which I mentined before. We will store the new pixel values in variable 'stretch' and then replace it with the pixel values of original gray image.
```
# Stretching Code:
x = histg.reshape(1,256)
y = np.zeros((1,256))
s = gray_img.shape
for i in range(256):
    if x[0,i] == 0:
        y[0,i] = 0
    else:
        y[0,i] = i
        
min_ = np.min(y[np.nonzero(y)])
max_ = np.max(y[np.nonzero(y)])

stretch = np.round(((255-0)/(max_-min_))*(y-min_))
stretch[stretch<0] = 0
stretch[stretch>255] = 255

for i in range(s[0]):
    for j in range(s[1]):
        k = gray_img[i,j]
        gray_img[i,j] = stretch[0,k]
```

Now, we will view the histogram of the stretched image. You can see that now the histograms seemes more densed.

```
# histogram of stretched image
histg2 = hist(gray_img)
plt.plot(histg2)
plt.show()
```

### Output:

<img src='https://user-images.githubusercontent.com/65852362/141204403-e6e61080-acfd-43b7-8a36-25bc45a2657d.png'>

So, finally here is the stretched image, one can clearly see that the gray and white pixels are more evenly distributed than before and significantly the contrast of the image has improved.

```
# stretched image
cv2.imshow('Stretched Image: ', gray_img)
cv2.waitKey(0)
```

### Output:

<img src='https://user-images.githubusercontent.com/65852362/141204453-0e32a728-c574-4d96-b918-bd7eb8a13c97.png'>

## Conclusion:

Thus, by using libraries like matplotlib, cv2 and numpy, we could stretch the contrast of the image.

We used cv2 library to convert RGB image to binary image.

With the help of cv2, we also set the brightness(beta) and contrast parameters(alpha).

We used numpy library to modify the pixel values by applying normalization formula.

Matplotlib was used to plot the histogram of both original and contrast-stretched image.

In short, we stored the original image's pixel values and applied image normalization formula on them to increase the contrast. We stored the modified pixel values and assigned them to the pixel values of original image, thus stretching the contrast of the original image.

So, this was a simple guide to using <b>matplotlib for contrast stretching.</b> I hope you enjoyed the journey and can now implement whatever explained in the tutorial.

For more details refer:

https://pythontic.com/image-processing/pillow/contrast%20stretching

Image Credit:

http://www.aforgenet.com/

## Thank You!
