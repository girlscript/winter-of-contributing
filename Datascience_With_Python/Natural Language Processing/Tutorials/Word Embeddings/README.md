## Purpose

This tutorial explains about Word Embeddings, how it is applied with sample code and explained about Word2Vec and GloVe models.

## Definition

Word embedding is a language modelling technique, to create dense vector representation of words in a corpus, in such a way that relates to the meaning of the words.

## Brief Description

Word embeddings work by using an algorithm to train a set of fixed-length dense and continuous-valued vectors based on a large corpus of text. Each word is represented by a point in the embedding space and these points are learned and moved around based on the words that surround the target word.

For example, apple, orange and mango can be related to each other as they belong to the category of fruits, whereas man, woman, people can be related to each other in another group. Word embedding is a technique of representing such relationships numerically in vector form.

## How it is used

We can either generate our own custom word embeddings by learning them using some neural network, or use pre-trained word embedding models such as Word2Vec or GloVe.

## Applications

* Find similar words
* Predict next word in a sentence
* Create group of related words
* Feature for text classification
* Document clustering
* Natural language processing

## Summary

* Word Embedding is a type of word representation that allows words with similar meaning to be understood by machine learning algorithms
* Words are represented in the form of vectors and placement is done insuch a way that similar meaning words appear together and dissimilar words are located far away
* We learnt about the various applications of word embeddings.
* We learnt how to generate word embeddings using a neural network implemented with the help of Keras Sequential Model
* Gensim and NLTK is a topic modeling toolkit which is implemented in python
* Word2vec and GloVe are pre-trained word embedding models made available by Google and Stanford researchers respectively.

# Datasets and Models Used

- Restaurant Reviews : [https://www.kaggle.com/hj5992/restaurantreviews/download]()
- GloVe Model : [http://nlp.stanford.edu/data/glove.6B.zip]()

## References

- [https://www.tensorflow.org/text/guide/word_embeddings]()
- [https://keras.io/examples/nlp/pretrained_word_embeddings/]()
- [https://www.kaggle.com/apekshakom/sentiment-analysis-of-restaurant-reviews?select=Restaurant_Reviews.tsv]()
- [https://stackabuse.com/python-for-nlp-word-embeddings-for-deep-learning-in-keras/]()
- [https://machinelearningmastery.com/develop-word-embeddings-python-gensim/]()
- [https://www.guru99.com/word-embedding-word2vec.html]()

## Conclusion

Word Embeddings are a popular way of representing textual data in numerical/vector format, so that they can be further used by various machine learning or deep learning algorithms. Word Embeddings can be combined with Word2Vec or GloVe models and tools like NLTK, to create powerful text processing applications.
