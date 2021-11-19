# Stock Price Prediction using LSTM

### Aim:

The goal of stock market prediction is to predict the future movement of a financial exchange's stock value. Investors will be able to make more money if they can accurately predict share price movement. Predicting how the stock market will perform is a hard task to do without technology. The aim of this project is to predict the share prices of Amazon. 

Long Short-Term Memory (LSTM) is an artificial recurrent neural network (RNN) in the area of deep learning. It selectively remembers patterns over long periods of time. LSTMs make small modifications to the existing data by multiplications and additions. This allows LSTMs to remember and forget certain things. An LSTM network is an RNN that is made up of LSTM units. A cell, an input gate, an output gate, and a forget gate make up a typical LSTM unit. The three gates control the flow of information into and out of the cell, and the cell remembers values across arbitrary time intervals. To understand LSTMs better, [click here.](https://www.analyticsvidhya.com/blog/2017/12/fundamentals-of-deep-learning-introduction-to-lstm/)

---

### Libraries Used:
- pandas
- numpy
- sklearn
- matplotlib
- MinMaxScaler
- Sequential
- Dropout
- Dense
- LSTM

---

### Workflow:
#### 1. Importing libraries:
All the required libraries have been imported.
#### 2. Loading the dataset: 
The dataset is read using pandas as a dataframe.
#### 3. Feature Scaling:
Feature scaling is used to normalize the range of independent variables or features of data. It is a step of data preprocessing. We have used min-max normalization to rescale the data. The default scale for MinMaxScaler is to rescale the data into the range of [0,1]. [To read more on feature scaling.](https://www.atoti.io/when-to-perform-a-feature-scaling/)
#### 4. Using Keras:
This library is open source and is used to provide an interface for artificial neural networks. We have imported Sequential, Dense, LSTM and Dropout from Keras.
[More on Keras.](https://www.tutorialspoint.com/keras/keras_introduction.htm)
#### 5. Training the model:
Using all the imported packages under keras, we build a regressor which uses the concept of Recurrent Neural Networks. We then train the model based on the training dataset. The loss function used here is mean squared error. 
#### 6. Predicting the model:
The model that we built is now used to predict the share prices on the testing data. We preprocess the testing data just as we did for the training data so as to get the right predictions. 
#### 7. Data Visualization:
The predicted share prices are plotted against the real share prices using matplotlib. It helps us gain more clarity on how accurate the model is and where we can improve to make it better. 

---

[Link to dataset used.](https://github.com/Ayush7614/Soomvaar/tree/main/Amazon_Stock_Market_Prediction_using_lstm-main/Datasets)

---

### Conclusion
We have used LSTM here because we take into consideration the trend of the last few days, the share price of the previous day along with new company policies. LSTM allows us to remember the important and not-so-important data and use that to make predictions. 

Project contributed by [Deepesha Burse](https://github.com/deepeshaburse).
