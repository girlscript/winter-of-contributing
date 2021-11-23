# Topic: Heart Disease Prediction

## Introduction:
Heart disease refers to a variety of conditions that affect the heart — from infections to genetic defects and blood-vessel diseases.
Most heart disease can be prevented with healthy lifestyle choices, yet it’s still the number one health threat in the world.<br>
In this task I will be predicting the heart disease in people using four different Machine Learning models: Support Vector Classifier, Logistic Regression, Random Forest Classifier, and K Neighbors Classifier. 

## Dataset:
For this task, I have used Kaggle's [Heart Disease Prediction](https://www.kaggle.com/ronitf/heart-disease-uci) dataset.

## Workflow:
* Importing necessary libraries
* Reading the dataset
* Data Analysis & Visualization: checking for null values, understanding the data,  calculating the number of values for each class, plotting the correlation matrix.
* Data Preprocessing: Breaking each categorical column into dummy columns so that we can work with the categorical variables, Scaling the numerical variables to a standard range.
* Train test split: Randomly splitting the dataset into training data and testing data for training the model and prediction.
* Training the model using four machine learning models: Support Vector Classifier, Logistic Regression, Random Forest Classifier, and K Neighbors Classifier
* Prediction
* Calculate Accuracy score
* Display Confusion Matrix

### Support Vector Machines:
Support vector machines (SVMs) are a set of supervised learning methods used for classification, regression and outliers detection.<br>
The advantages of support vector machines are:
* Effective in high dimensional spaces.
* Still effective in cases where number of dimensions is greater than the number of samples.
* Uses a subset of training points in the decision function (called support vectors), so it is also memory efficient.

### Logistic Regression:
Logistic regression is an algorithm used for classification where the predicted variable y is a discrete value.
Examples of classification problems:
* Email: spam/ not spam
* Tumor: malignant/ benign

Such classification problems are known as binary classification where the predicted variable y can take only two values that is either 0 or 1/ spam or not spam.
In a multi-class classification problem, the predicted variable y can take more than two values like 0, 1, or 2.

### Random Forest:
Random forest is an ensemble model. Ensemble models are those that use more than two or three models in combination for prediction. Ensemble uses two types of methods: Bagging and Boosting. Random forest works on the Bagging principle. Bagging chooses a random sample from the dataset.Hence each model (individual decision tree) is generated from the samples known as row sampling. This step of row sampling with replacement is called bootstrap. Each model is trained independently which generates results. The final answer is based on majority voting after combining the results of all the models. This step is known as aggregation.<br>
![image](https://user-images.githubusercontent.com/89564985/142756467-d2f182af-225d-4391-af19-52b6ec6161e1.png)

### K Nearest Neighbor (KNN):
K Nearest Neighbor algorithm falls under the Supervised Learning category and is used for classification and regression. It is a versatile algorithm also used for imputing missing values and resampling datasets. As the name suggests it considers K Nearest Neighbors (Data points) to predict the class or continuous value for the new Datapoint.

## Summary:
In this task, I have used four machine learning models to predict the heart disease in people.<br>
The accuracy score using:
* Support Vector Classifier is 0.836
* Logistic Regression is 0.868
* Random Forest Classifier is 0.819
* K Neighbours Classifier is 0.868

The highest accuracy score (0.868) was obtained by using logistic regression and K neighbors classifier models.

#### References:
* https://towardsdatascience.com/predicting-presence-of-heart-diseases-using-machine-learning-36f00f3edb2c
* https://scikit-learn.org/stable/modules/svm.html
* https://www.analyticsvidhya.com/blog/2021/06/understanding-random-forest/
* https://towardsdatascience.com/understanding-random-forest-58381e0602d2
* https://www.analyticsvidhya.com/blog/2021/04/simple-understanding-and-implementation-of-knn-algorithm/
