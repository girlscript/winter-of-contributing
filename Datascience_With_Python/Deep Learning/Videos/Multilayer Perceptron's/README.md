# Multilayer Perceptron's

## Video Link : [Multilayer Perceptron's](https://drive.google.com/file/d/1eoERxXIsUifvfepZ40ZHouJh563cT973/view?usp=sharing)

-  It is a neural network where the mapping between inputs and output is non-linear.
- A Multilayer Perceptron has input and output layers, and one or more hidden layers with many neurons stacked together. And while in the Perceptron the neuron must have an activation function that imposes a threshold, like ReLU or sigmoid, neurons in a Multilayer Perceptron can use any arbitrary activation function.

![image](https://user-images.githubusercontent.com/63282184/143844907-9ae1fff7-a7b3-41a3-b535-939e41f145a9.png)

## **When it used?**
- It is used when the output is numeric.
- When the inputs are linear or non-linear.

## **What are the other names of multilayer perceptron?**
- Fully connected network.
- Dense network.
- Artificial neural network(ANN)

## **How does this work?**

- Inputs are passed and then weights are assigned randomly, weights which results in less errors are chosen and then output is given.
- Formula for assignment of weights:
    -weight = weight + learning rate * (expected - predicted) * x
    - X= input

![image](https://user-images.githubusercontent.com/79050917/143477559-d04a4978-b0af-4fab-92f8-f3fc05983873.png)

When output is continuous, then output will have a single cell.
When output is discrete and have binary data, then output have a single or binary cells.
When output is discrete and have multiple data, then output have the cells on number of inputs passed.

![image](https://user-images.githubusercontent.com/79050917/143477612-a0209748-6bc8-4e89-a279-2fd0594508c4.png)




- Multilayer Perceptron falls under the category of feedforward algorithms, because inputs are combined with the initial weights in a weighted sum and subjected to the activation function, just like in the Perceptron. But the difference is that each linear combination is propagated to the next layer.
- Each layer is feeding the next one with the result of their computation, their internal representation of the data. This goes all the way through the hidden layers to the output layer.

- If the algorithm only computed the weighted sums in each neuron, propagated results to the output layer, and stopped there, it wouldn’t be able to learn the weights that minimize the cost function. If the algorithm only computed one iteration, there would be no actual learning.

## **Conclusion:**
- Multilayer perceptron is used for both linear and non-linear data sets.
- It has hidden layers.
- It is also used to slove the complex datasets.
