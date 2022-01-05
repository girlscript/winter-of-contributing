# Digit Recognizer

## MNIST dataset:
MNIST stands for Modified National Institute of Standards and Technology Database.It is a dataset provided by keras API.<br>
It contains a total of 70,000 images of handwritten digits. All the images are labeled with the respective digit.<br>
The dataset of images is divided into training images and test images. Training images dataset contains 60,000 images of 28x28 pixels with their respective labels. It is used to train the model. And the test images dataset contains 10,000 images of 28x28 pixels with their respective labels.

## CONVOLUTIONAL NEURAL NETWORKS (CNN):
![image](https://user-images.githubusercontent.com/89564985/140636498-ad1babac-8ce8-4b01-9fa9-ad6b5b400260.png)<br>
[Image source](https://medium.com/@RaghavPrabhu/understanding-of-convolutional-neural-network-cnn-deep-learning-99760835f148)<br>
* A CNN consists of one or more convolution layer, subsampling or pooling layer followed by one or more fully connected layers. CNN models to train and test, each input image will pass it through a series of convolution layers with filters, Pooling, fully connected layers and apply Softmax function to classify an object with probabilistic values between 0 and 1.<br>

* Convolution layer performs the convolution operation on the image pixels within the kernel or receptive field and kernel weights. Since convolution is a linear operation so we use activation functions to introduce non-linearity. The most common activation function used if ReLU (Rectified Linear Unit).<br>
![image](https://user-images.githubusercontent.com/89564985/140650152-97a75e14-2418-46ea-84f0-193949ee6790.png)<br>
![image](https://user-images.githubusercontent.com/89564985/140650165-84c0cfc0-bd84-4166-b359-7be8e2253627.png)<br>
[Image source](https://towardsdatascience.com/applied-deep-learning-part-4-convolutional-neural-networks-584bc134c1e2)<br>
We continue like this and aggregate the convolution results in the feature map.

* Pooling layers are a form of downsampling which usually follow convolution layers in the neural network. This operation is used to reduce the dimensions of input and feature maps while still preserving the spatial invariants. There are many approaches like max-pooling, mean-pooling, etc. But the most common approach used is max pooling.<br>
![image](https://user-images.githubusercontent.com/89564985/140650077-9062d4c3-9008-46f7-93f1-214e09839958.png)<br>
[Image source](https://towardsdatascience.com/applied-deep-learning-part-4-convolutional-neural-networks-584bc134c1e2)<br>

* Fully connected layer is the last layer of CNN. It allows the network to learn a function which maps the final layer of high-level feature maps to each of the image classifications.

### Activation functions:
 * ReLU (Rectified Linear Unit):
   It is an element-wise operation which replaces negative values with 0. It overcomes the problem of saturation in sigmoid function.<br>
   ![image](https://user-images.githubusercontent.com/89564985/140636681-28890eb1-1cc5-4427-ba71-9a8dcaee4aba.png)<br>
   [Image source](https://medium.com/@kanchansarkar/relu-not-a-differentiable-function-why-used-in-gradient-based-optimization-7fef3a4cecec)<br>
   
 * Softmax:
   Generally used for multi-class classification. For each class, it will calculate the probability and that class with maximum probability will be our predicted output.<br>
   ![image](https://user-images.githubusercontent.com/89564985/140636700-affab409-5494-4c5b-a65d-66b460348312.png)<br>
   [Image source](https://deepai.org/machine-learning-glossary-and-terms/softmax-layer)

### Applications of CNN:
* Object detection
* Semantic segmentation
* Continuous robotic control
* Medical Image Computing
* Face recognition
   
## Libraries used:
* Numpy
* Matplotlib
* Seaborn
* TensorFlow

## API used:
* Keras

## Workflow:
* Importing libraries
* Loading the dataset using Keras
* Visualization of our data i.e. to see the count of each digit and how they look.
* Normalizing the data by the maximum value in this case 255 making the data points in the range of 0 to 1 and reshaping.
* Then we will start training our model. And then predict the digits using this model.
* Evaluating the loss and accuracy.

## References:
* https://www.analyticsvidhya.com/blog/2021/04/introduction-to-softmax-for-neural-network/
* https://www.analyticsvidhya.com/blog/2021/07/classification-of-handwritten-digits-using-cnn/
