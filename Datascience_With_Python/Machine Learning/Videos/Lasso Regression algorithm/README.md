# Lasso Regression Algorithm
# Video Link : [Video Link](https://drive.google.com/file/d/1MU4ImcDCSAp9-guQ0FzmXvWbvukSWij8/view?usp=sharing)

# Introduction

# What is Lasso Regression?
Lasso regression is like linear regression, however it makes use of a method "shrinkage" wherein the coefficients of determination are shrunk toward zero. Linear regression offers you regression coefficients as found in the dataset. The lasso regression permits you to cut back or regularize those coefficients to keep away from overfitting and cause them to work higher on specific datasets. This kind of regression is hired while the dataset indicates excessive multicollinearity or when you need to automate variable removal and feature selection.
# When to use Lasso Regression?
Choosing a model relies upon at the dataset and the trouble declaration you're dealing with. It is crucial to apprehend the dataset and the way features have interaction with every other. Lasso regression penalizes much less essential features of your dataset and makes their respective coefficients zero, thereby casting off them. Thus it presents you with the advantage of characteristic choice and easy model creation. So, if the dataset has excessive dimensionality and excessive correlation, lasso regression may be used.
# Steps to Be Followed : 
1. Import the Libraries 
2. Load the Dataset 
3. Data Cleaning and Preprocessing 
4. Split the Data into train and test sets 
5. Apply Lasso Regression algorithm on the training set. 
6. Evaluate the performance of a Lasso regression for different regularization parameters using 5-fold cross validation on the training set 
7. Finally, store your test data results in a DataFrame and identify the lambda 
8. Furthermore, obtain the mean squared error for the test data of this model.

# Data Visualizations
1. 5-fold cv with different lamdas<br>
![](Images/5-fold%20cv%20with%20different%20lamdas.png)<br>
2.lasso regression with lamdas.<br>
![](Images/lasso%20regression%20with%20lamdas.png)<br>

# Advantages of Lasso Regression
- Select features, by shrinking co-efficient towards zero.
- Avoids over fitting.
# Disadvantages of Lasso Regression
- Selected capabilities could be fantastically biased. 
- LASSO will choose best one characteristic from a set of correlated capabilities, the choice is unfair in nature.
- For specific boot strapped data, the feature decided on may be very different. 
- Prediction overall performance is worse than Ridge regression.

# Conclusion
- Regression is a popular statistical technique used in machine learning to predict an output. 
- Overfitting happens while doing regression due to the irrelevant noises in the training dataset. 
- Lasso regression is a regularization algorithm which can be used to eliminate irrelevant noises and do feature selection and hence regularize a model. 
- Evaluation of the lasso model can be done using metrics like RMSE and R-Square. 
- Alpha is a hyper-parameter in the lasso model which can be tuned using lassoCV to control the regularization. 

