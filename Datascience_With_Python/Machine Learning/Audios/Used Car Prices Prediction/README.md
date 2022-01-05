## Used Car Prices Prediction
## [Click here to listen the audio](https://drive.google.com/file/d/19d0Va8KtuXN5_6XQOOvTGDSzM6BnMk47/view?usp=sharing)
## Introduction:

Objective:
- To predict the costs of used cars given the data collected from various sources and distributed across various locations in India.

Features:
- Name: The brand and model of the car.
- Location: The location in which the car is being sold or is available for purchase.
- Year: The year or edition of the model.
- Kilometers_Driven: The total kilometres driven in the car by the previous owner(s) in KM.
- Fuel_Type: The type of fuel used by the car.
- Transmission: The type of transmission used by the car.
- Owner_Type: Whether the ownership is Firsthand, Second hand or other.
- Mileage: The standard mileage offered by the car company in kmpl or km/kg
- Engine: The displacement volume of the engine in cc.
- Power: The maximum power of the engine in bhp.
- Seats: The number of seats in the car.
- New_Price: The price of a new car of the same model.
- Price: The price of the used car in INR Lakhs

## Goal:
Prediction of used car price.

## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn

## Work Flow:
Load the dataset -> EDA -> Model Building -> Evaluation -> Deployment

- A breif view of the dataset


![image](https://user-images.githubusercontent.com/79050917/143775800-7af34570-38a3-40e3-99be-4e92d833bf6c.png)

## Models:
Random forest regressor:
- A random forest is a meta estimator that fits a number of classifying decision trees on various sub-samples of the dataset and uses averaging to improve the predictive accuracy and control over-fitting.

Linear regressor:
- Linear regression analysis is used to predict the value of a variable based on the value of another variable. 
- The variable you want to predict is called the dependent variable.

Lasso regressor:
- Lasso regression is used for eliminating automated variables and the selection of features.


## Accuracy:

Random forest regressor: 91.52907369947201
Linear regressor: 73.12706723815185
Lasso regressor: 69.2689580706427


## Conclusion:
- Random forest regressor has the highest accuracy, hence we will be choosing that for building the project.

