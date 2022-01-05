## Lasso Regression algorithm

- Working with datasets of different domains is emerging more as it helps to discover new insights and patterns. But while working with datasets, we come across different challenges like a huge number of columns, different ranges of values, inconsistent data to tackle these challenges. We do a feature selection process which helps to overcome the challenges. We do a feature selection process in order to improve efficiency, accuracy and also to avoid overfitting problems.
- Lasso Regression algorithm is a feature selection method.
- ***Feature Selection:***
Definition of feature selection can be derived from its own words feature and selection. Process of selecting the important or relevant features which help in increasing the performance of the model. 
- It is an embedded method.
- ***Embedded Methods:***
Embedded Methods use built-in methods which have the capability of selecting features on their own algorithm. It is mostly used in reducing the effect of overfitting. 
- Types of Embedded Methods: 
   - Lasso regression Ridge regression 
   - Random Forest 
   - Lasso regression: 
- The techniques work by penalizing the magnitude of coefficients of features along with minimizing the error between predictions and actual values or records. All of the embedded methods are mostly used to reduce as regularization techniques which helps in avoiding overfit in data. 

**Definition Of Lasso Regression**
- Lasso regression is like linear regression, but it uses a technique "shrinkage" where the coefficients of determination are shrunk towards zero. 
- Linear regression gives you regression coefficients as observed in the dataset. The lasso regression allows you to shrink or regularize these coefficients to avoid overfitting and make them work better on different datasets. 
- This type of regression is used when the dataset shows high multicollinearity or when you want to automate variable elimination and feature selection.

![1](https://user-images.githubusercontent.com/79050917/137708761-568e37fe-1649-4880-8d10-0aa30a510655.PNG)


**When To Use Lasso Regression?**
- Choosing a model depends on the dataset and the problem statement you are dealing with. It is essential to understand the dataset and how features interact with each other. 
- Lasso regression penalizes less important features of your dataset and makes their respective coefficients zero, thereby eliminating them. Thus it provides you with the benefit of feature selection and simple model creation. 
- So, if the dataset has high dimensionality and high correlation, lasso regression can be used.

**Why is it used?**
It helps in reducing the number of columns as we remove the irrelevant columns. 
- Increases efficiency. 
- Decrease the complexity. 
- Increases the accuracy. 
- Reduces training time. 
- Reduces overfitting. 

**The advantages of Lasso Regression algorithm can be summed up as:**
- Decreases over-fitting: Less redundant data means fewer chances of making decisions based on noise. 
- Reduces training time: fewer data means that the algorithms train sooner.
- Improved accuracy: Less ambiguous data means improvement of modeling accuracy 

**Goal:**
- The goal of feature selection in machine learning is to find the best set of features that allows one to build useful models of studied phenomena.

**Application of Lasso Regression algorithm:** 
- In most cases, we apply when we have: 
        - a huge number of columns. 
        - Inaccurate results. 

**Conclusion:** 
- Lasso Regression algorithm is an important step to follow while dealing with the dataset. It is important as it helps to increase the quality of the model and helps to reach better accuracy than before. 
