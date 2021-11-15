# Project Title : Customer Segmentation

## Abstract/Brief Description about the Project :
An automobile company has plans to enter new markets with their existing products (P1, P2, P3, P4 and P5). After intensive market research, they’ve deduced that the behavior of new market is similar to their existing market.

Content In their existing market, the sales team has classified all customers into 4 segments (A, B, C, D ). Then, they performed segmented outreach and communication for different segment of customers. This strategy has work exceptionally well for them. They plan to use the same strategy on new markets and have identified 2627 new potential customers. The object of this project is to help the manager to predict the right group of the new customers.

## Dataset :
The dataset which is used here, is collected from Kaggle website. Here is the link of the dataset : https://www.kaggle.com/vetrirah/customer.

## Goal/Aim of the project :
The goal of this project is to analyse different types of customers around the globe and build a classification model accordingly.

## Libraries used :
- Numpy
- Pandas
- Matplotlib
- Sklearn
- Seaborn
- xgboost

## Data Visualization :
1. **Customer Segmentation according to the Gender**
<br />

![image](https://user-images.githubusercontent.com/59737567/141855826-c99d8009-2c4a-4fff-b862-edd2ede63b88.png)

2. **Customer Segmentation according based on the Marital Status**
<br />

![image](https://user-images.githubusercontent.com/59737567/141856183-6a4c4597-1aa8-4bed-b335-67d1063f814e.png)

3. **Customer Segmentation according based on the status of Graduation**
<br />

![image](https://user-images.githubusercontent.com/59737567/141856244-f190a19c-a2d6-4e03-a15d-396692309c4e.png)

4. **Customer Segmentation according to the Profession**
<br />

![image](https://user-images.githubusercontent.com/59737567/141856353-a55ebbe2-f19e-48a1-b905-17eac1aeceaf.png)

4. **HeatMap**
<br />

![image](https://user-images.githubusercontent.com/59737567/141856680-fd828a0d-44c0-4285-8bc1-06656e4b79b4.png)

## Model comparison :

![image](https://user-images.githubusercontent.com/59737567/141858316-f9d68990-adf4-4bf7-bc40-e743e1775d81.png)


|Models|Accuray Score on Train Data|Accuray Score on Test Data|
|-|-|-|
|Logistic Regression|0.50|0.50|
|Linear SVC|0.47|0.47|
|KNN|0.66|0.45|
|XGBoost|0.54|0.51|
|RandomForest|0.93|0.43|

## Conclusion and Discussion :
Though accuracy is not the only metrics to judge a model. We can conclude the following observations about each classifier on the given dataset as follows:

1. Logistic Regression - The dataset performs equally on both train and test data and has an accuracy around 50% each. It has highest accuracy rate on test data.
2. Linear SVC - This classifier also has an equal performance on both train and test data and has an accuracy around 47% for each. This classifier performs poorly on train data.
3. KNN - This classifier has an accuracy around 66% on train data but performs poorly on test data with an accuracy around 45%.
4. XGBoost - This classifier performs slightly better on train data than test data with an accuracy around 54% on train data and 51%  on test data.
5. RandomForest - This classifer has highest accuracy on train data, but fails to maintain the accuracy with test data. It has an accuracy around 93% with train data and 43% with test data.


**********************************************************************
**GirlScript Winter of Contributions 2021**
