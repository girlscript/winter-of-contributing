<h1 align="center">👩‍⚕️ Diabetes Classification</h1>

# ✅ Objective of this project
- The objective of this project is to classify whether someone has diabetes or not. We have to use the Independent Variables data to train the model to predict the dependent variable(outcome).
- The independent variables in this data set are :-'Pregnancies', 'Glucose', 'BloodPressure', 'SkinThickness', 'Insulin','BMI', 'DiabetesPedigreeFunction', 'Age'
- The outcome variable value is either 1 or 0 indicating whether a person has diabetes(1) or not(0).

# 🔥 Implements the following Algorithms :-
- Logistic Regression
- Naive Bayes
- K Nearest Neighbour
- Random Forest
- Decision Trees
- Support Vector Machine

# 📚 Let's study these Algorithms :-
## ✔ Logistical regression
Logistic Regression is selected when the dependent variable is categorical, meaning they have binary outputs, such as "true" and "false" or "yes" and "no." While both regression models i.e linear and logistic regression seek to understand relationships between data inputs, logistic regression is mainly used to solve binary classification problems, such as spam identification.

## ✔ K-nearest neighbor
K-nearest neighbor, also known as the KNN algorithm, is a non-parametric algorithm that classifies data points based on their proximity and association to other available data. This algorithm assumes that similar data points can be found near each other. As a result, it seeks to calculate the distance between data points, usually through Euclidean distance, and then it assigns a category based on the most frequent category or average.KNN is typically used for recommendation engines and image recognition.

## ✔ Naive Bayes
Naive Bayes is classification approach that adopts the principle of class conditional independence from the Bayes Theorem. This means that the presence of one feature does not impact the presence of another in the probability of a given outcome, and each predictor has an equal effect on that result.This technique is primarily used in text classification, spam identification, and recommendation systems.

## ✔ Support vector machine (SVM)
It is used for both data classification and regression. It is typically leveraged for classification problems, constructing a hyperplane where the distance between two classes of data points is at its maximum. This hyperplane is known as the decision boundary, separating the classes of data points (e.g., oranges vs. apples) on either side of the plane.

## ✔ Random forest
It is used for both classification and regression purposes. The "forest" references a collection of uncorrelated decision trees, which are then merged together to reduce variance and create more accurate data predictions.

## ✔ Decision Trees
The goal is to create a model that predicts the value of a target variable by learning simple decision rules inferred from the data features. A tree can be seen as a piecewise constant approximation.

# 🎉 Let's begin with the project
## 0️⃣ Importing libraries
```
import numpy as np #to work with numerical analysis
import pandas as pd #used for data manipulation
import matplotlib.pyplot as plt #to plot charts
import seaborn as sns #used for data visualization
``` 
## 1️⃣Reading dataset
```
=pd.read_csv("diabetes.csv")
```
## 2️⃣ Exploratory data Analysis
Here we're going to implement :-

#### a. Understanding the dataset
- Head of the dataset :- df.head() see the first n rows, default n=5
- shape of the data set :- df.shape() see the number of row and columns
- types of columns :- df.columns, df.dtypes see the column names and data types
- information about data set :- df.describe helps us to understand how data has been spread across the table

#### b. Data Cleaning
Here we are going to focus on :-

- Dropping duplicate values :- df=df.drop_duplicates() checking if there are any duplicate rows and dropping if any
- Checking NULL values :- df.isnull().sum() check for missing values, count them and print the sum for every column
- Checking for 0 value
- Summary of the data set :- df.info getting information about our data set

### 3️⃣ Data Visualization
Here we are going to plot :-

- Count Plot :- to see if the dataset is balanced or not
- Histograms :- to see if data is normally distributed or skewed
- Scatter plots :- to understand relationship between any two variables
- Pair plot :- to create scatter plot between all the variables
- Correlation Analysis between variables to understand the strength of their relationship

### 4️⃣ Splitting Data Frame into X and y
```
target_name='Outcome'
y= df[target_name]#given predicitions in dataset - Dependent Variables
X=df.drop(target_name,axis=1)#dropping the Outcome column and keeping all other columns as X - Independent variables
```

### 5️⃣ Applying Feature scaling
``` 
from sklearn.preprocessing import StandardScaler
scaler= StandardScaler()
scaler.fit(X)
SSX=scaler.transform(X)
```

### 6️⃣TRAIN_TEST_SPLIT
```
from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test= train_test_split(SSX,y,test_size=0.2,random_state=2)#splitting data in 80% data used to train, 20% data used to test
```

# 💯Implemeting Algorithms
## KNN
```
from sklearn.neighbors import KNeighborsClassifier
knn=KNeighborsClassifier() #creating an object
knn.fit(X_train,y_train) #training the model
knn_pred=knn.predict(X_test) #making predictions on test data
knn.score(X_test,y_test) #test score
```

## Logistic Regression
```
from sklearn.linear_model import LogisticRegression
lr=LogisticRegression(solver='liblinear',multi_class='ovr') #creating an object
lr.fit(X_train,y_train) #training the model
lr_pred=lr.predict(X_test)#making predictions on test data
lr.score(X_test,y_test) #test score
```

## Naive Bayes Classifier
```
from sklearn.naive_bayes import GaussianNB
nb=GaussianNB()
nb.fit(X_train,y_train)
nb.predict(X_test)
nb.score(X_test,y_test) #test score
```

## Support Vector Machine (SVM)
```
from sklearn.svm import SVC
sv=SVC()
sv.fit(X_train,y_train)
sv.predict(X_test)
sv.score(X_test,y_test) #test score
```
## Decision Tree
```
from sklearn.tree import DecisionTreeClassifier
dt=DecisionTreeClassifier()
dt.fit(X_train,y_train)
dt_pred=dt.predict(X_test)
dt.score(X_test,y_test) #test score
```

## Random Forest
```
from sklearn.ensemble import RandomForestClassifier
rf=RandomForestClassifier()
rf.fit(X_train,y_train)
rf.predict(X_test)
rf.score(X_test,y_test) #test score
```
