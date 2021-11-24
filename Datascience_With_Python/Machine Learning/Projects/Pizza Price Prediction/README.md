# Pizza Price Prediction

### Aim:

The aim of this project is to predict Pizza Prices based on the different features. We will be using the Pizza Prediction Dataset from Kaggle which is research based on Pizza Prices in Indonesia , hence the prices mentioned in the dataset are in Rupiah as well.We are going to analyze and try to predict the pizza prices using this dataset , keeping in mind the various factors and correlated coefficients which will help us in determining the accurate pizza prices.

---
### Desciption
Pizza is an Italian dish consisting of a usually round, flattened base of leavened wheat-based dough topped with tomatoes, cheese, and often various other ingredients (such as anchovies, mushrooms, onions, olives, pineapple, meat, etc.), which is then baked at a high temperature, traditionally in a wood-fired oven. A small pizza is sometimes called a pizzetta. A person who makes pizza is known as a pizzaiolo.

### Libraries Used:
- pandas
- numpy
- sklearn
- matplotlib
- Seaborn
---

### Workflow:
#### 1. Importing libraries:
All the required libraries have been imported.
#### 2. Loading the dataset: 
The dataset is read using pandas as a dataframe.
#### 3.Understanding the dataset :
We try to understand the dataset and try to find out factors for basing our models  , like using correlation b/w the variables ,EDA,etc.
#### 4.  Training the model:
Using all the imported packages , we build four regressor  models which uses the concept of Random Forest ,XG Boost , Linear Regression and Ridge Regression. We then train the model based on the training dataset. The loss function used here is mean squared error. 
#### 6. Predicting the model:
The model that we built is now used to predict the pizza prices on the testing data. We do a 30:70 split of our dataset so as to give better training enviornment for our models.

---

[Link to dataset used.](https://github.com/photon149/winter-of-contributing/blob/b4f39647c53e43b2f25efb545af4bf0e68268a99/Datascience_With_Python/DS%20Datasets/Pizza%20Price%20Prediction/pizza_v2.csv)

---

### Model Scores (RMSE) 
- Linear Regression	: 23143.143935
- Ridge Regression	: 23128.686700
- Random Forest Regression :	12041.189166
- XG Boost Regressor	: 14614.039151

---

### Application
This system can come in Handy with local cafeterias or food chain outlets who are trying to expand into new territoties , as this can provide the firm with a price sensitivity of the market as well as suggest them what price should they sell their pizza at so as to provide a healthy competition as well as make reasonable profits and growth.

---

### Conclusion
We have used four Regression Models to predict the Pizza Prices based  on our Dataset.We used Linear Regression , XG Boost ,Random Forest Regressor and Ridge Regression Models.Out of these 3 Random Forest gave us the lowest RMSE , so we can further use Random Forest Model for better accuracy models , rather than other Regression Models.
 


