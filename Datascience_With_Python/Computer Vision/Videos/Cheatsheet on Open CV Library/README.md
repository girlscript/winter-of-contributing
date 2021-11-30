# Cheatsheet on Open CV Library

## Video Link : [Cheatsheet on Open CV Library](https://drive.google.com/file/d/1ubo5_F38dgXGhX3M6x8mLMK_olkeqgxk/view?usp=sharing)

## Installing Necessary Packages
First you need to install python.

## Computer Vision
1. Computer vision is a field of study focused on the problem of helping computers to see.
2. Computer vision enables computers to see, identify and process images in the same way that human vision does, and then provide appropriate output. 
3. It is like imparting human intelligence and instincts to a computer, then perform appropriate analysis or act accordingly.
4. Computer vision is distinct from image processing.

## OpenCV
1. OpenCV is a huge open-source library for computer vision, machine learning, and image processing.
2. OpenCV supports a wide variety of programming languages like Python, C++, Java, etc.


## Installing OpenCV
    pip install opencv-python

## Import OpenCV
    import cv2

Now check the python version and install the openCV

## Reading Images & Videos
As the first step you have to get some images and videos and put it in folder named videos and images.

## Reading Images
We are going to use cv.imread function. What it does is it reads an image from a particular path and returns that image as a matrix of pixels.

If read an image with cv.imread you can use cv.imshow to display the image.

Then we want to add one more parameter which waits for the keyboard input to terminate the new window which is used for display. cv.waitKey(0) Here 0 is used so that the program will wait for an infinite amount of time to get an input from keyboard.


![image](https://user-images.githubusercontent.com/63282184/144033087-7230d4ad-bdfd-485f-a313-03ef03022efa.png)


## Reading Videos
Now about reading video, we will not be using cv.imread() instead we will create variable called capture with cv.VideoCapture(<argument>) function. Here the argument can be integer like 0, 1, 2 if you want to use your camera like webcam or another one. or you can give the path of the video you want to load.

  Since video is not a single frame we have to work on how to display it. Inorder to that we are going to create a while loop. Read the capture object and display them frame by frame.

  After that we make the waitKey wait either for 20 seconds or we specify a key (“d”) is pressed then also it should break out of the loop. After that we have to release the object and destroy all windows.
  
![image](https://user-images.githubusercontent.com/63282184/144033180-292b7708-691c-4f66-aae3-3c0d5e128307.png)


  
## Resize and Rescale
For re-scaling lets write a function that takes in the frame and scale factor. We then resize using cv.resize() function with input parameter frame, dimension .
Then we call the function in the previous read_video file.
  
  ![image](https://user-images.githubusercontent.com/63282184/144033311-ed6dd2d4-cffb-4f0a-8ccb-f08c7aba6433.png)

  
  
## Drawing shapes & Putting Text
In this part, we are going to draw and adding text to an image. This can be done in an existing image or a blank image. Also note that we need numpy package installed which we will use here. If you were following this tutorial I hope you have already installed the package.

  First we can read an image. we did before scroll up to see how to do that. Also we are going to do it in a blank image. How to create a blank image then? Lets see to that first.
  
  ![image](https://user-images.githubusercontent.com/63282184/144033438-2db0c208-c531-4a2f-bae8-59417538d557.png)
  
  
  Here we used numpy arrays to create an array of 500,500 dimension with uint8 as the dtype which is the dtype of an image. Thus displaying it we saw the blank image with the name Blank Image .
  
  
  ![image](https://user-images.githubusercontent.com/63282184/144033498-5a12e14a-c9cf-4eef-87f1-703dc953a2dc.png)

  
  ## Drawing a rectangle
For drawing a rectanle openCV provides us a a function called cv.rectangle() which needs argument like (<image>, point1, point2, color, thickness))

  ![image](https://user-images.githubusercontent.com/63282184/144033583-cf75881c-aa7c-40f7-9eeb-db7f8f74fb10.png)

  
  ## Drawing a circle
Drawing a circle just use the function cv.circle() . The rest are just like the above mentioned tricks.
  
  ![image](https://user-images.githubusercontent.com/63282184/144033656-477204a1-c75c-4fb2-8ddf-371ce47a06cc.png)
  
  
  ## Write text on an image
The way we do is very simple. We use cv.putText() with some arguments including <img, text_to_put, origin, fontface, fontScale, color, thickness> .
  
  ![image](https://user-images.githubusercontent.com/63282184/144033707-63d9e23e-c9ac-4888-b4d7-aa313070fb5c.png)






## Use of OpenCV
1. OpenCV is the huge open-source library for the computer vision, machine learning, and image processing and now it plays a major role in real-time operation which is very important in today’s systems.
2. By using it, one can process images and videos to identify objects, faces, or even handwriting of a human. When it integrated with various libraries, such as NumPy, python is capable of processing the OpenCV array structure for analysis.

## Application of OpenCV

1. Optical character recognition (OCR)
2. Machine inspection
3. Retail (e.g. automated checkouts)
4. 3D model building (photogrammetry)
5. Medical imaging
6. Automotive safety
7. Match move (e.g. merging CGI with live actors in movies)
8. Motion capture (mocap)
9. Surveillance
10. Fingerprint recognition and biometrics






