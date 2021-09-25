# :camera: **CAMERA CALIBRATION USING OPENCV** *(COMPUTER VISION)*

## **INTRODUCTION**
*   Camera calibration is the process of estimating intrinsic and/or 
extrinsic parameters. Intrinsic parameters deal with the camera's internal characteristics, such as, its focal length, skew, distortion, and image center. While, extrinsic parameters describe its position and orientation in the world.
*   Computer vision is the field of computer science that focuses on creating digital systems that can process, analyze, and make sense of visual data (images or videos) in the same way that humans do.

## :dart: **THE GOAL OF THE CALIBRATION**
The goal of the process is to find the 3×3 matrix K, the 3×3 rotation matrix \mathbf{R}, and the 3×1 translation vector \mathbf{t} using a set of known 3D points (X_w, Y_w, Z_w) and their corresponding image coordinates (u, v). When we get the values of intrinsic and extrinsic parameters the camera is said to be calibrated.

In summary, a camera calibration algorithm has the following inputs and outputs

Inputs : A collection of images with points whose 2D image coordinates and 3D world coordinates are known.
Outputs: The 3×3 camera intrinsic matrix, the rotation and translation of each image.
Note : In OpenCV the camera intrinsic matrix does not have the skew parameter. 
![Screenshot (492)](https://user-images.githubusercontent.com/36481036/134770082-6837e50f-02b9-436c-80dc-65dc57f5f79e.png)

## :ballot_box_with_check: **WORKFLOW**
![camera-calibration-flowchart-768x682](https://user-images.githubusercontent.com/36481036/134770101-c9a6027c-0929-4214-817c-929c3e21c447.png)


## :information_source: **STEPS INVOLVED-**
1.   Define the coordinates in accordance with the chessboard pattern.
2.   Take multiple images of the chessboard from different viewpoints in order to cover all the coordinates precisely.
3.   Locate 2D coordinates of the chessboard.
4.   Calculate camera distortion.
5.   Undistort the image using the calculated calibration.

![Screenshot (493)](https://user-images.githubusercontent.com/36481036/134770083-50cc94f5-f337-4d4a-8bfa-7fe3dc53e378.png)

### :pushpin: **NOTE:** The dataset reference was taken from https://github.com/YoniChechik/AI_is_Math

**:sunglasses:** **CREATOR**- https://github.com/theshredbox
