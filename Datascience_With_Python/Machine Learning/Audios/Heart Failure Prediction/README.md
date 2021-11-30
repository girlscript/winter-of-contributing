## Heart Failure Prediction
## [Click here to listen the audio](https://drive.google.com/file/d/1zdluWRnEwQVsDD9HZEreHc5PiMY0oj-U/view?usp=sharing)
## Introduction:
- This is a data set used to predict heart disease. Patients were classified as having or not having heart disease based on cardiac catheterization, the gold standard. If they had more than 50% narrowing of a coronary artery they were labeled as having heart disease.
- In this cohort, there are 270 patients and there are 13 independent predictive variables or column attributes.
- After this dataset became available, the UCI data repository made another cohort available with 303 patients. They shared this with Kaggle which is a data competition initiative. First, the file format is .data which is uncommonly used. Secondly, the outcome was reversed by accident. This is why we are still using the older cohort of patients

## Work Flow:
Loading the dataset -> EDA -> Model building -> Evaluation -> Deployment

## Goal:
Detection of heart failure

## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn

## Data Visualization :
![image](https://user-images.githubusercontent.com/79050917/143688758-eeeebef2-eb3d-4213-b945-34a43823eccb.png)
- Countplot of target column

![image](https://user-images.githubusercontent.com/79050917/143688772-93f33e22-98ce-4b85-a24b-6b3cc1f0cfe4.png)
-countplot of cp column

I have used RandomForestRegressor, LogisticRegression, KNN.

## Compaing the accuracy of models used:
Accuracy scores:
- RandomForestRegressor : 83.81967213114756
- LogisticRegression : 85.12396694214877
- KNN :61.4207650273224
- As the accuracy of LogisticRegression is more i have used LogisticRegression to predict the output of test data.

## Conclusion:
- LogisticRegression is used to train the data.
- Goal is to predict the heart failure  using LogisticRegression.






