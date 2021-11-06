# Getting introduced to Activation Functions in Neural Networks
## [Link to Video](https://drive.google.com/drive/folders/1Vfizxy3N7RvvPGkyMpSB-IZ9aH6Kx-2n?usp=sharing)

## What is an activation function
Activation function decides, whether a neuron should be activated or not by calculating weighted sum and further adding bias with it. 
An Activation function is a non-linear transformation that we apply on our input before propagating it to the next layer of neurons.
(It should be differentiable)

A neural network without the activation function. In that case, every neuron will only be performing a linear transformation on the inputs using the weights and biases. 
A neural network without an activation function is essentially just a linear regression model which would make it less powerful and it will not be able to learn the complex patterns from data

## Variants of Activation functions

### 1. Sigmoid
The function is differentiable. One of the most commonly used activation functions.
We know the range of sigmoid function is [0, 1]. What else do you know of that lies between 0 and 1?
Probability.
Thus, sigmoid is used for models where we have to predict the probability as an output as we know the probability of anything exists only in [0, 1].
Usually used in output layer of a binary classification, where result is either 0 or 1, as value for sigmoid function lies between 0 and 1 only so, result can be predicted easily to be 1 if value is greater than 0.5 and 0 otherwise.

### 2. tanh (hyperbolic tangent)
The function is differentiable. The tanh function is mainly used for classification between two classes.
tanh is also like sigmoid but better. The advantage being that the negative inputs will be mapped strongly negative and the zero inputs will be mapped near zero in the tanh graph.
Usually used in hidden layers of a neural network as it’s values lies between -1 to 1 hence the mean for the hidden layer comes out be 0 or very close to it, hence helps in centering the data by bringing mean close to 0. This makes learning for the next layer much easier.

### 3. ReLU (Rectified Linear Unit) 
It is the most widely used activation function. Chiefly implemented in hidden layers of Neural network.
ReLu is less computationally expensive than tanh and sigmoid because it involves simpler mathematical operations. At a time only a few neurons are activated making the network sparse making it efficient and easy for computation. In simple words, RELU learns much faster than sigmoid and Tanh function.
Leads to dying ReLU problem where all the negative values become zero immediately which decreases the ability of the model to fit or train from the data properly

### 4. Leaky ReLU
To deal with dying ReLU problem, the leak helps to increase the range of the ReLU function. Usually, the value of a= 0.01
Instead of setting some default value of a, we can set them as a parameter of a neural network and the network can be trained to learn the optimal value for it!

### 5. Softmax

It is a generalization of the sigmoid function i.e.when the number of classes is two, it becomes the same as the sigmoid function.
Used in the final layer of an ANN while performing multiclass classification tasks. 
The Softmax activation function calculates the relative probabilities of each class for being the output. Thus, the sum of the softmax values will always be equal to 1

## Pointers to choose appropriate activation function 
1. we must consider how difficult it is to compute the derivative, if at all it is differentiable.
2. How quickly a network with the chosen activation function converges
3. Whether it satisfies the conditions of the Universal Approximation Theorem.
4. How smooth it is

## Recommended Approaches
1. The basic rule of thumb is if you really don’t know what activation function to use, then simply use RELU as it is a general activation function and is used in most cases 
2. If your output is for binary classification then, sigmoid function is very natural choice for output layer.
3. Sigmoid functions and their combinations generally work better in the case of classification problems.
4. Sigmoid and tanh functions are sometimes avoided due to the vanishing gradient problem.
5. Tanh is avoided most of the time due to dead neuron problem.
6. ReLU activation function is widely used and is default choice as it yields better results.
7. If we encounter a case of dead neurons in our networks the leaky ReLU function is the best choice.
8. ReLU function should only be used in the hidden layers.
9. An output layer can be linear activation function in case of regression problems.

## Usage of sigmoid function to create a simple Perceptron model
## [Link to Code](https://drive.google.com/drive/folders/1Vfizxy3N7RvvPGkyMpSB-IZ9aH6Kx-2n?usp=sharing)

## [Link to PPT](https://drive.google.com/drive/folders/1Vfizxy3N7RvvPGkyMpSB-IZ9aH6Kx-2n?usp=sharing)
