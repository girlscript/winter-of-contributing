# **<ins>Video analysis with Computer Vision</ins>**

## **Computer Vision**
Computer vision is a field of artificial intelligence (AI) that enables computers and systems to derive meaningful information from digital images, videos and other visual inputs — and take actions or make recommendations based on that information. 
<br>
Computer vision, at its core, is about understanding images. The field has seen rapid growth over the last few years, especially due to deep learning and the ability to detect obstacles, segment images, or extract relevant context from a given scene.
<br>
Video, most applications of computer vision today center on images, with less focus on sequences of images (i.e. video frames).
<br>
Video allows for deeper situational understanding, because sequences of images provide new information about action. For example, we can track an obstacle through a sequence of images and understand its behavior to predict the next move. We can track a human pose, and understand the action taken with action classification.
<br><br>

## **Video Analytics**
Video analytics use artificial intelligence to complete various tasks by applying computer vision and deep learning to video footage or live video streams. Video analytics is also sometimes referred to as video content analysis or intelligent video analytics.
<br><img src='https://miro.medium.com/max/2000/1*vAhTRWkkjqX6__t1xN9HcA.png' style='width:40%'>
<br><br>

## **Video Analytics Processes**
Whether for surveillance camera systems or football analysis, the next generation of computer vision algorithms will include time.
<br>
The task of video surveillance involves two kind of algorithms:
- Object tracking
- Action classification
<br><br>

### **How does object detection in video analytics happen?**
Real-time Object Detection in video feeds has been a possibility for years by the emergence of algorithms such as Mask R-CNN or YOLO. These algorithms come pre-made and ready to detect the difference between objects in a field of view. 
<br>
A video is a set of frames. When studying a video, we can either study a video stream (live image feed) or a video sequence (fixed-length video).
- In a video stream, we consider the current image and the previous ones.
- In a video sequence, we have access to the full video, from the first image to the last.
<br>
Videos take up a lot of storage space and are usually not already using AI. This means that, with video, we simply have raw image data to work with.
<br>

### **Optical Flow**
In video analysis, this key problem is called optical flow estimation. Optical flow is the idea of computing a pixel shift between two frames. This is handled as a correspondence problem, as illustrated in the following image:
<br><img src='https://miro.medium.com/max/1400/1*HdSZAckkzQchDz9BEkcAlg.png' style='width:30%'><br>
The output optical flow is a vector of movement between frame 1 and frame 2. It looks like this:
<br><img src='https://app.dropinblog.com/uploaded/blogs/34241363/files/Unknown-9.png' style='width:30%'><br>
A lot of existing datasets address the optical flow problem, such as KITTI Vision Benchmark Suite or MPI Sintel . They both contain ground truth optical flow data, which is generally hard to get from more popular datasets.
<br>

### **Visual Object Tracking (VOT)**
Visual Object Tracking (VOT) is the science of tracking an object given its position in frame 1. We are not using a detection algorithm here—thus, we’re model free. In other words, we don’t know what we are tracking. We are simply given a starter bounding box and are asked to keep track of this object all along.
<br>
Tracking is performed by computing the similarity between frames 0 and 1. We check what’s in the bounding box and try to retrieve it in the next frame.
<br>
We can then move the bounding box a bit and track our obstacles.
<br>
Other features, such as color, can also be used to track the objects. Here, we compute the color of the given object and then compute the background that represents the closest color to the object. Then we remove it from our original image to track it.
<br><img src='https://miro.medium.com/max/1400/0*CNDNAd1GRaA_uBAC.png' style='width:30%'><br>
Steps for the process:
1. We receive the initial object to track using a bounding box
2. We compute a color histogram of this object
3. We compute the color of the background (near the object)
4. We remove the object color from the total image
5. We now have a color-based obstacle tracker
<br>

### **Multiple Object Tracking (MOT)**
Unlike the other family of trackers (VOT), MOT is more long-term.
<br>
We distinguish two variants:
- Detection-Based Tracking
- Detection-Free Tracking
<br>
Let’s consider Detection-Based Tracking. We have two tasks here:
- Object detection
- Object association
<br>
Object association means that we have to associate detections from time t to detections from time t+1. It relies heavily on the quality of the detector.
<br>
A bad detector will render the tracker not functional.
<br>
A good tracker should handle a few frames with no detections.
<br><img src='https://miro.medium.com/max/1400/1*nJptHkqZerAsKKM-H8RAGw.png' style='width:30%'>
<br>

### **Action Classification**
Action classification is the second family of tasks involved in building computer vision-based surveillance systems. Once we know how many people we have in the store, and once we know what they’ve been doing, we must analyze their actions.
<br>
Action classification depends directly on object detection and tracking—this is because we first need to understand a given situation or scene. Once we have that understanding, we can classify the actions inside the bounding box.
<br>

### **Optical flow**
Since optical flow is used to determine a vector between two frames. It can be used as an input for a classification neural network.
<br><img src='https://miro.medium.com/max/1400/1*urTVRZuE7GScrR83Nu6tgA.png' style='width:30%'><br>
From the optical flow, we define actions and stack a neural network classifier.
<br>

### **End-To-End**
The more recent and modern solution would be to use CNNs.
<br>
Action happens in a video, not an image. This means that we must send multiple frames to the CNN, which must then perform a classification task on what’s called a space-time volume.
<br>
With an image, it’s hard enough to do object detection or classification due to the image size, its rotation, etc. In a video, it’s even more difficult.
<br>
Here’s an example of a two-scale model working to classify actions from image streams.
<br><img src='https://miro.medium.com/max/1400/1*Z_NvXLogrn-A1Ii3A1D-XQ.png' style='width:30%'><br>
These neural networks work on 2 inputs and output an action. The spatial stream is working on a single image ; it’s stacked with the temporal stream working on an input optical flow . A linear classifier is applied here
<br>

### **Pose Estimation**
Pose estimation is a deep learning technique used as a means for action classification.
<br>
The process of pose estimation includes:
- Detecting keypoints (similar to facial landmarks)
- Tracking these keypoints
- Classifying the keypoints's movement
<br><img src='https://miro.medium.com/max/1400/1*1Vx9-Yxk07gdQtzystnpXw.png' style='width:30%'>
<br><br>

## **Uses of Video Analysis**
1. Face Recognition
2. Behavior Detection
3. Person Tracking
4. Crowd Detection
5. People Count / People Presence
6. Time Management
7. Zone Management and Analysis/Boundary Detection
<br><br>

## **Conclusion**
Video analytics are about making video surveillance systems smarter, more accurate, and more manageable for systems and users. Video analytics don’t only benefit surveillance operations, but also create business value for other customer organizations, such as the marketing departments in retail businesses.
<br>
Today, machines can automatically verify identity information for secure transactions, surveillance and security tasks, access control to buildings, etc. These applications usually work in controlled environments, and recognition algorithms can take advantage of the environmental constraints to obtain high recognition accuracy.





