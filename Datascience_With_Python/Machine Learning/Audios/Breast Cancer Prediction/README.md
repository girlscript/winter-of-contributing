## Breast Cancer Prediction
## [Click here to listen the audio](https://drive.google.com/file/d/1Hl5DcDmQdIemz5WxneonpQny2UKTxvpV/view?usp=sharing)
- Breast cancer is the most common cancer amongst women in the world. It accounts for 25% of all cancer cases, and affected over 2.1 Million people in 2015 alone. It starts when cells in the breast begin to grow out of control. These cells usually form tumors that can be seen via X-ray or felt as lumps in the breast area.
- Hence, we need to classify the dataset into whether the person will be having brest cancer or not.
- The goal of this project is to analyse the data and classify whether the person will be having brest cancer ot not and build a model accordingly.

Here is the link of the dataset : https://www.kaggle.com/c/breast-cancer-classification/data.

## Goal:
Classify whether the person will have the breast cancer or not.

## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn

## Data Visualization :
![1](https://user-images.githubusercontent.com/79050917/142572203-14cf5ccc-6851-4dbf-95c6-fd33ee937b73.PNG)
- countplot of diagnosis column

![2](https://user-images.githubusercontent.com/79050917/142572232-009c648e-4654-4cb1-9317-e3b2121c5a81.PNG)
- heatmap of the dataset

![3](https://user-images.githubusercontent.com/79050917/142572243-2058b89c-0f32-4ce6-9953-7c8dab6167c7.PNG)
- countplot of mean_radius

![4](https://user-images.githubusercontent.com/79050917/142572362-f427711b-b61e-44f4-bed7-eaa1c2cbc616.PNG)
- countplot of mean_texture




I have used RandomForestRegressor, LogisticRegression, DecisionTreeClassifier.

## Compaing the accuracy of models used:
Accuracy scores:
- RandomForestRegressor : 73.53217391304347
- LogisticRegression : 91.42857142857143
- DecisionTreeClassifier : 87.71929824561403
- As the accuracy of logistic regression is more i have used logistic regression to predict the output of test data.

## Conclusion:
- logistic Regression is used to train the data.
- Goal is to predict the person having the breast cancer or not using Logistic regression.






