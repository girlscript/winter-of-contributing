# :pushpin: **COLOR FILTERING WITH OPENCV**
<p align="center">
  <img width="400" height="325" src="https://c.tenor.com/fMCz1Bc_BTQAAAAM/nzxt-gif.gif">
</p> 
  
* Colour segmentation or color filtering is widely used in OpenCV for identifying specific objects/regions having a specific color. 
The most widely used color space is RGB color space, it is called an additive color space as the three color shades add up to give color to the image.

* Filtering has many applications and uses cases such as in Cryptography, infrared analysis, food preservation of perishable foods, etc. 
 In such cases, the concepts of Image processing can be used to find out or extract out regions of a particular color. 
  

## ❓ **HOW DO COLOR FILTERS WORK**
Color filters absorb certain wavelengths of color and transmit the other wavelengths allowing them to be seen.
<p align="center">
  <img width="600" height="325" src="https://www.researchgate.net/profile/Erik-Cuevas-2/publication/289410777/figure/fig6/AS:733078922211333@1551791043353/Architecture-of-the-color-segmentation-system.png">
 </p>
We know that light is the source of color. 
For example, a blue flower absorbs all other colour wavelengths of light except blue, which it reflects making us see blue. Color filters work the same way, absorbing certain wavelengths and transmitting the other wavelengths.
As a result of this, when placing a color filter on AN image, certain colors of the image will be enhanced, and contrast between them may be increased or reduced.
  
## :mag: **SEGMENTING COLORS USING OPENCV**
To filter a colour using OpenCV, we have to specify the hue range of the colour, we need to filter, and create a mask for the colour. 
And then perform bitwise AND operation between the original image arrays (which is discussed in detail in this article) using the mask to get the filtered colour as the result.

**Let us understand a few terms:**
  * ### **HUE** 
 
  In color theory, hue is one of the main properties (called color appearance parameters) of a color, defined technically in the CIECAM02 model as 
  “The degree to which a stimulus can be described as similar to or different from stimuli that are described as red, orange, yellow, green, blue, purple,” which in certain theories of color vision are called unique hues.
 <p align="center">
  <img width="400" height="325" src="https://cdn.shopify.com/s/files/1/1751/8993/articles/hue-2_1400x.jpg?v=1623253601">
  </p>
  
   * ### **HSV (Hue, Saturation, Value)**  
   
   Just like the most common colour spaces we use to represent an image like RGB and BGR, HSV too is a colour space in which H denotes hue, S denotes Saturation and V denotes value. 
   As we already know what hue is let us see about saturation and value
    
   #### Saturation:
   
   Saturation gives the purity of a colour. A pure colour has no gray mixed in it. Greater the amount of gray mixed in a colour, lesser the saturation. The saturation value is usually measured from 0 to 100% but in OpenCV the scale for saturation is from 0 to 255.

   #### Value:
   This is a measure of the brightness of a colour. When the brightness value is maximum, the colour turns white and when the brightness value is minimum, the colour turns black. This is usually measured from 0 to 100% but in OpenCV the scale for value is from 0 to 255.
    <p align="center">
  <img width="400" height="325" src="http://colorizer.org/img/hsv.png">
  </p>
  
  ## :question: **WHY OPENCV ?**
The cross-platform and open-source library plays a significant role when it comes to the growth of computer vision due to several intuitive factors. With its focus on real-time vision, this library assists students, professionals, and researchers in efficiently implementing computer vision projects, as it provides them with robust machine learning infrastructure which was previously available only in a few mature research labs. 

## :white_check_mark: **USAGE AND APPLICATIONS OF OPENCV**
The usage of OpenCV include:
  1. In-built data structures and input/output
  2. Building GUI
  3. Video analysis
  4. 3D reconstruction
  5. Feature extraction
  6. Object detection

## :sparkles: **ADVANTAGES OF OPENCV**
The advantages of using OpenCV are as follows:
  1. First and foremost, OpenCV is available free of cost.
  2. Since OpenCV library is written in C/C++ it is quite fast.
  3. Low RAM usage (approx 60–70 mb).
  4. It is portable as OpenCV can run on any device that can run C.

## 💻 **CODING AND IMPLEMENTATION**

To demonstrate color filtering using OpenCV, we have built two scripts.
* The first code is for a sample image. Using OpenCV, we target green color in the image. [See here](./image_color_filtering.py)
* The second code uses real time video to seperate red color from the frame. [See here](./video_color_filtering.py)

### 📊**WORKFLOW**
   <p align="center">
  <img width="600" height=400 src="https://user-images.githubusercontent.com/36481036/139458253-100fcf3d-826e-4a48-a13e-0f589c7d21d9.png">
</p>

### :information_source: **STEPS INVOLVED-**
1. Import the libraries.
2. Read the image/ capture the video.
3. Convert the BGR color space to HSV space.
4. Set the lower and upper bounds for the color hue. This is the threshold of the color to be filtered.
5. Use the inRange function to create a mask of the target color to overlay on the original image.
6. Perform bitwise and on the original image arrays using the mask. Since the black region will have a value of 0, performing this step will remove all the other colors in the frame.
7. Display the output.

## :thought_balloon: **PREREQUISITES**
All the dependencies and required libraries are included in the file <code>requirements.txt</code> [See here](./requirements.txt)


## :chart_with_upwards_trend:  **FINAL RESULT**

📷 **USING A SAMPLE IMAGE**
-----------

🌆 ORIGINAL IMAGE
-----------
<p align="center">
  <img width="600" height="400" src="https://user-images.githubusercontent.com/36481036/139459092-3282068c-c801-43aa-b658-f473eef78a4e.jpg">
</p> 

:bookmark: HSV
------------
<p align="center">
  <img width="600" height="400" src="https://user-images.githubusercontent.com/36481036/139459083-ed5226bb-0526-458c-bdab-790c4bcab16b.png">
</p> 

♠️ MASK
------------
<p align="center">
  <img width="600" height="400" src="https://user-images.githubusercontent.com/36481036/139459087-8a026ef7-612a-445a-934a-02084b567cba.png">
</p> 

🟢 RESULT
------------
<p align="center">
  <img width="600" height="400" src="https://user-images.githubusercontent.com/36481036/139459090-699d25f0-ff97-4866-a1c2-537e12a46171.png">
</p> 

:chart_with_upwards_trend: OUTPUT OVERVIEW
-----------
 <p align="center">
  <img width="600" height="400" src="https://user-images.githubusercontent.com/36481036/139459071-c27344cc-aeab-48c4-a68e-64a2254a08be.png">
</p> 



### 🎥 **USING REAL TIME VIDEO**
https://user-images.githubusercontent.com/36481036/139460933-8436f2f9-0504-4baa-b079-9fae8ea64d42.mp4

## :page_facing_up: **CONCLUSION**
* For color segmentation, all we need is the threshold values or the knowledge of the lower bound and upper bound range of colors in one of the color spaces. 
* It works best in the Hue-Saturation-Value color space. 
* After specifying the range of color to be segmented, it is needed to create a mask accordingly and by using it, a particular region of interest can be separated out.
* The threshold must be alloted aslo as per the lighting conditions in the room for the real time video input.

## :bust_in_silhouette: **CREDITS**
* https://opencv.org/
* https://pythonprogramming.net/color-filter-python-opencv-tutorial/
* https://www.codespeedy.com/color-filtering-with-opencv-in-python/

**:sunglasses:** **CREATOR**- https://github.com/theshredbox
