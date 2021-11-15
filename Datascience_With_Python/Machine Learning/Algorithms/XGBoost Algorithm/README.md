
#   XGBoost Algorithm #417

##### Format : Documentation

### XGBoost is a machine learning method that has recently dominated Kaggle tournaments for structured or tabular data. It is a specific implementation of Gradient Boosting. 

#### Before we dive deep into understanding XGBoost algorithm, let us first understand what exactly is Boosting.

Boosting is an ensemble learning strategy with the aim of reducing training errors by combining a set of weak learners and converting them to strong learners. It achieves this by consecutively building on weak learners, each trying to compensate for the weakness of its predecessor in order to generate one strong prediction rule. 

#### Different Types of Boosting Algorithm:
* AdaBoost (Adaptive) Boosting Algorithm
* Gradient Boosting Algorithm
* XGBoost Algorithm

### What is XGBoost Algorithm?
XGBoost stands for Extreme Gradient Boosting. It is one of the fastest implementations of gradient boosted trees. </br>
It does this by tackling one of the major inefficiencies of gradient boosted trees: considering the potential loss for all possible splits to create a new branch (especially if you consider the case where there are thousands of features, and therefore thousands of possible splits). XGBoost tackles this inefficiency by looking at the distribution of features across all data points in a leaf and using this information to reduce the search space of possible feature splits. </br>
The main difference between Gradient Boosting and XGBoosting is that the gradient is used to minimize the loss function (error - difference between the actual values and predicted values).  It's the partial derivative of the loss function, and it describes how steep our error function is. The weak learner is formed in each round of training, and its predicted values are compared to the actual values. The error rate of our model is represented by the distance or difference between the prediction and reality, wheras XGBoost is a specific implementation of the Gradient Boosting method which delivers more accurate approximations by using the strengths of second order derivative of the loss function, L1 and L2 regularization and parallel computing. 

### History of XGBoost
XGBoost was first introduced in 2014 by Tianqi Chen. Many developers have now contributed to this project. It is part of a larger set of tools developed by the Distributed Machine Learning Community (DMLC), which is also responsible for the popular mxnet deep learning library.

### Math Behind XGBoost
The following steps are involved in gradient boosting:
F0(x) – with which we initialize the boosting algorithm – is to be defined:

<img src='https://cdn.analyticsvidhya.com/wp-content/uploads/2018/09/17.png'>

The gradient of the loss function is computed iteratively:

<img src='https://cdn.analyticsvidhya.com/wp-content/uploads/2018/09/18.png'>

Each hm(x) is fit on the gradient obtained at each step
The multiplicative factor γm for each terminal node is derived and the boosted model Fm(x) is defined:

<img src='https://cdn.analyticsvidhya.com/wp-content/uploads/2018/09/19.png'></br>

### Features of XGBoost Algorithm

The algorithm's implementation was designed to maximise the efficiency of computation time and memory resources. To train the model, one of the design goals was to make the most of available resources. The following are some significant elements of algorithm implementation:

* Implementation of Sparse Aware with automatic handling of missing data values.
* The parallelization of tree construction is supported by a block structure.
* Continued Training in order to improve a previously fitted model using new data.

XGBoost is free open source software that can be used under the Apache-2 licence, which allows for a lot of flexibility.

### Hyperparameters of XGBoost
* n_estimators (and early stopping) - This is how many subtrees h will be trained.
* max_depth - The maximum tree depth each individual tree h can grow to.
* learning rate - It determines the step size at each iteration while moving toward a minimum of a loss function.
* reg_alpha and reg_lambda - These control the L1 and L2 regularization terms, which in this case limit how extreme the weights at the leaves can become.

### Some of the advantages of XGBoost are:
* The main advantage of XGB over gradient boosting machines is that it has a lot   of hyper-parameters that can be tweaked.
* Missing values are handled automatically by XGBoost.
* It has a number of user-friendly features, including parallelization, distributed computing, cache optimization, and so on.

### Let us now apply XGBoost Classifier on Boston Dataset
Importing essential libraries
```
import pandas as pd
import numpy as np
```

Boston Housing dataset is available in scikit-learn library. Let us import the boston dataset and store it in a variable called df

```
from sklearn.datasets import load_boston
df = load_boston()
```
Before applying XGBoost, let us first explore the Boston Housing dataset. It is always a good idea to explore data first, it helps us gain insights and visualize the data.

```
#Returns all the keys of the dataset dictionary
df.keys()
```
<img src='https://github.com/NikitaEmberi/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/XGBoost%20Algorithm/Images/keys.JPG'>

Description of Dataset

```
print(df.DESCR)
```
```
.. _boston_dataset:

Boston house prices dataset
---------------------------

**Data Set Characteristics:**  

    :Number of Instances: 506 

    :Number of Attributes: 13 numeric/categorical predictive. Median Value (attribute 14) is usually the target.

    :Attribute Information (in order):
        - CRIM     per capita crime rate by town
        - ZN       proportion of residential land zoned for lots over 25,000 sq.ft.
        - INDUS    proportion of non-retail business acres per town
        - CHAS     Charles River dummy variable (= 1 if tract bounds river; 0 otherwise)
        - NOX      nitric oxides concentration (parts per 10 million)
        - RM       average number of rooms per dwelling
        - AGE      proportion of owner-occupied units built prior to 1940
        - DIS      weighted distances to five Boston employment centres
        - RAD      index of accessibility to radial highways
        - TAX      full-value property-tax rate per $10,000
        - PTRATIO  pupil-teacher ratio by town
        - B        1000(Bk - 0.63)^2 where Bk is the proportion of blacks by town
        - LSTAT    % lower status of the population
        - MEDV     Median value of owner-occupied homes in $1000's

    :Missing Attribute Values: None

    :Creator: Harrison, D. and Rubinfeld, D.L.

This is a copy of UCI ML housing dataset.
https://archive.ics.uci.edu/ml/machine-learning-databases/housing/


This dataset was taken from the StatLib library which is maintained at Carnegie Mellon University.

The Boston house-price data of Harrison, D. and Rubinfeld, D.L. 'Hedonic
prices and the demand for clean air', J. Environ. Economics & Management,
vol.5, 81-102, 1978.   Used in Belsley, Kuh & Welsch, 'Regression diagnostics
...', Wiley, 1980.   N.B. Various transformations are used in the table on
pages 244-261 of the latter.

The Boston house-price data has been used in many machine learning papers that address regression
problems.   
     
.. topic:: References

   - Belsley, Kuh & Welsch, 'Regression diagnostics: Identifying Influential Data and Sources of Collinearity', Wiley, 1980. 244-261.
   - Quinlan,R. (1993). Combining Instance-Based and Model-Based Learning. In Proceedings on the Tenth International Conference of Machine Learning, 236-243, University of Massachusetts, Amherst. Morgan Kaufmann.
```
Features of Dataset (Columns of Dataset)

```
print(df.feature_names)
```
<img src='https://github.com/NikitaEmberi/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/XGBoost%20Algorithm/Images/features.JPG'>

Converting dictionary to dataframe and Exploring first 5 rows of Dataset with the help of pandas library 

```
boston = pd.DataFrame(df.data,columns = df.feature_names)
boston.head()
```
<img src='https://github.com/NikitaEmberi/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/XGBoost%20Algorithm/Images/head.JPG'>

Adding a  new column of target values to boston dataframe (cost)
```
boston['TARGET_VALUE'] = df.target
boston.head()
```
<img src='https://github.com/NikitaEmberi/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/XGBoost%20Algorithm/Images/target_head.JPG'>

Check if the dataset contains any null values or not.
```
boston.isnull().sum()
```
<img src='https://github.com/NikitaEmberi/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/XGBoost%20Algorithm/Images/null.JPG'>

This shows that we do not have any null values present in our dataset. Hence, we can safely proceed ahead.

Let us now split our dataset into training and testing sets in 80-20 ratio respectively using scikit-learn library.

```
from sklearn.model_selection import train_test_split

X = boston.drop('TARGET_VALUE',axis=1)
Y = boston['TARGET_VALUE']

X_train, X_test, y_train, y_test = train_test_split(X,Y,test_size=0.2,random_state=100)

print(X_train.shape)
print(X_test.shape)
print(y_train.shape)
print(y_test.shape)
```
<img src='https://github.com/NikitaEmberi/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/XGBoost%20Algorithm/Images/shape.JPG'>

The next step is to instantiate an XGBoost regressor object by calling the XGBRegressor() class from the XGBoost library with the hyper-parameters passed as arguments. For classification problems, you would have used the XGBClassifier() class.

```
import xgboost as xgb

xgboost_reg = xgb.XGBRegressor(objective ='reg:linear', colsample_bytree = 0.3,  
                learning_rate = 0.1, max_depth = 5, alpha = 10, n_estimators = 10)
```

Fit the regressor to the training set and make predictions on the test set using the familiar .fit() and .predict() methods.

```
xgboost_reg.fit(X_train,y_train)
predictions = xgboost_reg.predict(X_test)
```

Compute the rmse by invoking the mean_sqaured_error function from sklearn's metrics module.
```
from sklearn.metrics import mean_squared_error

rmse = np.sqrt(mean_squared_error(y_test, preds))
print("RMSE: %f" % (rmse))
```
<img src='https://github.com/NikitaEmberi/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/XGBoost%20Algorithm/Images/rmse.JPG'>

As, you can see that your RMSE for the price prediction came out to be around 10.03 per 1000$

### Conclusion
Starting with understanding about Boosting, we explored various aspects about XGBoost and the power that it holds in computational speed. We also gained insights of applying XGBoost on an open source dataset along with tuning hyperparameters.

### References
- http://theprofessionalspoint.blogspot.com/2019/02/difference-between-gbm-gradient.html
- https://www.analyticsvidhya.com/blog/2018/09/an-end-to-end-guide-to-understand-the-math-behind-xgboost/
- https://medium.com/@gabrieltseng/gradient-boosting-and-xgboost-c306c1bcfaf5
- https://www.datacamp.com/community/tutorials/xgboost-in-python

## Contributor
- ID : 797
- DSWP BATCH : 19
- [@NikitaEmberi](https://github.com/NikitaEmberi)







