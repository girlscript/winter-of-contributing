## Email Spam detection model
## [Click here to listen the audio](https://drive.google.com/file/d/14v98uJs1Mhq4fCRXjPEWNqE-3LUSXZ3t/view?usp=sharing)
## Introduction:

## Work Flow:
Loading the dataset -> EDA -> Model building -> Evaluation -> Deployment

## Goal:
Detection of email  into spam or ham

## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn

## Data Visualization :
![image](https://user-images.githubusercontent.com/79050917/143688277-5b4d601a-df69-4d1d-ac40-8da60ca08c93.png)
- countplot of class column

I have used RandomForestRegressor, KNN, SVC.

## Compaing the accuracy of models used:
Accuracy scores:
- RandomForestRegressor : 100.0
- KNN: 93.84615384615384
- SVC : 97.78708133971292
- As the accuracy of RandomForestRegressor is more i have used RandomForestRegressor to predict the output of test data.

## Conclusion:
- RandomForestRegressor is used to train the data.
- Goal is to predict the email is spam  or not using RandomForestRegressor.






