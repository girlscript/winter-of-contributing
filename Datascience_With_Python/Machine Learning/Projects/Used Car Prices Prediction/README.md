# Used Car Prices Prediction

### Aim:

The aim of this project is to predict the used Car Prices. We will be using the Cardekho Dataset which is a research based  Dataset on Used Cars still running on Indian Roads plus the cost and features with which the cars were sold.We are going to analyze and try to predict car prices using this dataset .

---
### Desciption
A used car, a pre-owned vehicle, or a secondhand car, is a vehicle that has previously had one or more retail owners. Used cars are sold through a variety of outlets, including franchise and independent car dealers, rental car companies, buy here pay here dealerships, leasing offices, auctions, and private party sales. Some car retailers offer "no-haggle prices," "certified" used cars, and extended service plans or warranties.The price of a used car depends on various factors like age , mileage , engine , condition , features , etc. We will be looking through some of those and try to determine the car prices.

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
We try to understand the dataset and try to find out factors for basing our models  , like ussing correalation b/w the variables , pairplot, etc.
#### 4.  Training the model:
Using all the imported packages , we build three regressor  models which uses the concept of Random Forest , Linear Regression and Decision Tree Regression. We then train the model based on the training dataset. The loss function used here is mean squared error. 
#### 6. Predicting the model:
The model that we built is now used to predict the share prices on the testing data. We preprocess the testing data just as we did for the training data so as to get the right predictions. 

---

[Link to dataset used.](https://github.com/photon149/winter-of-contributing/blob/5e8523e6fb89cf8b166f30a0fd238f6069364797/Datascience_With_Python/DS%20Datasets/Used%20Car%20Prices%20Prediction/Car%20details%20v3.csv)

---

### Model Scores (Training / RMSE) 
- Random Forest Regressor : 98.9/1.516435e+05
- Linear Regression : 98.1/9.173600e+09
- Decision Tree Regressor : 99.9/2.056130e+05

---

### Application
This system can come in Handy with those people who deal in buying and selling of Used Cars.This Project can be connected with a Real Time System and a User Can enter the car input details and the model can then try to predict the approx valuation of it.

---

### Conclusion
We have used three Regression Models to predict the Used Car Prices on our Dataset.We used Linear Regression , Random Forest Regressor and Decision Tree Regressor Models.Out of these 3 Random Forest gave us the lowest RMSE , so we moved ahead to predict the Random Forest model on our datasrt in which it scored 96.6%
 

