# Neural Networks Cheatsheet

## Video Link : [Neural Networks Cheatsheet](https://drive.google.com/file/d/18fKTNqHwu1bbjnugkPRF2SjYmTJxQ03y/view?usp=sharing)

## Neural Networks
Neural networks are a class of models that are built with layers. Commonly used types of neural networks include convolutional and recurrent neural networks.

![image](https://user-images.githubusercontent.com/63282184/144078328-37be9162-5d36-448b-8b93-bd3cabe2ed0a.png)


## Architecture:
The vocabulary around neural networks architectures is described in the figure below:

![image](https://user-images.githubusercontent.com/63282184/144076783-61a294cf-96f2-4317-ac39-8482bcd9d62a.png)

By noting ii the i^{th}i th layer of the network and jj the j^{th}j th hidden unit of the layer, we have:

![image](https://user-images.githubusercontent.com/63282184/144076904-d863a315-1c0d-4503-bec4-d957deb6a625.png)


where we note w, b, z the weight, bias and output respectively.

## Activation function
Activation functions are used at the end of a hidden unit to introduce non-linear complexities to the model. Here are the most common ones:

![image](https://user-images.githubusercontent.com/63282184/144077046-abd14960-7ebf-4ce8-bc89-65507efad6d2.png)

## Cross-entropy loss
In the context of neural networks, the cross-entropy loss L(z,y)L(z,y) is commonly used and is defined as follows:

![image](https://user-images.githubusercontent.com/63282184/144077163-fdc1a9c7-fb2d-46bd-95a5-a3ccd01df04a.png)

## Learning rate
The learning rate, often noted \alphaα or sometimes \etaη, indicates at which pace the weights get updated. This can be fixed or adaptively changed. The current most popular method is called Adam, which is a method that adapts the learning rate.

## Backpropagation
Backpropagation is a method to update the weights in the neural network by taking into account the actual output and the desired output. The derivative with respect to weight ww is computed using chain rule and is of the following form:

![image](https://user-images.githubusercontent.com/63282184/144077283-286dd1b1-da33-4aa3-b5cf-1699478c78ec.png)

As a result, the weight is updated as follows:

![image](https://user-images.githubusercontent.com/63282184/144077332-492f9f5c-d4ea-4f2c-bf2c-efa0537218ca.png)

## Updating weightsIn a neural network, weights are updated as follows:

- Step 1: Take a batch of training data.
- Step 2: Perform forward propagation to obtain the corresponding loss.
- Step 3: Backpropagate the loss to get the gradients.
- Step 4: Use the gradients to update the weights of the network.

## Dropout
Dropout is a technique meant to prevent overfitting the training data by dropping out units in a neural network. In practice, neurons are either dropped with probability pp or kept with probability 1-p.1−p.

## Convolutional Neural Networks
## Convolutional layer requirement
By noting W the input volume size, F the size of the convolutional layer neurons, PP the amount of zero padding, then the number of neurons N that fit in a given volume is such that:

![image](https://user-images.githubusercontent.com/63282184/144077514-8a4bd352-1692-401a-aea2-9c46f2a4bf77.png)

## Batch normalization

![image](https://user-images.githubusercontent.com/63282184/144077633-68207729-3ff3-433f-92a2-f029f1d35ae2.png)

## Recurrent Neural Networks

## Types of gates

![image](https://user-images.githubusercontent.com/63282184/144077712-4c4b8eb5-b0a9-4526-8812-f2b5bb673987.png)

## Reinforcement Learning and Control

![image](https://user-images.githubusercontent.com/63282184/144077790-03b9d5a9-ab03-46b1-baf5-c9b375b042b7.png)

## Maximum likelihood estimate
The maximum likelihood estimates for the state transition probabilities are as follows:

![image](https://user-images.githubusercontent.com/63282184/144077867-6ab48fe0-f8d5-4c91-b6f1-966408c24d9c.png)

## Q-learning
Q-learning is a model-free estimation of QQ, which is done as follows:

![image](https://user-images.githubusercontent.com/63282184/144077963-1a4f1daa-4332-4c0e-80ec-922f56cad18c.png)


## Advantages and conclusion

- Store information on the entire network
-  The ability to work with insufficient knowledge
-  Good falt tolerance
-  Distributed memory
-  Gradual Corruption
-   Ability to train machine


  
