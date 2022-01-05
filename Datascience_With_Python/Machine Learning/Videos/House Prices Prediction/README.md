## House Price Prediction
## [Click here to see the video](https://drive.google.com/file/d/1BQ-c3fnUhL2a-9vdcln6yq2PbgoSKpv5/view?usp=sharing)
# Introduction:
- Ask a home buyer to describe their dream house, and they probably won't begin with the height of the basement ceiling or the proximity to an east-west railroad. But this playground competition's dataset proves that much more influences price negotiations than the number of bedrooms or a white-picket fence.

- With 79 explanatory variables describing (almost) every aspect of residential homes in Ames, Iowa, this competition challenges you to predict the final price of each home.

- Link of dataset: https://www.kaggle.com/c/neolen-house-price-prediction/data

# work flow:
Loading the dataset -> EDA -> Model building -> Evaluation -> Deployment
## Goal:
Prediction of house price

## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn


I have used RandomForestRegressor, Linear regression, lasso regression.

## Compaing the accuracy of models used:
Accuracy scores:
- RandomForestRegressor : 67.3421926910299
- Linear regression: 90.19369279315212
- lasso regression: 90.19365719745986
- As the accuracy of lasso regression is more i have used lasso regression to predict the output of test data.

## Conclusion:
- lasso Regression is used to train the data.
- Goal is to predict the price of houses using lasso regression.


