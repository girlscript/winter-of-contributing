## Heart Disease Prediction
## [Click here to see the video](https://drive.google.com/file/d/1Nj-6VUYWICAzP3Szo0cr4XtgtsTTO_Fo/view?usp=sharing)

## Introduction:

Cardiovascular diseases (CVDs) are the number 1 cause of death globally, taking an estimated 17.9 million lives each year, which accounts for 31% of all deaths worldwide. Four out of 5CVD deaths are due to heart attacks and strokes, and one-third of these deaths occur prematurely in people under 70 years of age. Heart failure is a common event caused by CVDs and this dataset contains 11 features that can be used to predict a possible heart disease.

People with cardiovascular disease or who are at high cardiovascular risk (due to the presence of one or more risk factors such as hypertension, diabetes, hyperlipidaemia or already established disease) need early detection and management wherein a machine learning model can be of great help.
## Work Flow
![workflow](https://user-images.githubusercontent.com/79050917/143604113-406f5d89-3b84-47a3-9044-cc35feab518e.PNG)


## Goal:
Predicting whether the person will be having the heart disease or not

## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn

## Data Visualization :
![image](https://user-images.githubusercontent.com/79050917/143562731-f0795adc-5075-485f-ae0d-2590842513d3.png)
- Countplot of target column

![image](https://user-images.githubusercontent.com/79050917/143562876-c9fbda8f-57a1-49f5-bfc1-66fd0115700d.png)
- heatmap

I have used RandomForestRegressor, Logistic Regression, KNN.

## Compaing the accuracy of models used:
Accuracy scores:
- RandomForestRegressor : 0.8381967213114756
- Logistic Regression : 0.819672131147541
- KNN : 0.614207650273224
- As the accuracy of Random forest regression is more i have used Random forest regression to predict the output of test data.

## Conclusion:
-  RandomForestRegressor is used to train the data.
- Goal is to predict whether the person will be having heart disease or not using RandomForestRegressor.
