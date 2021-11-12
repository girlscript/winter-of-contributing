## Title : Bert
🔴 **Type of Content** : Documentation

🔴 **Domain** : Machine Learning

🔴 **Module** : ML for Sequential Data & Visual Data

***
## Background
In 2018, Google introduced the latest BERT natural language processing algorithm to improve search engine effectiveness. It was intended to provide a better understanding of search requests. 

## What Is BERT?
BERT stands for **B**idirectional **E**ncoder **R**epresentations from **T**ransformers. It is a natural language processing, NLP framework. That's one of the key components of the Google search algorithm. It provides insight into the nuance and context of words in research.
<br>
It is also an open-source research project and academic paper published by Jacob Devlin and his team.  BERT is a breakthrough in NPL.
<br>
Many big AI-driven companies are working on BERT:
1. Microsoft extends on BERT with MT-DNN (Multi-Task Deep Neural Network).
1. RoBERTa from Facebook.
1. SuperGLUE Benchmark was created because the original GLUE Benchmark became too easy.

## How does BERT work?

[![understanding](https://github.com/M-dime/winter-of-contributing/blob/Machine_Learning/Machine_Learning/ML_For_Sequential_Data_%26_Visual_Data/Assets/BERT_embedding.jpg)]

BERT takes an enormous amount of heavy lifting to be able to conduct searches in natural language. It has been pre-trained on a large number of words - and over the entire English Wikipedia 2,500 million words. For more understanding let's look at its acronym:

**B: Bi-directional** 
<br> Before BERT all NPL models were uni-directional i.e. they can move context window in one direction of target word to understand its meaning.
<br>for example:
* I am not feeling well.
* I draw water from well

In the above sentence "well" meant different but unidirectional NPL model considers them the same whereas BERT is different. BERT uses bi-directional language modeling ie. it will see the whole sentence atmost at once. 

**ER: Encoder Representations**<br>
What gets encoded is decoded. It’s an in-and-out mechanism. BERT uses feature vector(Word Embedding) that creates out of the words of a string. BERT can generate embeddings for an entire sentence (usually a vector of size 768 length)
<br>

**T: Transformers**
<br> BERT uses *transforms* and *masked language modeling*.
One of the hurdles with natural language understanding before BERT was to understand the context a word is referring to.

Pronouns, for instance. It’s very easy to lose track of who’s somebody’s talking about in a conversation. Search Engines struggle to keep track of when you say he, they, she, we, it, etc.

[![pro chart](https://github.com/M-dime/winter-of-contributing/blob/Machine_Learning/Machine_Learning/ML_For_Sequential_Data_%26_Visual_Data/Assets/BERT_pronoun.png)]

So transformers’ attention part of this actually focuses on the pronouns and all the words’ meanings that go together to try and tie back who’s being spoken to or what is being spoken about in any given context.

Masked language modeling stops the target word from seeing itself. The mask is needed because it prevents the word that’s under focus from actually seeing itself.

When the mask is in place, BERT just guesses at what the missing word is. It’s part of the fine-tuning process as well.

##  Architecture 
BERT has been trained using two strategies named Masked LM (MLM) and Next Sentence Prediction (NSP).
<br>
Masked LM is a task where you mask a part of the text and the model then tries to guess the word that was masked using other context words. For example, by giving the sentence “I have watched this [MASK] and it was awesome”, one possible answer from the model would be “I have watched this movie and it was awesome”.<br>
Next Sentence Prediction is a task where the model gets as input pairs of sentences and it learns to predict if the second sentence is the next sentence in the original text as well. 50% of the time the sentences are  consecutive, and 50% of the time they are random sentences.<br>
BERT splits the input text into words and converts words into tokens. Each token is assigned a number associated with the word, then used as input features.

## Code
Using a basic BERT model to create feature vector for user-defined string.
``` python
import tensorflow_hub as hub
import tensorflow_text as text

preprocess_url = "https://tfhub.dev/tensorflow/bert_en_uncased_preprocess/3"
encoder_url = "https://tfhub.dev/tensorflow/bert_en_uncased_L-12_H-768_A-12/4"

bert_preprocess_model = hub.KerasLayer(preprocess_url)

text_test = input()
text_preprocessed = bert_preprocess_model(text_test)

bert_model = hub.KerasLayer(encoder_url)

bert_results = bert_model(text_preprocessed)
```

## Referrance 
* [BERT language model](https://www.searchenginejournal.com/bert-explained-what-you-need-to-know-about-googles-new-algorithm/337247/)
* [Wikipedia](https://en.wikipedia.org/wiki/BERT_(language_model))
