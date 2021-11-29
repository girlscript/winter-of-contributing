# Color to Gray Scale Image using Numpy

## Audio Link : [Color to Gray Scale Image using Numpy](https://drive.google.com/file/d/1zdJkGPpewTE9-3QB0gsSaiRtitqcbW1S/view?usp=sharing)

The below  code we're working from loads jpeg images for an autoencoder to use as inputs. This is accomplished with using Pillow and Numpy:
```
from PIL import Image
import numpy as np
color_img = np.asarray(Image.open(img_filename)) / 255
```

- For grayscale images, the result is a two-dimensional array with the number of rows and columns equal to the number of pixel rows and columns in the image. Low numeric values indicate darker shades and higher values lighter shades. The range of pixel values is often 0 to 255. We divide by 255 to get a range of 0 to 1.

- Color images are represented as three-dimensional Numpy arrays - a collection of three two-dimensional arrays, one each for red, green, and blue channels. Each one, like grayscale arrays, has one value per pixel and their ranges are identical.

![image](https://user-images.githubusercontent.com/63282184/143797828-8ed7e359-21f0-44df-b490-86d5a7223694.png)

![image](https://user-images.githubusercontent.com/63282184/143797900-9c634a76-0237-4983-8dc0-0d474568fbfe.png)

## Average the channels

An intuitive way to convert a color image 3D array to a grayscale 2D array is, for each pixel, take the average of the red, green, and blue pixel values to get the grayscale value. This combines the lightness or luminance contributed by each color band into a reasonable gray approximation.

```
img = numpy.mean(color_img, axis=2)
```

The axis=2 argument tells numpy.mean() to average values across all three color channels. (axis=0 would average across pixel rows and axis=1 would average across pixel columns.)

![image](https://user-images.githubusercontent.com/63282184/143797933-612f7af6-bc1e-417e-9895-af23fcd87dfb.png)

## channel-dependent luminance perception

To our eyes green looks abount ten times brighter than blue. Through many repetitions of carefully designed experiments, psychologists have figured out how different we perceive the luminance or red, green, and blue to be. They have provided us a different set of weights for our channel averaging to get total luminance.

![image](https://user-images.githubusercontent.com/63282184/143797957-f39707fc-d355-48e6-aa57-eee0f5ee43b2.png)


## gamma compression

![image](https://user-images.githubusercontent.com/63282184/143798064-ce5c4800-95eb-4078-aa31-379c2d680f2a.png)

![image](https://user-images.githubusercontent.com/63282184/143798139-5296a410-67fb-4efb-9a8d-25611078c5cd.png)


There is lightening throughout the image after accounting for gamma compression. It brings the luminance up to be a closer match to that of the original image. Finally, we have a high quality grayscale representation

## linear approximation
The gamma decompresssion and re-compression rack up quite a large computation cost, compared to the weighted averages we were working with before. Sometimes speed is more desirable than accurate-as-possible luminance calculations. For situations like these, there is a linear approximation:

![image](https://user-images.githubusercontent.com/63282184/143798148-b169b752-6e83-4be6-b45c-fccde5ac7bb9.png)



As you can see, the results are not bad at all. They tend to be a little darker, especially through the red mid-range values, but arguably just as good in most practical respects.

## Advantages of using Numpy

- Multi-dimensional Slicing
- Broadcasting Functionality
- Processing Speed
- Memory Footprint
- Many Convenience Methods
