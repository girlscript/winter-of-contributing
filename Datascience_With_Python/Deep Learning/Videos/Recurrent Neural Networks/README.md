# Recurrent Neural Networks

## Video Link : [Recurrent Neural Networks](https://drive.google.com/file/d/1IGLW3KoWXBC-4if3F37AMp1Ux0kVDxJH/view?usp=sharing)

## What are recurrent neural networks?

- A recurrent neural network (RNN) is a type of artificial neural network which uses sequential data or time series data. 
- These deep learning algorithms are commonly used for ordinal or temporal problems, such as language translation, natural language processing (nlp), speech recognition, and image captioning; they are incorporated into popular applications such as Siri, voice search, and Google Translate. 
- Like feedforward and convolutional neural networks (CNNs), recurrent neural networks utilize training data to learn. They are distinguished by their “memory” as they take information from prior inputs to influence the current input and output. 
- While traditional deep neural networks assume that inputs and outputs are independent of each other, the output of recurrent neural networks depend on the prior elements within the sequence. 
- While future events would also be helpful in determining the output of a given sequence, unidirectional recurrent neural networks cannot account for these events in their predictions.

## Types of recurrent neural networks

- Feedforward networks map one input to one output, and while we’ve visualized recurrent neural networks in this way in the above diagrams, they do not actually have this constraint.
- Instead, their inputs and outputs can vary in length, and different types of RNNs are used for different use cases, such as music generation, sentiment classification, and machine translation. 
- Different types of RNNs are usually expressed using the following diagrams:

### One-to-one:

![image](https://user-images.githubusercontent.com/63282184/143582054-bf37b36f-b55a-49bc-847b-1caa1a8793ba.png)

## One-to-many:

![image](https://user-images.githubusercontent.com/63282184/143582096-0379f22f-caae-490d-bc85-864b6a6a1277.png)

## Many-to-one:

![image](https://user-images.githubusercontent.com/63282184/143582128-4df29234-c889-46fd-a149-84b4afa43658.png)

## Many-to-many:

![image](https://user-images.githubusercontent.com/63282184/143582167-5a47e15e-eee6-4e54-91d9-ae6d77aa963d.png)

![image](https://user-images.githubusercontent.com/63282184/143582190-5f2135a5-d8ff-445c-a74b-24e67f43cf57.png)

## Common activation functions

As discussed in the Learn on Neural Networks, an activation function determines whether a neuron should be activated. The nonlinear functions typically convert the output of a given neuron to a value between 0 and 1 or -1 and 1. Some of the most commonly used functions are defined as follows:

### Sigmoid: This is represented with the formula g(x) = 1/(1 + e^-x).

![image](https://user-images.githubusercontent.com/63282184/143582342-0c4d034f-7095-43f1-b082-95c3175062bf.png)


### Tanh: This is represented with the formula g(x) = (e^-x - e^-x)/(e^-x + e^-x).

![image](https://user-images.githubusercontent.com/63282184/143582383-ba56467c-01db-411c-b0e7-688c1e77072d.png)

### Relu: This is represented with the formula g(x) = max(0 , x)

![image](https://user-images.githubusercontent.com/63282184/143582424-be948b2c-943d-4b62-9a72-c472a64e0361.png)

## Variant RNN architectures

### Bidirectional recurrent neural networks (BRNN): 

- These are a variant network architecture of RNNs. While unidirectional RNNs can only draw from previous inputs to make predictions about the current state, bidirectional RNNs pull in future data to improve the accuracy of it. 
- If we return to the example of “feeling under the weather” earlier in this article, the model can better predict that the second word in that phrase is “under” if it knew that the last word in the sequence is “weather.”

### Long short-term memory (LSTM): 

- This is a popular RNN architecture, which was introduced by Sepp Hochreiter and Juergen Schmidhuber as a solution to vanishing gradient problem. In their paper (PDF, 388 KB) (link resides outside IBM), they work to address the problem of long-term dependencies. 
- That is, if the previous state that is influencing the current prediction is not in the recent past, the RNN model may not be able to accurately predict the current state. As an example, let’s say we wanted to predict the italicized words in following, “Alice is allergic to nuts. 
- She can’t eat peanut butter.” The context of a nut allergy can help us anticipate that the food that cannot be eaten contains nuts. However, if that context was a few sentences prior, then it would make it difficult, or even impossible, for the RNN to connect the information. 
- To remedy this, LSTMs have “cells” in the hidden layers of the neural network, which have three gates–an input gate, an output gate, and a forget gate. These gates control the flow of information which is needed to predict the output in the network.  For example, if gender pronouns, such as “she”, was repeated multiple times in prior sentences, you may exclude that from the cell state.

### Gated recurrent units (GRUs):

- This RNN variant is similar the LSTMs as it also works to address the short-term memory problem of RNN models. 
- Instead of using a “cell state” regulate information, it uses hidden states, and instead of three gates, it has two—a reset gate and an update gate. Similar to the gates within LSTMs, the reset and update gates control how much and which information to retain.

## Advantages of Recurrent Neural Network
- An RNN remembers each and every information through time. It is useful in time series prediction only because of the feature to remember previous inputs as well. ...
- Recurrent neural network are even used with convolutional layers to extend the effective pixel neighborhood.


## Applications of Recurrent Neural Networks:
- Prediction problems.
- Machine Translation.
- Speech Recognition.
- Language Modelling and Generating Text.
- Video Tagging.
- Generating Image Descriptions.
- Text Summarization.
- Call Center Analysis.
