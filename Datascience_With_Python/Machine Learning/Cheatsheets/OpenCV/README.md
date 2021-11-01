
# OpenCV Cheatsheet

## Installing OpenCV
    pip install opencv-python

## Import OpenCV
    import cv2

<br>

## Working on images
  
### Read an image from path
     cv2.imread(path,flag)
  
  **Parameter:**
  - path: Location of image to be read as a string.
  - flag(optional): flag value, that defines the format image to be read. Default value is 1(CV2.IMREAD_COLOR).It value varies from 0, 1, -1.
 
  
<br>

  ### Image Resizing
      cv2.resize(image,(width,height),fx,fy,interpolation)
  **Parameter:**
  - image: source image read
  - (width,height) : dimension as tuple
  - fx(optional) : scaling along horizontal axis.
  - fy(optional) : scaling along vertical axis.
  - interpolation(optional) : flag value that defines the any following method -INTER_NEAREST, INTER_LINEAR, INTER_AREA, INTER_CUBIC.
  

<br>

  ### Blurring an Image
  **Gaussian Blur:**
  
    cv2.GaussianBlur(image,ksize,sigmaX,sigmaY,borderType)
  **Parameter:**
  - image: source image read
  - ksize: kernel size as tuple
  - sigmaX(optional): kernel standard deviation along x-axis
  - sigmaY(optional): kernel standard deviation along y-axis
  - borderType: specifies image boundaries
  
  **Median Blur:**
  
      cv2.medianBlur(image, ksize)
  **Parameter:**
  - image : source image read
  - ksize: kernel size as integer
  
  **Bilateral Blur:**
  
      cv2.bilateralFilter(image, d, sigmaColor, sigmaSpace, borderType)
  **Parameter:**
  - image: source image read
  - d: diameter of pixel neighbourhood as integer
  - sigmaColor: filter sigma in the color space as integer
  - sigmaSpace: filter sigma in the coordinate space.
  - borderType: specifies image boundaries 
  

  <br>
  
  ### Grayscaling of images
      cv2.cvtColor(image,colorcode)
  **Parameter:**
  - image: source image read
  - colorcode: color space conversion code.
  for grayscale colorcode is *cv2.COLOR_BGR2GRAY*
  

<br>

### Canny Edge Detection 
    cv2.Canny(image, edges, threshold1, threshold2, apertureSize, L2gradient)
 **Parameter:**
- image - The 8-bit input image
- edges - The 8-bit image after the edges have been detected
- threshold1 & threshold2 - The minimum and maximum threshold. The edges with intensity gradients above and below these values are discarded.
- apertureSize - This is used in the Sobel filter to find the intensity gradient of the input image
- L2gradient - This specifies the equation for finding gradient magnitude


<br>

## Working with Images

### Play videos with OpenCv:
*Find a video to use* 
- If using Google Colab upload a video to your google drive to use. Add the following code to let google colab access your google drive:

        from google.colab import drive

- Find your video url and add into the wget code inside the double quotes: 

        !wget = "put your video url here"

- Also put your ending part of the video url in the cap code inside the parentheses and quote: 

        cap = cv2.VideoCapture('number part.mp4')

- It will play the video frame by frame. Warning it will be very slow on Google Colab.


<br>





