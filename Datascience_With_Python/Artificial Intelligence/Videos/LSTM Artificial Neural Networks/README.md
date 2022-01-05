# LSTM Artificial Neural Networks

## Video Link : [LSTM Artificial Neural Networks](https://drive.google.com/file/d/1pD0o3BkTJGNgvh8gjipLVQ9dWGQw9q2O/view?usp=sharing)

- Long Short-Term Memory (LSTM) networks are a type of recurrent neural network capable of learning order dependence in sequence prediction problems.

- This is a behavior required in complex problem domains like machine translation, speech recognition, and more.

- LSTMs are a complex area of deep learning. It can be hard to get your hands around what LSTMs are, and how terms like bidirectional and sequence-to-sequence relate to the field.

## The Promise of Recurrent Neural Networks

Recurrent neural networks are different from traditional feed-forward neural networks.

This difference in the addition of complexity comes with the promise of new behaviors that the traditional methods cannot achieve.

The paper defines 3 basic requirements of a recurrent neural network:

- That the system be able to store information for an arbitrary duration.
- That the system be resistant to noise (i.e. fluctuations of the inputs that are random or irrelevant to predicting a correct output).
- That the system parameters be trainable (in reasonable time).
- The paper also describes the “minimal task” for demonstrating recurrent neural networks.

## LSTMs Deliver on the Promise
The success of LSTMs is in their claim to be one of the first implements to overcome the technical problems and deliver on the promise of recurrent neural networks.

- The two technical problems overcome by LSTMs are vanishing gradients and exploding gradients, both related to how the network is trained.
- The key to the LSTM solution to the technical problems was the specific internal structure of the units used in the model.

![image](https://user-images.githubusercontent.com/63282184/143811932-a3346cd3-5bc1-4804-8696-aba3c077f8c6.png)


## How do LSTMs Work?
Rather than go into the equations that govern how LSTMs are fit, analogy is a useful tool to quickly get a handle on how they work.

Multiple analogies can help to give purchase on what differentiates LSTMs from traditional neural networks comprised of simple neurons.

It is interesting to note, that even after more than 20 years, the simple (or vanilla) LSTM may still be the best place to start when applying the technique.

## What are LSTM Applications?
It is important to get a handle on exactly what type of sequence learning problems that LSTMs are suitable to address.

- Long Short-Term Memory (LSTM) can solve numerous tasks not solvable by previous learning algorithms for recurrent neural networks (RNNs).
- The Recurrent Neural Network (RNN) is neural sequence model that achieves state of the art performance on important tasks that include language modeling, speech recognition, and machine translation.
- Since LSTMs are effective at capturing long-term temporal dependencies without suffering from the optimization hurdles that plague simple recurrent networks (SRNs), they have been used to advance the state of the art for many difficult problems. This includes handwriting recognition and generation, language modeling and translation, acoustic modeling of speech, speech synthesis, protein secondary structure prediction, analysis of audio, and video data among others.

## What are Bidirectional LSTMs?

The basic idea of bidirectional recurrent neural nets is to present each training sequence forwards and backwards to two separate recurrent nets, both of which are connected to the same output layer. … This means that for every point in a given sequence, the BRNN has complete, sequential information about all points before and after it. Also, because the net is free to use as much or as little of this context as necessary, there is no need to find a (task-dependent) time-window or target delay size.

## What are seq2seq LSTMs or RNN Encoder-Decoders?
The sequence-to-sequence LSTM, also called encoder-decoder LSTMs, are an application of LSTMs that are receiving a lot of attention given their impressive capability.

The idea is to use one LSTM to read the input sequence, one timestep at a time, to obtain large fixed-dimensional vector representation, and then to use another LSTM to extract the output sequence from that vector. The second LSTM is essentially a recurrent neural network language model except that it is conditioned on the input sequence.

The LSTM’s ability to successfully learn on data with long range temporal dependencies makes it a natural choice for this application due to the considerable time lag between the inputs and their corresponding outputs.

## Summary

LSTMs in the words of the research scientists that developed and applied the techniques.

This provides you both with a clear and precise idea of what LSTMs are and how they work, as well as important articulation on the promise of LSTMs in the field of recurrent neural networks.






