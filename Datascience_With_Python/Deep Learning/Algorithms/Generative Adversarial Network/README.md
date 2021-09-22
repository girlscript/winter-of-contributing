# A Breif Introduction to Generative Adversarial Network (GAN)

![GAN](https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Deep%20Learning/Algorithms/Generative%20Adversarial%20Network/Images/GAN.png)

Perhaps all of you heard about Deepfake where AI can generate fake speech or images which are hard to difficult to distinguish from the actual one. These systems are built on Generative Adversarial Network (GAN) and currently it's one of the most versatile neural network architecture.

## History of GAN

In early 1960s, one of the pioneers of AI, Herbert Simon noticed that machine maybe a match of cognitive abilities of humankind , perform routine tasks. To make machine behave more human, researchers has designed an advanced neural architecture for replicating coginitive intelligence. GANs architecture has been introduced by Ian Goodfellow et. al. from University of Montreal in 2014. This model has become so popular that Yann LeCun (Facebook AI research director) addressed it as the most interesting idea in the last ten years in the world of Machine Learning.
[Original Paper] (https://arxiv.org/abs/1406.2661)

## How GAN actually Works!

A generative adversarial network (GAN) is a part of machine learning frameworks that trains a generative model having two sub-networks. One is a generative network, and the other is a discriminative network.

- Generative Network: It works like a deconvolution network and tries to create images or speech using random noise .

- Discriminative Network: It assesses those data and tries to differentiate between real or fake one as a convolution network.

So, the generative network creates candidates while the discriminative network judges them. Discriminative networks identify the general model-generated samples as real or fake. GAN training works as supervised learning. The generator produces new counterfeit data, and the discriminator learns to identify between natural and artificial data.

Firstly, the generator is equipped with fixed-length random data as input. This data is drawn from predefined latent space. Then the generator is trained by deceiving the discriminator enough. Finally, the discriminator evaluates them and specifies the real and fake data. Initially, the discriminator is trained with a known dataset until it reaches acceptable accuracy. It is a simple classification model. After training has been done, the discriminator is terminated. Independent backpropagation can help to produce better sample data.

![Model Architecture](https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Deep%20Learning/Algorithms/Generative%20Adversarial%20Network/Images/generative-adversarial-network.png)


# Advantages of GAN

- GAN can produce similar real data or different versions of real text, audio or video.
- Better Interpretation of machine learning.
- More efficient in Object detection or speech recgonition.

# Disadvantages of GAN 
- It's really hard to train this model becuase of power consumption .
- Speech or text data generation is challenging.

# Applications of GAN

-  DeepFake 
-  Realistic images or speech like human
-  Image to Image Translation.
-  Text to Image Translation
-  Face aging or emojis detection
-  Image to Text translation
-  3d object Generation 

# Implementation

We are going to implement GAN to a ![Pokeman dataset](https://www.kaggle.com/kvpratama/pokemon-images-dataset) consists of 819 images . 
These images along with the fake ones will be fed in batches to the Discriminator.Let's take a look at the steps our GAN will follow-

Here, two neural network will compete with each other . The discriminator will detect the ground truth ( real or fake ) of generated images and return possiblities a number between 0 and 1 . here 0 represent fake and 1 is real .

# Conclusion 
This article shows Generative Adversarial Network's brief history , architecture, advantages , disadvantages, implentation and some applications. If you are more interested in working this amazing Deep learning architecture, follow this references :

![Link 1](https://machinelearningmastery.com/how-to-code-the-generative-adversarial-network-training-algorithm-and-loss-functions/)

![Link 2](https://towardsdatascience.com/generative-adversarial-network-gan-for-dummies-a-step-by-step-tutorial-fdefff170391)

![LInk 3](https://medium.com/intel-student-ambassadors/mnist-gan-detailed-step-by-step-explanation-implementation-in-code-ecc93b22dc60)

Thank You.

