<img src="https://github.com/nakshatra-garg/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Deep%20Learning/Projects/Fashion%20MNIST%20using%20CNNs/Images/cnn.png">

# Description

## What are CNNs?
A Convolutional Neural Network (ConvNet/CNN) is a Deep Learning algorithm which can take in an input image, assign importance (learnable weights and biases) to various aspects/objects in the image and be able to differentiate one from the other. 

The pre-processing required in a ConvNet is much lower as compared to other classification algorithms. While in primitive methods filters are hand-engineered, with enough training, ConvNets have the ability to learn these filters/characteristics.
The architecture of a ConvNet is analogous to that of the connectivity pattern of Neurons in the Human Brain and was inspired by the organization of the Visual Cortex. Individual neurons respond to stimuli only in a restricted region of the visual field known as the Receptive Field. A collection of such fields overlap to cover the entire visual area.

It uses a special technique called Convolution. Now in mathematics convolution is a mathematical operation on two functions that produces a third function that expresses how the shape of one is modified by the other. Bottom line is that the role of the ConvNet is to reduce the images into a form that is easier to process, without losing features that are critical for getting a good prediction.

<img src="https://github.com/nakshatra-garg/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Deep%20Learning/Projects/Fashion%20MNIST%20using%20CNNs/Images/example_cnn.png">

## Dataset Used
Fashion-MNIST is a dataset of Zalando's article images—consisting of a training set of 60,000 examples and a test set of 10,000 examples. Each example is a 28x28 grayscale image, associated with a label from 10 classes. Zalando intends Fashion-MNIST to serve as a direct drop-in replacement for the original MNIST dataset for benchmarking machine learning algorithms. It shares the same image size and structure of training and testing splits. You can get the dataset from [here](https://www.kaggle.com/zalando-research/fashionmnist)

## How does it work?
Convolutional neural networks are composed of multiple layers of artificial neurons. Artificial neurons, a rough imitation of their biological counterparts, are mathematical functions that calculate the weighted sum of multiple inputs and outputs an activation value. When you input an image in a ConvNet, each layer generates several activation functions that are passed on to the next layer.

The first layer usually extracts basic features such as horizontal or diagonal edges. This output is passed on to the next layer which detects more complex features such as corners or combinational edges. As we move deeper into the network it can identify even more complex features such as objects, faces, etc.

An RGB image is nothing but a matrix of pixel values having three planes whereas a grayscale image is the same but it has a single plane. For example,

<img src="https://github.com/nakshatra-garg/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Deep%20Learning/Projects/Fashion%20MNIST%20using%20CNNs/Images/example_cnn_2.png">

We take a filter/kernel(3×3 matrix) and apply it to the input image to get the convolved feature. This convolved feature is passed on to the next layer. Let's see how it works in RGB.

<img src="https://github.com/nakshatra-garg/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Deep%20Learning/Projects/Fashion%20MNIST%20using%20CNNs/Images/example_cnn_3.gif">

## What’s a pooling layer?
Similar to the Convolutional Layer, the Pooling layer is responsible for reducing the spatial size of the Convolved Feature. This is to decrease the computational power required to process the data by reducing the dimensions. There are two types of pooling average pooling and max pooling. I’ve only had experience with Max Pooling so far I haven’t faced any difficulties. In Max Pooling we find the maximum value of a pixel from a portion of the image covered by the kernel. Max Pooling also performs as a Noise Suppressant. It discards the noisy activations altogether and also performs de-noising along with dimensionality reduction.

<img src="https://github.com/nakshatra-garg/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Deep%20Learning/Projects/Fashion%20MNIST%20using%20CNNs/Images/pooling_layer.gif">

## Advantages
- The main advantage of CNN compared to its predecessors is that it automatically detects the important features without any human supervision. For example, given many pictures of cats and dogs it learns distinctive features for each class by itself.

- CNN is also computationally efficient. It uses special convolution and pooling operations and performs parameter sharing. This enables CNN models to run on any device, making them universally attractive.

## Limitations
Despite the power and resource complexity of CNNs, they provide in-depth results. At the root of it all, it is just recognizing patterns and details that are so minute and inconspicuous that it goes unnoticed to the human eye. But when it comes to understanding the contents of an image it fails.
Several studies have shown that CNNs trained on ImageNet and other popular datasets fail to detect objects when they see them under different lighting conditions and from new angles.

# Fashion MNIST
## Purpose
The Fashion MNIST dataset was developed as a response to the wide use of the MNIST dataset, that has been effectively “solved” given the use of modern convolutional neural networks.

Fashion-MNIST was proposed to be a replacement for MNIST, which makes it is possible to routinely achieve error rates of 10% or less. Like MNIST, it can be a useful starting point for developing and practicing a methodology for solving image classification using convolutional neural networks.

## Features
Each training and test example is assigned to one of the following labels:

| Label | Description |
| --- | --- |
| 0 | T-shirt/top |
| 1 | Trouser |
| 2 | Pullover |
| 3 | Dress |
| 4 | Coat |
| 5 | Sandal |
| 6 | Shirt |
| 7 | Sneaker |
| 8 | Bag |
| 9 | Ankle boot |

## Why use Fashion MNIST
Here are some good reasons:

- MNIST is too easy. Convolutional nets can achieve 99.7% on MNIST. Classic machine learning algorithms can also achieve 97% easily.
- MNIST is overused.
- MNIST can not represent modern CV tasks

# CNN Model Using Fashion MNIST
## Accuracy Achieved
After 50 epochs, The model was able to achieve an accuracy of **95.71%** on the training set and **93.08%** on the testing set. The loss function used was sparse categorical crossentropy and which came out to be around 0.1122 (on training set) and 0.2172 (on testing set).

<img src="https://github.com/nakshatra-garg/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Deep%20Learning/Projects/Fashion%20MNIST%20using%20CNNs/Images/model_fitting.jpg">

## Output
<img src="https://github.com/nakshatra-garg/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Deep%20Learning/Projects/Fashion%20MNIST%20using%20CNNs/Images/accuracy_and_loss_plot.png">


# Conclusion
Despite the limits of convolutional neural networks, however, there’s no denying that they have caused a revolution in artificial intelligence. Today, CNN’s are used in many computer vision applications such as facial recognition, image search, and editing, augmented reality, and more. As advances in convolutional neural networks show, our achievements are remarkable and useful, but we are still very far from replicating the key components of human intelligence.

