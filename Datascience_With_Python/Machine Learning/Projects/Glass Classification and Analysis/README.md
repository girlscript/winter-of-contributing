# Glass Classification and Analysis

## Introduction

*What is Classification?*

In statistics, classification is the problem of identifying which of a set of categories an observation, belongs to.
A Classification algorithm is a type Supervised Machine Learning algorithm which predicts data or the category to which the data belongs, based on the training set provided, which contains various features. 

It can be used to:
* Classify different images as cat or dog, based on different features
* Predict if a person is Covid positive or negative, based on different symptoms and tests conducted
* If a person will pass or fail in exams, based on the hours of study and the marks in practice tests
And so on...

Different types of Classificatio algorithm are:
* K-Nearest Neighbors (K-NN)
* Support Vector Machine (SVM)
* Kernel SVM
* Naive Bayes
* Logistic Regression

---

NOTE: Kernel SVM is just like a special case of SVM, so we might only consider the more specific Kernel SVM, to classify

---

*About the problem...*

This problem involves classification and prediction of glass type among the 7 different types given,  
1. buildingwindowsfloatprocessed 
2. buildingwindowsnonfloatprocessed
3. vehiclewindowsfloatprocessed 
4. vehiclewindowsnonfloatprocessed (none in this database)
5. containers
6. tableware
7. headlamps. 

This is a Glass Identification Data Set from UCI. It contains 10 attributes including id.

We'll be applying the different algorithms as mentioned earlier, on the dataset given. To check which algorithm is based suited to analyse the given dataset, all the different classification models are applied on the dataset and the one with best r2 score or accuracy score is selected as the best algorithm for the given dataset!

---

Link to dataset: https://www.kaggle.com/uciml/glass

---

## So, let's begin!

### Importing the essentials

We first start with importing the important libraries and dataset, and split the dependent and independent features into X and y variables

### Missing Values

When checked, it was found that the dataset had no NaN or null values

### Splitting the dataset into the Training set and Test set

train_test_split() function from sklearn.model_selection module is used to slit X and y to X_train, X_test, y_train and y_test

### Feature Scaling

Scaling is done and is important for classification because the distance of the points from the classes is the main principle behind classification. The data consists of some large difference between the values, hence to normalize the range of the variables, Scaling is done. Standard scaler sets the mean of the data as 0 and the other points in terms of standard deviation.

### Applying the models from sklearn library

1. *K-Nearest Neighbors (K-NN)*

K nearest neighbors is a simple algorithm that stores all available cases and classifies new cases based on a similarity measure (e.g., distance functions). 

![image](https://user-images.githubusercontent.com/83827603/142608693-93787910-2f86-434a-9065-c7ae65f5f97b.png)

Any of the following formulae can be used for distance measure

![image](https://user-images.githubusercontent.com/83827603/142608783-89597d8e-c989-49cc-9127-e2a1dcc1b44f.png)

2. *Kernel SVM*

“Kernel” is used due to set of mathematical functions used in Support Vector Machine provides the window to manipulate the data. So, Kernel Function generally transforms the training set of data so that a non-linear decision surface is able to transformed to a linear equation in a higher number of dimension spaces. Basically, It returns the inner product between two points in a standard feature dimension.

Here are some Kernels in SVM

![image](https://user-images.githubusercontent.com/83827603/142609002-3c80e2bc-f3e7-4663-83a6-21a67ebe057e.png)

3. *Naive Bayes*

The Naive Bayes classifier works on the principle of conditional probability, as given by the Bayes theorem. The formula for which:

![image](https://user-images.githubusercontent.com/83827603/142609097-c9bfeea0-c2c1-44f7-91e5-cc58cb47a2f5.png)

4. *Logic Regression*

Logistic Regression is a type of classification method. It is used to model and predict the probability of a class or an event. 

![image](https://user-images.githubusercontent.com/83827603/142609217-2567c6f1-901a-4e12-99ce-0af6044e9e08.png)

### Deterining the final model and hence the results

The confusion matrix and r2 score for each of the models had been calculated and the r2 score will be used to compare and optain the best model

![image](https://user-images.githubusercontent.com/83827603/142609629-e1f410cc-1abe-48a8-8d99-fee1abc350b3.png)

The image above shows models and their corresponding r2 scores, **Kernel SVM** has the highest r2 score: **0.827** therefore its predictions will be used as final predictions.

The final predicted values as compared to the actual values is as follows:

![image](https://user-images.githubusercontent.com/83827603/142609873-09251e27-4dcb-4a50-9428-14715abf76d4.png)

with confusion matrix:

![image](https://user-images.githubusercontent.com/83827603/142609936-4642c386-40d0-4973-9198-2cfe71920c3b.png)


## Conclusion:

* The results predicted by the Logistic Regression model have been the most accurate with an r2 score: **0.827**
* Thd accuracy score is quite great: 61.11%

Thus the best model that could be used to predict the type of glass on the features similar to the given features, is the **Kernel SVM**


## References:

* https://www.saedsayad.com/k_nearest_neighbors.htm
* https://www.simplilearn.com/tutorials/machine-learning-tutorial/naive-bayes-classifier


