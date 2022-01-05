## LSTM Artificial Neural Networks
## [Click here to listen the audio](https://drive.google.com/file/d/1rmKUoiv3iGsL2uAkN-seQCTgB8qZFh0U/view?usp=sharing)

#  LSTM Artificial Neural Networks


- Long Short-Term Memory (LSTM) networks are a type of recurrent neural network capable of learning order dependence in sequence prediction problems.
- This is a behavior required in complex problem domains like machine translation, speech recognition, and more.
- LSTMs are a complex area of deep learning. It can be hard to get your hands around what LSTMs are, and how terms like bidirectional and sequence-to-sequence relate to the field.

![image](https://user-images.githubusercontent.com/63282184/143877559-bc3ab3c3-3ba0-47be-8175-220dcb88f294.png)


## Recurrent Neural Networks
Recurrent neural networks are different from traditional feed-forward neural networks.

This difference in the addition of complexity comes with the promise of new behaviors that the traditional methods cannot achieve.

The paper defines 3 basic requirements of a recurrent neural network:

- That the system be able to store information for an arbitrary duration.
- That the system be resistant to noise (i.e. fluctuations of the inputs that are random or irrelevant to predicting a correct output).
- That the system parameters be trainable (in reasonable time).

Recurrent neural networks must use context when making predictions, but to this extent, the context required must also be learned.

## LSTMs Deliver on the Promise
The success of LSTMs is in their claim to be one of the first implements to overcome the technical problems and deliver on the promise of recurrent neural networks.

The two technical problems overcome by LSTMs are vanishing gradients and exploding gradients, both related to how the network is trained.

The key to the LSTM solution to the technical problems was the specific internal structure of the units used in the model.

## How do LSTMs Work?
Rather than go into the equations that govern how LSTMs are fit, analogy is a useful tool to quickly get a handle on how they work.

- Each memory cell’s internal architecture guarantees constant error flow within its constant error carrousel CEC… This represents the basis for bridging very long time lags. Two gate units learn to open and close access to error flow within each memory cell’s CEC. 
- The multiplicative input gate affords protection of the CEC from perturbation by irrelevant inputs. Likewise, the multiplicative output gate protects other units from perturbation by currently irrelevant memory contents.

It is interesting to note, that even after more than 20 years, the simple (or vanilla) LSTM may still be the best place to start when applying the technique.

## What are LSTM Applications?
It is important to get a handle on exactly what type of sequence learning problems that LSTMs are suitable to address.

- LSTM holds promise for any sequential processing task in which we suspect that a hierarchical decomposition may exist, but do not know in advance what this decomposition is.
- The Recurrent Neural Network (RNN) is neural sequence model that achieves state of the art performance on important tasks that include language modeling, speech recognition, and machine translation.

## What are Bidirectional LSTMs?
A commonly mentioned improvement upon LSTMs are bidirectional LSTMs.

The basic idea of bidirectional recurrent neural nets is to present each training sequence forwards and backwards to two separate recurrent nets, both of which are connected to the same output layer. … This means that for every point in a given sequence, the BRNN has complete, sequential information about all points before and after it. Also, because the net is free to use as much or as little of this context as necessary, there is no need to find a (task-dependent) time-window or target delay size.

## What are seq2seq LSTMs or RNN Encoder-Decoders?
The sequence-to-sequence LSTM, also called encoder-decoder LSTMs, are an application of LSTMs that are receiving a lot of attention given their impressive capability.

The idea is to use one LSTM to read the input sequence, one timestep at a time, to obtain large fixed-dimensional vector representation, and then to use another LSTM to extract the output sequence from that vector. The second LSTM is essentially a recurrent neural network language model except that it is conditioned on the input sequence.

The LSTM’s ability to successfully learn on data with long range temporal dependencies makes it a natural choice for this application due to the considerable time lag between the inputs and their corresponding outputs.

## Summary
LSTMs in the words of the research scientists that developed and applied the techniques.

This provides you both with a clear and precise idea of what LSTMs are and how they work, as well as important articulation on the promise of LSTMs in the field of recurrent neural networks.
