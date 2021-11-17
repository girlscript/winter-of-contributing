# Project Title : MNIST Digits Classification
<img src="images/cover.png">

## Abstract/Brief Description about the Project :
**Actually, MNIST is ‘Modified National Institute of Standards and Technology. This dataset consists of handwritten digits from 0 to 9 and it provides a pavement for testing image processing systems. This is considered to be the ‘hello world program in Machine Learning’ which involves Deep Learning.**

## Dataset : 
**The dataset which is used here, is collected from Kaggle website. Here is the link of the dataset :** <br>
https://www.kaggle.com/avnishnish/mnist-original

## Goal/Aim of the project : 
**Goal of this Project is to classify different digits and predict accordingly.**

## Libraries used : 
- ```Numpy```
- ```Pandas```
- ```Matplotlib```
- ```Seaborn```
- ```Tensorflow```
- ```Keras```

## Data Visualization :
1. Count Plot: Showing the number of images available for a particular 
<img src="images/count.png" alt_text="count-plot">

<img src="images/dataset.png" alt_text="dataset">

<img src="images/output-model_2.png" alt_text="prediction-model-2">

## Model comparison :
<table>
    <tr>
        <th><u>Model Name</u></th>
        <th><u>Accuracy Score</u></th>
    </tr>
    <tr>
        <th>Model-1 [Basic]</th>
        <th> 97.93999791145325 </th>
    </tr>
    <tr>
        <th>Model-2 [CNN]</th>
        <th> 98.51999878883362 </th>
    </tr>
</table>

## Conclusion and Discussion :
- We can see that a basic Sequential Model has an Accuracy of about 97%.

- Whereas the CNN(Convolutional Neural Network) Model has an accuracy of about 98.5%.

- On comparing them it is wise to choose the 2nd Model i.e. CNN.

- But drawback of this model is that it consumes a lot of time to train the model.

- If we want a good accuracy and are ready to compromise with time then we can go with CNN Model.

**********************************************************************
**GirlScript Winter of Contributions 2021**