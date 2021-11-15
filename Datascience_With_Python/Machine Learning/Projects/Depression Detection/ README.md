# Depression-Detection-using-Machine-Learning


## Table of Contents
1. [ Description ](#description)
2. [Datasets](#ds)
3. [ Steps](#build) 
4. [Descriptive Analysis](#des)
5. [Data Visulization](#dv)
6. [Approach](#Approaches) 
7. [References](#ref)

<a name="description"></a>


# Description
This project involves prediction of depression with proper data processing .Here,

The covid_mental_health_train.csv contains the details of a subset of random participants who have taken in the the survey and more importantly, who were already diagnosed with depression or not!

The covid_mental_health_test.csv dataset contains similar information but does not disclose the diagnosis of depression for each participants.

The process is about using8610 participants in the covid_mental_health_train.csv data, predict whether the other 2723 participants found in covid_mental_health_test.csv were diagnosed with depression or not.
<a name="ds"></a>

## Datasets:
1. https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/DS%20Datasets/Depression%20Detection/covid_mental_health_test.csv
2. https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/DS%20Datasets/Depression%20Detection/covid_mental_health_train.csv

<a name="build"></a>
# Steps: 
The following steps are :
- Importing necessary libraries.
- Loading the required datasets.
- Pre-processing the data. 
- Descriptive analysis done by correaltional matrix, Independent T set
- Data Visualization.
- Value counts of each columns.
- Building of model.
- Training the model using mutiple ml techniques
- Knowing the accuracy.
- Testing on test data.

<a name="dv"></a>
# Data Visulization
 Plotted multiple relation between features , using chi squared test.
 
![capture1](https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Projects/Depression%20Detection/Images/datavis1.PNG)
![capture2](https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Projects/Depression%20Detection/Images/datavis2.PNG)
 
 <a name="des"></a>    
# Descriptive Analysis 
There are multiple methods applied here:
- Spearman Rank Correaltion identification

![capture4](https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Projects/Depression%20Detection/Images/ds2.PNG)
![capture5](https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Projects/Depression%20Detection/Images/ds3.PNG)

- Independent T test

![Capture6](https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Projects/Depression%20Detection/Images/ds4.PNG)

- Correlational Matrix
![Capture7](https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Projects/Depression%20Detection/Images/ds7.PNG)



<a name="Approaches"></a>

# Approach
 Following methods have been experimented with accuracy
 - Logistic regression :
 It is a  statistical model which is primarily used for classification purposes. It means that given a set of observations, the algorithm helps us to classify these observations into two or more discrete classes. So, the target variable is discrete in nature.
 
 ![Capture8](https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Projects/Depression%20Detection/Images/lg.PNG)
 - Random Forest :
 This is a supervised learning algorithm. It can be used for both classification problems regression problems. It creates decision trees on the given data samples, gets prediction from each tree and selects the best solution by means of voting. It gives better result than decision tree algorithm.
 ![Capture9](https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Projects/Depression%20Detection/Images/ra.PNG)
 - Xgboost :
 This is an ensemble learning method. This algorithm offers a systematic solution to combine the predictive power of multiple learners. Bagging and boosting are widely used ensemble learners


 ![Capture10](https://github.com/ron352/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Projects/Depression%20Detection/Images/xgb.PNG)
 
 
<a name="ref"></a>
## References
1. https://www.kaggle.com/c/alc-datathon-2021/overview
2. https://www.analyticsvidhya.com/blog/2018/09/an-end-to-end-guide-to-understand-the-math-behind-xgboost/
3. https://www.kaggle.com/prashant111/random-forest-classifier-tutorial
4. https://www.kaggle.com/prashant111/logistic-regression-classifier-tutorial


