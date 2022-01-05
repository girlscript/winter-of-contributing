# Data Augmentation Techniques

## VIDEO LINK: [Data Augmentation Techniques](https://drive.google.com/file/d/1luf0C9T_QAmWxr1UA5vcGTsSuBACG7Yl/view?usp=sharing)

- Data augmentation techniques generate different versions of a real dataset artificially to increase its size. Computer vision and natural language processing (NLP) models use data augmentation strategy to handle with data scarcity and insufficient data diversity.

- Data augmentation algorithms can increase accuracy of machine learning models. According to an experiment, a deep learning model after image augmentation performs better in training loss (i.e. penalty for a bad prediction) & accuracy and validation loss & accuracy than a deep learning model without augmentation for image classification task.

## Data augmentation techniques in computer vision

### Adding noise
For blurry images, adding noise on the image can be useful. By “salt and pepper noise”, the image looks like consisting of white and black dots.

![image](https://user-images.githubusercontent.com/63282184/142797265-af9c3cb7-dc73-476b-8f8c-6cb8f88835a2.png)

### Cropping
A section of the image is selected, cropped and then resized to the original image size. 

![image](https://user-images.githubusercontent.com/63282184/142797291-bba7eb5c-e878-4c69-8ecc-dc7c3817cafc.png)

### Flipping
The image is flipped horizontally and vertically. Flipping rearranges the pixels while protecting the features of the image. Vertical flipping is not meaningful for some photos, but it can be useful in cosmology or for microscopic photos.

![image](https://user-images.githubusercontent.com/63282184/142797310-57490cb0-56d8-4fc8-8002-9b2e1d7f9da6.png)


### Rotation
The image is rotated by a degree between 0 and 360 degree. Every rotated image will be unique in the model.

![image](https://user-images.githubusercontent.com/63282184/142797340-9250dfb6-5fcb-432e-9f7c-868a241bb712.png)


### Scaling
The image is scaled outward and inward. An object in new image can be smaller or bigger than in the original image by scaling.

![image](https://user-images.githubusercontent.com/63282184/142797393-33ba6293-e3d4-4e85-81d5-b8e2d990a5f3.png)


### Translation
The image is shifted into various areas along the x-axis or y-axis, so neural network looks everywhere in the image to capture it.

![image](https://user-images.githubusercontent.com/63282184/142797425-186ad2b4-fbf7-4d3b-9bfe-78580d4a9d69.png)


### Brightness
The brightness of the image is changed and new image will be darker or lighter. This technique allows the model to recognize image in different lighting levels.

![image](https://user-images.githubusercontent.com/63282184/142797454-ed9593fc-b292-4e8e-96c1-74b6143afbb5.png)

### Contrast
The contrast of the image is changed and new image will be different from luminance and colour aspects. The following image’s contrast is changed randomly.

![image](https://user-images.githubusercontent.com/63282184/142797509-508c62a3-f01f-4e68-ad39-1eb29bf2748d.png)


### Color Augmentation
The color of image is changed by new pixel values. There is an example image which is grayscale.

![image](https://user-images.githubusercontent.com/63282184/142797529-1b37216b-d90c-486f-8970-2a88f3591c3d.png)

### Saturation
Saturation is depth or intensity of color in an image. The following image is saturated with data augmentation method.

![image](https://user-images.githubusercontent.com/63282184/142797559-be8d8693-0b23-4d50-87ca-d25d997df374.png)


## What are data augmentation libraries?
There are libraries for developers, such as Albumentations, Augmentor, Imgaug, nlpaug, NLTK and spaCy. These libraries include geometric transformation & color space transformations  functions, Kernel filters (i.e. image processing function for sharpening and blurring) and other text transformations. Data augmentation libraries use different deep learning frameworks, for example, Keras, MxNet, PyTorch and TensorFlow.

## Advantages

Data augmentation is useful to improve performance and outcomes of machine learning models by forming new and different examples to train datasets. If dataset in a machine learning model is rich and sufficient, the model performs better and more accurate.
