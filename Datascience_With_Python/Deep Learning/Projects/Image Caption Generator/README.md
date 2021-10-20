# TOPIC: Image Caption Generator
Image caption generator is used to generate well-formed sentences for an image that requires syntactic and semantic understanding of the language.

## Flickr8k dataset:
[Link to dataset](https://www.kaggle.com/srbhshinde/flickr8k-sau)<br>
It contains around 8000 images with their captions.<br>
For each image 5 captions are provided.<br>
Flickr_TextData folder contains all the captions, test images, train images and Images folder contains all the images.<br>

## glove.6B.50d:
[Link to dataset](https://www.kaggle.com/watts2/glove6b50dtxt)<br>
Global Vector or GloVe is an unsupervised learning algorithm for obtaining vector representations for words

## WORKFLOW:
* Importing dataset from Kaggle.
* Importing libraries.
* Visualization of our dataset
* Make a description dictionary that has keys as the image name and values as all the 5 captions for that image.
* Cleaning captions
* Creating a vocabulary, that contains all the unique words.
* Reading training and test images and creating a description dictionary for each.
* To create our model we will use a pre-trained CNN model i.e. ResNet50.
* Finally predicting the caption for an image.

## CONVOLUTIONAL NEURAL NETWORKS (CNN):
CNNs are particularly well-suited for a variety of tasks in computer vision.ResNet, short for Residual Network is a powerful backbone for many computer visions problems.<br>
In our task, we will be using ResNet50 which is a pre-trained convolutional neural network that has 50 layers.<br>
ResNet50 architecture:<br>
![image](https://user-images.githubusercontent.com/89564985/137065212-0876acd4-ded1-42ba-a222-fec3137a5923.png)<br>
[Image source](https://www.researchgate.net/figure/Left-ResNet50-architecture-Blocks-with-dotted-line-represents-modules-that-might-be_fig3_331364877)

## LSTM (Long Short Term Memory):
It is a type of Recurrent Neural Network (RNN), a sequential network, used for sequence prediction. Based on the previous text LSTM can predict the next word.<br>
![image](https://user-images.githubusercontent.com/89564985/137065895-71b67328-4e14-4bfc-a0d5-22c3771fa29d.png)<br>
[Image source](https://www.researchgate.net/figure/The-structure-of-the-LSTM-unit_fig2_331421650)<br>

## Applications:
* captions can be read out to visually impaired persons
* image indexing
* virtual assistants
* in social media

## Output:
![Screenshot (181)](https://user-images.githubusercontent.com/89564985/138051167-66896125-a310-418c-8a44-22bde0810c11.png)<br>
![Screenshot (182)](https://user-images.githubusercontent.com/89564985/138051186-808d0757-8425-4aea-b8f6-d1808964535b.png)

## Conclusion:
Image caption generator is a popular research area. It involves CNN (Convolutional Neural Network) to extract features from the images and LSTM (Long Short Term Memory) used to generate captions for the image.<br>
For this task, we used the flickr8k dataset which consists of 8000 images. For better accuracy, we need to train datasets larger than this.

### THANK YOU!
