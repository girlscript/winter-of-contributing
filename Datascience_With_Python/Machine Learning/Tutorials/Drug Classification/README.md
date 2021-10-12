## Topic: Data Science with Python : Drug Classification #3523

*What is Classification?*

A Classification algorithm is a type Supervised Machine Learning algorithm which predicts data based on the training set provided. It is used to identify the category of various data based on the features provided.

It can be used to:
* Classify different images as cat or dog, based on different features
* Predict if a person is Covid positive or negative, based on different symptoms and tests conducted
* If a person will pass or fail in exams, based on the hours of study and the marks in practice tests
And so on...

Different types of Classification algorithm are:
* K-Nearest Neighbours (K-NN)
* Support Vector Machine (SVM)
* Kernel SVM
* Naive Bayes
* Logistic Regression
---
*About the problem...*

This problem involves classification and prediction of drugs as drugY, drugX, drugA, drugC or drugB suitable for a patient, based on Age, Sex, BP, Cholesterol levels and Na to Potassium Ratio entered by the user.

To check which algorithm is based suited to analyse the given dataset, all the different classification models are applied on the dataset and the one with best r2 score or accuracy score is selected as the best algorithm for the given dataset!

---
*Let's begin!*

First, we prepare the dataset to apply all models. Preprocessing techniques like Label Encoding, One Hot Encoding and Scaling have been carried out.

Data preprocessing techniques always depend on the type of dataset and the model to be applied on the dataset. So, if there are any missing values or so, it should be taken care that such problems are discarded by, for example, replacing the missing values with mean of the values in the column, etc.

* Firstly, the required libraries are imported: numpy, pandas and matplotlib (for visualization) are usually imported by default.
* Importing the dataset using the pandas library and defining the X and y variables.
* Categorical data are encoded using OneHotEncoder. It helps in the representation of categorical data to be more expressive and machine readable by converting them to numbers. Each value is represented as a binary vector that is all zero values except the index of the value, which is marked with a 1.
* LabelEncoder is used to encode dependent variable where each variable is represented as an integer. If there are 5 labels involved in that particular column, the labels assume values between 0 and 4.

---
*A common question arises... Why OneHotEncoder and not LabelEncoder?*

You can figure that out by either applying both to the dataset and the one with best r2 score maybe considered final. Or, if you find that there isn't much relation between the different labels in the column, and to avoid giving weigtage to different labels based on the integer value (in Label Encoding) assigned to each, we go for One Hot Encoder. Also, if there are many labels, Label Encoder is preferred over One Hot Encoder.

---

* All the columns after Label Encoding and One Hot Encoding, are machine readable! So, let's go to the next step!
* The dataset is split up into training and test set. The test set may contain 25-30% of the total data.
* XGBoost is applied. It is a decision-tree-based ensemble Machine Learning algorithm that uses a gradient boosting framework. It is used for speed and performance!
* Scaling is done and is important for classification because the distance of the points from the classes is the main principle behind classification. The data consists of many large values, hence to normalize the range of the variables, Scaling is done. Standard scaler sets the mean of the data as 0 and the other points in terms of standard deviation.

---

Scaling is done only after splitting the dataset to avoid leakage of information between the training and test set

---

* All the different models are applied on the dataset and their r2 scores are noted and used to compare the efficiency of the different models on this particular dataset.
* With the help of confusion matrix, we get to know the number of correct and wrong predictions and also about the class which had been predicted wrong.
* The results predicted by the Logistic Regression model have been the most accurate with an r2 score of 97.56%
* The accuracy score is quite great also high but it has to be this high in the fields like medical. 
* According to the confusion matrix, the model just predicts one data wrong else is quite successful in its predictions!

Thus the best model that could be used to predict the drugs based on the features similar to the given features, is the Logistic Regression algorithm

---
