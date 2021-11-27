# Drug Classification
# [Click here to see the video](https://drive.google.com/file/d/1156BtwaLhaX_a1ow31Yd7xF2cazMvqCa/view?usp=sharing)
## Intoduction:
- Predict the outcome of the drugs that might be accurate for the patient.
- Drug Classification is the data which contains the following columns:
- The target feature is
    - Drug type
- The feature sets are:
   - Age
   - Sex
   - Blood Pressure Levels (BP)
   - Cholesterol Levels
   - Na to Potassium Ration


## Dataset :
The dataset which is used here, is collected from Kaggle website. Here is the link of the dataset : https://www.kaggle.com/prathamtripathi/drug-classification

## Goal/Aim of the project :
Classification of drugs.


## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn

## Data Visualization :
![image](https://user-images.githubusercontent.com/79050917/143412186-ec4ed3b6-2d77-41a1-a847-f709cc3e2e76.png)
- Count plot of age column

![image](https://user-images.githubusercontent.com/79050917/143412275-1ed8165e-234c-4c2a-80ef-2fdc8504a7bb.png)
- Count plot of Na_to_k

![image](https://user-images.githubusercontent.com/79050917/143412379-5b15e16b-b290-4934-9231-9ec123c82d75.png)
- Heatmap

## Model comparison :
I have used RandomForestRegressor, KNN.

## Conclusion :
Accuracy scores:
- RandomForestRegressor : 
- KNN:
- As the accuracy of lKNN is more i have used KNN to predict the output of test data.


