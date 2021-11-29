# Long Short Term Memory

It is difficult and time-consuming for everything to start from scratch. A similar example is while reading this Documentation you try to understand the meaning based on the previous words. You don't forget as soon as you read a sentence and start from scratch to undertstand the meaning. You persist the understandings.

Considering the above statements and relating with traditional neural networks, they cannot implement this as they propogate and can have either the previous or only one major thing in their memory.

To overcome this disadvantage Recurrent Neural Network comes handy. They are networks with loops in them, allowing information to persist for a longer time (say until the program execution).

<!-- r1 -->
![r1](https://user-images.githubusercontent.com/81156510/143871790-6b9d136f-cff0-4d2d-a317-ce77e1b0408c.png)


## Features of LSTM:
- Let's consider a piece of text (sentence) where we are predicting the next word for some mid element of the sentence. So we will consider the words before them to predict the next word. Not all, we consider only those which could contribute to predict the next word.
- With that mindset, if we try to predict using a general Neural Network model then we can consider only one element that could contribute to the prediction.
- Rather if we use a LSTM we can use one or more words those contribute to prediction and these predictions are much better and meaningful, rather than using a single word to predict we could use all those words that contribute to add meaning to the sentence.

<!-- r2 -->
![r2](https://user-images.githubusercontent.com/81156510/143871817-bd72592c-9598-4341-ae97-85421b576762.png)


- This chain-like nature reveals that recurrent neural networks are intimately related to sequences and lists. They’re the natural architecture of neural network to use for such data.
- The same concept of LSTM in next word predictor is depicted pictorially here.

<!-- r3 -->
![r3](https://user-images.githubusercontent.com/81156510/143871832-4bdc5d67-e966-4e4e-9f23-8e70817e23c3.png)
*Credits:* https://colah.github.io/posts/2015-08-Understanding-LSTMs/

<!-- r4 -->
![r4](https://user-images.githubusercontent.com/81156510/143871854-c1f78cd9-9d66-4a26-b37d-6de180313337.png)


*Credits:* https://www.youtube.com/watch?v=zfiSAzpy9NM

## Workflow:
- Importing Necessary Libraries
- Importing Dataset
- Data Preprocessing and Visualisation
- Training and Testing Dataset
- Model Building
- Error Evaluation

## Model Summary:
<!-- r5 -->
![r5](https://user-images.githubusercontent.com/81156510/143871885-968e9199-aef4-447a-b3e4-85601913d6a0.png)


## Conclusion:
Remarkable results achieveable with RNNs. Essentially all of these are achieved using LSTMs. They really work a lot better for most tasks.
More the advantages, there are many downside of LSTM like more memeory, computional power and much more. If we are ready to compromise time and resources to obtain better results than LSTM's are definitely worth to try and implement.

## References:
1. [Youtube Video - Codebasics](https://www.youtube.com/watch?v=zfiSAzpy9NM)
1. [Blog](https://colah.github.io/posts/2015-08-Understanding-LSTMs/)
