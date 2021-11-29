## Disaster Tweets Prediction
## [Click here to listen the audio](https://drive.google.com/file/d/1P8YOwQvlzaELTeCwdUiEoXJQR5246k1F/view?usp=sharing)
## Introduction:
- Twitter has become an important communication channel in times of emergency.
- The ubiquitousness of smartphones enables people to announce an emergency they’re observing in real-time. 
- Because of this, more agencies are interested in programatically monitoring Twitter (i.e. disaster relief organizations and news agencies).

## Goal:
Prediction of Disaster Tweets .

## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn

## Work Flow:
Load the dataset -> EDA -> Model Building -> Evaluation -> Deployment

- A breif view of the dataset

![image](https://user-images.githubusercontent.com/79050917/143775434-16633b26-4f96-47af-9bf9-78bb7c0234cd.png)


## Data Visualization :

![image](https://user-images.githubusercontent.com/79050917/143764204-977c0496-78cd-4286-8eb7-d276194e988f.png)
- Visuallization of top 15 keywords

![image](https://user-images.githubusercontent.com/79050917/143764214-e4e9fe22-d771-428b-8329-5bb4a58a08d2.png)
- Countplot of target column

![image](https://user-images.githubusercontent.com/79050917/143764225-91485546-1d37-42d6-b398-c5e9ed9b6f52.png)
- Plot to check the null values.
## Models:
Naive Bayes:
- Naive Bayes is a classification algorithm that is suitable for binary and multiclass classification. 
- It is a supervised classification technique used to classify future objects by assigning class labels to instances/records using conditional probability.

Logistic regression:
- Logistic regression is a statistical analysis method used to predict a data value based on prior observations of a data set. 
- A logistic regression model predicts a dependent data variable by analyzing the relationship between one or more existing independent variables.


## Accuracy:

Naive Bayes:  64.279902
Logistic regression: 62.655205

![image](https://user-images.githubusercontent.com/79050917/143775392-b5a474db-b102-4c9c-9016-97aa47bf1bf5.png)

## Conclusion:
- Naive Bayes has the highest accuracy, hence we will be choosing that for building the project.

