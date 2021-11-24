1] AIM
MLPs are designed to approximate any continuous function and can solve problems which are not linearly separable.

2] PURPOSE
MLPs are useful in research for their ability to solve problems stochastically, which often allows approximate solutions for extremely complex problems like fitness approximation.

2] INTRODUCTION

The multi-layered perceptron is most used model in deep learning. A multilayer perceptron (MLP) is a class of feedforward artificial neural network (ANN). The term MLP is used ambiguously, sometimes loosely to mean any feedforward ANN, sometimes strictly to refer to networks composed of multiple layers of perceptrons (with threshold activation). An MLP is very simple algorithm compared to other models. MLP is used for stock analysis, image identification, spam detection, and election voting predictions and so on. Multilayer perceptrons are sometimes colloquially referred to as "vanilla" neural networks, especially when they have a single hidden layer. A multi-layered perceptron consists of interconnected neurons transferring information to each other, much like the human brain. Each neuron is assigned a value. The network can be divided into three main layers.

This network has an input layer (on the left) with three neurons, one hidden layer (in the middle) with three neurons and an output layer (on the right) with three neurons. There is one neuron in the input layer for each predictor variable. In the case of categorical variables, N-1 neurons are used to represent the N categories of the variable.

3] PROCESS OF APPLYING MULTILAYER PERCEPTRON

Multilayer perceptrons are often applied to supervised learning problems3: they train on a set of input-output pairs and learn to model the correlation (or dependencies) between those inputs and outputs. Training involves adjusting the parameters, or the weights and biases, of the model in order to minimize error. Backpropagation is used to make those weigh and bias adjustments relative to the error, and the error itself can be measured in a variety of ways, including by root mean squared error (RMSE).

Feedforward networks such as MLPs are like tennis, or ping pong. They are mainly involved in two motions, a constant back and forth. You can think of this ping pong of guesses and answers as a kind of accelerated science, since each guess is a test of what we think we know, and each response is feedback letting us know how wrong we are.

In the forward pass, the signal flow moves from the input layer through the hidden layers to the output layer, and the decision of the output layer is measured against the ground truth labels.

In the backward pass, using backpropagation and the chain rule of calculus, partial derivatives of the error function w.r.t. the various weights and biases are back-propagated through the MLP. That act of differentiation gives us a gradient, or a landscape of error, along which the parameters may be adjusted as they move the MLP one step closer to the error minimum. This can be done with any gradient-based optimisation algorithm such as stochastic gradient descent. The network keeps playing that game of tennis until the error can go no lower. This state is known as convergence.

![Multilayer Perceptron](https://user-images.githubusercontent.com/34959817/143298899-a1f024d8-2f59-4749-9891-a63f36e78b69.png)

4] TERMS
1--ARTIFICIAL NEURON

An artificial neuron is a mathematical function conceived as a model of biological neurons, a neural network. Artificial neurons are elementary units in an artificial neural network. The artificial neuron receives one or more inputs (representing excitatory postsynaptic potentials and inhibitory postsynaptic potentials at neural dendrites) and sums them to produce an output (or activation, representing a neuron's action potential which is transmitted along its axon).

Artificial neurons are designed to mimic aspects of their biological counterparts. However a significant performance gap exists between biological and artificial neural networks. In particular single biological neurons in the human brain with oscillating activation function capable of learning the XOR function have been discovered. However single artificial neurons with popular sigmoidal and ReLU like activation functions cannot learn the XOR function.

Usually each input is separately weighted, and the sum is passed through a non-linear function known as an activation function or transfer function. The transfer functions usually have a sigmoid shape, but they may also take the form of other non-linear functions, piecewise linear functions, or step functions. They are also often monotonically increasing, continuous, differentiable and bounded. Non-monotonic, unbounded and oscillating activation functions with multiple zeros that outperform sigmoidal and ReLU like activation functions on many tasks have also been recently explored.

2--HIDDEN LAYERS

A hidden layer in an artificial neural network is a layer in between input layers and output layers, where artificial neurons take in a set of weighted inputs and produce an output through an activation function. It is a typical part of nearly any neural network in which engineers simulate the types of activity that go on in the human brain.Hidden neural network layers are set up in many different ways.

In some cases, weighted inputs are randomly assigned. In other cases, they are fine-tuned and calibrated through a process called backpropagation. Either way, the artificial neuron in the hidden layer works like a biological neuron in the brain – it takes in its probabilistic input signals, works on them and converts them into an output corresponding to the biological neuron’s axon.

Many analyses of machine learning models focus on the construction of hidden layers in the neural network. There are different ways to set up these hidden layers to generate various results – for instance, convolutional neural networks that focus on image processing, recurrent neural networks that contain an element of memory and simple feedforward neural networks that work in a straightforward way on training data sets.

3--UNIVERSAL APPROXIMATORS

MLPs can capture complex interactions among our inputs via their hidden neurons, which depend on the values of each of the inputs. We can easily design hidden nodes to perform arbitrary computation, for instance, basic logic operations on a pair of inputs. Moreover, for certain choices of the activation function, it is widely known that MLPs are universal approximators. Even with a single-hidden-layer network, given enough nodes (possibly absurdly many), and the right set of weights, we can model any function, though actually learning that function is the hard part. You might think of your neural network as being a bit like the C programming language. The language, like any other modern language, is capable of expressing any computable program. But actually coming up with a program that meets your specifications is the hard part.

Moreover, just because a single-hidden-layer network can learn any function does not mean that you should try to solve all of your problems with single-hidden-layer networks. In fact, we can approximate many functions much more compactly by using deeper (vs. wider) networks

4--ACTIVATION FUNCTION

Activation function decides, whether a neuron should be activated or not by calculating weighted sum and further adding bias with it. The purpose of the activation function is to introduce non-linearity into the output of a neuron.

We know, neural network has neurons that work in correspondence of weight, bias and their respective activation function. In a neural network, we would update the weights and biases of the neurons on the basis of the error at the output. This process is known as back-propagation. Activation functions make the back-propagation possible since the gradients are supplied along with the error to update the weights and biases.

A neural network without an activation function is essentially just a linear regression model. The activation function does the non-linear transformation to the input making it capable to learn and perform more complex tasks.

Types of Activation Functions

1-Linear Function
2-Sigmoid Function
3-Tanh Function
4-RELU (Rectified linear unit)
5-Softmax Function

5] USAGE OF MLP'S

MLPs are suitable for classification prediction problems where inputs are assigned a class or label. They are also suitable for regression prediction problems where a real-valued quantity is predicted given a set of inputs. Data is often provided in a tabular format, such as you would see in a CSV file or a spreadsheet.

6] DATA VISUALIZATION

![Iris dataset Scatterplot](https://user-images.githubusercontent.com/34959817/143298773-a4c58729-1165-46d2-a718-b6f664de698e.png)

7] CONCLUSION

Perceptron models are the more simplistic kind of neural network in which they carry an input, the weight of each input, take the sum of weighted input and an activation function is applied.They accept and construct only binary values,i.e, perceptrons only implement for binary classification with one limitation that they are only applicable for linearly separable objects.Perceptrons are the fundamental of the neural network, one should have a good understanding of the perceptron model that furnishes advantages when studying deep neural networks.
