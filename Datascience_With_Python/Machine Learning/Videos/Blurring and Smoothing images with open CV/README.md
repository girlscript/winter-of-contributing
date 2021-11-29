## Blurring and Smoothing images with open CV
## [Click here to see the video](https://drive.google.com/file/d/1k2IxXEAh0ZKqEtMKOYE_rAYO11kFjeOU/view?usp=sharing)

- Smoothing and blurring is one of the most important preprocessing steps in all of computer vision and image processing. 
- By smoothing an image prior to applying techniques such as edge detection or thresholding we are able to reduce the amount of high-frequency content, such as noise and edges 
- Furthermore, this allows us to focus on the larger structural objects in the image.

![image](https://user-images.githubusercontent.com/79050917/143809284-b7ec2f7d-e1a0-4214-a3b7-279cc217b909.png)

**Types:**
- Simple average blurring
- Gaussian blurring
- Median filtering
- Bilateral filtering


- To blur an image with Python, we are required to make use of the blur() method offered by the OpenCV package. 
- This method takes in a variety of arguments, which you may read about here. 
- There are two important arguments to pass into this function:
   - src: This is our source image- i.e., the image to which we will apply the technique of blurring.
   - ksize: This is a tuple that represents the size of our kernel. It will specify the size of the matrix which will be used to average the neighboring pixels.

![image](https://user-images.githubusercontent.com/79050917/143809319-97619c51-a1eb-4923-b408-6d03010be4b2.png)

**Pros:** 
- Reduces noise in an image:
   - Noise reduction is one of the main use cases of Gaussian smoothing. 
- Easy to implement
- Automatic censoring:
   - Some use cases might require you to conceal the identity of someone or to censor images that might contain material that might be inappropriate to certain audiences. Gaussian smoothing works well in these cases.
- Symmetric:
   - Gaussian smoothing produces an image that is rotationally symmetric. It is applied the same no matter what direction you go in.

![image](https://user-images.githubusercontent.com/79050917/143809340-141d657a-2fe4-423e-9b90-37cf771098db.png)

**Cons** 
- Lose fine image detail and contrast
   - If you have a use case that requires you to examine fine detail, Gaussian smoothing might make that a lot harder. An example where you might want to examine fine detail would be in a medical image or a robot trying to grasp a specific point on an object.
- Does not handle “salt and pepper noise” well
   - Sometimes an image might have what is known as “salt-and-pepper noise.” Salt-and-pepper noise is defined as sparsely occurring white and black pixels. Below is an image showing salt-and-pepper noise.
- Lose fine image detail and contrast

**Overview:**
- ![image](https://user-images.githubusercontent.com/79050917/143809230-e8bb7464-9111-46d5-807c-c8bfde3b317a.png)
