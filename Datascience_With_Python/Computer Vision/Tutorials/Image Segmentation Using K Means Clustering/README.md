# :city_sunset: **IMAGE SEGMENTATION USING K MEANS CLUSTERING**
<p align="center">
  <img width="700" height="350" src="https://www.anolytics.ai/wp-content/uploads/2019/05/segmentation.gif">
</p>

## 💡 **INTRODUCTION**
### ❓ **WHAT IS IMAGE SEGMENTATION**
* Image segmentation is a branch of digital image processing which focuses on partitioning an image into different parts according to their features and properties. 
The primary goal of image segmentation is to simplify the image for easier analysis. 
In image segmentation, you divide an image into various parts that have similar attributes.

* By using image segmentation techniques, you can divide and group-specific pixels from an image, assign them labels and classify further pixels according to these labels. 
* You can draw lines, specify borders, and separate particular objects (important components) in an image from the rest of the objects (unimportant components). 
 
 <p align="center">
  <img width="700" height="350" src="https://miro.medium.com/max/1400/1*zKnOz-YWIKtIohhYcydNEQ.png">
</p>

#### 📌**IMPORTANCE OF IMAGE SEGMENTATION**
* Image segmentation allows us to decompose an image into meaningful parts and understand a scene at a more granular level. 
In this way, it differs from other computer vision tasks you might be familiar with. 
While image classification is helpful for seeing what’s in an image in general, and object detection allows us to locate and tracking the contents of an image, segmentation allows us to define and understand the shapes and boundaries of objects in an image.

* We can readily see the power of image segmentation when we consider its flexibility in photo editing software. 
From automatically separating backgrounds and foregrounds, to cutting out segmented people and objects, to creating responsive portrait modes, image segmentation offers a wide range of capabilities for these kinds of creativity tools.

## ❔ **WHY EXACTLY DO WE NEED IMAGE SEGMETNATION ?**
* Segmentation is an important stage of the image recognition system, because it extracts the objects of our interest, for further processing such as description or recognition.
* Segmentation of an image is in practice for the classification of image pixel. Segmentation techniques are used to isolate the desired object from the image in order to perform analysis of the object. 
* For example, a tumor, cancer or a block in the blood flow can be easily isolated from its background with the help of image segmentation technique. Various techniques are available for the segmentation of monochrome images. The segmentation of color images is more complicated as each pixel in the color images is vector valued.

### ❓ **WHAT IS K MEANS CLUSTERING**
* K-Means Clustering is an unsupervised learning algorithm that is used to solve the clustering problems in machine learning or data science. 
* K-Means Clustering is an Unsupervised Learning algorithm, which groups the unlabeled dataset into different clusters. Here K defines the number of pre-defined clusters that need to be created in the process, as if K=2, there will be two clusters, and for K=3, there will be three clusters, and so on.

 <p align="center">
  <img width="600" height="350" src="https://static.javatpoint.com/tutorial/machine-learning/images/k-means-clustering-algorithm-in-machine-learning.png">
</p>

#### 📌**IMPORTANCE OF CLUSTERING METHODS**
* Having clustering methods helps in restarting the local search procedure and remove the inefficiency. In addition, clustering helps to determine the internal structure of the data.
* This clustering analysis has been used for model analysis, vector region of attraction.
* Clustering helps in understanding the natural grouping in a dataset. Their purpose is to make sense to partition the data into some group of logical groupings.
* Clustering quality depends on the methods and to the identification of hidden patterns.
* They play a wide role in applications like marketing economic research and weblogs to identify similarity measures, Image processing, and spatial research.
* They are used in outlier detections to detect credit card fraudulence.



## :high_brightness: **K MEANS FOR IMAGE SEGMENTATION**
The K Means Clustering for image segmentation works in the following manner:

  1. Choose the number of clusters you want to find which is K.
  2. Randomly assign the data points to any of the K clusters.
  3. Then calculate the center of the clusters.
  4. Calculate the distance of the data points from the centers of each of the clusters.
  5. Depending on the distance of each data point from the cluster, reassign the data points to the nearest clusters.
  6. Again calculate the new cluster center.
  7. Repeat steps 4,5 and 6 till data points don’t change the clusters, or till we reach the assigned number of iterations.

## :computer: **CODING AND IMPLEMENTATION**
The code for image segementation works on the following algorithm:
1. Load all the required libraries. Check <code>[requirements.txt](./requirements.txt)</code> for the versions.
2. Load the original image in the RGB color space.
3. Convert the RGB space to HSV.
4. Then, we create a Kx3 matrix by converting the MxNx3 image. 
5. <code>unit8</code> values are converted to <code>float</code>.
6. Create cluster as per the requirement and criteria.
7. Convert the converted <code>float</code> to <code>unit8</code>. 
8. Access the labels to regenerate the clustered image.
9. Visualize the output result with K=10.
10. Change the value of K as desired to see the noticeable changes in the output.

## :key: **PREQUISITES**
All the dependencies and required libraries are included in the file <code>requirements.txt</code> [See here](./requirements.txt)

## 🟩 **HOW TO USE**
1. Clone the project on your system.
2. In the command line, run: <code>pip install -r requirements.txt</code>
3. Next, change the directory of the image to where you have cloned the project. (Comment mentioned in the code)
4. Run the script; <code>python image_segmentation.py</code> to get the output.

## 📊 **OUTPUT**

### ORIGINAL IMAGE
--------------
<p align="center">
  <img width="250" height="300" src="https://user-images.githubusercontent.com/36481036/136064417-1993b0c6-80ce-4318-862e-da8d605b0b1d.jpg">
</p>

### K=2
--------------
<p align="center">
  <img width="700" height="350" src="https://user-images.githubusercontent.com/36481036/136064410-6c0e6944-7fa6-4df3-aaba-e23e9e217943.png">
</p>

### K=10
--------------
<p align="center">
  <img width="700" height="350" src="https://user-images.githubusercontent.com/36481036/136064416-6943f600-e56f-45df-8934-a1aac5e88977.png">
</p>

## 📗 **CONCLUSION**
* Image segementation is an integral part of data processing because it helps us to glorify the input and hence helps to increase the quality of the data as a whole. 
* In the tutorial above, we play with the popular unsupervised learning algorithm; the K Means Clustering to see how it can benifit the level of image segementation performed. 
* Thus, K Means, as expected, turns out to be a good approach towards integrating it with computer vision techniques.


## ✒️**CREDITS**
* https://www.fritz.ai/image-segmentation/#part-basics
* https://towardsdatascience.com/image-segmentation-using-pythons-scikit-image-module-533a61ecc980
* https://www.javatpoint.com/k-means-clustering-algorithm-in-machine-learning
* https://www.geeksforgeeks.org/image-segmentation-using-k-means-clustering/

### 😎 **CREATOR**: https://github.com/theshredbox












