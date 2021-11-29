## Recurrent Neural Networks
## [Click here to listen the audio](https://drive.google.com/file/d/1xbXWSij5Se2gxDcpDUp4cN3Pn0QXSQVN/view?usp=sharing)

- A recurrent neural network (RNN) is a type of artificial neural network which uses sequential data or time series data. 
- These deep learning algorithms are commonly used for ordinal or temporal problems, such as language translation, natural language processing (nlp), speech recognition, and image captioning; they are incorporated into popular applications such as Siri, voice search, and Google Translate. 
- Like feedforward and convolutional neural networks (CNNs), recurrent neural networks utilize training data to learn. 
- They are distinguished by their “memory” as they take information from prior inputs to influence the current input and output. 
- While traditional deep neural networks assume that inputs and outputs are independent of each other, the output of recurrent neural networks depend on the prior elements within the sequence. 
- While future events would also be helpful in determining the output of a given sequence, unidirectional recurrent neural networks cannot account for these events in their predictions.

![image](https://user-images.githubusercontent.com/79050917/143831085-0086ac65-7406-4d53-9bef-48e246b7bdd7.png)

**Types:** 
- One-to-one
- One-to-many
- Many-to-one
- Many-to-many
- Many-to-many

![image](https://user-images.githubusercontent.com/79050917/143831240-69c840fc-5d87-4056-8b7f-a5a31632eb61.png)


**Advantages:**
- RNN can process inputs of any length.
- An RNN model is modeled to remember each information throughout the time which is very helpful in any time series predictor.
- Even if the input size is larger, the model size does not increase.
- The weights can be shared across the time steps.
- RNN can use their internal memory for processing the arbitrary series of inputs which is not the case with feedforward neural networks.

![image](https://user-images.githubusercontent.com/79050917/143831131-f71ecdb1-72e0-41bb-9554-46c46c078a3b.png)

**Disadvantages:**
- Due to its recurrent nature, the computation is slow.
- Training of RNN models can be difficult.
- If we are using relu or tanh as activation functions, it becomes very difficult to process sequences that are very long.
- Prone to problems such as exploding and gradient vanishing.

![image](https://user-images.githubusercontent.com/79050917/143831165-aac868be-b72d-4a43-8718-d9594411cc7e.png)

**Overview:**
- Recurrent Neural Network(RNN) are a type of Neural Network where the output from previous step are fed as input to the current step. 
- In traditional neural networks, all the inputs and outputs are independent of each other, but in cases like when it is required to predict the next word of a sentence, the previous words are required and hence there is a need to remember the previous words. 
- Thus RNN came into existence, which solved this issue with the help of a Hidden Layer. The main and most important feature of RNN is Hidden state, which remembers some information about a sequence.

