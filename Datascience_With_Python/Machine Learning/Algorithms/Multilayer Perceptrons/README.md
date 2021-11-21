1] INTRODUCTION

The multi-layered perceptron is most used model in deep learning. An MLP is very simple algorithm compared to other models. MLP is used for stock analysis, image identification, spam detection, and election voting predictions and so on. A multi-layered perceptron consists of interconnected neurons transferring information to each other, much like the human brain. Each neuron is assigned a value. The network can be divided into three main layers.

This network has an input layer (on the left) with three neurons, one hidden layer (in the middle) with three neurons and an output layer (on the right) with three neurons. There is one neuron in the input layer for each predictor variable. In the case of categorical variables, N-1 neurons are used to represent the N categories of the variable.   

2] ARTIFICIAL NEURON

An artificial neuron is a mathematical function conceived as a model of biological neurons, a neural network. Artificial neurons are elementary units in an artificial neural network. The artificial neuron receives one or more inputs (representing excitatory postsynaptic potentials and inhibitory postsynaptic potentials at neural dendrites) and sums them to produce an output (or activation, representing a neuron's action potential which is transmitted along its axon). 

Usually each input is separately weighted, and the sum is passed through a non-linear function known as an activation function or transfer function[clarification needed]. The transfer functions usually have a sigmoid shape, but they may also take the form of other non-linear functions, piecewise linear functions, or step functions. They are also often monotonically increasing, continuous, differentiable and bounded. 

3] HIDDEN LAYERS

A hidden layer in an artificial neural network is a layer in between input layers and output layers, where artificial neurons take in a set of weighted inputs and produce an output through an activation function. It is a typical part of nearly any neural network in which engineers simulate the types of activity that go on in the human brain.Hidden neural network layers are set up in many different ways.

 In some cases, weighted inputs are randomly assigned. In other cases, they are fine-tuned and calibrated through a process called backpropagation. Either way, the artificial neuron in the hidden layer works like a biological neuron in the brain – it takes in its probabilistic input signals, works on them and converts them into an output corresponding to the biological neuron’s axon.

Many analyses of machine learning models focus on the construction of hidden layers in the neural network. There are different ways to set up these hidden layers to generate various results – for instance, convolutional neural networks that focus on image processing, recurrent neural networks that contain an element of memory and simple feedforward neural networks that work in a straightforward way on training data sets.

4] UNIVERSAL APPROXIMATORS

MLPs can capture complex interactions among our inputs via their hidden neurons, which depend on the values of each of the inputs. We can easily design hidden nodes to perform arbitrary computation, for instance, basic logic operations on a pair of inputs. Moreover, for certain choices of the activation function, it is widely known that MLPs are universal approximators. Even with a single-hidden-layer network, given enough nodes (possibly absurdly many), and the right set of weights, we can model any function, though actually learning that function is the hard part. You might think of your neural network as being a bit like the C programming language. The language, like any other modern language, is capable of expressing any computable program. But actually coming up with a program that meets your specifications is the hard part.

Moreover, just because a single-hidden-layer network can learn any function does not mean that you should try to solve all of your problems with single-hidden-layer networks. In fact, we can approximate many functions much more compactly by using deeper (vs. wider) networks

5] ACTIVATION FUNCTION

Activation function decides, whether a neuron should be activated or not by calculating weighted sum and further adding bias with it. The purpose of the activation function is to introduce non-linearity into the output of a neuron.

We know, neural network has neurons that work in correspondence of weight, bias and their respective activation function. In a neural network, we would update the weights and biases of the neurons on the basis of the error at the output. This process is known as back-propagation. Activation functions make the back-propagation possible since the gradients are supplied along with the error to update the weights and biases.

A neural network without an activation function is essentially just a linear regression model. The activation function does the non-linear transformation to the input making it capable to learn and perform more complex tasks.

Types of Activation Functions

1-Linear Function
2-Sigmoid Function
3-Tanh Function
4-RELU (Rectified linear unit)
5-Softmax Function

6] CONCLUSION

Perceptron models are the more simplistic kind of neural network in which they carry an input, the weight of each input, take the sum of weighted input and an activation function is applied.They accept and construct only binary values,i.e, perceptrons only implement for binary classification with one limitation that they are only applicable for linearly separable objects.Perceptrons are the fundamental of the neural network, one should have a good understanding of the perceptron model that furnishes advantages when studying deep neural networks.


