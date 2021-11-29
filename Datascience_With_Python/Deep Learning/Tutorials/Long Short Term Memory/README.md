# Long Short Term Memory

It is difficult and time-consuming for everything to start from scratch. A similar example is while reading this Documentation you try to understand the meaning based on the previous words. You don't forget as soon as you read a sentence and start from scratch to undertstand the meaning. You persist the understandings.

Considering the above statements and relating with traditional neural networks, they cannot implement this as they propogate and can have either the previous or only one major thing in their memory.

To overcome this disadvantage Recurrent Neural Network comes handy. They are networks with loops in them, allowing information to persist for a longer time (say until the program execution).

<!-- r1 -->

## Features of LSTM:
- Let's consider a piece of text (sentence) where we are predicting the next word for some mid element of the sentence. So we will consider the words before them to predict the next word. Not all, we consider only those which could contribute to predict the next word.
- With that mindset, if we try to predict using a general Neural Network model then we can consider only one element that could contribute to the prediction.
- Rather if we use a LSTM we can use one or more words those contribute to prediction and these predictions are much better and meaningful, rather than using a single word to predict we could use all those words that contribute to add meaning to the sentence.

<!-- r2 -->

- This chain-like nature reveals that recurrent neural networks are intimately related to sequences and lists. They’re the natural architecture of neural network to use for such data.
- The same concept of LSTM in next word predictor is depicted pictorially here.

<!-- r3 -->

<!-- r4 -->

*Credits:* https://www.youtube.com/watch?v=zfiSAzpy9NM

## Workflow:
- **Importing Necessary Libraries**: Importing all the necessary modules required for the working of notebook.
- **Importing Dataset**: Dataset can be downloaded from [here](https://drive.google.com/file/d/1GeUzNVqiixXHnTl8oNiQ2W3CynX_lsu2/view).
- **Data Preprocessing**: Like tokenising the text into numericals so that it becomes machine understandable and is easier to feed inside the model
- **Model Building**: See Model Summary below for better understanding.
- **Saving the Model**: So that we can use the saved model as it saves the time of running the model each and every time.
- **Prediction (Next Word)**: Test with your

## Purpose
To get a basic knowledge about LSTM working and determine the next word in a experimental way rather than a theoretical approach 

## Model Summary:
<!-- r5 -->

<!-- r6 -->

## Use:
The same idea of next word predictor is used by many keyboard typing recommendations. Also Google has implemented a similar version in Gmail according to the sentences we type.

## Conclusion:
Remarkable results achieveable with RNNs. Essentially all of these are achieved using LSTMs. They really work a lot better for most tasks.
More the advantages, there are many downside of LSTM like more memeory, computional power and much more. If we are ready to compromise time and resources to obtain better results than LSTM's are definitely worth to try and implement.

## References:
1. [Youtube Video - Codebasics](https://www.youtube.com/watch?v=zfiSAzpy9NM)
1. [Blog](https://colah.github.io/posts/2015-08-Understanding-LSTMs/)
