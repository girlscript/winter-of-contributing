## glass_classification_and_analysis
## [Click here to listen the audio](https://drive.google.com/file/d/1fTo0wO2Hm0Ok1C18DAxHeAyGG3tmTAr-/view?usp=sharing)
# Introduction:
- link of dataset: https://www.kaggle.com/uciml/glass

- This is a Glass Identification Data Set from UCI. It contains 10 attributes including id. The response is glass type(discrete 7 values)

- Attribute Information:
    - Id number: 1 to 214 (removed from CSV file)
    - RI: refractive index
    - Na: Sodium (unit measurement: weight percent in corresponding oxide, as are attributes 4-10)
    - Mg: Magnesium
    - Al: Aluminum
    - Si: Silicon
    - K: Potassium
    - Ca: Calcium
    - Ba: Barium
    - Fe: Iron
    - Type of glass: (class attribute) 
             -- 1 buildingwindowsfloatprocessed 
             -- 2 buildingwindowsnonfloatprocessed 
             -- 3 vehiclewindowsfloatprocessed
             -- 4 vehiclewindowsnonfloatprocessed (none in this database) 
             -- 5 containers 
             -- 6 tableware 
             -- 7 headlamps
## Work Flow:
Loading the dataset -> EDA -> Building the model -> Evaluation -> Choosing the final model.

## Goal:
Classification of glass

## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn


I have used RandomForestRegressor, KNN.

## Compaing the accuracy of models used:
Accuracy scores:
- RandomForestRegressor : 67.3421926910299
- KNN: 62.63565891472868
- As the accuracy of Randomforest regression is more i have used Randomforest regression to predict the output of test data.

## Conclusion:
- Randomforest Regression is used to train the data.
- Goal is to classify the glass using Randomforest regression.

