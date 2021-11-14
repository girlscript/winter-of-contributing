🔴 **Type of Content** : Document

🔴 **Domain**: Machine Learning

🔴 **Module**: ML_for_Seqential_Data_&_Visual_Data

**Transformer** is an architecture for transforming one sequence into another( usually used in text translation) one with the help of two parts Encoder and Decoder. It uses attention to boost the speed of the model.

**Transformer's Architecture**
![image](https://user-images.githubusercontent.com/46518960/141668834-992b3add-aca7-4151-891d-3134893970b7.png)

In tranformer encoder is on the left hand side and decoder on right. Both encoder and decoder are consist of modules that can be stacked on top of each other multiple time like described by Nx in the figure.

All encoders shares the same architecture. Each encoder has self-attention and feed forward neural network.

**Self-Attention**: Self-Attention is the attention mechanism allows output to focus attention on input while producing output while the self-attention model allows inputs to interact with each other
![image](https://user-images.githubusercontent.com/46518960/141615434-5527147d-9be2-4850-97df-bd9fd796fb79.png)

[Q-Query Vector , K-Key Vector, V-Value Vector]

**Steps To Calculate Self-Attention**

1.	Select three vectors from each of the encoder’s input vectors.
So, for each word, we create a –
i) Query Vector ii) Key Vector iii) Value Vector
These vectors are created by multiplying the embedding by three matrices that we trained during the training process.

2. Next step is to multiply the query vector with the key vectors from other inputs.
 
3. We will divide the score by square root of dimensions of the key vectors (dK).
For example: if dimension key vector is 100, so that will be 10.

4. Apply softmax function on all self-attention scores.
![image](https://user-images.githubusercontent.com/46518960/141669054-d93cfc55-ba82-4a86-8d05-50ef1e929b0b.png)

5. We sum up the weighted value that we calculated in the previous step, this will give us self-attention output for the given word.



**Using Transformer for language modelling**

Al-Rfou et al. (2018) proposed the idea of applying the Transformer model for language modeling. According to him, the entire corpus can be split into fixed-length segments

![image](https://user-images.githubusercontent.com/46518960/141615449-df9cfd56-6837-43b4-a446-9e57daf1e347.png)

**Limitations of Transformer**

1.	Attention deals with strings of fixed length. Text is splitted into certain number of chunks and before being fed into the model.
2.	Text is splitted without without respecting the order of the string.

**Using Transformer-XL for language modelling**

To overcome these problems new model was proposed Transformer-XL
In Transformer-XL, the hidden state computed for the previous state is used as an additional context for the current text. This recurrence mechanism overcome the conventional Transformer limitation of fixed length.
