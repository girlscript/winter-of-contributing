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



