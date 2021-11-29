# Getting introduced to Activation Functions in Neural Networks

## Audio Link : [Getting introduced to Activation Functions in Neural Networks](https://drive.google.com/file/d/1_Cn-Ftq7wViw6J6GEBvPcRQ-vaocyJQ2/view?usp=sharing)

The segregation plays a key role in helping a neural network properly function, ensuring that it learns from the useful information rather than get stuck analyzing the not-useful part. 

And this is also where activation functions come into the picture.

💡 Activation Function helps the neural network to use important information while suppressing irrelevant data points. 

## What is a Neural Network Activation Function?
An Activation Function decides whether a neuron should be activated or not. This means that it will decide whether the neuron’s input to the network is important or not in the process of prediction using simpler mathematical operations. 

The role of the Activation Function is to derive output from a set of input values fed to a node (or a layer).

![image](https://user-images.githubusercontent.com/63282184/143798422-e36084ce-5dd3-4249-b3e9-dade5cfff832.png)

![image](https://user-images.githubusercontent.com/63282184/143798440-8608d349-d79e-494e-bd3f-7e8a25331769.png)

## 3 Types of Neural Networks Activation Functions

## Binary Step Fnction
Binary step function depends on a threshold value that decides whether a neuron should be activated or not. 

The input fed to the activation function is compared to a certain threshold; if the input is greater than it, then the neuron is activated, else it is deactivated, meaning that its output is not passed on to the next hidden layer.

![image](https://user-images.githubusercontent.com/63282184/143798570-6883652e-7068-4963-a101-99807ef151fc.png)

### ![image](https://user-images.githubusercontent.com/63282184/143798521-e9e7ce78-8a4a-41a2-b392-68641fd9d8e2.png)

## Linear Activation Function
The linear activation function is also known as Identity Function where the activation is proportional to the input.

![image](https://user-images.githubusercontent.com/63282184/143798581-e6ff2475-7a89-4c63-a3b3-d7b28c069262.png)

![image](https://user-images.githubusercontent.com/63282184/143798546-54768004-c4f5-44c5-9820-aebe45581e97.png)


## Non-Linear Activation Functions
The linear activation function shown above is simply a linear regression model. 

Because of its limited power, this does not allow the model to create complex mappings between the network’s inputs and outputs. 

## Sigmoid / Logistic Activation Function 
This function takes any real value as input and outputs values in the range of 0 to 1. 

The larger the input (more positive), the closer the output value will be to 1.0, whereas the smaller the input (more negative), the closer the output will be to 0.0, as shown below.

![image](https://user-images.githubusercontent.com/63282184/143802894-96cbc9b3-6bdb-4dd0-9c73-054609334193.png)


## Tanh Function (Hyperbolic Tangent)
Tanh function is very similar to the sigmoid/logistic activation function, and even has the same S-shape with the difference in output range of -1 to 1. In Tanh, the larger the input (more positive), the closer the output value will be to 1.0, whereas the smaller the input (more negative), the closer the output will be to -1.0.

![image](https://user-images.githubusercontent.com/63282184/143798758-f97d4242-5df5-4040-be25-26cc758f6e9f.png)

![image](https://user-images.githubusercontent.com/63282184/143798772-1651802a-8642-444f-80f4-0582795c7e4a.png)

## ReLU Function
ReLU stands for Rectified Linear Unit. 

Although it gives an impression of a linear function, ReLU has a derivative function and allows for backpropagation while simultaneously making it computationally efficient. 

The main catch here is that the ReLU function does not activate all the neurons at the same time. 

The neurons will only be deactivated if the output of the linear transformation is less than 0.


![image](https://user-images.githubusercontent.com/63282184/143798792-ffbf58fb-d5ff-44be-87ab-2e2fd60bb533.png)

![image](https://user-images.githubusercontent.com/63282184/143798804-185db524-7ff8-4fb8-9fad-b6608c2ef6b5.png)



## Softmax Function
Before exploring the ins and outs of the Softmax activation function, we should focus on its building block—the sigmoid/logistic activation function that works on calculating probability values. 

![image](https://user-images.githubusercontent.com/63282184/143798915-495c1a42-9d71-4238-944a-96c1db71b315.png)

![image](https://user-images.githubusercontent.com/63282184/143798937-b1406691-20e5-4847-8a02-70b446891371.png)




## Conclusion 

- Activation Functions are used to introduce non-linearity in the network. 
- A neural network will almost always have the same activation function in all hidden layers. This activation function should be differentiable so that the parameters of the network are learned in backpropagation. 
- ReLU is the most commonly used activation function for hidden layers. 
- While selecting an activation function, you must consider the problems it might face: vanishing and exploding gradients. 
- Regarding the output layer, we must always consider the expected value range of the predictions. If it can be any numeric value (as in case of the regression problem) you can use the linear activation function or ReLU. 
- Use Softmax or Sigmoid function for the classification problems.
