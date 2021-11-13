**Rushika Shrestha**                                                                  
**ML Batch-1
Domain- Machine Learning**

**Transformer** is an architecture for transforming one sequence into another( usually used in text translation) one with the help of two parts Encoder and Decoder. It uses attention to boost the speed of the model.

**Transformer's Architecture**

It is consists of six encoder and six decoders. and decoders are similar to each other.
Encoder: All encoders shares the same architecture. Each encoder has self-attention and feed forward neural network.
Self-Attention: Self-Attention is a the attention mechanism allows output to focus attention on input while producing output while the self-attention model allows inputs to interact with each other

![image](https://user-images.githubusercontent.com/46518960/141615434-5527147d-9be2-4850-97df-bd9fd796fb79.png)

![image](https://user-images.githubusercontent.com/46518960/141615438-587abd61-0831-413b-9eb8-96bdebf094f3.png)

**Using Transformer for language modelling**

Al-Rfou et al. (2018) proposed the idea of applying the Transformer model for language modeling. According to him, the entire corpus can be split into fixed-length segments

![image](https://user-images.githubusercontent.com/46518960/141615449-df9cfd56-6837-43b4-a446-9e57daf1e347.png)

**Limitations of Transformer**
1.	Attention deals with strings of fixed length. Text is splitted into certain number of chunks and before being fed into the model.
2.	Text is splitted without without respecting the order of the string.

**Using Transformer for language modelling**
To overcome these problems new model was proposed Transformer-XL
In Transformer-XL, the hidden state computed for the previous state is used as an additional context for the current text. This recurrence mechanism overcome the conventional Transformer limitation of fixed length.
