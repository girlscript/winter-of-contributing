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
This gate is derived and calculated using both the hidden state from the previous time step and the input data at the current time step.
<p align="center">
  <img width="600" height="325" src="https://blog.floydhub.com/content/images/2019/07/image9.jpg">
</p>
