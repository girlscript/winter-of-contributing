# Object Detection

* Object detection is a computer vision technique that allows us to identify and locate objects in an image or video. With this kind of identification and localization, object detection can be used to count objects in a scene and determine and track their precise locations, all while accurately labeling them.
* Object detection is commonly confused with image recognition.
-> Image recognition assigns a label to an image. A picture of a car receives the label “dog”. A picture of two dogs, still receives the label “dog”. 
-> Object detection, on the other hand, draws a box around each dog and labels the box “dog”. The model predicts where each object is and what label should be applied. In that way, object detection provides more information about an image than recognition.

<img src="https://github.com/HastiSutaria/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Computer%20Vision/Projects/Object%20Detection/Images/ssd1Article.jpg" align = "center" alt="difference" width="400"/>


* Object detection can be broken down into machine learning-based approaches and deep learning-based approaches.
* In more traditional ML-based approaches, computer vision techniques are used to look at various features of an image, such as the color histogram or edges, to identify groups of pixels that may belong to an object. These features are then fed into a regression model that predicts the location of the object along with its label.
* On the other hand, deep learning-based approaches employ convolutional neural networks (CNNs) to perform end-to-end, unsupervised object detection, in which features don’t need to be defined and extracted separately.

# How does object detection work?
* Deep learning-based object detection models typically have two parts. An encoder takes an image as input and runs it through a series of blocks and layers that learn to extract statistical features used to locate and label objects. Outputs from the encoder are then passed to a decoder, which predicts bounding boxes and labels for each object.
* A number of popular object detection models belong to the R-CNN family. Over the years, they’ve become both more accurate and more computationally efficient. There are also a number of models that belong to the single shot detector family. MobileNet + SSD models feature a MobileNet-based encoder and the YOLO model features its own convolutional architecture.

# Purpose 
* The main purpose of object detection is to identify and locate one or more effective targets from still image or video data. It comprehensively includes a variety of important techniques, such as image processing, pattern recognition, artificial intelligence and machine learning. 
* It has broad application prospects in such areas such as road traffic accident prevention [1], warnings of dangerous goods in factories, military restricted area monitoring and advanced human–computer interaction. 
* Since the application scenarios of multi-target detection in the real world are usually complex and variable, balancing the relationship between accuracy and computing costs is a difficult task.

# Outline
* In this project, we will detect the objects from a still image with the help of OpenCV library in Python. OpenCV library is widely known for image processing, object detection and has many real world applications. 
* After importing the necessary libraries, we would read the sample image, train the model, use the coco dataset for the pre-defined classes (objects) and as an outcome we would detect the object, it's location, accuracy and index of the class (which helps us to identify the object). 
* Successfully in this project objects such as person, car, truck and traffic light are detected accurately from the image. Also the average accuracy of the model is greater than 60% which is fair enough.

# Object detection using deep learning with OpenCV and Python

When it comes to object detection, popular detection frameworks are
 * YOLO
 * SSD
 * Faster R-CNN
 
 ## Dependencies
  * opencv
  * numpy
  * matplotlib
  
`pip install numpy opencv-python`

 ## YOLO (You Only Look Once)
 
 Provided all the files are in the current directory : 
 * Requirements : [Visit here](https://github.com/HastiSutaria/winter-of-contributing/tree/Datascience_With_Python/Datascience_With_Python/Computer%20Vision/Projects/Object%20Detection/Requirements)

### Before
<img src="https://github.com/HastiSutaria/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Computer%20Vision/Projects/Object%20Detection/Images/sample.jpg" align = "center" alt="sampleinput" width="400"/>

### After
<img src="https://github.com/HastiSutaria/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Computer%20Vision/Projects/Object%20Detection/Images/Screenshot%202021-10-29%2015.21.44.png" align = "center" alt="sampleinput" width="400"/>

# Advantages
* To locate and identity objects with box around it.
* Real time detection
* Simple architecture
* High detection precision
* Low misdetection rate

# Disadvantages
* Complex algorithms
* Difficult for small and dense objects
* Poor accuracy for identical objects

# Applications
* Video surveillance
* Crowd counting 
* Person detection
* Anomaly detection (i.e. in industries like agriculture, health care)
* Self-driving cars
* Security applications
* Object tracking

# Conclusion
So to summarize, object detection can impact our life in a more positive way than ever before. I hope the above overview was helpful in understanding the basics of object detection and how it can be used in the real world. 

### Refer the [Object-Detection](https://github.com/HastiSutaria/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Computer%20Vision/Projects/Object%20Detection/obj_detection.ipynb) file for hands on experience. 

# References :
* https://towardsdatascience.com/
* https://www.geeksforgeeks.org/detect-an-object-with-opencv-python/

