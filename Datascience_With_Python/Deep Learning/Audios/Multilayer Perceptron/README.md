# Multilayer Perceptron

## Audio Link : [Multilayer Perceptron](https://drive.google.com/file/d/1wU_fCj8QYR0wvh051nV1kJyhoEgCis9J/view?usp=sharing)


- It is one of the Deep learning models.
- It is a black box technique as it is a automatic feature extraction.
- It learns at each layer.
- At first layer it learns low level information, at hidden layer it learns mid level and high level information.
- At each layer it tries to learn and those are known as representatives.
- It is made up of cells/perceptron.
- It is a fully connected to each perceptron, hence known as dense/fully connected network.
- It is known as multilayered as it has hidden layers which make it different from perceptron algorithm.
- Every cell other than the input cell, has two components:
     
     activation component and integration component.

![image](https://user-images.githubusercontent.com/79050917/139528478-4c9678ce-a6d3-4257-b936-faae526719a4.png)

**When it used?**
- It is used when the output is numeric.
- When the inputs are linear or non-linear.

**What are the other names of multilayer perceptron?**
- Fully connected network.
- Dense network.
- Artificial neural network(ANN)

**How does this work?**
- Inputs are passed and then weights are assigned randomly, weights which results in less errors are chosen and then output is given.

**Formula for assignment of weights:**
weight = weight + learning rate * (expected - predicted) * x

x= input

![image](https://user-images.githubusercontent.com/79050917/139528544-cac7b5a5-fc88-4c6d-8e42-8c06cde313b5.png)

- When output is continuous, then output will have a single cell.
- When output is discrete and have binary data, then output have a single or binary cells.
- When output is discrete and have multiple data, then output have the cells on number of inputs passed.

![image](https://user-images.githubusercontent.com/79050917/139528560-04b5f585-292c-4190-a558-56cfdd6265eb.png)

## Conclusion

A Multilayer Perceptron has input and output layers, and one or more hidden layers with many neurons stacked together. And while in the Perceptron the neuron must have an activation function that imposes a threshold, like ReLU or sigmoid, neurons in a Multilayer Perceptron can use any arbitrary activation function.

Multilayer Perceptron falls under the category of feedforward algorithms, because inputs are combined with the initial weights in a weighted sum and subjected to the activation function, just like in the Perceptron. But the difference is that each linear combination is propagated to the next layer.
Each layer is feeding the next one with the result of their computation, their internal representation of the data. This goes all the way through the hidden layers to the output layer.
