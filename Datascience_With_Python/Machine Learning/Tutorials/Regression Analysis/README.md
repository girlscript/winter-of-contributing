# Regression Analysis

## Aim
The provided notebook shows the regression analysis through several ML metrics to find the performance of linear and logistic regression, and how different models fit perfectly on certain datasets with higher accuracy than others.

## Introduction
Regression refers to the mathematics and supervised learning based methodology/algorithm that allow ML engineers and Data Scientists to predict a target outcome (usually y) based on the value of one (single) or more (multivariate) independent variables (usually x), and happens to be one of the most used ML algorithms in use today.

## Linear Regression
Linear regression is a linear methodology under regression for modelling the relationship between dependent and independent variable(s) through iteration for generating the most precise and closest relational linear and numerical association.

## Logistic Regression
Logistic regression is an exponential methodology under regression for modelling the probability of a certain class' or event's existence (such as win/lose and healthy/sick) through iteration for generating the most precise and closest exponential and numerical association.

## Purpose and Usage
A regression analysis is usually undertaken and used for two main purposes:
- Prediction for value of a dependent variable for obtaining information that concerns the explanatory variables
- Estimation of the effect of some explanatory variable on the dependent variable

## Applications
- Predictive analytics
- Operational efficiency improvement
- Supportive decision making
- Error correction
- Gaining new insights

## Advantages
- Simple implementation
- Effective on large datasets
- Faster fitting period
- Absence of overfitting (if regularization is applied)

## Libraries
- pandas
- numpy
- seaborn
- matplotlib
- sklearn

## Datasets
- Dataset 1 : Years of Experience vs Salary
- Dataset 2 : Hours vs Exam Pass

## Workflow and Implementation:
- Install necessary libraries.
- Access the data via proper dataset path.
- Engineer the data (by dropping null values, converting string to integers, performing sort and reindexing) in order to get the data ready.
- Assign independent and dependent variables for datasets.
- Split the dataset into train and test data.
- Prepare linear and logistic regression models.
- Train both regression models on both datasets (4 in total).
- Make predictions for both models on both test datasets (4 in total).
- Visualize the predicted and actual test values
- Perform regression analysis using r2 score on all 4 scenarios!

## Regression Use Cases
- Students score based on number of hours studied
- Predicting crop yields based on the amount of rainfall
- Predicting salary based on years of experience
- Predicting revenue based on advertising spending
- Predicting patient blood pressure based on drug dosage

## Metric
R2 Score : R2 score or the coefficient of determination refers to the proportion of the variation in the dependent variable that is predictable from the independent variable.

## Performance
R2 Score for linear model and linear data : 6802.77957

R2 Score for linear model and logistic data : 5411.00000

R2 Score for logistic model and linear data : 0.26699

R2 Score for logistic model and logistic data : 0.25000

## Scatterplot Visualization

Dataset 1

![Plot 1](https://raw.githubusercontent.com/gohil-jay/winter-of-contributing/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Regression%20Analysis/Images/Dataset1.png)

Dataset 2

![Plot2](https://raw.githubusercontent.com/gohil-jay/winter-of-contributing/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Regression%20Analysis/Images/Dataset2.png)

Predictions of linear model on linear data

![Plot 3](https://raw.githubusercontent.com/gohil-jay/winter-of-contributing/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Regression%20Analysis/Images/Prediction%201%20(linear%20regression%20model%20on%20linear%20data).png)

Predictions of linear model on logistic data

![Plot 4](https://raw.githubusercontent.com/gohil-jay/winter-of-contributing/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Regression%20Analysis/Images/Prediction%202%20(linear%20regression%20model%20on%20logistic%20data).png)

Predictions of logistic model on linear data

![Plot 5](https://raw.githubusercontent.com/gohil-jay/winter-of-contributing/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Regression%20Analysis/Images/Prediction%203%20(logistic%20regression%20model%20on%20linear%20data).png)

Predictions of logistic model on logistic data

![Plot 6](https://raw.githubusercontent.com/gohil-jay/winter-of-contributing/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Regression%20Analysis/Images/Prediction%204%20(logistic%20regression%20model%20on%20logistic%20data).png)

## Conclusion
The regression analysis helps in understanding the implementation and performance of regression models through various datasets. It also helps figure out how performance increases and decreases as per the model and dataset used; with the help of evaluation metrics such as r2 score.
