# **Depth Map from Stereo Pair Images**

## **Outline**
* Introduction
* Stereo images
* Library used for Depth Map
* Implementing approach
* Parameters for StereoBM
* Formula behind intuition(in .ipynb file)
* Implementaion using test cases(in .ipynb file)
* Applications of Depth Maps
* Limitaions of depth map(in .ipynb file)
* Summary
* References and Resources

## **Introduction**
A depth map is a picture where every pixel has depth information (rather than RGB) and it normally represented as a greyscale picture. Depth information means the distance of surface of scene objects from a viewpoint. Let us first understand the concept of stereo images and the depth of an image.

While walking or running, we notice that objects close to us seem to move faster than those far away. We call this underlying effect ‘parallax’. We can use this phenomenon to extract geometrical information from any spectacle. From numerous images of the same arena from various points of view, we can estimate a number of things; one of them being the interspace of the components. This distance is known as the depth of the image and the images are known as stereo images. Now, by pursuing the span of points amongst these depictions, we find the stretch of these spots from the camera.

![Depth map](https://www.researchgate.net/profile/Leonid_Yaroslavsky/publication/221472633/figure/fig1/AS:305541466345480@1449858170736/Stereo-images-left-and-right-images-and-corresponding-depth-map-centre-image.png)

## **Stereo images**

Two images with slight offset. For example, take a picture of an object from the center. Move your camera to your right by 6 cms while keeping the object at the centre of the image.Look for the same thing in both pictures and infer depth from the difference in position. This is called stereo matching. To have best results.Avoid distortions.

A stereo-pair image contains two views of a scene side by side. One of the views is intended for the left eye and the other for the right eye. These images are sometimes viewed with special equipment to direct each eye on to its intended target, but they are also often viewed without equipment.In a cross-eyed image, the view for the left eye is positioned on the right. The image is viewed by deliberately crossing one's eyes until the two images come together. It is difficult to explain how to do this, but one possible way is this. Hold a finger a short distance in front of your eyes and stare at it. In the background you should see two copies of the stereo pair, giving four views altogether. Move your finger away from you until you see the middle two of the four images come together. You should now see just three images in the background. Try to direct your attention slowly toward the middle image without moving your eyes, and it should gradually come into focus.

## **Library used for Depth Map**

Open CV is a huge open-source library for the computer vision,machine learning , and image processing and now it plays a major role in real-time operation which is very important in today's systems. 

## **Implementing approach**

* Collect or take stereo images.
* Import OpenCV and matplotlib libraries.
* Read both left and right images.
* Calculate disparity using stereo.compute.

## **Parameters for StereoBM**

* texture_threshold
* Speckle range and size
* Number of disparities
* min_disparity
* uniqueness_ratio
* prefilter_size and prefilter_cap

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
* https://www.cs.ox.ac.uk/people/ian.collier/3d/stereo.html
### Image links:
* https://th.bing.com/th/id/OIP.H9n17OT2NO9o2KP5XmxyegHaDX?pid=ImgDet&rs=1
* https://docs.opencv.org/3.4/stereo_depth.jpg
* https://www.researchgate.net/profile/Leonid_Yaroslavsky/publication/221472633/figure/fig1/AS:305541466345480@1449858170736/Stereo-images-left-and-right-images-and-corresponding-depth-map-centre-image.png
* https://media.geeksforgeeks.org/wp-content/uploads/20200623130832/lef2t.jpg
* https://media.geeksforgeeks.org/wp-content/uploads/20200623130206/right.png
* https://media.geeksforgeeks.org/wp-content/uploads/20200623130146/Output280.png
* https://docs.opencv.org/3.4/disparity_map.jpg
