## Overview of Perceptron
## [Click here to listen the audio](https://drive.google.com/file/d/1mUzR1usQlcq_SdpiMG2-RZN18OKkE4ID/view?usp=sharing)
**Perceptron:**
- It is one of the Deep learning models.
- It is a black box technique as it is a automatic feature extraction.
- It learns at each layer.
- At first layer it learns low level information, at hidden layer it learns mid level and high level information.
- At each layer it tries to learn and those are known as representatives.
- It is made up of cells/perceptron.
- It is a fully connected to each perceptron, hence known as dense/fully connected network.
- It is known as multilayered as it has hidden layers which make it different from perceptron algorithm.
- Every cell other than the input cell, has two components:
       - activation component and integration component.
 ![image](https://user-images.githubusercontent.com/79050917/142865735-e5307b39-98a4-4993-b8d5-5f0c709235fe.png)

**When it used?**
- It is used when the output is numeric.
- When the inputs are linear or non-linear.

**How does this work?**
Inputs are passed and then weights are assigned randomly, weights which results in less 
errors are chosen and then output is given.

Formula for assignment of weights:

weight = weight + learning rate * (expected - predicted) * x

X= input
- When output is continuous, then output will have a single cell.
- When output is discrete and have binary data, then output have a single or binary cells.
- When output is discrete and have multiple data, then output have the cells on number 
of inputs passed

**Advantages**
- Quick predictions.
- Can be performs with smaller data

**Disadvantages:**
- Cannot be applied on non-linear data.
- Proper functioning of model depends on training of data.
