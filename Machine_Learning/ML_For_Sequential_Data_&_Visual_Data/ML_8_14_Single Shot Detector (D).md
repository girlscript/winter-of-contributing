## Title :Single shot detector
🔴 **Type of Content** : Documentation

🔴 **Domain** : Machine Learning

🔴 **Module** : ML_For_Sequential_Data_&_Visual_Data

*********************************************************************
### Single shot detectors

<img align="center" src="https://user-images.githubusercontent.com/70129990/141645139-063bc8a4-359f-45ce-bec9-409ae82f268a.png" style="width:200px;"/>
<br>
<p> 
Image result for single shot detector in machine learning
Single Shot detector like YOLO takes only one shot to detect multiple objects present in an image using multibox. It is significantly faster in speed and high-accuracy object detection algorithm. A quick comparison between speed and accuracy of different object detection models on VOC2007</p><br>

### Architecture of SSD model

<p>
The SSD model is made up of 2 parts namely
<br>

<li>1. The backbone model
  <br>
<li>2. The SSD head.
<br>
The Backbone model is a typical pre-trained image classification network that works as the feature map extractor. Here, the image final image classification layers of the model are removed to give us only the extracted feature maps.
<br>
SSD head is made up of a couple of convolutional layers stacked together and it is added to the top of the backbone model. This gives us the output as the bounding boxes over the objects. These convolutional layers detect the various objects in the image.
<br>
</p>
  
## How does SSD work?
<p>
The SSD is based on the use of convolutional networks that produce multiple bounding boxes of various fixed sizes and scores the presence of the object class instance in those boxes, followed by a non-maximum suppression step to produce the final detections
<br>

The SSD model works as follows, each input image is divided into grids of various sizes and at each grid, the detection is performed for different classes and different aspect ratios. And a score is assigned to each of these grids that says how well an object matches in that particular grid. And non maximum supression is applied to get the final detection from the set of overlapping detections. This is the basic idea behind the SSD model.
Here we use different grid sizes to detect objects of different sizes, for example, look at the image given below when we want to detect the cat smaller grids are used but when we want to detect a dog the grid size is increased which makes the SSD more efficient.
 <br>
  
  <img src="https://user-images.githubusercontent.com/70129990/141645667-c86a9bc7-f83c-452c-8209-c7a9039f8e35.png">
</p>
  <br>
  
## Detections using multi-scale feature maps
 <p>
The multi-scale feature maps are added to the end of the truncated backbone model. These multi-scale feature maps reduce in size progressively, which allows the detections at various scales of the image. The convolutional layers used here vary for each feature layer.
</p>
<br>


## Detection using the convolutional predictors
<pr>
The addition of each extra layer produces a fixed number of predictions using the convolutional filters in them. These additional layers are shown at the top of the model in the given diagram below. For example, a feature layer of size m x n with p channels, the minimal prediction parameter that gives a decent detection is a 3 x 3 x p small kernel. Such kernel gives us the score for a category or a shape offset relative to the default box coordinates.
</p>
<br>


## Single-Shot Detector (SSD)
<p>
SSD has two components: a backbone model and SSD head. Backbone model usually is a pre-trained image classification network as a feature extractor. This is typically a network like ResNet trained on ImageNet from which the final fully connected classification layer has been removed. We are thus left with a deep neural network that is able to extract semantic meaning from the input image while preserving the spatial structure of the image albeit at a lower resolution. For ResNet34, the backbone results in a 256 7x7 feature maps for an input image. We will explain what feature and feature map are later on. The SSD head is just one or more convolutional layers added to this backbone and the outputs are interpreted as the bounding boxes and classes of objects in the spatial location of the final layers activations.

In the figure below, the first few layers (white boxes) are the backbone, the last few layers (blue boxes) represent the SSD head.
</p>
<br>
<img  src="https://user-images.githubusercontent.com/70129990/141646389-fe39935d-0c24-40c8-9f95-b7e3b7c36f36.png">

<br>

## Grid cell
 <p>
Instead of using sliding window, SSD divides the image using a grid and have each grid cell be responsible for detecting objects in that region of the image. Detection objects simply means predicting the class and location of an object within that region. If no object is present, we consider it as the background class and the location is ignored.
<br>
 <img src="https://user-images.githubusercontent.com/70129990/141646276-44c1a9e9-b545-404a-988c-05c4dfec5168.png">
 </p>
 <br>
 
## Anchor box
<p>
Each grid cell in SSD can be assigned with multiple anchor/prior boxes. These anchor boxes are pre-defined and each one is responsible for a size and shape within a grid cell. 
<br>
<img src="https://user-images.githubusercontent.com/70129990/141646319-9c7601b4-89de-4ae9-82cc-ce67b09fdffe.png">
</p>
<br>

## Aspect ratio
<p>
Not all objects are square in shape. Some are longer and some are wider, by varying degrees. The SSD architecture allows pre-defined aspect ratios of the anchor boxes to account for this. The ratios parameter can be used to specify the different aspect ratios of the anchor boxes associates with each grid cell at each zoom/scale level.


  </p>
<br>

  
  
## Difference between YOLO and SSD
<p>
The You look only once (YOLO) model is a predecessor to the SSD model, it also detects images in a single pass, but it uses two fully connected layers while the SSD uses multiple convolutional layers. The SSD model adds several feature layers to the end of a base network, which predicts the offsets to default boxes of different scales and aspect ratios and their associated scores.

The SSD produces an average of 8732 detections per class while the YOLO produces only 98 predictions per class. An SSD with a 300 x 300 inputs size significantly outperforms a 448 x 448 YOLO counterpart in accuracy as well as speed in the VOC2007 test.
</p>
<br>
 
 
 ## References
 <pr>
<li>[1] Joseph Redmon, Santosh Divvala, Ross Girshick, Ali Farhadi: “You Only Look Once: Unified, Real-Time Object Detection”, 2015; arXiv:1506.02640.
<br>
  <br>
<li>[2] Wei Liu, Dragomir Anguelov, Dumitru Erhan, Christian Szegedy, Scott Reed, Cheng-Yang Fu: “SSD: Single Shot MultiBox Detector”, 2016; arXiv:1512.02325.
<br>
  <br>
<li>[3] Zeiler, Matthew D., and Rob Fergus. "Visualizing and understanding convolutional networks." In European conference on computer vision, pp. 818-833. springer, Cham, 2014.
<br>
  <br>
<li>[4] Dang Ha The Hien. A guide to receptive field arithmetic for Convolutional Neural Networks. https://medium.com/mlreview/a-guide-to-receptive-field-arithmetic-for-convolutional-neural-networks-e0f514068807
<br>
  <br>
<li>[5] Howard Jeremy. Lesson 9: Deep Learning Part 2 2018 - Multi-object detection. https://docs.fast.ai/vision.models.unet.html#Dynamic-U-Net. Accessed 2 September 2019.
  <br>
  </p>
  
<br>

  
  
  
 
 
## Conclusion
<p>
The SSD model is one of the fastest and efficient object detection models for multiple categories. And it has also opened new doors in the domain of object detection. With this article at OpenGenus, you must have the complete idea of SSD.
  
  </p>
 
  
  
  
  
## GirlScript Winter of Contributions 2021
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
