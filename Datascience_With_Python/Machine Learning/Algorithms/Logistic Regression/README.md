# LOGISTIC REGRESSION

## Introduction

Logistic regression is used for the classification rather than regression (given in its name) where it is used for binary classification systems in general. It comes under the category of supervised classification problems. Scikit learn library in Python helps us in implementing the logistic regression algorithm. This algorithm is useful when the dependent variable represents a category.

## Types of Logistic Regression

There are 3 types of logistic regression in Python:
1. Binary Logistic Regression: Here, the target variable is binary in nature which means that it has only two possible values.
2. Multinomial Logistic Regression:Here, the target variablecan take three or more values but these values without any order of preference.
3. Ordinal Logistic Regression: Here, the target variable has three or more possible values having a particular preference.

## Applications

It has it applications in various problems nowadays. Few examples are:

Credit Card Fraud Detection:Logistic regression can be used to find if a transaction is fraud using its features. Features can be the date of transaction, mode of payment, amount of payment,etc.
Email Spam detection:It is used for classification of email as spam and label it accordingly.
Tumour Prediction: It is used in prediction of whether a tumour is malignant benign after extraction of features from tumours.

## Advantages 

1. It is easy to understand and implement without making any assumptions of distribution in feature space.
2. It is fast in nature and can predict classes of unknown records easily.
3. It gives good results on simple datasets. Also, results are even better if the dataset is linearly separable. 
4. Model coefficients are used for finding the relative importance of features.

## Disadvantages

1. Logistic Regression is not preferred if the number of observations is less than the number of features. In this case, overfitting can occur.
2. It assumes that dependent variable and the independent variables are having linear relationship which causes disadvantage. 
3. There should be minimum multicollinearity between independent variables in this algorithm.
4. It is difficult to get complex relationships whereas Neural Networks are able to give better results than logistic regression.

## How does it work?

In Logistic regression, sigmoid function which is an 'S' shaped graph is used for mapping of the predictions to their respective probabilities. It provides us with predictions between 0 and 1.

Hypothesis is taken as follows:

Z = WX + B

This Z is passed into the sigmoid function

hΘ(x) = sigmoid (Z)

where sigmoid function is given by:

sigmoid(t)=1/(1+e^-t)

![Sigmoid Curve](https://user-images.githubusercontent.com/54388275/135406879-737a0377-180d-4d82-ac9d-970075ec8c66.png)

We then specify a decision boundary according to which the values are classified into particular classes. After this, using the predicted values we can give different classes to the target variable.

## Workflow of the algorithm

![Code flowchart](https://user-images.githubusercontent.com/54388275/135406935-3f0af5f2-939c-4b0f-97c8-73c8965fd804.jpeg)

## Conclusion

We have seen that Logistic regression is a supervised algorithm which is helpful in finding the probability of the target variable. It is useful for getting the value for the dependent variable which is binary. We have discussed different concepts related to Logistic Regression algorithm including its types, applications, advantages, disadvantages and how it works. Also, we have implemented a code involving logistic regression describing how it can be used over a dataset and the results obtained after applying it.
