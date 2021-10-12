# **Image Caption Generator**

# [Click on this to listen audio](https://drive.google.com/file/d/1IWYatepvXUVO93sR_SESJ_ZwXd20cH-a/view?usp=sharing)

## **Outline**
* Introduction
* Understanding the Dataset
* Implemention to create a Image Caption Generator
* Resources and References
* Summary

## **Introduction**
Image caption generator is a task that involves computer vision and natural language processing concepts to recognize the context of an image and describe them in a natural language like English. We will be implementing the caption generator using CNN (Convolutional Neural Networks) and LSTM (Long short term memory). The image features will be extracted from Xception which is a CNN model trained on the imagenet dataset and then we feed the features into the LSTM model which will be responsible for generating the image captions. So, to make our image caption generator model, we will be merging these architectures. It is also called a CNN-RNN model.

* CNN is used for extracting features from the image. We will use the pre-trained model Xception.
* LSTM will use the information from CNN to help generate a description of the image.

![image caption generator](https://data-flair.training/blogs/wp-content/uploads/sites/2/2019/11/Model-of-Image-Caption-Generator-python-project.png)

## **Understanding the Dataset**

Downloaded from dataset:

* Flicker8k_Dataset – Dataset folder which contains 8091 images.
* Flickr_8k_text – Dataset folder which contains text files and captions of images.
The below files will be created by us while making the project.

* Models – It will contain our trained models.
* Descriptions.txt – This text file contains all image names and their captions after preprocessing.
* Features.p – Pickle object that contains an image and their feature vector extracted from the Xception pre-trained CNN model.
* Tokenizer.p – Contains tokens mapped with an index value.
* Model.png – Visual representation of dimensions of our project.
* Testing_caption_generator.py – Python file for generating a caption of any image.
* Training_caption_generator.ipynb – Jupyter notebook in which we train and build our image caption generator.
You can download all the files from the link:


### [Download the Dataset from here.](https://drive.google.com/open?id=13oJ_9jeylTmW7ivmuNmadwraWceHoQbK)

## **Implemention to create a Image Caption generator**

1. ### **Importing the libraries**

```python
# linear algebra
import numpy as np
# data processing, CSV file I / O (e.g. pd.read_csv)
import pandas as pd
import os
import tensorflow as tf
from keras.preprocessing.sequence import pad_sequences
from keras.preprocessing.text import Tokenizer
from keras.models import Model
from keras.layers import Flatten, Dense, LSTM, Dropout, Embedding, Activation
from keras.layers import concatenate, BatchNormalization, Input
from keras.layers.merge import add
from keras.utils import to_categorical, plot_model
from keras.applications.inception_v3 import InceptionV3, preprocess_input
import matplotlib.pyplot as plt # for plotting data
import cv2
```
2. ### **Load the descriptions**

```python
def load_description(text):
	mapping = dict()
	for line in text.split("\n"):
		token = line.split("\t")
		if len(line) < 2: # remove short descriptions
			continue
		img_id = token[0].split('.')[0] # name of the image
		img_des = token[1]			 # description of the image
		if img_id not in mapping:
			mapping[img_id] = list()
		mapping[img_id].append(img_des)
	return mapping

token_path = '/kaggle / input / flickr8k / flickr_data / Flickr_Data / Flickr_TextData / Flickr8k.token.txt'
text = open(token_path, 'r', encoding = 'utf-8').read()
descriptions = load_description(text)
print(descriptions['1000268201_693b08cb0e'])
```
Output:

```python
['A child in a pink dress is climbing up a set of stairs in an entry way .', 

'A girl going into a wooden building .', 

'A little girl climbing into a wooden playhouse .', 

'A little girl climbing the stairs to her playhouse .', 

'A little girl in a pink dress going into a wooden cabin .']
```

3. ### **Cleaning the text**

```python
def clean_description(desc):
	for key, des_list in desc.items():
		for i in range(len(des_list)):
			caption = des_list[i]
			caption = [ch for ch in caption if ch not in string.punctuation]
			caption = ''.join(caption)
			caption = caption.split(' ')
			caption = [word.lower() for word in caption if len(word)>1 and word.isalpha()]
			caption = ' '.join(caption)
			des_list[i] = caption

clean_description(descriptions)
descriptions['1000268201_693b08cb0e']
```

4. ### **Generate the Vocabulary**

```python
def to_vocab(desc):
	words = set()
	for key in desc.keys():
		for line in desc[key]:
			words.update(line.split())
	return words
vocab = to_vocab(descriptions)
```

5. ### **Load the images**

```python
import glob
images = '/kaggle / input / flickr8k / flickr_data / Flickr_Data / Images/'
# Create a list of all image names in the directory
img = glob.glob(images + '*.jpg')

train_path = '/kaggle / input / flickr8k / flickr_data / Flickr_Data / Flickr_TextData / Flickr_8k.trainImages.txt'
train_images = open(train_path, 'r', encoding = 'utf-8').read().split("\n")
train_img = [] # list of all images in training set
for im in img:
	if(im[len(images):] in train_images):
		train_img.append(im)
		
# load descriptions of training set in a dictionary. Name of the image will act as ey
def load_clean_descriptions(des, dataset):
	dataset_des = dict()
	for key, des_list in des.items():
		if key+'.jpg' in dataset:
			if key not in dataset_des:
				dataset_des[key] = list()
			for line in des_list:
				desc = 'startseq ' + line + ' endseq'
				dataset_des[key].append(desc)
	return dataset_des

train_descriptions = load_clean_descriptions(descriptions, train_images)
print(train_descriptions['1000268201_693b08cb0e'])
```

Output:

```python
['startseq child in pink dress is climbing up set of stairs in an entry way endseq', 

'startseq girl going into wooden building endseq', 

'startseq little girl climbing into wooden playhouse endseq', 

'startseq little girl climbing the stairs to her playhouse endseq', 

'startseq little girl in pink dress going into wooden cabin endseq']
```

6. ### **Extract the feature vector from all images**

```python
from keras.preprocessing.image import load_img, img_to_array
def preprocess_img(img_path):
	# inception v3 excepts img in 299 * 299 * 3
	img = load_img(img_path, target_size = (299, 299))
	x = img_to_array(img)
	# Add one more dimension
	x = np.expand_dims(x, axis = 0)
	x = preprocess_input(x)
	return x

def encode(image):
	image = preprocess_img(image)
	vec = model.predict(image)
	vec = np.reshape(vec, (vec.shape[1]))
	return vec

base_model = InceptionV3(weights = 'imagenet')
model = Model(base_model.input, base_model.layers[-2].output)
# run the encode function on all train images and store the feature vectors in a list
encoding_train = {}
for img in train_img:
	encoding_train[img[len(images):]] = encode(img)
```

7. ### **Tokenizing the vocabulary**

```python
# list of all training captions
all_train_captions = []
for key, val in train_descriptions.items():
	for caption in val:
		all_train_captions.append(caption)

# consider only words which occur atleast 10 times
vocabulary = vocab
threshold = 10 # you can change this value according to your need
word_counts = {}
for cap in all_train_captions:
	for word in cap.split(' '):
		word_counts[word] = word_counts.get(word, 0) + 1

vocab = [word for word in word_counts if word_counts[word] >= threshold]

# word mapping to integers
ixtoword = {}
wordtoix = {}

ix = 1
for word in vocab:
	wordtoix[word] = ix
	ixtoword[ix] = word
	ix += 1
	
# find the maximum length of a description in a dataset
max_length = max(len(des.split()) for des in all_train_captions)
max_length
```

8. ### **Glove vector embeddings**

```python
X1, X2, y = list(), list(), list()
for key, des_list in train_descriptions.items():
	pic = train_features[key + '.jpg']
	for cap in des_list:
		seq = [wordtoix[word] for word in cap.split(' ') if word in wordtoix]
		for i in range(1, len(seq)):
			in_seq, out_seq = seq[:i], seq[i]
			in_seq = pad_sequences([in_seq], maxlen = max_length)[0]
			out_seq = to_categorical([out_seq], num_classes = vocab_size)[0]
			# store
			X1.append(pic)
			X2.append(in_seq)
			y.append(out_seq)

X2 = np.array(X2)
X1 = np.array(X1)
y = np.array(y)

# load glove vectors for embedding layer
embeddings_index = {}
golve_path ='/kaggle / input / glove-global-vectors-for-word-representation / glove.6B.200d.txt'
glove = open(golve_path, 'r', encoding = 'utf-8').read()
for line in glove.split("\n"):
	values = line.split(" ")
	word = values[0]
	indices = np.asarray(values[1: ], dtype = 'float32')
	embeddings_index[word] = indices

emb_dim = 200
emb_matrix = np.zeros((vocab_size, emb_dim))
for word, i in wordtoix.items():
	emb_vec = embeddings_index.get(word)
	if emb_vec is not None:
		emb_matrix[i] = emb_vec
emb_matrix.shape
```

9. ### **Define the model**

```python
# define the model
ip1 = Input(shape = (2048, ))
fe1 = Dropout(0.2)(ip1)
fe2 = Dense(256, activation = 'relu')(fe1)
ip2 = Input(shape = (max_length, ))
se1 = Embedding(vocab_size, emb_dim, mask_zero = True)(ip2)
se2 = Dropout(0.2)(se1)
se3 = LSTM(256)(se2)
decoder1 = add([fe2, se3])
decoder2 = Dense(256, activation = 'relu')(decoder1)
outputs = Dense(vocab_size, activation = 'softmax')(decoder2)
model = Model(inputs = [ip1, ip2], outputs = outputs)
```

Output:

![Step9Output](https://media.geeksforgeeks.org/wp-content/uploads/20200718151031/captiongeneratormodel.png)

10. ### **Training the model**

```python
model.layers[2].set_weights([emb_matrix])
model.layers[2].trainable = False
model.compile(loss = 'categorical_crossentropy', optimizer = 'adam')
model.fit([X1, X2], y, epochs = 50, batch_size = 256)
# you can increase the number of epochs for better results
```
Output:

```python
Epoch 1/1

292328/292328 [==============================] - 55s 189us/step - loss: 3.8895

Epoch 1/1

292328/292328 [==============================] - 55s 187us/step - loss: 3.1549

Epoch 1/1

292328/292328 [==============================] - 54s 186us/step - loss: 2.9185

Epoch 1/1

292328/292328 [==============================] - 54s 186us/step - loss: 2.7652

Epoch 1/1

292328/292328 [=================>.........] - ETA: 15s - loss: 2.6496
```

11. ### **Predicting the output**

```python
def greedy_search(pic):
	start = 'startseq'
	for i in range(max_length):
		seq = [wordtoix[word] for word in start.split() if word in wordtoix]
		seq = pad_sequences([seq], maxlen = max_length)
		yhat = model.predict([pic, seq])
		yhat = np.argmax(yhat)
		word = ixtoword[yhat]
		start += ' ' + word
		if word == 'endseq':
			break
	final = start.split()
	final = final[1:-1]
	final = ' '.join(final)
	return final
```
Output:

![Output1](https://media.geeksforgeeks.org/wp-content/uploads/20200718154246/results330.png)
#### Predicted Output: four girls are sitting on wooden floor

![Output2](https://media.geeksforgeeks.org/wp-content/uploads/20200718154435/dog.png)
#### Predicted Output: black dog is running through the grass

![Output3](https://media.geeksforgeeks.org/wp-content/uploads/20200718155151/snow.png)
 #### Predicted Output: man is skateboarding on ramp

## **Resources and References**

* https://www.analyticsvidhya.com/blog/2020/11/create-your-own-image-caption-generator-using-keras/
* https://www.geeksforgeeks.org/image-caption-generator-using-deep-learning-on-flickr8k-dataset/
* https://data-flair.training/blogs/python-based-project-image-caption-generator-cnn/
* https://data-flair.training/blogs/wp-content/uploads/sites/2/2019/11/Model-of-Image-Caption-Generator-python-project.png
* https://media.geeksforgeeks.org/wp-content/uploads/20200718151031/captiongeneratormodel.png

## **Summary**
In this advanced Python project, we have implemented a CNN-RNN model by building an image caption generator. Some key points to note are that our model depends on the data, so, it cannot predict the words that are out of its vocabulary. We used a small dataset consisting of 8000 images. For production-level models, we need to train on datasets larger than 100,000 images which can produce better accuracy models.
