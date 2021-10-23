# :chart_with_upwards_trend: **BACK PROPAGATION ALGORITHM** 
<p align="center">
  <img width="450" height="300" src="https://cdn-images-1.medium.com/max/550/1*pO5X2c28F1ysJhwnmPsy3Q.gif">
</p>

## 💡 **INTRODUCTION**
We can define the backpropagation algorithm as an algorithm that trains some given feed-forward Neural Network for a given input pattern where the classifications are known to us. 
At the point when every passage of the example set is exhibited to the network, the network looks at its yield reaction to the example input pattern. After that, the comparison done between output response and expected output with the error value is measured. 
Later, we adjust the connection weight based upon the error value measured.

### ❓ **WHAT IS A NEURAL NETWORK**
A neural network is a collection of connected units. Each connection has a weight associated with it. This system helps in building predictive models based on huge data sets.
It works like a human nervous system and helps in understanding images, learning like a human, and synthesizing speech, among many others.
<p align="center">
  <img width="350" height="300" src="https://thumbs.gfycat.com/BlandGlamorousFrenchbulldog.webp">
</p>

### :pushpin: **HOW DOES BACKPROPAGATION WORK**
Let us take a look at how backpropagation works. It has four layers: input layer, hidden layer, hidden layer II and final output layer.

So, the main three layers are:

1. Input layer
2. Hidden layer
3. Output layer
Each layer has its own way of working and its own way to take action such that we are able to get the desired results and correlate these scenarios to our conditions. Let us discuss other details needed to help summarizing this algorithm.

#### :open_file_folder: **ARCHITECUTRE AND FLOW OF DATA**
<p align="center">
  <img width="450" height="300" src="https://lh4.googleusercontent.com/tCWuLxozdnKvC2ne9cg6tu5lFT6a-4q4h0CDCLDH0cKu9b99qrg9u6TwGPNHhTRSgqLaZ962jJT3L83caEf5hH_9__x2jOc2vxlfPU1Y5hi0TAwFKNx0NCvnovUXNdCfjZP8LHk">
</p>

1. Input layer receives x
2. Input is modeled using weights w
3. Each hidden layer calculates the output and data is ready at the output layer
4. Difference between actual output and desired output is known as the error
5. Go back to the hidden layers and adjust the weights so that this error is reduced in future runs
6. This process is repeated till we get the desired output. The training phase is done with supervision.  Once the model is stable, it is used in production.


## :memo: **WHY DO WE NEED BACK PROPAGATION**
Backpropagation has many advantages, some of the important ones are listed below-

1. Backpropagation is fast, simple and easy to implement
2. There are no parameters to be tuned
3. Prior knowledge about the network is not needed thus becoming a flexible method
4. This approach works very well in most cases
5. The model need not learn the features of the function

## :incoming_envelope: **FEED FORWARD NETWORK**
Feedforward networks are also called MLN i.e Multi-layered Networks. They are known as feed-forward because the data only travels forward in NN through input node, hidden layer and finally to the output nodes.  It is the simplest type of artificial neural network.
<p align="center">
  <img width="300" height="300" src="https://upload.wikimedia.org/wikipedia/en/5/54/Feed_forward_neural_net.gif">
</p>


## :mag_right: **TYPES OF BACKPROPAGATION**
There are two types of backpropagation networks.
1. **Static Backpropagation**
In this network, mapping of a static input generates static output. Static classification problems like optical character recognition will be a suitable domain for static backpropagation.

2. **Recurrent backpropagation**
Recurrent backpropagation is conducted until a certain threshold is met.  After the threshold, the error is calculated and propagated backward.

**NOTE**: The difference between these two approaches is that static backpropagation is as fast as the mapping is static. 

## 🎯 **GOAL OF BACKPROPAGATION**
we are trying to get the value of weight such that the error becomes minimum. Basically, we need to figure out whether we need to increase or decrease the weight value.
Once we know that, we keep on updating the weight value in that direction until error becomes minimum. You might reach a point, where if you further update the weight, the error will increase. 
At that time you need to stop, and that is your final weight value.
<p align="center">
  <img width="400" height="300" src="https://d1jnx9ba8s6j9r.cloudfront.net/blog/wp-content/uploads/2017/09/Optimizer-1-768x601.png">
</p>

## :high_brightness: **CASE STUDY**
**PROBLEM**: Build an Artificial Neural Network by implementing the Backpropagation algorithm and test the same using appropriate data sets.
* To understand the working of the backpropagation algorithm, we will take a small dataset and train it for a fixed number of epochs to make predictions.

### :key: **DATASET**
Below is a small contrived dataset that we can use to test out training our neural network.
<p align="center">
  <img width="625" height="350" src="https://user-images.githubusercontent.com/36481036/138344143-dcda6f3b-e1cb-4136-9972-c98be99757d7.png">
</p>

### :computer: **CODING AND IMPLEMENTATION**
* We will use 2 neurons in the hidden layer. 
* It is a binary classification problem (2 classes) so there will be two neurons in the output layer. 
* The network will be trained for 20 epochs with a learning rate of 0.5, which is high because we are training for so few iterations.

### :black_nib: **WORKFLOW OF THE CODE**

<p align="center">
  <img width="625" height="350" src="https://user-images.githubusercontent.com/36481036/138345196-4201252d-b72f-49c9-b5d0-ea3a6aebe7d2.png">
</p>

## :key: **PREQUISITES**
All the dependencies and required libraries are included in the file <code>requirements.txt</code> [See here](./requirements.txt)

## 🟩 **HOW TO USE**
1. Clone the project on your system.
2. In the command line, run: <code>pip install -r requirements.txt</code>
43. Run the script; <code>python back_propagation.py</code> to predict the values and see how BPA is implemented..

## 📊 **OUTPUT**
--------------
1. The Initialised Neural Network
![INITIAL NN](https://user-images.githubusercontent.com/36481036/138346166-2a00af0f-b00b-4743-9da1-0dc2ff388574.png)
--------------
2. Network Training for 20 Epochs
![TRAINING FOR 20 EPOCHS](https://user-images.githubusercontent.com/36481036/138346173-3fbff26c-25ae-4d6f-a0a8-c5fee23b6bc5.png)
--------------
3. Final Neural Network
![FINAL NEURAL NETWORK](https://user-images.githubusercontent.com/36481036/138346158-a11fd41b-7907-49c1-a73e-6726d6880124.png)
--------------
4. Expected Values vs Calculated values
<p align="left">
  <img width="700" height="250" src="https://user-images.githubusercontent.com/36481036/138346177-7244baa0-73ea-4916-9508-83e209ab39f9.png">
</p>
--------------

## 🏁 **CONCLUSION**
* Backpropagation is the essence of neural network training. It is the method of fine-tuning the weights of a neural network based on the error rate obtained in the previous epoch (i.e., iteration). Proper tuning of the weights allows you to reduce error rates and make the model reliable by increasing its generalization.

* Backpropagation in neural network is a short form for “backward propagation of errors.” It is a standard method of training artificial neural networks. This method helps calculate the gradient of a loss function with respect to all the weights in the network.

## ✒️**CREDITS**
* https://www.edureka.co/blog/backpropagation/
* https://en.wikipedia.org/wiki/Feedforward_neural_network
* https://www.mygreatlearning.com/blog/backpropagation-algorithm/
* https://www.guru99.com/backpropogation-neural-network.html
### 😎 **CREATOR**: https://github.com/theshredbox









