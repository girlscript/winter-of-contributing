# Vision Transformers

#### Link to the video **→** [▶](https://youtu.be/3QTltiwcncc)

<hr>

### 1. Introduction 

Transformers introduced back in 2017 took the NLP world by storm. They were known for their long range memory dependencies. They are used in many applications like machine language translation, conversational chatbots, and even to power better search engines. Transformers are the rage in deep learning nowadays. Transformers were recently used by OpenAI in their language models, and also used recently by DeepMind for AlphaStar — their program to defeat a top professional Starcraft player.

<img src="https://user-images.githubusercontent.com/30192967/137615858-8f42b391-f71b-4dcc-aa7a-4feaac79bbdc.png" alt="Transformers-arch" width="380" align="center" />

There are particularly 2 parts in the transformers architecture,

1. **Encoder**:

   It maps all input sequences into an abstract continuous representation that holds the learned information for that entire sequence.

   ![image](https://user-images.githubusercontent.com/30192967/137616090-ae5dbf1b-b9dd-4bbc-867a-ab0c37bf912f.png)

   

2. **Decoder**:

   The decoder shall decode the input continuous representation with attention information gathered both from the input sequence and the output sequence.

   <img src="https://user-images.githubusercontent.com/30192967/137616182-2e1ca886-28af-4268-8609-17c7dbef0706.png" alt="Transformers-arch" width="200" align="center" />

### 2. Attention Mechanisms. 

<hr>

Transformers gets it's powers from the attention module. The attention module is mainly responsible for associating each word in the input, to the other words.

![image](https://user-images.githubusercontent.com/30192967/137616363-8071a3a7-ae53-4b88-af47-272300524dda.png)

The attention first creates 3 vectors(Q,K,V) which stands for **Query, Key** and **Value** vectors.
The idea behind these vectors is taken from retrieval system. For example,
"*When you type a **query** to search for some video on Youtube, the search engine will map your query against a set of **keys** (video title, description etc.) associated with candidate videos in the database, then present you the best matched videos (**values**).* "

### 3. Transformers in vision.

<hr>

Researchers later extended the research on Transformers towards computer vision. With input images converted into patch and fed to the transformer network. The network learns to associate and attend to various other patches and learn their representation.

**Image as patches**

![Image-Patches](https://keras.io/img/examples/vision/image_classification_with_vision_transformer/image_classification_with_vision_transformer_15_2.png)

### 4. Vision Transformer(ViT)

<hr>

This paper released in december 2020 introduced a transformer architecture which consists of transformer encoder taken from the original transformers architecture. 

For the input, it takes in patches of the image and passes it through projection layer, adding embedding and position encodings. 

<img src="https://user-images.githubusercontent.com/30192967/137616910-0c279c6d-40be-48ee-b99b-6a30db3c6874.png" alt="Transformers-arch" width="600" align="center" />

Following all the principles discussed above about the transformers and it's architecture. ViT follows it all except for the input, it tends to take in **images as patches** instead of text.

The ViT tends to learn the association of various objects in the image to other objects in the image.
The only drawback of this algorithm is it's **heavy computation**.  

### Advantages

<hr>

- Transformers leverage the power of the attention mechanism to make better predictions.
- They're known for long range information dependencies.
- Transformers can be better especially if you want to encode or generate long sequences.
- When using a **large number of parameter**s and when trained with **lots of data**, these models produce similar or better results than **SOTA** in tasks such as Image Classification or Object Detection with way simpler models and faster to train.

### Disadvantages <hr>


- Large training computation.
- Large datasets(~1M) are required for training.
- Huge amount of time taken for training on an average GPU.

### ViT performs well when pretrained on larger datasets <hr>
![image](https://user-images.githubusercontent.com/30192967/137672598-d31dbdc9-31ea-467d-b9b9-01a45d89f172.png)

From the image above we can see that, the model is pretrained on datasets on the X Axis and transfer learnt to the datset on Y Axis.
While large ViT models perform worse than BiT ResNets (shaded area) when pre-trained on small datasets, they shine when pre-trained on larger datasets. Similarly, larger ViT variants overtake smaller ones as the dataset grows.
 
### Performance VS Cost for various architectures <hr>
![image](https://user-images.githubusercontent.com/30192967/137672870-72363bbd-cd19-47f0-8906-e44194a99f75.png)
Vision Transformers, ResNets, and hybrids. Vision Transformers generally outperform ResNets with the same computational budget.
Hybrids improve upon pure Transformers for smaller model sizes, but the gap vanishes for larger
models.



### References

<hr>

- [Illustrated Guide to Transformers- Step by Step Explanation | by Michael Phi | Towards Data Science](https://towardsdatascience.com/illustrated-guide-to-transformers-step-by-step-explanation-f74876522bc0)
- [Transformers in Computer Vision: Farewell Convolutions! | by Victor Perez | Towards Data Science](https://towardsdatascience.com/transformers-in-computer-vision-farewell-convolutions-f083da6ef8ab)
- [[2010.11929\] An Image is Worth 16x16 Words: Transformers for Image Recognition at Scale (arxiv.org)](https://arxiv.org/abs/2010.11929)




