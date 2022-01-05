# Data Science with Python : Convolution Neural Networks
--------------------------------------
### What will we gather ?
- How a computer reads an image
- Why don't we prefer to use fully connected networks for image recognition
- What is convolutional neural network
- How does convolutional neural network work
- A use case of Convolutional neural network
- Summary

[![Convolutional neural networks](https://www.dropbox.com/s/wb387q7kil6z0uy/Capture.PNG?dl=0&raw=1)](https://drive.google.com/file/d/10fw-kCYAauCNG20OAA2DUqHk1rUE9GuM/view "Cnvolutional Neural Networks")

## Contribution made by
------------------------
##### Name: Samridhi Kapoor
##### Batch No.: 10
##### S. No.: 327
##### GitHub Profile Link: https://github.com/samridhikapoor
##### Type of Contribution: Video
  .


## Link to the video
----------------------
https://drive.google.com/file/d/104e_6GFgxsY_AQ5ekyoo-ZKGvTIUWKmN/view

## A use case of Convolutional neural network
----------------------------------------------
We are given a set of dog and cat images. The task is to build a model to predict the category of an animal: dog or cat?
### Problem Statement
We are given a set of dog and cat images. The task is to build a model to predict the category of an animal: dog or cat?
### Data overview
The data we collected is a subset of the Kaggle dog/cat dataset. In total, there are 10, 000 images, 80% for the training set, and 20% for the test set. In the training set, 4,000 images of dogs, while the test set has 1,000 images of dogs, and the rest are cats.

All images are saved in a special folder structure, making it easy for Keras to understand and differentiate the animal category of each image, as shown below.


<img width="397" alt="Capture" src="https://user-images.githubusercontent.com/83203229/135251846-668bffe8-d3de-4ab9-ad37-c942496b804f.PNG">

![image](https://user-images.githubusercontent.com/83203229/135251980-ae81fccd-db58-4917-bb5a-c80dbd572b76.png)

### Model Building
In general, 4 steps are required to build a CNN: Convolution, Max pooling, Flattening, and Full connection.

### 1.Convolution
The operation between an input image and a feature detector that results in a feature map is Convolution
Specifically, we use Conv2D() function from Keras to build the first convolution layer.

![image](https://user-images.githubusercontent.com/83203229/135252327-a97470fa-323a-4343-854a-bc45523a5a68.png)

### 2. Maxpooling
Fundamentally, max pooling is to reduce the number of nodes in the fully connected layers without losing key features and spatial structure information in the images. Specifically, we use MaxPooling2D() function to add the pooling layer.

![image](https://user-images.githubusercontent.com/83203229/135252577-364cd0f0-8324-40f8-aa57-a2a3dd7988fa.png)

### 3. Flattening
Flattening is to take all pooled feature maps into a single vector as the input for the fully connected layers. 

![image](https://user-images.githubusercontent.com/83203229/135253562-0e3cc0f8-b8d2-49cc-bc56-83b1737179e7.png)

### 4. Fully Connected layer
With the above, we converted an image into a one-dimensional vector. Now we will build a classifier using this vector as the input layer. First, create a hidden layer. output_dim is the number of nodes in the hidden layer. As a common practice, we choose 128 to start with and use ReLU as the activation function.

![image](https://user-images.githubusercontent.com/83203229/135253778-e4c2e394-7467-4fcf-81df-59d63b494a4f.png)

Then add an output layer. For binary classification, output_dim is 1, and the activation function is Sigmoid.

![image](https://user-images.githubusercontent.com/83203229/135253833-dccdfc7c-b818-40a7-94ce-e3c23b95b7f5.png)

### 5. Model Compiling
We will compile the CNN by choosing an SGD algorithm, a loss function, and performance metrics. We use binary_crossentropy for binary classification, and use categorical_crossentropy for multiple classification problem.

![image](https://user-images.githubusercontent.com/83203229/135254165-a3ed0bcd-bf93-4aa6-a353-432336265488.png)

### 6. Model fitting
Here we have 8000 images for the training set, which is not enough to avoid over-fitting. So, we perform image augmentation, such as rotating, flipping, or shearing to increase the number of images. It splits training images into batches, and each batch will be applied random image transformation on a random selection of images, to create many more diverse images.
Specifically, we will use **flow_from_directory(directory)** method from Keras Official website to load images and apply augmentation.

![image](https://user-images.githubusercontent.com/83203229/135254384-a0d0d85c-c8fd-4b8c-b98b-34ed5eb004c0.png)

### 7. Testing the performance of model
We obtained a training accuracy of 86% and a test accuracy of 76% with a minor over-fitting.

### 8. Model Improvement
Obviously, there is room to improve accuracy and reduce over-fitting. Two options are either adding more convolution layers or adding more dense layers. So we will add one more convolution layer.

![image](https://user-images.githubusercontent.com/83203229/135254717-3243ffe1-3eff-4be5-ad65-866c6a6cc5f4.png)

### 9. Testing and making predictions using our model
First, we create a folder ‘single_prediction’ for the images to be predicted as shown

![image](https://user-images.githubusercontent.com/83203229/135254965-f583197a-54e8-4eea-a007-48c9ae78635d.png)

Second, we use the image module from Keras to load test images.

![image](https://user-images.githubusercontent.com/83203229/135255030-aafb558b-bc9c-417a-a8c7-e2c9c653852c.png)

CNN requires an input image with 3 dimensions. So we need to add a dimension for the channel, from 2D array to 3D array.

![image](https://user-images.githubusercontent.com/83203229/135255141-22a9ee65-70c0-4fd1-8963-ce5607a948b8.png)

However, this is not enough, because CNN expects another dimension for the batch. Axis is to specify the position of the dimension we are adding. So batch dimension is added at index 0.

![image](https://user-images.githubusercontent.com/83203229/135255295-e19a1317-d049-4652-a394-911baf3dbaa3.png)

Preicting the results:

![image](https://user-images.githubusercontent.com/83203229/135255379-cc716d01-6cc0-4051-99ea-57af040cca3d.png)

We got a result of 1 as our output
With that, we know 0 is cat, and 1 is a dog. Great. our CNN made a correct prediction!

### 10. The final structure of our model

![image](https://user-images.githubusercontent.com/83203229/135253963-e762586d-a3ca-4a14-a56d-81b975ad8d3d.png)

### 11. Application of Convolutional Neural Networks
Below are some applications of Convolutional Neural Networks used today:

1. **Object detection**
With CNN, we now have sophisticated models like R-CNN, Fast R-CNN, and Faster R-CNN that are the predominant pipeline for many object detection models deployed in autonomous vehicles, facial detection, and so much more.

2. **Semantic segmentation**
In 2015, a group of researchers from Hong Kong developed a CNN-based Deep Parsing Network to incorporate rich information into an image segmentation model. Researchers from UC Berkeley also built fully convolutional networks that improved upon state-of-the-art semantic segmentation.

3. **Image Captioning**
CNNs are used with recurrent neural networks to write captions for images and videos. This can be used for many applications such as activity recognition or describing videos and images for the visually impaired. It has been heavily deployed by YouTube to make sense to the huge number of videos uploaded to the platform on a regular basis.

### 12. Advantages of Using CNN
- Minimize computation compared to a regular neural network
- Convolution simplifies computation to a great extent without losing the essence of the data
- They are great at handling image classification
- They use the same knowledge across all image locations

### 13. Conclusion
Convolutional Neural Networks are very similar to ordinary Neural Networks from the previous chapter: they are made up of neurons that have learnable weights and biases. Each neuron receives some inputs, performs a dot product and optionally follows it with a non-linearity. The whole network still expresses a single differentiable score function: from the raw image pixels on one end to class scores at the other. And they still have a loss function (e.g. SVM/Softmax) on the last (fully-connected) layer.




