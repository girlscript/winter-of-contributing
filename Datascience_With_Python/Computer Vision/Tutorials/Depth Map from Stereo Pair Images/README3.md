# **Depth Map from Stereo Pair Images**

## **Outline**
* Introduction
* Stereo images
* Library used for Depth Map
* Implementing approach
* Applications of Depth Maps
* Summary
* References and Resources

## **Introduction**
A depth map is a picture where every pixel has depth information (rather than RGB) and it normally represented as a greyscale picture. Depth information means the distance of surface of scene objects from a viewpoint. 

![Depth map](https://www.researchgate.net/profile/Leonid_Yaroslavsky/publication/221472633/figure/fig1/AS:305541466345480@1449858170736/Stereo-images-left-and-right-images-and-corresponding-depth-map-centre-image.png)

## **Stereo images**

Two images with slight offset. For example, take a picture of an object from the center. Move your camera to your right by 6 cms while keeping the object at the centre of the image.Look for the same thing in both pictures and infer depth from the difference in position. This is called stereo matching. To have best results.Avoid distortions.

## **Library used for Depth Map**

Open CV is a huge open-source library for the computer vision,machine learning , and image processing and now it plays a major role in real-time operation which is very important in today's systems. 

## **Implementing approach**

* Collect or take stereo images.
* Import OpenCV and matplotlib libraries.
* Read both left and right images.
* Calculate disparity using stereo.compute.

## **Applications of Depth Maps**

* Simulating shallow depths of field
* Shadow mapping 
* Modelling and reconstructing 3D shapes

## **Summary**
Thus, Depth maps are an important aspect for the stereo pair images for 3D reconstruction and using this simple implementation gives us an insight in the disparity which is faced in different dimensions are placed. OpenCV provides us this module so that we can work upon finding the disparty ratio and correctly implement it in our models. The mathematical approach of the concept of stereo images is also clearly discussed to give a large perspective on this topic and correlation between depth maps and stereo pair images.

## **References and Resources**
* https://en.wikipedia.org/wiki/Depth_map
* https://www.geeksforgeeks.org/python-opencv-depth-map-from-stereo-images/
* https://docs.opencv.org/3.4/dd/d53/tutorial_py_depthmap.html
### Image links:
* https://th.bing.com/th/id/OIP.H9n17OT2NO9o2KP5XmxyegHaDX?pid=ImgDet&rs=1
* https://docs.opencv.org/3.4/stereo_depth.jpg
* https://www.researchgate.net/profile/Leonid_Yaroslavsky/publication/221472633/figure/fig1/AS:305541466345480@1449858170736/Stereo-images-left-and-right-images-and-corresponding-depth-map-centre-image.png