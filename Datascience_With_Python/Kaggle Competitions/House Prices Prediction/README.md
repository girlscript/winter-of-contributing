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

Since the dataset invlves more than 1 feature, here, we'll be using Multiple Linear Regression, Decision Tree Regression and Random FOrest Regression

## Let's begin
  
  * Importing the libraries
  * Importing the dataset
  
      The Training and Test dataset are imported... Also, a dataset_total is created consisting of both training and test set to apply the preprocessing techniques to the whole dataset...
  * Data Preprocessing
   
  To figure out the different preprocessing techniques to be applied on the dataset, we first have a look at the dataset
  
  ![image](https://user-images.githubusercontent.com/83827603/141648756-e516e336-bdc2-485f-928a-9e8482a95dd0.png)
  
  1) All the missing values have to be removed... The categorical columns' missing values are removed using SimpleImputer and the missing values of numerical columns are removed by manually replacing them with mean of the column values 
  2) All the categorical labels to be encoded using One Hot Encoder
  
  * Preparing dataset
  
    The dataset_total consisting of both training and test set is divided into training and test set. y_train is obtained from the original "dataset" because it consists of plain numerical value and did not require any preprocessing and consists of "SalePrice"
  
## Aplying the models:

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

 ## Conclusion!
  
  Various regression models have been successfully applied on the given dataset...
  
  The different models can be compared using r2 square values
  
  The final results are predicted using Random Forest Regression Model because of highest r2 value of 0.8632
  
  ![image](https://user-images.githubusercontent.com/83827603/142351128-d31ce6b0-342f-46bd-aab1-6d2535ddebd1.png)  

  The submission dataframe is as given below and contains all the predicted SalePrice values as asked in the question
  
  ![image](https://user-images.githubusercontent.com/83827603/142351311-f7d42b7a-090c-4cb7-979b-93edcaf207de.png)

  
## References
  
  For definitions:

* https://builtin.com/data-science/regression-machine-learning
* https://towardsdatascience.com/machine-learning-basics-support-vector-regression-660306ac5226
* https://corporatefinanceinstitute.com/resources/knowledge/other/multiple-linear-regression/
* https://www.javatpoint.com/multiple-linear-regression-in-machine-learning
* https://www.saedsayad.com/decision_tree_reg.htm
* https://levelup.gitconnected.com/random-forest-regression-209c0f354c84
  
For One Hot Encoding:
  
  https://www.kaggle.com/sisharaneranjana/house-price-prediction-advanced-analysis#%F0%9F%94%90Description-of-the-dataset
