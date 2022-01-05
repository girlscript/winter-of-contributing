# **<ins>Neural Networks</ins>**

## **What is a Neural Network**
Neural Network is a computational model based on the structure and functions of biological neural networks. It is like an artificial human nervous system for receiving, processing, and transmitting information in terms of Computer Science.
<br>
Neural networks are a series of algorithms that mimic the operations of a human brain to recognize relationships between vast amounts of data.
<br><br>

## **Different layers in Neural Network**
Input Layer (All the inputs are fed in the model through this layer)
Hidden Layers (There can be more than one hidden layers which are used for processing the inputs received from the input layers)
Output Layer (The data after processing is made available at the output layer)
<br><img src='https://miro.medium.com/proxy/1*hczvrCYgU_JQt5sx-UGM1A.gif' style='width:20%'><br>
<br><br>

## **How Does a Neural Network Work ?**
Machine learning algorithms that use neural networks generally do not need to be programmed with specific rules that define what to expect from the input. The neural net learning algorithm instead learns from processing many labeled examples (i.e. data with with "answers") that are supplied during training and using this answer key to learn what characteristics of the input are needed to construct the correct output. Once a sufficient number of examples have been processed, the neural network can begin to process new, unseen inputs and successfully return accurate results. The more examples and variety of inputs the program sees, the more accurate the results typically become because the program learns with experience. 
<br><br>

## **Types of neural networks**
Neural networks can be classified into different types, which are used for different purposes.

- ### **Perceptron**
    The perceptron is the oldest neural network, created by Frank Rosenblatt in 1958. It has a single neuron and is the simplest form of a neural network
    <br><img src='https://i.ibb.co/HhFwR3m/image.png' style='width:25%'><br>
    A Perceptron is an algorithm used for supervised learning of binary classifiers. Binary classifiers decide whether an input, usually represented by a series of vectors, belongs to a specific class.
    <br>
    In short, a perceptron is a single-layer neural network. They consist of four main parts including input values, weights and bias, net sum, and an activation function.
    <br><img src='https://i.ibb.co/RTgR2ZN/image.png' style='width:25%'><br>
    The process begins by taking all the input values and multiplying them by their weights. Then, all of these multiplied values are added together to create the weighted sum. The weighted sum is then applied to the activation function, producing the perceptron's output.
    <br>

- ### **Feedforward**
    Feedforward neural networks, or multi-layer perceptrons (MLPs), are what we’ve primarily been focusing on within this article. They are comprised of an input layer, a hidden layer or layers, and an output layer. While these neural networks are also commonly referred to as MLPs, it’s important to note that they are actually comprised of sigmoid neurons, not perceptrons, as most real-world problems are nonlinear. Data usually is fed into these models to train them, and they are the foundation for computer vision, natural language processing, and other neural networks.
    <br><img src='https://i.ibb.co/Jvd31Jb/image.png' style='width:25%'><br>
    A Feed Forward Neural Network is an artificial neural network in which the connections between nodes does not form a cycle. The feed forward model is the simplest form of neural network as information is only processed in one direction. While the data may pass through multiple hidden nodes, it always moves in one direction and never backwards.
    <br>

- ### **Convolutional Neural Network**
    A convolutional neural network, or CNN, is a deep learning neural network designed for processing structured arrays of data such as images. Convolutional neural networks are widely used in computer vision and have become the state of the art for many visual applications such as image classification, and have also found success in natural language processing for text classification.
    <br><img src='https://i.ibb.co/GVfX1Z2/image.png' style='width:50%'><br>
    A convolutional neural network is a feed-forward neural network, often with up to 20 or 30 layers. These networks harness principles from linear algebra, particularly matrix multiplication, to identify patterns within an image.
    <br>
    
- ### **Recurrent Neural Networks**
    Recurrent neural networks (RNNs) are identified by their feedback loops. These learning algorithms are primarily leveraged when using time-series data to make predictions about future outcomes, such as stock market predictions or sales forecasting.
    <br><img src='https://i.ibb.co/vzskjWN/image.png' style='width:25%'><br>
    A Recurrent Neural Network is a type of neural network that contains loops, allowing information to be stored within the network. In short, Recurrent Neural Networks use their reasoning from previous experiences to inform the upcoming events. Recurrent models are valuable in their ability to sequence vectors, which opens up the API to performing more complicated tasks. A common example of Recurrent Neural Networks is machine translation.
<br><br>

## **Working Explaination**
Once the network has been trained with enough learning examples, it reaches a point where you can present it with an entirely new set of inputs it's never seen before and see how it responds. For example, suppose you've been teaching a network by showing it lots of pictures of chairs and tables, represented in some appropriate way it can understand, and telling it whether each one is a chair or a table. After showing it, let's say, 25 different chairs and 25 different tables, you feed it a picture of some new design it's not encountered before—let's say a chaise longue—and see what happens. Depending on how you've trained it, it'll attempt to categorize the new example as either a chair or a table, generalizing on the basis of its past experience.
<br><br>

## **How does a Neuron learn**
When an input is given to the neural network, it returns an output. During the learning phase, every inputs come with its label, explaining what output the neural network should have guessed. If the choice is the good one, actual parameters are kept and the next input is given. However, if the obtained output doesn’t match the label, weights are changed. Those are the only variables that can be changed during the learning phase. This process may be imagined as multiple buttons, that are turned into different possibilities every times an input isn’t guessed correctly.
<br>
To determine which weight is better to modify, a particular process, called “backpropagation” is done. 
<br><br>

## **Example**
We will be performing Feedforward propogation for iris dataset.
<br>
columns in iris dataset
    - sepal_length	
    - sepal_width	
    - petal_length	
    - petal_width	
    - species 
Here ```sepal_length, sepal_width, petal_length, petal_width``` are the features (aka input neurons) and ```species``` is the output.
<br>
To specify which species is the output we encode the type of species using ```LabelEncode()``` and also create new columns to be depected as each output neuron in the output layer.
<br><br><img src='https://i.ibb.co/VHKWhk1/image.png' style='width:30%'><br><br>
For this example we will have:
- 4 input layer neurons
- 2 hidden layer neurons
- 3 output layer neurons

From the above image we can see that we need to create random weights for:
- input to hidden layer ```w_i_h1, w_i_h2```
- hidden to output layer ```w_h_o1, w_h_o2, w_h_o3```
- hidden and output layer bais ```bais1, bais2```
```python
np.random.seed(42)
# weights of input - 1st hidden layer nodes
w_i_h1=np.random.rand(4,1) # 4 inputs multiply by weight go to 1st hidden layer neuron
w_i_h2=np.random.rand(4,1) 
# weights of 1st hidden layer to output layer nodes
w_h_o1=np.random.rand(2,1) 
w_h_o2=np.random.rand(2,1)
w_h_o3=np.random.rand(2,1)
# bais for hidden and output layer
bais1=np.random.rand(1)
bais2=np.random.rand(1)
```

Now we will be feeding data to the Neural Network
```python
# input to hidden layer
# feedforward step-1
z2_1 = np.dot(feature_set, w_i_h1) + bais1
z2_2 = np.dot(feature_set, w_i_h2) + bais2
# feedforward step-2
h2_1 = sigmoid(z2_1)
h2_2 = sigmoid(z2_2)

# hidden to output layer
# feedforward step-1
h2 = np.append(h2_1, h2_2, axis = 1)
z3_1 = np.dot(h2, w_h_o1)
z3_2 = np.dot(h2, w_h_o2)
z3_3 = np.dot(h2, w_h_o3)
# feedforward step-2
o1 = sigmoid(z3_1)
o2 = sigmoid(z3_2)
o3 = sigmoid(z3_3)
```
**Output:** Here O1, O2 and O3 contains the probablity that the input sample we passed is classified as respected species
<br>
In step-1 we are calculating the dot product of input with the weight for that neuron and then adding the bais<br>
In step-2 we are calculating the sigmoid value that we got in step-1 and this value is the value of that neuron

Now we will be calculating error for our predictions
```python
# error calculation 
fl1 = np.array(data.iloc[:,5])
fl1 = fl1.reshape((-1,1))
fl2 = np.array(data.iloc[:,6])
fl2 = fl2.reshape((-1,1))
fl3 = np.array(data.iloc[:,7])
fl3 = fl3.reshape((-1,1))

error1 = (o1 - fl1)
error2 = (o2 - fl2)
error3 = (o3 - fl3)

error1_square = np.multiply(error1, error1)
error2_square = np.multiply(error2, error2)
error3_square = np.multiply(error3, error3)

error = error1_square + error2_square + error3_square
print(f'Total Error : {np.sum(error)}')
```
**Output:** ``` Total Error : 144.83471642466847```

**Conclusion :**
1. Iris dataset of 150 samples is used for feedforward network. Initial weights are generated using randomizer, since back propogation is not used the error is calculated to be 144.83
2. If we change the weight using randomizer the error will change
### ***View the complete [ipynb](neural_networks_cheatsheet.ipynb) file***
<br><br>

## **Advantages of using Neural Network**
1. Store information on the entire network
2. The ability to work with insufficient knowledge
3. Good falt tolerance
4. The ability of parallel processing
5. Ability to train machine
<br><br>

## **Purpose of using Neural Networks**
- Neural networks are also ideally suited to help people solve complex problems in real-life situations. 
- They can learn and model the relationships between inputs and outputs that are nonlinear and complex.
- They make generalizations and inferences.
- They reveal hidden relationships, patterns and predictions.
- They can model highly volatile data (such as financial time series data) and variances needed to predict rare events (such as fraud detection). 
<br><br>

## **Application of Neural Networks**
Neural networks can be applied to a broad range of problems and can assess many different types of input, including images, videos, files, databases, and more. They also do not require explicit programming to interpret the content of those inputs.
<br>
A neural network evaluates price data and unearths opportunities for making trade decisions based on the data analysis. The networks can distinguish subtle nonlinear interdependencies and patterns other methods of technical analysis cannot.
<br>
- Credit card and Medicare fraud detection.
- Optimization of logistics for transportation networks.
- Medical and disease diagnosis.
<br><br>

## **Conclusion**
The neural network algorithms are very calculation intensive. They require highly efficient computing machines. Large datasets take a significant amount of runtime.
<br>
Neural networks are suitable for predicting the output because of learning only from examples. Neural networks are able to generalize and are resistant to noise. 
<br><br>

### ***Contributed by : Abhinav Mathur***
