# :pushpin: **GRU (GATED RECURRENT UNIT)**
<p align="center">
  <img width="600" height="325" src="https://blog.floydhub.com/content/images/2019/07/image17-1.jpg">
</p>
A Gated Recurrent Unit (GRU), as its name suggests, is a variant of the RNN architecture, and uses gating mechanisms to control and manage the flow of information between cells in the neural network. 
GRUs were introduced only in 2014 by Cho, et al. and can be considered a relatively new architecture, especially when compared to the widely-adopted LSTM, which was proposed in 1997 by Sepp Hochreiter and Jürgen Schmidhuber.

## ❓ **HOW DO GRUs WORK**
The structure of the GRU allows it to adaptively capture dependencies from large sequences of data without discarding information from earlier parts of the sequence.
This is achieved through its gating units, similar to the ones in LSTMs, which solve the vanishing/exploding gradient problem of traditional RNNs. 
These gates are responsible for regulating the information to be kept or discarded at each time step. 
<p align="center">
  <img width="625" height="250" src="https://blog.floydhub.com/content/images/2019/07/image15.jpg">
</p>
Other than its internal gating mechanisms, the GRU functions just like an RNN, where sequential input data is consumed by the GRU cell at each time step along with the memory, or otherwise known as the hidden state.
The hidden state is then re-fed into the RNN cell together with the next input data in the sequence. This process continues like a relay system, producing the desired output.

## :triangular_ruler: **GRU ARCHITECTURE**
<p align="center">
  <img width="600" height="325" src="https://blog.floydhub.com/content/images/2019/07/image14.jpg">
</p>
While the structure may look rather complicated due to the large number of connections, the mechanism behind it can be broken down into three main steps.

### **RESET GATE**
In the first step, we’ll be creating the Reset gate. 
* This gate is derived and calculated using both the hidden state from the previous time step and the input data at the current time step.
<p align="center">
  <img width="600" height="325" src="https://blog.floydhub.com/content/images/2019/07/image9.jpg">
</p>

* Mathematically, this is achieved by multiplying the previous hidden state and current input with their respective weights and summing them before passing the sum through a sigmoid function. The sigmoid function will transform the values to fall between 0 and 1, allowing the gate to filter between the less-important and more-important information in the subsequent steps. When the entire network is trained through back-propagation, the weights in the equation will be updated such that the vector will learn to retain only the useful features.

* The previous hidden state will first be multiplied by a trainable weight and will then undergo an element-wise multiplication (Hadamard product) with the reset vector. This operation will decide which information is to be kept from the previous time steps together with the new inputs. At the same time, the current input will also be multiplied by a trainable weight before being summed with the product of the reset vector and previous hidden state above. Lastly, a non-linear activation tanh function will be applied to the final result to obtain r in the equation below.



### **UPDATE GATE**
Next, we’ll have to create the Update gate. Just like the Reset gate, the gate is computed using the previous hidden state and current input data.
<p align="center">
  <img width="600" height="325" src="https://blog.floydhub.com/content/images/2019/07/image13.jpg">
</p>

* Both the Update and Reset gate vectors are created using the same formula, but, the weights multiplied with the input and hidden state are unique to each gate, which means that  the final vectors for each gate are different. This allows the gates to serve their specific purposes.
* The Update vector will then undergo element-wise multiplication with the previous hidden state to obtain u in the equation, which will be used to compute our final output later.

## 🎯 **GOAL OF GRU**
The main gola of GRU is to solve the Vanishing / Exploding Gradient Problem.

* The vanishing/exploding gradient problem occurs during back-propagation when training the RNN, especially if the RNN is processing long sequences or has multiple layers. The error gradient calculated during training is used to update the network’s weight in the right direction and by the right magnitude. However, this gradient is calculated  with the chain rule, starting from the end of the network. Therefore, during back-propagation, the gradients will continuously undergo matrix multiplications and either shrink (vanish) or blow up (explode) exponentially for long sequences. Having a gradient that is too small means the model won’t update its weights effectively, whereas extremely large gradients cause the model to be unstable.
* The gates in the LSTM and GRUs help to solve this problem because of the additive component of the Update gates. While traditional RNNs always replace the entire content of the hidden state at each time step, LSTMs and GRUs keep most of the existing hidden state while adding new content on top of it. This allows the error gradients to be back-propagated without vanishing or exploding too quickly due to the addition operations.
* While LSTMs and GRUs are the most widely-used fixes to the above problem, another solution to the problem of exploding gradients is gradient clipping. Clipping sets a defined threshold value on the gradients, which means that even if a gradient increases beyond the predefined value during training, its value will still be limited to the set threshold. This way, the direction of the gradient remains unaffected and only the magnitude of the gradient is changed.

<p align="center">
  <img width="600" height="325" src="https://user-images.githubusercontent.com/36481036/138720361-6cfde62f-c9a7-453e-bfe6-083111d7c93c.png">
</p>

## 📗 **IMPLEMENTATION**
We’ll be implementing a GRU model in code. To further our GRU-LSTM comparison, we’ll also be using an LSTM model to complete the same task. We’ll evaluate the performance of both models on a few metrics. The dataset that we will be using is the Hourly Energy Consumption dataset, which can be found on [Kaggle](https://www.kaggle.com/robikscube/hourly-energy-consumption). The dataset contains power consumption data across different regions around the United States recorded on an hourly basis.

## 📍 **WORKFLOW**
<p align="center">
  <img width="600" height="400" src="https://user-images.githubusercontent.com/36481036/138730212-ab16d1cd-69bb-43eb-861f-bfb66563d4aa.png">
</p>

## 💻 **CODING**
We will be using the PyTorch library to implement both types of models along with other common Python libraries used in data analytics.
1. Import all the required libraries.
2.  DATA PREPROCESSING:
* After visualizing the dataset, we need to preprocess the data in order to filter out the files that are not being used.
* The data for each time is generalized.
* To help the algorithm work faster, we scale the data to similar values; 0 and 1.
* Also, we need to split the inputs and labels into training and test sets.
3. To improve the speed of our training, we will now process the data in batches so that the model doesn’t need to update its weights as frequently. The Torch Dataset and DataLoader classes are useful for splitting our data into batches and shuffling them.
NOTE: The batch size should be chosen in accordance with the number of sequences. Else, the training time of epochs will be quite high.

4. Since we will be dealing with an ample number of epochs, we must check if we can use any GPU to speed up the training time.
5. In the next step, we define the structure of the models i.e, the GRU and the LSTM models respectively.
6. For our accuracy measure, we'll use Symmetric Mean Absolute Percentage Error (sMAPE) to evaluate the models. sMAPE is the sum of the absolute difference between the predicted and actual values divided by the average of the predicted and actual value, therefore giving a percentage measuring the amount of error.
7. We will now use the evaluate() function to fetch the accuracy of both the models.
8. Visualise the output using apt plots.

## :pushpin: **DATASET** 
* The dataset reference was taken from https://www.kaggle.com/robikscube/hourly-energy-consumption
* The dataset contains power consumption data across different regions around the United States recorded on an hourly basis.

## :thought_balloon: **PREREQUISITES**
All the dependencies and required libraries are included in the file <code>requirements.txt</code> [See here](./requirements.txt)

## :chart_with_upwards_trend:  **FINAL RESULT**
DATASET 
-----------
<p align="center">
  <img width="1200" height="300" src="https://user-images.githubusercontent.com/36481036/138731578-8807a1b1-f7f0-4cd1-8a38-1f895c74ebaa.png">
</p> 

TRAINED GRU MODEL
------------
<p align="center">
  <img width="1200" height="400" src="https://user-images.githubusercontent.com/36481036/138731560-bba67d67-fa1c-4493-9ab9-06f37987637a.png">
</p> 

TRAINED LSTM MODEL
------------
<p align="center">
  <img width="1200" height="400" src="https://user-images.githubusercontent.com/36481036/138731572-86c64742-cc68-449b-9956-3d5b74f628d4.png">
</p> 

 MODEL ACCURACIES 
------------
<p align="center">
  <img width="1200" height="300" src="https://user-images.githubusercontent.com/36481036/138731577-925cc13d-36ba-4e26-ac36-8b4a19219157.png">
</p> 

ACCURACY VISUALIZATION
-----------
 <p align="center">
  <img width="1200" height="400" src="https://user-images.githubusercontent.com/36481036/138731566-759efcfe-7d96-4434-b059-0928e0ae1c68.png">
</p> 

## :page_facing_up: **CONCLUSION**
* We can see from the training time of both models, our younger sibling has absolutely thrashed the older one in terms of speed. The GRU model is the clear winner on that dimension; it finished five training epochs 119 seconds (approx) faster than the LSTM model.
* While the LSTM model may have made smaller errors and edged in front of the GRU model slightly in terms of performance accuracy, the difference is insignificant and thus inconclusive.
* The models are largely successful in predicting the trends of energy consumption. While they may still get some changes wrong, such as delays in predicting a drop in consumption, the predictions follow very closely to the actual line on the test set. This is due to the nature of energy consumption data and the fact that there are patterns and cyclical changes that the model can account for. Tougher time-series prediction problems such as stock price prediction or sales volume prediction may have data that is largely random or doesn’t have predictable patterns, and in such cases, the accuracy will definitely be lower.

## :bust_in_silhouette: **CREDITS**
* https://blog.floydhub.com/gru-with-pytorch/
* https://towardsdatascience.com/understanding-gru-networks-2ef37df6c9be
* https://pytorch.org/

**:sunglasses:** **CREATOR**- https://github.com/theshredbox
