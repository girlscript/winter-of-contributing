# **Disaster Tweets Prediction**
<a href="https://www.kaggle.com/c/nlp-getting-started/data"> Click here to access Dataset from Kaggle

## **What is Classification?**

The Classification algorithm is a Supervised Learning technique that is used to identify the category of new observations on the basis of training data. 
  
In Classification, a program learns from the given dataset or observations and then classifies new observation into a number of classes or groups. Such as, Yes or No, 0 or 1, Spam or Not Spam, cat or dog, etc. Classes can be called as targets/labels or categories.
  
The best example of an ML classification algorithm is Email Spam Detector.

The main goal of the Classification algorithm is to identify the category of a given dataset, and these algorithms are mainly used to predict the output for the categorical data.

Classification algorithms can be better understood using the below diagram. In the below diagram, there are two classes, class A and Class B. These classes have features that are similar to each other and dissimilar to other classes.

![image](https://user-images.githubusercontent.com/62233992/142577145-98cfe492-6a0c-48d7-838f-c0db0e004503.png)

## **Types of ML Classification Algorithms:**
Classification Algorithms can be further divided into the Mainly two category:

1. **Linear Models**
  * Logistic Regression
  * Support Vector Machines
  
2. **Non-linear Models**
  * K-Nearest Neighbours
  * Kernel SVM
  * Naïve Bayes
  * Decision Tree Classification
  * Random Forest Classification

##  **The Goal**

In this competition, you’re challenged to build a machine learning model that predicts which Tweets are about real disasters and which one’s aren’t.
  
You are predicting whether a given tweet is about a real disaster or not. If so, predict a 1. If not, predict a 0.

## Let's begin
  
  * Importing the libraries
  * Importing the dataset
  
      The Training and Test dataset are imported... Also, a dataset_total is created consisting of both training and test set to apply the preprocessing techniques to the whole dataset...
  
  * Data Preprocessing
   
  To figure out the different preprocessing techniques to be applied on the dataset, we first have a look at the dataset
  
![image](https://user-images.githubusercontent.com/62233992/142578358-e3287b27-e66e-4e1f-9bee-b5e9818df47a.png)
  
  * Class Distribution
  
  Before we begin with anything else,let's check the class distribution. There are only two classes 0 and 1.
  
  ![image](https://user-images.githubusercontent.com/62233992/142579096-799c0cb5-0fe0-4d2d-8640-4c86de7964e3.png)

  There is a class distribution. There are more tweets with class 0 ( No disaster) than class 1 ( disaster tweets).
  
  * Exploratory Data Analysis of tweets
  
  First,we will do very basic analysis,that is character level,word level and sentence level analysis.

  **Number of characters in tweets**
  
  ![image](https://user-images.githubusercontent.com/62233992/142579779-44def7d3-8937-4d9f-8935-aebf1a843353.png)

  The distribution of both seems to be almost same. 120 t0 140 characters in a tweet are the most common among both.
  
  **Number of words in a tweet**
  
  ![image](https://user-images.githubusercontent.com/62233992/142579934-ca851b31-e6d3-4335-bd27-b7937a9fb2ee.png)

  **Common stopwords in tweets
  First we will analyze tweets with class 0.
  
  ![image](https://user-images.githubusercontent.com/62233992/142580439-377eb1bf-ca79-4883-86ce-bf30d46c464d.png)

  Now,we will analyze tweets with class 1.
  
  ![image](https://user-images.githubusercontent.com/62233992/142580516-9f76eaec-5a14-444a-968b-ce07dca841d1.png)

  In both of them,"the" dominates which is followed by "a" in class 0 and "in" in class 1.
  
  * Data Cleaning
  As we know,twitter tweets always have to be cleaned before we go onto modelling. So we will do some basic cleaning such as spelling correction,removing punctuations,removing html tags and emojis etc. So let's start.
  1) Removing urls
  2) Removing HTML tags
  3) Romoving Emojis
  4) Removing punctuations
  5) Spelling Correction
  
  * Preparing dataset
  
    The dataset_total consisting of both training and test set is divided into training and test set. y_train is obtained from the original "dataset" because it consists of plain numerical value and did not require any preprocessing.
  
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
