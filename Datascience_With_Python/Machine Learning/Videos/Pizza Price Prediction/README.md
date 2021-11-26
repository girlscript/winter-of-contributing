## Pizza Price Prediction
## [Click here to see the video](https://drive.google.com/file/d/1opHRER8zsCV4__outJSHsljlKgcQflj3/view?usp=sharing)
# Introduction:
In this project, we are going to predict the price of pizza based on the attributes given in the dataset.
The project is about predicting the pizza prices based on the below features:
- company
- price_rupiah
- diameter
- topping
- variant
- size
- extra_sauce
- extra_chees
Dataset link: https://www.kaggle.com/knightbearr/pizza-price-prediction
## Workflow:
![workflow](https://user-images.githubusercontent.com/79050917/143599574-d88b1974-54ac-4145-b21a-c095a9761582.PNG)


## Goal:
Predicting the price of pizza

## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn

## Data Visualization :
![image](https://user-images.githubusercontent.com/79050917/143555428-52df97ba-3c50-48f9-882b-beac558df32e.png)
- Countplot of company column

![image](https://user-images.githubusercontent.com/79050917/143555523-ba565f77-a5dc-4d5f-95e1-9e6e0fcf823f.png)
- Countplot of diameter

![image](https://user-images.githubusercontent.com/79050917/143555588-09150f63-0d28-4f33-a1ad-54e8bb30d886.png)
- countplot of size column

![image](https://user-images.githubusercontent.com/79050917/143555652-210b657c-ac36-46d0-b769-6032b8e5ec67.png)
- countplot of extra_sauce

I have used RandomForestRegressor, Linear Regression, DecisionTreeClassifier.

## Compaing the accuracy of models used:
Accuracy scores:
- RandomForestRegressor : 89.18974143077645
- Linear Regression : 44.15802130135965
- Decision tree regressor : 64.10022928175746
- As the accuracy of linear regression is more i have used linear regression to predict the output of test data.

## Conclusion:
-  RandomForestRegressor is used to train the data.
- Goal is to predict the price of pizza using RandomForestRegressor.
