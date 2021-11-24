# Credit Card Fraud Detection

## [Video Link](https://drive.google.com/file/d/1e2SX0YUpH6hF2pNuDg-o8aj6UWMQWV8S/view?usp=sharing)

## Introduction
The challenge is to recognize fraudulent credit card transactions so that the customers of credit card companies are not charged for items that they did not purchase.

When we make any transaction while purchasing any product online - a good amount of people prefer credit cards. The credit limit in credit cards sometimes helps us me making purchases even if we don’t have the amount at that time. but, on the other hand, these features are misused by cyber attackers.

Today, we have many machine learning algorithms that can help us classify abnormal transactions. The only requirement is the past data and the suitable algorithm that can fit our data in a better form.

## Modules involved
 1. Loading Data , pre-processing our data.
 2. Splitting the data into training samples and testing samples.
 3. Using different machine learning techniques and finding the accuracy of the model.
 4. Analyzing different classification metrics like f1 score, precision score , Accuracy score, Confusion matrix etc.
 5. Confusion matrix for the normal and fraudlent data.
 6. Concluding the best model.

Dataset: https://www.kaggle.com/mlg-ulb/creditcardfraud

## Detail Information:
 - The dataset contains transactions made by credit cards in September 2013 by European cardholders.This dataset presents transactions that occurred in two days, where we have 492 frauds out of 284,807 transactions. The dataset is highly unbalanced, the positive class (frauds) account for 0.172% of all transactions.
 - It contains only numerical input variables which are the result of a PCA transformation. Unfortunately, due to confidentiality issues, we cannot provide the original features and more background information about the data.
 - Features V1, V2, … V28 are the principal components obtained with PCA, the only features which have not been transformed with PCA are 'Time' and 'Amount’.
 - Given the class imbalance ratio, we recommend measuring the accuracy using the Area Under the Precision-Recall Curve (AUPRC). Confusion matrix accuracy is not meaningful for unbalanced classification.
 - Dataset contains total number of rows 284807 and total number of columns 31 in which 492 records are of fraud transaction which we have to use and find the pattern of the fraud transactions using different machine learning model.

## Splitting dataset into training and testing data

import module using below command:
```
from sklearn.model_selection import train_test_split
```
![](https://user-images.githubusercontent.com/88443158/143060474-3697e2e2-d20c-4514-926a-3e3e016de326.PNG)

## We have used 5 different types of models:

 1. Random Forest
 2. K-Nearest Neighbors
 3. Logistic Regression
 4. XGBoost
 5. Decision Tree

## 1. Random Forest

 - A random forest is a machine learning technique that's used to solve regression and classification problems. It utilizes ensemble learning, which is a technique that combines many classifiers to provide solutions to complex problems. A random forest algorithm consists of many decision trees.
 - Random forest is a supervised learning algorithm which is used for both classification as well as regression. Similarly, random forest algorithm creates decision trees on data samples and then gets the prediction from each of them and finally selects the best solution by means of voting.

![image](https://user-images.githubusercontent.com/88443158/143085259-fc46aa79-126d-47bb-ae42-6b10297a131f.jpg)

## 2. K-Nearest Neighbors

 - K-Nearest Neighbour is one of the simplest Machine Learning algorithms based on Supervised Learning technique.
 - K-NN algorithm assumes the similarity between the new case/data and available cases and put the new case into the category that is most similar to the available categories.
 - K-NN is a non-parametric algorithm, which means it does not make any assumption on underlying data.KNN algorithm at the training phase just stores the dataset and when it gets new data, then it classifies that data into a category that is much similar to the new data.

![image](https://user-images.githubusercontent.com/88443158/143085753-53a43ccb-b34c-4486-8c74-4a69fdf6660e.png)

## 3. Logistic Regression

 - Logistic regression is one of the most popular Machine Learning algorithms, which comes under the Supervised Learning technique. It is used for predicting the categorical dependent variable using a given set of independent variables.
 - Logistic regression predicts the output of a categorical dependent variable. Therefore the outcome must be a categorical or discrete value. It can be either Yes or No, 0 or 1, true or False, etc. but instead of giving the exact value as 0 and 1, it gives the probabilistic values which lie between 0 and 1.
 - In Logistic regression, instead of fitting a regression line, we fit an "S" shaped logistic function, which predicts two maximum values (0 or 1).

![images](https://user-images.githubusercontent.com/88443158/143087800-0b5be8a5-bf9e-4fa8-9696-b6b507fe3d86.png)

## 4. XGBoost

 - XGBoost is a decision-tree-based ensemble Machine Learning algorithm that uses a gradient boosting framework.
 - In prediction problems involving unstructured data (images, text, etc.) artificial neural networks tend to outperform all other algorithms or frameworks.
 - However, when it comes to small-to-medium structured/tabular data, decision tree based algorithms are considered best-in-class right now.

![image](https://user-images.githubusercontent.com/88443158/143086731-96e7fc29-fe05-437c-b234-f945ed418b7d.jpg)

## 5. Decision Tree

 - Decision Tree is a Supervised learning technique that can be used for both classification and Regression problems, but mostly it is preferred for solving Classification problems.
 - It is a tree-structured classifier, where internal nodes represent the features of a dataset, branches represent the decision rules and each leaf node represents the outcome.
 - The decisions or the test are performed on the basis of features of the given dataset.
 - A decision tree simply asks a question, and based on the answer (Yes/No), it further split the tree into subtrees.

![download](https://user-images.githubusercontent.com/88443158/143086816-75e99263-c551-4cd1-8920-cb908a7ce052.png)

## Conclusion

 - We just received 99.95% accuracy in our credit card fraud detection. This number should not be surprising as our data was balanced towards one class. The good thing that we have noticed from the confusion matrix is that our model is not overfitted.
 - Finally, based on our accuracy score XGBoost is the winner for our case. The only catch here is the data that we have received for model training.
 - Comparison with other algorithms without dealing with the imbalancing of the data.
 - As we can see with our XGBoost Model we are getting a better result even comparing with other models.

## References

 1. [RandomForestClassifier](https://www.javatpoint.com/machine-learning-random-forest-algorithm)
 2. [Credit card fraud detection](https://www.geeksforgeeks.org/ml-credit-card-fraud-detection/)
 3. [XGBoost](https://towardsdatascience.com/credit-card-fraud-detection-using-machine-learning-python-5b098d4a8edc)
