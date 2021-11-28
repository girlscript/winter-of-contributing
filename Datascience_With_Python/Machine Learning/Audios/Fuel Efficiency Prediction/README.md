## Fuel Efficiency Prediction
## [Click here to listen the audio](https://drive.google.com/file/d/1WZ7OD5mo7NNVNpukec2eRj1jqAIyjtDk/view?usp=sharing)
# Introduction:
- Context: The data is technical spec of cars. The dataset is downloaded from UCI Machine Learning Repository
- Content:
     - Title: Auto-Mpg Data

- This dataset is a slightly modified version of the dataset provided in the StatLib library. In line with the use by Ross Quinlan (1993) in predicting the attribute "mpg", 8 of the original instances were removed because they had unknown values for the "mpg" attribute. The original dataset is available in the file "auto-mpg.data-original".

- "The data concerns city-cycle fuel consumption in miles per gallon, to be predicted in terms of 3 multivalued discrete and 5 continuous attributes." (Quinlan, 1993)

- Attribute Information:

    - mpg: continuous
    - cylinders: multi-valued discrete
    - displacement: continuous
    - horsepower: continuous
    - weight: continuous
    - acceleration: continuous
    - model year: multi-valued discrete
    - origin: multi-valued discrete
    - car name: string (unique for each instance)


Here is the link of the dataset : https://www.kaggle.com/uciml/autompg-dataset

## Workflow:
![image](https://user-images.githubusercontent.com/79050917/143594180-8f9e3a5d-fd3e-4071-9023-35e3458a46dc.png)


## Goal:
Predicting the fuel efficiency of cars

## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn

## Data Visualization :
![image](https://user-images.githubusercontent.com/79050917/143542394-322637e5-95d8-413f-9db5-f84a194500db.png)
- Countplot of cylinder column

![image](https://user-images.githubusercontent.com/79050917/143542444-a5e1d08a-d73b-4a68-a565-6662b21505eb.png)
- Countplot of model_year column

![image](https://user-images.githubusercontent.com/79050917/143542516-9662f911-683c-4dab-8738-8a7b9b1dbe70.png)
- Histogram of mpg column

![image](https://user-images.githubusercontent.com/79050917/143542587-afb10966-6f83-4065-b2e3-dda107e3575d.png)
- histogram of displacement column

I have used RandomForestRegressor, LogisticRegression, DecisionTreeClassifier.

## Compaing the accuracy of models used:
Accuracy scores:
- RandomForestRegressor : 87.47275424730756
- Linear Regression : 99.13394166672107
- Lasso regression : 79.7450859009941
- As the accuracy of linear regression is more i have used linear regression to predict the output of test data.

## Conclusion:
- linear Regression is used to train the data.
- Goal is to predict the fuel efficiency using Linear regression.
