## Title : Name of the Topic
🔴 **Type of Content** : Documentation

🔴 **Domain** : Machine Learning

🔴 **Module** : Name of the module for every week


*********************************************************************


Natural language processing (NLP) is a subfield of linguistics, computer science, and artificial intelligence concerned with the interactions between computers and human language, in particular how to program computers to process and analyze large amounts of natural language data. 

# **What is Word Embedding?**

In natural language processing (NLP), word embedding is a term used for the representation of words for text analysis, typically in the form of a real-valued vector that encodes the meaning of the word such that the words that are closer in the vector space are expected to be similar in meaning. Word embeddings are a type of word representation that allows words with similar meaning to have a similar representation. 

Word embeddings are in fact a class of techniques where individual words are represented as real-valued vectors in a predefined vector space. Each word is mapped to one vector and the vector values are learned in a way that resembles a neural network, and hence the technique is often lumped into the field of deep learning.

# **Word Embedding Algorithms**

Word embedding methods learn a real-valued vector representation for a predefined fixed sized vocabulary

## **1. Embedding Layer**

Embedding layer is one of the available layers in Keras. This is mainly used in Natural Language Processing related applications such as language modeling, but it can also be used with other tasks that involve neural networks. Alternatively we can also train our own embeddings using Keras embedding layer. Word embeddings can be thought of as an alternate to one-hot encoding along with dimensionality reduction.

As we know while dealing with textual data, we need to convert it into numbers before feeding into any machine learning model, including neural networks. For simplicity words can be compared to categorical variables. We use one-hot encoding to convert categorical features into numbers. To do so, we create dummy features for each of the category and populate them with 0’s and 1's.

Embedding layer enables us to convert each word into a fixed length vector of defined size. The resultant vector is a dense one with having real values instead of just 0’s and 1’s.



```
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Embedding
import numpy as np

model = Sequential()
embedding_layer = Embedding(input_dim=10,output_dim=4,input_length=2)
model.add(embedding_layer)
```

## **2. Word2Vec**

Word2vec takes in words from a large corpus of texts as input and learns to give out their vector representation.

Cosine similarity of 1 would mean that the angle between two words is 0; and would denote that the words are similar. Two similar words will occupy locations close to each other in that vector space, whereas words that are very different will occupy far away spaces.


The algorithm uses a neural network architecture that consists of two learning models:


### **Continuous Bag-of-Words model (CBOW)**

In this approach, the model uses context words to predict the target words. The input may be a group of words or a single word. It predicts a missing word given a window of context words or word sequence.

### **Continuous skip-gram model**

The continuous skip-gram model works the other way around. It uses the target words to predict the context words. It involves training a neural network to learn the weights of the hidden layer. These learned weights correspond to the word vectors that we are trying to learn.

### **Implementation**


```
from nltk.tokenize import sent_tokenize, word_tokenize
import warnings
  
warnings.filterwarnings(action = 'ignore')
  
import gensim
from gensim.models import Word2Vec
  
sample = open("..file-path(.txt)", "r")
s = sample.read()
  
# Replaces escape character with space
f = s.replace("\n", " ")
  
data = []
  
# iterate through each sentence in the file
for i in sent_tokenize(f):
    temp = []
      
    # tokenize the sentence into words
    for j in word_tokenize(i):
        temp.append(j.lower())
  
    data.append(temp)
  
# Create CBOW model
model1 = gensim.models.Word2Vec(data, min_count = 1, size = 100, window = 5)
  
# Create Skip Gram model
model2 = gensim.models.Word2Vec(data, min_count = 1, size = 100, window = 5, sg = 1)
```


## **3. GloVe**

The Global Vectors for Word Representation, or GloVe, algorithm is an extension to the word2vec method for efficiently learning word vectors. GloVe is an approach to marry both the global statistics of matrix factorization techniques like LSA with the local context-based learning in word2vec.

Rather than using a window to define local context, GloVe constructs an explicit word-context or word co-occurrence matrix using statistics across the whole text corpus. The result is a learning model that may result in generally better word embeddings.

The advantage of GloVe is that, unlike Word2vec, GloVe does not rely just on local statistics (local context information of words), but incorporates global statistics (word co-occurrence) to obtain word vectors.

### **Implementation**

```
import spacy
from sklearn.manifold import TSNE

nlp = spacy.load('en_vecs')
total_vectors = len(nlp.vocab.vectors)

tsne = TSNE(n_components=2, random_state=0, n_iter=5000, perplexity=3)
np.set_printoptions(suppress=True)
T = tsne.fit_transform(word_glove_vectors)
labels = unique_words

plt.figure(figsize=(12, 6))
plt.scatter(T[:, 0], T[:, 1], c='orange', edgecolors='r')
for label, x, y in zip(labels, T[:, 0], T[:, 1]):
    plt.annotate(label, xy=(x+1, y+1), xytext=(0, 0), textcoords='offset points')
    
```

### **References:**

[https://en.wikipedia.org/wiki/Word_embedding](https://en.wikipedia.org/wiki/Word_embedding)

[https://machinelearningmastery.com/what-are-word-embeddings/](https://machinelearningmastery.com/what-are-word-embeddings/)


*********************************************************************

### GirlScript Winter of Contributions 2021
