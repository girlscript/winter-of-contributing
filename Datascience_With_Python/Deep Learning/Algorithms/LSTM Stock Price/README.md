# LSTM: Long Short Term Memmory

## What is LSTM?<br>
Long Short-Term Memory Network or LSTM, is a variation of a recurrent neural network (RNN) that is quite effective in predicting the long sequences of data like sentences and stock prices over a period of time.<br>
It differs from a normal feedforward network because there is a feedback loop in its architecture. It also includes a special unit known as a memory cell to withhold the past information for a longer time for making an effective prediction.

## Why was LSTM introduced?
For recurrent neural networks, we  want to have long memories, so the network can connect data relationships at significant distances in time(during time-series analysis). That sort of network could make real progress in understanding how language and narrative works, how stock market events are correlated and so on. However, the more time steps we have, the more chance we have of back-propagation gradients either accumulating and exploding or vanishing down to nothing.<br>
This leads to the [Vanishing Gradient](https://towardsdatascience.com/the-vanishing-gradient-problem-69bf08b15484) problem.<br>

To overcome this and therefore allow deep networks and RNNs to perform well in real-time scenarios, there needs to be a way to reduce the multiplication of gradients which are less than zero.<br>The LSTM cell is a specifically designed unit of logic that will help reduce the vanishing gradient problem sufficiently to make RNNs more useful for long-term memory tasks i.e. text sequence predictions. The time dependence and effects of previous inputs are controlled by an interesting concept called a forget gate, which determines which states are remembered or forgotten. Two other gates, the input gate and output gate, are also featured in LSTM cells.

## LSTM cell: 
![lstm](https://adventuresinmachinelearning.com/wp-content/uploads/2017/09/LSTM-diagram.png)
Credits: https://adventuresinmachinelearning.com
- The input gate is basically a hidden layer of sigmoid(tanh) activated nodes, with weighted input values, which outputs values of between 0 and 1 and when multiplied element-wise by the input determines which inputs are switched on and off. In other words, it is a kind of input filter or gate. 
- The forget gate is again a sigmoid activated set of nodes which is element-wise multiplied by a factor to determine which previous states should be remembered, and which should be forgotten. This allows the LSTM cell to learn appropriate context. Consider the sentence “Ravi gave Meera a huge amount and she was grateful” – for the LSTM cell to learn who “she” refers to, it needs to forget the subject “Ravi” and replace it with the subject “Meera”. 
- The final stage of the LSTM cell is the output gate. The output gate has two components – another tanh squashing function and an output sigmoid gating function. The output sigmoid gating function, like the other gating functions in the cell, is multiplied by the squashed state to determine which values of the state are output from the cell. As you can tell, the LSTM cell is very flexible, with gating functions controlling what is input, what is “remembered” in the internal state variable, and finally what is output from the LSTM cell. 

I have implemented LSTM for stock price predictions(time-series analysis)
The dataset I have chosen is for Nifty50 which is downloaded from : https://niftyindices.com/reports/historical-data

### Prerequisits for LSTM model building:
```import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

from sklearn.preprocessing import MinMaxScaler
from keras.models import Sequential
from keras.layers import Dense
from keras.layers import LSTM
from keras.layers import Dropout
```
### Prediction outcome:
![pred](https://github.com/aswinikalyan30/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Deep%20Learning/Algorithms/LSTM%20Stock%20Price/img/predict.jpg)
