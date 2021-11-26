## solar_radiation_prediction
## [Click here to see the video](https://drive.google.com/file/d/1bs4BsPVQ2pytj6PAoVn1dXv2scQSOihh/view?usp=sharing)
# Introduction:
- The dataset contains such columns as: "wind direction", "wind speed", "humidity" and temperature. The response parameter that is to be predicted is: "Solar_radiation". It contains measurements for the past 4 months and you have to predict the level of solar radiation.
## Work Flow
![workflow](https://user-images.githubusercontent.com/79050917/143605041-55418029-c422-453b-bbd4-0df5b65a3e99.PNG)

## Goal:
Predicting the solar radiation.

## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn

I have used LinearRegression,ElasticNet, RandomForestRegressor, GradientBoostingRegressor.
## Compaing the accuracy of models used:
Accuracy scores: 
LinearRegression: 59.62180492362541
ElasticNet: 50.51714046420267
RandomForestRegressor: 82.25126594840884
GradientBoostingRegressor: 74.27698084863579
- As the accuracy of Randomforest regression is more i have used Random forest  regression to predict the output of test data.

## Conclusion:
- Rondomforest Regression is used to train the data.
- Goal is to predict the solar radiation using random forest regression.
