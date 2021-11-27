# BACK PROPAGATION ALGORITHM

## Video Link: [BACK PROPAGATION ALGORITHM](https://drive.google.com/file/d/113LBgvnUC_lm1J6L4GRXXIaZjnLqwxkh/view?usp=sharing)



- Backpropagation algorithm is probably the most fundamental building block in a neural network. It was first introduced in 1960s and almost 30 years later (1989) popularized by Rumelhart, Hinton and Williams in a paper called “Learning representations by back-propagating errors”.

- The algorithm is used to effectively train a neural network through a method called chain rule. In simple terms, after each forward pass through a network, backpropagation performs a backward pass while adjusting the model’s parameters (weights and biases).


## Define the neural network model
The 4-layer neural network consists of 4 neurons for the input layer, 4 neurons for the hidden layers and 1 neuron for the output layer.

![image](https://user-images.githubusercontent.com/63282184/143669934-8859a1b8-2233-4d9c-940f-90d5840d063f.png)

## Input layer

The neurons, colored in purple, represent the input data. These can be as simple as scalars or more complex like vectors or multidimensional matrices.

![image](https://user-images.githubusercontent.com/63282184/143669948-3152f534-b72f-4f56-9bf5-6d4f6598174e.png)

The first set of activations (a) are equal to the input values. NB: “activation” is the neuron’s value after applying an activation function.

## Hidden layers

- The final values at the hidden neurons, colored in green, are computed using z^l — weighted inputs in layer l, and a^l— activations in layer l. For layer 2 and 3 the equations are:

![image](https://user-images.githubusercontent.com/63282184/143669970-c878c1ba-bb79-477e-b72e-9e7ef0e0a631.png)

- W² and W³ are the weights in layer 2 and 3 while b² and b³ are the biases in those layers.
- Activations a² and a³ are computed using an activation function f. Typically, this function f is non-linear (e.g. sigmoid, ReLU, tanh) and allows the network to learn complex patterns in data.

## Output layer
The final part of a neural network is the output layer which produces the predicated value. In our simple example, it is presented as a single neuron, colored in blue and evaluated as follows:

![image](https://user-images.githubusercontent.com/63282184/143669997-dba94ce4-2947-4be3-9f62-7bc3d7c86b0c.png)


###  **HOW DOES BACKPROPAGATION WORK**
Let us take a look at how backpropagation works. It has four layers: input layer, hidden layer, hidden layer II and final output layer.

So, the main three layers are:

1. Input layer
2. Hidden layer
3. Output layer
Each layer has its own way of working and its own way to take action such that we are able to get the desired results and correlate these scenarios to our conditions. Let us discuss other details needed to help summarizing this algorithm.

## **ARCHITECUTRE AND FLOW OF DATA**
<p align="center">
  <img width="450" height="300" src="https://lh4.googleusercontent.com/tCWuLxozdnKvC2ne9cg6tu5lFT6a-4q4h0CDCLDH0cKu9b99qrg9u6TwGPNHhTRSgqLaZ962jJT3L83caEf5hH_9__x2jOc2vxlfPU1Y5hi0TAwFKNx0NCvnovUXNdCfjZP8LHk">
</p>

1. Input layer receives x
2. Input is modeled using weights w
3. Each hidden layer calculates the output and data is ready at the output layer
4. Difference between actual output and desired output is known as the error
5. Go back to the hidden layers and adjust the weights so that this error is reduced in future runs
6. This process is repeated till we get the desired output. The training phase is done with supervision.  Once the model is stable, it is used in production.


##  **WHY DO WE NEED BACK PROPAGATION**
Backpropagation has many advantages, some of the important ones are listed below-

1. Backpropagation is fast, simple and easy to implement
2. There are no parameters to be tuned
3. Prior knowledge about the network is not needed thus becoming a flexible method
4. This approach works very well in most cases
5. The model need not learn the features of the function

##  **TYPES OF BACKPROPAGATION**
There are two types of backpropagation networks.
1. **Static Backpropagation**
In this network, mapping of a static input generates static output. Static classification problems like optical character recognition will be a suitable domain for static backpropagation.

2. **Recurrent backpropagation**
Recurrent backpropagation is conducted until a certain threshold is met.  After the threshold, the error is calculated and propagated backward.

**NOTE**: The difference between these two approaches is that static backpropagation is as fast as the mapping is static. 

## GOAL OF BACKPROPAGATION**
we are trying to get the value of weight such that the error becomes minimum. Basically, we need to figure out whether we need to increase or decrease the weight value.
Once we know that, we keep on updating the weight value in that direction until error becomes minimum. You might reach a point, where if you further update the weight, the error will increase. 
At that time you need to stop, and that is your final weight value.
<p align="center">
  <img width="400" height="300" src="https://d1jnx9ba8s6j9r.cloudfront.net/blog/wp-content/uploads/2017/09/Optimizer-1-768x601.png">
</p>

## Advantages of Backpropagation are:
- Backpropagation is fast, simple and easy to program.
- It has no parameters to tune apart from the numbers of input.
- It is a flexible method as it does not require prior knowledge about the network.
- It is a standard method that generally works well.








