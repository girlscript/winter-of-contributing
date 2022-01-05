# Solar Radiation Prediction

### Aim:

The aim of this project is to predict Solar Radiations emitted by the Sun. We will be using the Solar Radiation Dataset from Kaggle.We are going to analyze and try to predict the radiation using this dataset , keeping in mind the various factors and correlated coefficients which will help us in detereming the radiation emission levels.

---
### Desciption
Solar radiation, often called the solar resource or just sunlight, is a general term for the electromagnetic radiation emitted by the sun. Solar radiation can be captured and turned into useful forms of energy, such as heat and electricity, using a variety of technologies. However, the technical feasibility and economical operation of these technologies at a specific location depends on the available solar resource.

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
We try to understand the dataset and try to find out factors for basing our models  , like using correalation b/w the variables ,heatmap etc.
#### 4.  Training the model:
Using all the imported packages , we build three regressor  models which uses the concept of Random Forest , Linear Regression and Ridge Regression. We then train the model based on the training dataset. The loss function used here is mean squared error. 
#### 6. Predicting the model:
The model that we built is now used to predict the radiation levels on the testing data. We do a 30:70 split of our dataset so as to give better training enviornment for our models.

---

[Link to dataset used.](https://github.com/photon149/winter-of-contributing/blob/d2fb8d36c29864f3d0d2d7905f57d7278d3d639e/Datascience_With_Python/DS%20Datasets/Solar%20Radiation%20Prediction/SolarPrediction.csv)

---

### Model Scores (RMSE) 
- Random Forest Regressor : 160.266186
- Linear Regression : 210.044098
- Ridge Regression : 210.045619

---

### Application
This system can come in Handy with weather and meteorological based nodal agencies.In areas where there is suspected breakage of ozone layer and chances occur of high intensity solar radiation , so this system can be connected to a ral time system and be used to predict high radiation levels in those areas.

---

### Conclusion
We have used three Regression Models to predict the Solar Radiation Levels on our Dataset.We used Linear Regression , Random Forest Regressor and Ridge Regression Models.Out of these 3 Random Forest gave us the lowest RMSE , so we can further use Random Forest Model for better accuracy models , rather than other Regression Models.
 


