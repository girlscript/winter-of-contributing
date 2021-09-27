# LOGISTIC REGRESSION

## Introduction

Logistic regression is used for the classification rather than regression (given in its name) where it is used for binary classification systems in general. It coms under the category of supervised classification problems. Scikit learn library in Python helps us in implementing the logistic regression algorithm. This algorithm is useful when the dependent variable represents a category.

## Applications

It has it applications in various problems nowadays. Few examples are:

Credit Card Fraud Detection:Logistic regression can be used to find if a transaction is fraud using its features. Features can be the date of transaction, mode of payment, amount of payment,etc.
Email Spam detection:It is used for classification of email as spam and label it accordingly.
Tumour Prediction: It is used in prediction of whether a tumour is malignant benign after extraction of features from tumours.

## How does it work?

In Logistic regression, sigmoid function which is an 'S' shaped graph is used for mapping of the predictions to their respective probabilities. It provides us with predictions between 0 and 1.

Hypothesis is taken as follows:

Z = WX + B
This Z is passed into the sigmoid function

hΘ(x) = sigmoid (Z)
where sigmoid function is given by:

sigmoid(t)=1/(1+e^-t)
We then specify a decision boundary according to which the values are classified into particular classes. After this, using the predicted values we can give different classes to the target variable.
