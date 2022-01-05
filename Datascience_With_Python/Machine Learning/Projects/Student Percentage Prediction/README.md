1] AIM

Predict the percentage of an student based on the no. of study hours using supervised machine learning algorithm.

2] INTRODUCTION

This tutorial uses a dataset to predict the percentage based on hours studied. This is achieved using three models Linear, Lasso and Ridge regression. The dataset consists of two columns those are hours and scores.

3] WHAT IS SUPERVISED LEARNING

Supervised machine learning algorithms are used when we train our models using labelled dataset. There are variety of Supervised learning algorithms that include Regression, Decision tree, Random forest, K nearest neighbor, Logistic regression, Support vector machine and so on.
For this example we are going to use Linear regression because we need percentage of a student.

4] STEPS INVOLVED IN PREDICTING PERCENTAGE

1) First we need import all the necessary libraries like pandas, numpy, matplotlib, seaborn, sklearn, math for data processing using the command 'import'

2) Second step is to read a csv file without downloading it on local machine. This can be achieved by passing link of the dataset to the function read_csv()

3) After that, we can have a look at first 5 rows of the dataset using head() function. Next, check whether the dataset has any null values using dataframe.isnull == true, if there are no null values it will return false.

4) Next plot the score distribution in order to find relation between the data using deaborn scatterplot. From the plot we can clearly say that there is positive relation between no. of hours and percentage of the student.

5) To prove the co-relation we can plot a regression plot between no of hours studied and marks in percentage

6) After examining the data, divide the data into attributes and labels also called as independent and dependent variables. Here hour is independent and score is dependent variable

7) split the data in training and testing datasets with 80% of data in training and 20% data in testing using train_test_split() function.

8) Train the algorithm using Linear Regression using the function LinearRegression(), linear_model.Lasso() and Ridge(). After that fit the data to the model using fit() function. 

9) Metrics used for the problem are 
Mean Absolute Error
Mean Squared Error
Root Mean Square Error

10) predicting the score when a student studies for 9.25 hrs/day. This can be attained using predict() function.

5] COMPARISON

MAE, MSE and RMSE for Linear Regression
Mean Absolute Error:  4.183859899002982
Mean Squared Error:  21.598769307217456
Root Mean Square Error:  4.647447612100373

MAE, MSE and RMSE for Lasso regression are 
Mean Absolute Error:  4.164631619836858
Mean Squared Error:  21.474542604804267
Root Mean Square Error:  4.634063293137489

MAE, MSE and RMSE for Ridge regression are 
Mean Absolute Error:  4.089342367221116
Mean Squared Error:  21.019144027277527
Root Mean Square Error:  4.584664003749624

**It is clearly seen that MAE, MSE AND RMSE for Linear regression is more compared to other models and Ridge has the lowest figures**

In case of Linear regression, Predicted percentage when studied for 9.25 hours is 93.69%

In case of Lasso regression, Predicted percentage when studied for 9.25 hours is 93.62%

In case of Ridge regression, Predicted percentage when studied for 9.25 hours is 93.37%

**It is clear that Linear regrssion is the most preferrable algorithm in this case**

6] ADVANTAGE

This project will help students to predict their percentages based on their scores and numbers of hours worked before hand.

7] MODEL USED

Linear Regression
Lasso Regression
Ridge Regression

8] CONCLUSION

TO CONCLUDE, AFTER SPENDING 9.25 HOURS STUDYING, IT IS LIKELY THAT THE STUDENT GETS 93.69%, 93.62% AND 93.37% MARKS WHEN USED LINEAR, LASSO AND RIDGE REGRESSION RESPECTIVELY.
