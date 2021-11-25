# Topic: Cat and Dog Image Classification
Cats vs Dogs classification is a fundamental Deep Learning project that involves classifying photos as either containing a dog or cat. 
The main aim of this task is to build a CNN (convolutional neural network) model to classify the images into cats or dogs.

## Dataset:
For this task I have used Kaggle's [Dogs & Cats Images](https://www.kaggle.com/chetankv/dogs-cats-images).<br>
It contains 8000 training images (4000 cat images and 4000 dog images) and 2000 test images (1000 cat images and 1000 dog images).

## Workflow:
* Importing dataset from Kaggle
* Importing libraries
* Storing the path of images in different list
* Plotting the cat and dog images for visualization purpose
* Training the model
* Predicting the images

## Convolutional Neural Network (CNN):
CNNs are particularly well-suited for a variety of tasks in computer vision. A CNN consists of one or more convolution layer, subsampling or pooling layer followed by one or more fully connected layers. CNN models to train and test, each input image will pass it through a series of convolution layers with filters, Pooling, fully connected layers and apply Softmax function to classify an object with probabilistic values between 0 and 1.<br>
In this task, we will build a CNN that contains one convolutional layers and pooling layers followed by two fully connected layers.<br>
![image](https://user-images.githubusercontent.com/89564985/143426082-9cfff1da-0167-4189-b3e2-6a229f023688.png)<br>
[Image source](https://medium.com/@RaghavPrabhu/understanding-of-convolutional-neural-network-cnn-deep-learning-99760835f148)<br>
* Convolution is the first layer to extract features from an input image. Convolution layer performs the convolution operation on the image pixels within the kernel or receptive field and kernel weights. Since convolution is a linear operation so we use activation functions to introduce non-linearity. The most common activation function used if ReLU (Rectified Linear Unit).
* Pooling layers are a form of downsampling which usually follow convolution layers in the neural network. This operation is used to reduce the dimensions of input and feature maps while still preserving the spatial invariants. There are many approaches like max-pooling, mean-pooling, etc. But the most common approach used is max pooling.<br>
![image](https://user-images.githubusercontent.com/89564985/143426854-28f19609-30c5-4635-8d41-dddc2c907f4d.png)<br>
[Image source](https://towardsdatascience.com/applied-deep-learning-part-4-convolutional-neural-networks-584bc134c1e2)
* Fully connected layer is the last layer of CNN. It allows the network to learn a function which maps the final layer of high-level feature maps to each of the image classifications.

### Activation Function:
* ReLU (Rectified Linear Unit): It is an element-wise operation which replaces negative values with 0. It overcomes the problem of saturation in sigmoid function.<br>
![image](https://user-images.githubusercontent.com/89564985/143427058-df6aeaca-e6fe-4757-b133-419e162fa59b.png)<br>
[Image source](https://medium.com/@kanchansarkar/relu-not-a-differentiable-function-why-used-in-gradient-based-optimization-7fef3a4cecec)

### Applications of CNN:
* Object detection
* Semantic segmentation
* Continuous robotic control
* Medical Image Computing
* Face recognition

## Libraries used:
* Numpy
* Matplotlib
* Tensorflow
* Keras
* os
* cv2

## Output:
![Screenshot (197)](https://user-images.githubusercontent.com/89564985/143428335-78332b9c-c5b3-4d88-b865-5cd6b9dec94d.png)<br>
![Screenshot (198)](https://user-images.githubusercontent.com/89564985/143428373-539c61a4-99b6-4522-8b55-77fd2788147f.png)

## Summary:
Cats vs Dogs classification is a fundamental Deep Learning project that involves classifying photos as either containing a dog or cat. In this task, I developed a convolutional neural network to classify photos of dogs and cats and got an accuracy of around 0.824 on training set.

#### References:
* https://medium.com/@RaghavPrabhu/understanding-of-convolutional-neural-network-cnn-deep-learning-99760835f148
* https://towardsdatascience.com/applied-deep-learning-part-4-convolutional-neural-networks-584bc134c1e2
