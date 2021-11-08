## Title : YOLO
🔴 **Type of Content** : Documentation

🔴 **Domain** : Machine Learning

🔴 **Module** : ML_For_Sequential_Data_&_Visual_Data


*********************************************************************

## What is YOLO?

<p> YOLO stands for You Only Look Once. YOLO family of models are a series of end-to-end deep learning models designed for fast object detection, developed by Joseph Redmon.</p><br>

<img src="https://blog.paperspace.com/content/images/2018/04/maxresdefault-p1.jpg">

<p> In simple words, YOLO is an algorithm that uses neural networks to provide real-time object detection. This algorithm is popular because of its speed and accuracy. It has been used in various applications to detect traffic signals, people, parking meters, and animals.

## How does YOLO work?
<br>

<img src="https://assets-global.website-files.com/5d7b77b063a9066d83e1209c/60edcdbb660bc4adc635f744_P9709u0H-JwS5jCaxiFCdr0_HQnbe3dExzj7Nq_fkcL3HIFTsBGt2uTWA89fLVcZik5dBjVw5BRlSy5KooKI-tXCXmPJ1aLHVxOcr-YLxGKbVwBrxjWKCCo8TUV90TgB37tmkpMz.png">

<br>

<p>
The algorithm applies a single neural network to the full image, and then divides the image into regions and predicts bounding boxes and probabilities for each region. These bounding boxes are weighted by the predicted probabilities.
<br>
The YOLO algorithm works basically on 3 principles:
1. Residual blocks
2. Bounding box regression
3. Intersection Over Union (IOU)


</p><br>


## YOLO Architechture:
<p>YOLO’s architecture has a total of 24 convolutional layers with 2 fully connected layers at the end.It is inspired by GoogleNet architechture which was later updated and called DarkNet based on VGG that splits the input into a grid of cells and each cell directly predicts a bounding box and object classification.</p><br>

<img src="https://assets-global.website-files.com/5d7b77b063a9066d83e1209c/60edcdbac45c393745a38866_Laxtd5ZwPSu4Dk33rVzIFt4tEDXwv03HzUU6SD5XvEFxb7BRoQdg7Qm32xEiUjJqJRNHA3mgmj7vZCPcuoWnRX-u7ULiQtsdPKzW61lq5D-UJ4O82S6bOc5ZPT4f5MMRk62c3vt2.png">

<br>

## Is YOLO good for object detection?
<p>The biggest advantage of using YOLO is its superb speed – it's incredibly fast and can process 45 frames per second. YOLO also understands generalized object representation. This is one of the best algorithms for object detection and has shown a comparatively similar performance to the R-CNN algorithms.</p><br>

## Applications of YOLO:
1. Autonomous driving
2. Wildlife
3. Security and many more...<br><br>


## Disadvantages of YOLO:
1. Comparatively low recall and more localization error compared to Faster R_CNN.
2. Struggles to detect close objects because each grid can propose only 2 bounding boxes.
3. Struggles to detect small objects.
<br>

## Why is YOLO popular?
<p>YOLO algorithm has gained popularity because of its superior performance over the aforementioned object detection techniques.</p>

## Resources:
1. https://www.v7labs.com/blog/yolo-object-detection#how-yolo-works
2. https://www.analyticsvidhya.com/blog/2018/12/practical-guide-object-detection-yolo-framewor-python/
3. https://towardsdatascience.com/yolo-you-only-look-once-3dbdbb608ec4
