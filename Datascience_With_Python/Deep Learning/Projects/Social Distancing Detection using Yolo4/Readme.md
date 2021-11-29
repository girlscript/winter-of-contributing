# Social Distancing Detection using Yolo4
## Introduction
This project based on Social Distancing detection uses computer vision and deep-learning to understand various aspects of the images or videos based on frames that would be provided as an input to the algorithms. 

The basic concept behind this is to find the bounding boxes related to the classes, the classes could be anything that would range from a Human, Dog to Car depending on the training datasets.

## Methodology
### **YOLO Architecture V4**
The Yolo algorithm stands for You Only Look Once, this algorithm is a state of art, which works on a real-time system, build on deep learning for solving various Object Detection as well as Object Tracking problems. 
Following image displays the architecture of YOLO - 
<p align="center"><img src ="https://user-images.githubusercontent.com/69648635/143786816-6cb205f7-8da8-4a1c-adc4-50ee76c68902.png"></p>

From the above figure, we can see that the architecture contains the Input image layers which are responsible for taking the inputs that would be passed to further layers.

Along the input layer comes the DarkNet Architecture, this is an open-source neural network for which framework is created with the help of C & CUDA, this framework features YOLO for object detection & object tracking.

Furthermore, the architecture consists of the flattened layer which is densely connected with the convolutional layer which is also densely connected to pass the data from each node to other nodes in the architecture, similarly, this is passed to the output layer which gives 4-part values, those 4 parts describe the predicted value for the bounding box, denoted by x, y, w, h, along with the object detection score plus the probability of the predicted class. 

## Project
In our project we are using OpenCV, YOLO V4 and COCO dataset to implement social distancing detector.

Algorithm to build a social distancing detector is - 

* Apply object detection to detect all people (and only people) in a video stream
* Compute the pairwise distances between all detected people
* Based on these distances, check to see if any two people are less than N pixels apart
* Write the bounding box and the No. of people close together in the output

Flowchart for the above algorithm is - 
<p align="center"><img src ="https://user-images.githubusercontent.com/69648635/143787202-3170fabd-ed43-49dd-9c50-fb8e1c2ea5e5.png"></p>

## Steps
* Clone this repository in your system
* Make sure you have all the libraries mentioned in requirements.txt installed
* Install weights of YOLO V4 from this link - [YoloV4 Weights]( https://github.com/AlexeyAB/darknet/releases/download/darknet_yolo_v3_optimal/yolov4.weights) and put it inside the ```yolo-coco``` folder
* Run Social Distancing Detector.ipynb
* For custom input video, in **config** cell, change the path of ```input``` to any other video of your choice
* Wait for the model to parse the video and generate the output.avi video.


## Results and Output
The following output was obtained for the pedestrians.mp4 video input:

<p align="center"><img src ="https://user-images.githubusercontent.com/69648635/143787647-391889f5-6ad1-40ee-b901-a88279a03309.gif"></p>


## Reference
* Research Paper - [Social Distancing Analyzer Using Computer Vision and Deep Learning](https://iopscience.iop.org/article/10.1088/1742-6596/1916/1/012039/pdf)
