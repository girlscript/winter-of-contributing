# **Regularization in Regression**

##  **Introduction**

**What is Regularization ?**


In general when we talk about regularization in mathematics, statistics, finance, computer science,specially in machine learning, regularization is the process of adding information in order to solve an ill-posed problem or to prevent overfitting.In simple terms we can say that regularization is a technique through which overfitting of data can be reduced to a great extent.

## **Purpose**

**Why do we need Regularization ?**

In machine Learning & data science, when we are working with data there might be overfitting of data which could hamper the performance of the project.So, Regularization is used in machine learning projects to prevent  the problem of overfitting of data i.e. when the difference between training error and the test error is too high.

## **Explanation**


**Regularization in Regression**
There are mainly two types of regularization techniques:


- Lasso Regression
- Ridge Regression

**Lasso Regression**


A regression model which uses L1 Regularization technique is called LASSO(Least Absolute Shrinkage and Selection Operator) regression.

You can refer [this](https://scikit-learn.org/stable/modules/generated/sklearn.linear_model.Lasso.html) to know more.

**Ridge Regression**


L2 regularization is also known as Ridge regression. 

You can refer [this](https://scikit-learn.org/stable/modules/generated/sklearn.linear_model.Ridge.html) to know more.


Lasso Regression adds “absolute value of magnitude” of coefficient as penalty term to the loss function(L)


- For the Dataset being used [Click here](https://www.kaggle.com/quantbruce/real-estate-price-prediction).

## **Procedure Followed**
- Step 1: Data Preprocessing & Exploration to better undertand what kind of data we are working on along with it's shape, memory usage, different types of columns present in the dataset, their datatypes etc.
- 
- Ste 2: Data training and model creation using regression models and checking the scores for testing and training data to find if there is any overfitting or is it reduced ?

## **Visual Representation**

![](https://github.com/ayushi424/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Regularization%20in%20Regression/Images/rr1.jpg)

## **Libraries Used**

- pandas
- sklearn

## **Usage**

- Mainly used to deal with overfitting of data.
- Improves score for training and testing data.

## **Useful Resources to check out:**

- https://towardsdatascience.com/regularization-in-machine-learning-76441ddcf99a
- https://www.geeksforgeeks.org/regularization-in-machine-learning/
- https://www.analyticsvidhya.com/blog/2021/05/complete-guide-to-regularization-techniques-in-machine-learning/

