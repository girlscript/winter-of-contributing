# :camera: **CAMERA CALIBRATION USING OPENCV** *(COMPUTER VISION)*

## :bulb: **INTRODUCTION**
*   Camera calibration is the process of estimating intrinsic and/or 
extrinsic parameters. Intrinsic parameters deal with the camera's internal characteristics, such as, its focal length, skew, distortion, and image center. While, extrinsic parameters describe its position and orientation in the world.
*   Computer vision is the field of computer science that focuses on creating digital systems that can process, analyze, and make sense of visual data (images or videos) in the same way that humans do.

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

## :dart: **THE GOAL OF THE CALIBRATION**
The goal of the process is to find the 3×3 matrix K, the 3×3 rotation matrix \mathbf{R}, and the 3×1 translation vector \mathbf{t} using a set of known 3D points (X_w, Y_w, Z_w) and their corresponding image coordinates (u, v). When we get the values of intrinsic and extrinsic parameters the camera is said to be calibrated.

In summary, a camera calibration algorithm has the following inputs and outputs-

Inputs : A collection of images with points whose 2D image coordinates and 3D world coordinates are known.

Outputs: The 3×3 camera intrinsic matrix, the rotation and translation of each image.
Note : In OpenCV the camera intrinsic matrix does not have the skew parameter. 

![Screenshot (492)](https://user-images.githubusercontent.com/36481036/134770082-6837e50f-02b9-436c-80dc-65dc57f5f79e.png)

## :ballot_box_with_check: **WORKFLOW**
<p align="center">
  <img width="650" height="500" src="https://user-images.githubusercontent.com/36481036/134770101-c9a6027c-0929-4214-817c-929c3e21c447.png">
</p>

## :information_source: **STEPS INVOLVED-**
1.   Define the coordinates in accordance with the chessboard pattern.
2.   Take multiple images of the chessboard from different viewpoints in order to cover all the coordinates precisely.
3.   Locate 2D coordinates of the chessboard.
4.   Calculate camera distortion.
5.   Undistort the image using the calculated calibration.

![Screenshot (493)](https://user-images.githubusercontent.com/36481036/134770083-50cc94f5-f337-4d4a-8bfa-7fe3dc53e378.png)

## :pushpin: **DATASET** 
* The dataset reference was taken from https://github.com/YoniChechik/AI_is_Math
* The datset consists of 17 images of a chessboard from different angles.
* Images from different angle ensures that all the aspects of target object are covered. This ensures a higher accuracy in calibrating the distortion.

## :thought_balloon: **PREREQUISITES**
All the dependencies and required libraries are included in the file <code>requirements.txt</code> [See here](./requirements.txt)

## :chart_with_upwards_trend:  **FINAL RESULT**
Using the dataset, the distortion coefficeint was calculated as follows-
<p align="left">
  <img width="1000" height="150" src="https://user-images.githubusercontent.com/36481036/135046477-de886960-92be-4f3b-bc50-0c7d5fb382d6.png">
</p>

## :page_facing_up: **CONCLUSION**
* Digital equipment can capture images at resolutions and with detail that far surpasses the human vision system. Computers can also detect and measure the difference between colors with very high accuracy. But making sense of the content of those images is a problem that computers have been struggling with for decades. To a computer, the above picture is an array of pixels, or numerical values that represent colors.

* Computer vision is the field of computer science that focuses on replicating parts of the complexity of the human vision system and enabling computers to identify and process objects in images and videos in the same way that humans do.

## :bust_in_silhouette: **CREDITS**
* https://bdtechtalks.com/2019/01/14/what-is-computer-vision/
* https://opencv24-python-tutorials.readthedocs.io/en/latest/
* https://learnopencv.com/camera-calibration-using-opencv/
* http://www.vision.caltech.edu/bouguetj/calib_doc/papers/DevelopmentCameraCalibrationMethodsModels.pdf
* https://github.com/YoniChechik/AI_is_Math

**:sunglasses:** **CREATOR**- https://github.com/theshredbox
