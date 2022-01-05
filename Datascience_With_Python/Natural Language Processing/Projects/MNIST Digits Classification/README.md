# TOPIC: MNIST Digits Classification<br>

## MNIST dataset:<br>
MNIST stands for Modified National Institute of Standards and Technology Database.It is a dataset provided by keras API.<br>
It contains a total of 70,000 images of handwritten digits. All the images are labeled with the respective digit. <br>
The dataset of images is divided into training images and test images. Training images dataset contains 60,000 images of 28x28 pixels with their respective labels. It is used to train the model. And the test images dataset contains 10,000 images of 28x28 pixels with their respective labels.<br>

## APPROACH:<br>
In this task we will build MNIST digit classification using fully connected neural networks and convolutional neural networks(CNN).<br>
* Importing libraries
* Loading the dataset using Keras
* Visualization of our data i.e. to see the count of each digit and how they look.
* Normalizing the data by the maximum value in this case 255 making the data points in the range of 0 to 1 and reshaping.
* Then we will start training our neural network. And then predict the digits using this model.
* Evaluating the loss and accuracy.

### NEURAL NETWORKS:<br>
In the first method, we will build a simple neural network that contains two fully connected layers and apply it to our digit classification problem.<br>
Fully connected layers mean that each neuron in the previous layer is connected to every neuron in the next layer.<br>
![image](https://user-images.githubusercontent.com/89564985/136039461-89697f8f-6763-4fb6-bce5-f0e7698530ca.png)<br>
Image source: https://shimarafiei.ece.iut.ac.ir/content/developing-neural-network-mlp-without-using-any-existing-libraries<br>

### CONVOLUTIONAL NEURAL NETWORKS:<br>
CNNs are particularly well-suited for a variety of tasks in computer vision.<br>
In this method, we will build a CNN that contains two convolutional layers and pooling layers followed by two fully connected layers.<br>
![image](https://user-images.githubusercontent.com/89564985/136039164-3cefbd94-2c75-4004-866d-64829cc69e92.png)<br>
Image source: https://medium.com/@RaghavPrabhu/understanding-of-convolutional-neural-network-cnn-deep-learning-99760835f148<br>

## Activation function used:<br>
* Relu (Rectified linear unit):<br> 
It is the most commonly used activation function. It overcomes the problem of saturation in sigmoid function.<br>
![image](https://user-images.githubusercontent.com/89564985/136036373-28162ca8-cfa0-4a0f-bfbe-3f7039f6e0d5.png)<br>
Image source: https://medium.com/@kanchansarkar/relu-not-a-differentiable-function-why-used-in-gradient-based-optimization-7fef3a4cecec<br>

* Softmax:<br>
Generally used for multi-class classification. For each class, it will calculate the probability and that class with maximum probability will be our predicted output.<br>
![image](https://user-images.githubusercontent.com/89564985/136036688-882c3655-9e6f-47bc-9e7a-c6037e697f2c.png)<br>
Image source: https://deepai.org/machine-learning-glossary-and-terms/softmax-layer<br>

## Libraries used:
* Numpy
* Matplotlib
* Seaborn
* TensorFlow

## API used:
* Keras

## References:
https://www.analyticsvidhya.com/blog/2021/04/introduction-to-softmax-for-neural-network/<br>
https://www.analyticsvidhya.com/blog/2021/07/classification-of-handwritten-digits-using-cnn/<br>
