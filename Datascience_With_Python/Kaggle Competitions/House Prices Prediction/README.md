# **House Prices Prediction**
<a href="https://www.kaggle.com/c/house-prices-advanced-regression-techniques/data"> Click here to access Dataset from Kaggle

## **What is Regression?**

Regression in machine learning consists of mathematical methods that allow data scientists to predict a continuous dependent outcome (y) based on the values of one or more independent variables (X)

## **What are the different types of Regression?**

* Linear Regression
* Multiple Linear Regression
* Polynomial Regression
* Support Vector Regression
* Decision Tree Regression
* Random FOrest Regression

##  **The Goal**

The goal to predict the sales price for each house. For each Id in the test set, the value of the SalePrice variable is to be predicted. 

Since the dataset invlves more than 1 feature, here, we'll be using Multiple Linear Regression, Support Vector Regression, Decision Tree Regression and Random FOrest Regression

## Let's begin
  
  * Importing the libraries
  * Importing the dataset
  
      The Training and Test dataset are imported... Also, a dataset_total is created consisting of both training and test set to apply the preprocessing techniques to the whole dataset...
  * Data Preprocessing
   
  To figure out the different preprocessing techniques to be applied on the dataset, we first have a look at the dataset
  
  ![image](https://user-images.githubusercontent.com/83827603/141648756-e516e336-bdc2-485f-928a-9e8482a95dd0.png)
  
  We can see that there are many NA values, different string type labels in a column, hence, 
  1) Techniques to convert NA in float type columns have to replace by 0 and convert NA in string type column to "None"
  2) All the categorical labels to be encoded using Label Encoder
  3) It can be later observed that there are some missing, NaN values as a result of some preprocessing techniques, which are replaced with 0 for numeric columns and with "None" for Categorical columns
  4)Label Encoding: Some of the columns in the dataset have string or categorical values which should be converted to numeric form so that it is machine readable. This is done using a LabelEncoder
  
  * Preparing dataset
  
    The dataset_total consisting of both training and test set is divided into training and test set. y_train is obtained from the original "dataset" because it consists of plain numerical value and did not require any preprocessing and consists of "SalePrice"
  
## Aplying the models:
  
  * Support Vector Regression (SVR)
  
    Support Vector Regression is similar to Linear Regression in that the equation of the line is y= wx+b In SVR, this straight line is referred to as hyperplane. The data points on either side of the hyperplane that are closest to the hyperplane are called Support Vectors which is used to plot the boundary line.
  
    ![image](https://user-images.githubusercontent.com/83827603/141650113-654bfab4-41d0-4ebd-88d2-dd7c6308e95e.png)

  * Multiple Linear Regression
  
    Multiple Linear Regression is one of the important regression algorithms which models the linear relationship between a single dependent continuous variable and more than one independent variable. It has the equation of the form 

    y = A+B1x1+B2x2+B3x3+B4x4
  
    ![image](https://user-images.githubusercontent.com/83827603/141650091-3a55f342-882c-4a6a-bcd3-079840c37df2.png)

  * Decision Tree Regression
  
    Decision tree builds regression or classification models in the form of a tree structure. It breaks down a dataset into smaller and smaller subsets while at the same time an associated decision tree is incrementally developed. The final result is a tree with decision nodes and leaf nodes.
  
    ![image](https://user-images.githubusercontent.com/83827603/141650139-e6d37e0c-249c-4b2e-91c7-062f1791d753.png)

  * Random Forest Regression
  
    Random Forest Regression is a supervised learning algorithm that uses ensemble learning method for regression. A Random Forest operates by constructing several decision trees during training time and outputting the mean of the classes as the prediction of all the trees.
  
    ![image](https://user-images.githubusercontent.com/83827603/141650169-c597fbe4-594f-4b26-854e-caa435e65547.png)

 ## Almost Done!
  
  The final results are predicted using Random Forest Regression Model
  
  ![image](https://user-images.githubusercontent.com/83827603/141650214-9d6a4f60-8a12-48e8-baba-e06621617074.png)

  The different models can be compared using mean squared error
  
  Various regression models have been successfully applied on the given dataset...

  The submission dataframe is as given above and contains all the predicted SalePrice values as asked in the question
  
## References
  
  For definitions:

* https://builtin.com/data-science/regression-machine-learning
* https://towardsdatascience.com/machine-learning-basics-support-vector-regression-660306ac5226
* https://corporatefinanceinstitute.com/resources/knowledge/other/multiple-linear-regression/
* https://www.javatpoint.com/multiple-linear-regression-in-machine-learning
* https://www.saedsayad.com/decision_tree_reg.htm
* https://levelup.gitconnected.com/random-forest-regression-209c0f354c84
  
