# ML Breast Cancer Prediction
Its an Machine Learning Model for Breast Cancer Prediction.
<br/>
# Purpose:
Purpose of this project is
1. Study about Malignant and Benign Cancer.
2. Study about Exploratory Data Analysis.
3. Study about different Machine Learning models and comparing them.<br/>

# Description:
Created a Machine Learning Model to predict the Breast Cancer by analyzing the factors and variables given in the Dataset.<br/>
Compared 4 Machine Learning models predictions by creating a dataframe and entering the accuracy score and the respective machine learning model.
<br/><br/>
![Screenshot (135)](https://user-images.githubusercontent.com/63190833/116794072-1700e000-aae8-11eb-8ae1-3f8c3a8eb977.png)
Plot I: This is the Countplot defining the counts of Malignant cancer and Benign cancer.
<br/><br/><br/>
![Screenshot (136)](https://user-images.githubusercontent.com/63190833/116794132-6f37e200-aae8-11eb-8f62-a77eb64f602c.png)
Plot II: This is the Heatmap defining the correlations between different variables/factors given in the Dataset. 

# Features
Features of this project is as follows:
1. Coincise Code with Explaination of each line
2. Additional knowledge through code comments
3. Explaination of each line
4. Basic graphs (Countplot and Heatmap)
5. 4 different Machine Learning models in same project

# Reason for choosing this project:
There are some of the reasons for choosing this project:
1. Cancer is topic worth study as it is one of the most common disease around the globe
2. Study of different models in same project

---
# 1. Importing Libraries
Import required libraries given in the requirements.txt file<br/>
The required libraries are also listed below<br/>
Libraries Used:
1. Numpy
2. Pandas
3. Seaborn
4. Matplotlib
5. Scikit-Learn

# 2. Importing dataset
Import dataset from kaggle or Dataset provided in the ML datasets folder<br/>
[Kaggle Dataset](https://www.kaggle.com/uciml/breast-cancer-wisconsin-data)

# 3. Data Preprocessing
Drop the unwanted columns in the dataset: 'Unnamed: 32','id'.<br/>
Classify the columns in mean, se and worst.<br/>

# 4. Data Visualization
(The data plots are given above)<br/>
Create the required countplot and heatmap to visualize the data:<br/>
1. Countplot: for checking the values of Malignant and Benign Cancer.<br/>
2. Heatmap: for visualizing the data according to the intensity of the colour in the graph.<br/>
Heatmap defines the correlations between different variables/factors given in the Dataset.

# 5. Model Building and Predictions
We want to find out the type of cancer using different other factors.<br/>
Naming: Malignant Cancer == 1 and Benign Cancer == 0<br/>
For prediction of 'Diagnosis' column we used other columns/ factors.<br/>
Test Train Split is as follows: Train(398 rows) : Test(171 rows) :: 70 : 30<br/>
Used accuracy score to predict the accuracy of the model for the given predictions.<br/>
Results Using different Machine Learning Models:
1. Logistic Regression: Predicts dependency by analyzing the relationship between one or more existing independent variables.
2. Decision Tree Classifier: Predict the class or value of the target variable by learning simple decision rules inferred from prior data(training data).
3. Random Forest Classifier: Meta estimator that fits a number of decision tree classifiers on various sub-samples of the dataset and uses averaging to improve the predictive accuracy and control over-fitting.
4. Support Vector Classifier: Predictive analysis data-classification algorithm that assigns new data elements to one of labeled categories.

# 6. Conclusion and Results
Accuracy results given by different Machine Learning Algorithms:
1. **Logistic Regression** = 0.982456
2. **Decision Tree Classifier** = 0.923977
3. **Random Forest Classifier** = 0.959064
4. **Support Vector Classifier** = 0.964912
---
At the end, I concluded that for our predictions the accuracy score of **98.2456%** is achieved.<br/>
Logistic Regression works best for this particular Machine Learning Model.
<br/><br/>
Code and Screenshots are taken from repository of Assignee of the issue #4170 i.e. github@Aneeshcoder<br/>
This fixes the **Issue #4170**.
