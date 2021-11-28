# Project Title : Restaurant Revenue Prediction

## Abstract/Brief Description about the Project :
- Using demographic, real estate, and commercial data, this competition challenges you to predict the annual restaurant sales of 100,000 regional locations.
- Data Source 
- Data Fields
- Id: Restaurant id.
- Open Date: opening date for a restaurant
- City: City that the restaurant is in. Note that there are unicode in the names.
- City Group: Type of the city. Big cities, or Other.
- Type: Type of the restaurant. FC: Food Court, IL: Inline, DT: Drive Thru, MB: Mobile
P1, P2 - P37: There are three categories of these obfuscated data. Demographic data are gathered from third party providers with GIS systems. These include population in any given area, age and gender distribution, development scales. Real estate data mainly relate to the m2 of the location, front facade of the location, car park availability. Commercial data mainly include the existence of points of interest including schools, banks, other QSR operators.
- Revenue: The revenue column indicates a (transformed) revenue of the restaurant in a given year and is the target of predictive analysis. Please note that the values are transformed so they don't mean real dollar values.
- About the company
- TFI has over 1,200 quick service restaurants across the globe.
- They employ over 20,000 people in Europe and Asia.
- They make significant investments in their niche.
- When the wrong location for a restaurant brand is chosen, the site closes within 18 months and operating losses are incurred.
- Their goal is to increase effectiveness in their investments.

## Dataset :
The dataset which is used here, is collected from Kaggle website. Here is the link of the dataset : https://www.kaggle.com/c/restaurant-revenue-prediction/overview.

## Goal/Aim of the project :
To predict the revenue of restaurant.

## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn

## Data Visualization :
![1](https://user-images.githubusercontent.com/79050917/143773232-8c05a696-74ed-49e5-be40-93fa0d1f4eef.PNG)

![2](https://user-images.githubusercontent.com/79050917/143773239-cb91432b-7d50-4325-9d1f-caa3dbe6c556.PNG)

![3](https://user-images.githubusercontent.com/79050917/143773243-bc15f0aa-66ab-4710-86d9-32c104b0aff7.PNG)

![4](https://user-images.githubusercontent.com/79050917/143773250-f02b4c6c-6b08-4521-8c24-69c3c56c669f.PNG)

![5](https://user-images.githubusercontent.com/79050917/143773254-74386979-4a81-4b82-9986-bf81c071058c.PNG)

![6](https://user-images.githubusercontent.com/79050917/143773257-33dbca94-1020-4d36-b442-cb32a8300f56.PNG)

![7](https://user-images.githubusercontent.com/79050917/143773262-d0f294b6-43ad-4041-9f85-e2e70fa5471b.PNG)

## Model comparison :
I have used RandomForestRegressor, Linear Regression, Lasso Regression.

## Conclusion and Discussion :
Accuracy scores:
- RandomForestRegressor : 15.809843012434632
- Linear Regression: 93.51805925971275
- Lasso Regression:  67.67326732389029
- As the accuracy of linear regression is more i have used linear regression to predict the output of test data.

**********************************************************************
**GirlScript Winter of Contributions 2021**
