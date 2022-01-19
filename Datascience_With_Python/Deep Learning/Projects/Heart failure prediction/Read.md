
Heart failure prediction

Task-
 Predict heart failure on various factors of health like- no. Of platelets, smoking, diabetes, etc.

Dataset 
https://www.kaggle.com/andrewmvd/heart-failure-clinical-data

Medium link- https://link.medium.com/Op4aHhSOKkb

Our whole project divided in some parts-

Reading file- First we have to read datasets.

Analysing Data- Analyse your dataset and remove over fitted data

Splitting Data- split our data into train and test. Train data for training model and test data for validating result.

Architecture of Model
In this project we tain our model using artificial neural network(ANN). There are four layer- one starting layer, second and third 
hidden layer has relu as activation function and output layer has sigmoid as activation function.

Compiling Model
We use adam optimizer for optimize our model. There is 100 epchos and all batch size of 16.

