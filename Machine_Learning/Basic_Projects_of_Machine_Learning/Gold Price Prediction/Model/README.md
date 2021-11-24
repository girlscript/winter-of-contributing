# Project Title : House Price Prediction

## Abstract/Brief Description about the Project :
Data for this study is collected from November 18th 2011 to January 1st 2019 from various sources. The data has 1718 rows in total and 80 columns in total. Data for attributes, such as Oil Price, Standard and Poor’s (S&P) 500 index, Dow Jones Index US Bond rates (10 years), Euro USD exchange rates, prices of precious metals Silver and Platinum and other metals such as Palladium and Rhodium, prices of US Dollar Index, Eldorado Gold Corporation and Gold Miners ETF were gathered.

The dataset has 1718 rows in total and 80 columns in total. Data for attributes, such as Oil Price, Standard and Poor’s (S&P) 500 index, Dow Jones Index US Bond rates (10 years), Euro USD exchange rates, prices of precious metals Silver and Platinum and other metals such as Palladium and Rhodium, prices of US Dollar Index, Eldorado Gold Corporation and Gold Miners ETF were gathered.

The historical data of Gold ETF fetched from Yahoo finance has 7 columns, Date, Open, High, Low, Close, Adjusted Close, and Volume, the difference between Adjusted Close and Close is that the closing price of a stock is the price of that stock at the close of the trading day. Whereas the adjusted closing price takes into account factors such as dividends, stock splits, and new stock offerings to determine a value. So, Adjusted Close is the outcome variable which is the value you have to predict.
## Dataset :
The dataset which is used here, is collected from Kaggle website. Here is the link of the dataset : https://www.kaggle.com/sid321axn/gold-price-prediction-dataset
## Goal/Aim of the project :
Predict the price of gold
## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn

## Data Visualization :
![5](https://user-images.githubusercontent.com/79050917/143066509-904265b4-4c25-4575-ad1e-ea02afe72457.PNG)
![7](https://user-images.githubusercontent.com/79050917/143066481-640134ce-0b1c-44f2-bd08-a53268b8478b.PNG)
![8](https://user-images.githubusercontent.com/79050917/143066485-d4cce28b-5f05-4d2d-a1e0-85751412a641.PNG)
![2](https://user-images.githubusercontent.com/79050917/143066488-317b1773-02c9-4db2-986c-b107cb1f45cb.PNG)
![3](https://user-images.githubusercontent.com/79050917/143066491-fb740a1d-355c-4be1-82bc-0a38e14981c3.PNG)
![4](https://user-images.githubusercontent.com/79050917/143066496-0387b1da-c407-41da-9afd-7c24c1b909c3.PNG)
![6](https://user-images.githubusercontent.com/79050917/143066498-d23b08cf-36dc-402f-9571-bcc6324139e1.PNG)


## Model comparison :
I have used RandomForestRegressor, Linear Regression, Lasso Regression.

## Conclusion and Discussion :
Accuracy scores:
- RandomForestRegressor : 98.91022229661693
- Linear Regression : 86.57886565869237
- Lasso regression : 88.50695972446934
- As the accuracy of RandomForestRegressor is more i have used RandomForestRegressor to predict the output of test data.

**********************************************************************
**GirlScript Winter of Contributions 2021**
