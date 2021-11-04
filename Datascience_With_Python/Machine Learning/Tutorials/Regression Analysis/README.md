# Regression Analysis

## Aim
The provided notebook shows the regression analysis through several ML metrics to find the performance of linear and logistic regression, and how different models fit perfectly on certain datasets with higher accuracy than others.

## Introduction
Regression refers to the mathematics and supervised learning based methodology/algorithm that allow ML engineers and Data Scientists to predict a target outcome (usually y) based on the value of one (single) or more (multivariate) independent variables (usually x), and happens to be one of the most used ML algorithms in use today.

## Regression Applications
- Students score based on number of hours studied
- Predicting crop yields based on the amount of rainfall
- Predicting salary based on years of experience
- Predicting revenue based on advertising spending
- Predicting patient blood pressure based on drug dosage

## Libraries
- pandas
- numpy
- seaborn
- matplotlib
- sklearn

## Datasets
- Dataset 1 : Years of Experience vs Salary
- Dataset 2 : Hours vs Exam Pass

## Steps
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

## Metric
- R2 Score : R2 score or the coefficient of determination refers to the proportion of the variation in the dependent variable that is predictable from the independent variable.

## Conclusion
The regression analysis helps in understanding the implementation and performance of regression models through various datasets. It also helps figure out how performance increases and decreases as per the model and dataset used; with the help of evaluation metrics such as r2 score.
