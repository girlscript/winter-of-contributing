## Student Percentage Prediction
## [Click here to see the video](https://drive.google.com/file/d/1mrPhmPzyJw19uZDt_WrSOuo1zXAeAljE/view?usp=sharing)
## Introduction:

DATA SCIENCE NIGERIA STUDENT ACADEMIC PERFORMANCE PREDICTION DATASETS - This data captures performance of randomly selected students. The data attributes include gender, race/ethnicity, parental level of education, lunch, test preparation, course, math score, reading score, writing score .

Here is the link of the dataset : https://www.kaggle.com/venky73/predicting-student-percentage/data.

## Goal:
Predict the math scores of the students.

## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn

## Data Visualization :
![image](https://user-images.githubusercontent.com/79050917/143474948-efea9eca-2d7c-4e25-ac94-435cedb3017a.png)
- Countplot of gender column

![image](https://user-images.githubusercontent.com/79050917/143475021-ad92e6f6-c8e1-41dd-82d8-4a691c8afcc1.png)
- Countplot of race/ethnicity

![image](https://user-images.githubusercontent.com/79050917/143475118-844b9457-54fb-4404-8313-ca7c1371764c.png)
- Countplot of lunch

![image](https://user-images.githubusercontent.com/79050917/143475163-c37392a3-956c-4394-801b-52a9e33ef12a.png)
- Countplot of mathscore

![image](https://user-images.githubusercontent.com/79050917/143475222-abb603de-fe70-48a0-8f48-b1c249f46069.png)
- Heatmap 






I have used RandomForestRegressor, LogisticRegression, DecisionTreeClassifier.

## Compaing the accuracy of models used:
Accuracy scores:
- RandomForestRegressor : 0.046
- LogisticRegression : 0.05125
- DecisionTreeClassifier : 0.035
- As the accuracy of logistic regression is more i have used logistic regression to predict the output of test data.

## Conclusion:
- logistic Regression is used to train the data.
- Goal is to predict the math scores of the using Logistic regression.






