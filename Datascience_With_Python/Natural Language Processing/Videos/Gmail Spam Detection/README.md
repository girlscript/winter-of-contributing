## Gmail Spam Detection
## [Click here to see the video](https://drive.google.com/file/d/1uezOZeqpV3zEBEuYTx9ansicRwnrsJoc/view?usp=sharing)
## Introduction:
- our goal for this competition is to build a spam filter by predicting whether an email message is spam (junk email) or ham (good email). This is a classic data set derived from a *bag-of-words* model applied 4601 email messages collected at Hewlett-Packard Labs. The features consist of the relative frequencies of 57 of the most commonly occurring words and punctuation marks in all the training the email messages. For this problem, not all errors are equal; misclassifying spam is not as bad as misclassifying ham!
## Work Flow:
Loading the dataset -> EDA -> Model building -> Evaluation -> Deployment

## Goal:
Detection of gmail  into spam or ham

## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn

## Data Visualization :
![image](https://user-images.githubusercontent.com/79050917/143687336-17faea51-6ddf-4da4-a37b-0471d4cfdcea.png)
- Countplot of spam and ham

I have used RandomForestRegressor, LogisticRegression, KNN.

## Compaing the accuracy of models used:
Accuracy scores:
- RandomForestRegressor : 100.0
- LogisticRegression : 99.70986460348162
- KNN : 98.25918762088975
- As the accuracy of RandomForestRegressor is more i have used RandomForestRegressor to predict the output of test data.

## Conclusion:
- RandomForestRegressor is used to train the data.
- Goal is to predict the mail is spam  or not using RandomForestRegressor.






