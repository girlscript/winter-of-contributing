# CREDIT CARD FRAUD DETECTION

[Click here for the audio](https://drive.google.com/file/d/1d-UTAxLwMfqKFPOUVDimda29iJ4zPtjT/view?usp=sharing)

Machine Learning for credit card fraud detection is one of those fields where most of the published research is unfortunately not reproducible. Real-world transaction data cannot be shared for confidentiality reasons, but we also believe authors do not make enough efforts to provide their code and make their results reproducible.

## ABOUT THE DATA
The data for this is taken from a [Kaggle](https://www.kaggle.com/mlg-ulb/creditcardfraud) dataset.This dataset contains the real bank transactions made by European cardholders in the year 2013. As a security concern, the actual variables are not being shared but — they have been transformed versions of PCA. As a result, we can find 29 feature columns and 1 final class column.

## IMPORTING THE LIBRARIES
It is a good practice to import all the necessary libraries in one place — so that we can modify them quickly.

```
import os 
import warnings
warnings.filterwarnings('ignore')
#Packages related to data importing, manipulation, exploratory data #analysis, data understanding
import numpy as np
import pandas as pd
from pandas import Series, DataFrame
from termcolor import colored as cl # text customization
#Packages related to data visualizaiton
import seaborn as sns
import matplotlib.pyplot as plt
%matplotlib inline
#Setting plot sizes and type of plot
plt.rc("font", size=14)
plt.rcParams['axes.grid'] = True
plt.figure(figsize=(6,3))
plt.gray()
from matplotlib.backends.backend_pdf import PdfPages
from sklearn.model_selection import train_test_split, GridSearchCV
from sklearn import metrics
from sklearn.impute import MissingIndicator, SimpleImputer
from sklearn.preprocessing import  PolynomialFeatures, KBinsDiscretizer, FunctionTransformer
from sklearn.preprocessing import StandardScaler, MinMaxScaler, MaxAbsScaler
from sklearn.preprocessing import LabelEncoder, OneHotEncoder, LabelBinarizer, OrdinalEncoder
import statsmodels.formula.api as smf
import statsmodels.tsa as tsa
from sklearn.linear_model import LogisticRegression, LinearRegression, ElasticNet, Lasso, Ridge
from sklearn.neighbors import KNeighborsClassifier, KNeighborsRegressor
from sklearn.tree import DecisionTreeClassifier, DecisionTreeRegressor, export_graphviz, export
from sklearn.ensemble import BaggingClassifier, BaggingRegressor,RandomForestClassifier,RandomForestRegressor
from sklearn.ensemble import GradientBoostingClassifier,GradientBoostingRegressor, AdaBoostClassifier, AdaBoostRegressor 
from sklearn.svm import LinearSVC, LinearSVR, SVC, SVR
from xgboost import XGBClassifier
from sklearn.metrics import f1_score
from sklearn.metrics import accuracy_score
from sklearn.metrics import confusion_matrix
```
## IMPORTING THE DATASET 
```
df = pd.read_csv('creditcard.csv')
```
## DATA PROCESSING 
The one main thing you will notice about this data is that — the dataset is imbalanced towards a feature. Which seems pretty valid for such kind of data. 

Because today many banks have adopted different security mechanisms — so it is harder for hackers to make such moves.

Still, sometimes when there is some vulnerability in the system — the chance of such activities can increase.
That’s why we can see the majority of transactions belongs to our datasets are normal and only a few percentages of transactions are fraudulent.

```
Total_transactions = len(data)
normal = len(data[data.Class == 0])
fraudulent = len(data[data.Class == 1])
fraud_percentage = round(fraudulent/normal*100, 2)
print('Total number of Trnsactions are {}'.format(Total_transactions))
print('Number of Normal Transactions are {}'.format(normal))
print('Number of fraudulent Transactions are {}'.format(fraudulent))
print('Percentage of fraud Transactions is {}'.format(fraud_percentage))
```
By running the above code we get to know that only 0.17% transactions are fraudlent.

Run the below line of code to remove any duplicates.
```
data.drop_duplicates(inplace=True)
```

## TRAIN AND TEST SPLIT
Before splitting train & test — we need to define dependent and independent variables. The dependent variable is also known as X and the independent variable is known as y.
```
X = data.drop('Class', axis = 1).values
y = data['Class'].values
```
Now, let split our train and test data.
```
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size = 0.25, random_state = 1)
```
That’s it. We now have two different data set — Train data we will be used for training our model and the data which is unseen will be used for testing.

## MODEL BUILDING

### DECISION TREE
```
DT = DecisionTreeClassifier(max_depth = 4, criterion = 'entropy')
DT.fit(X_train, y_train)
dt_yhat = DT.predict(X_test)
print('Accuracy score of the Decision Tree model is {}'.format(accuracy_score(y_test, tree_yhat)))
print('F1 score of the Decision Tree model is {}'.format(f1_score(y_test, tree_yhat)))
```

The accuracy score came out to be about 0.99 and the F1-score around 0.77

### K-NEAREST NEIGHBOURS
```
n = 7
KNN = KNeighborsClassifier(n_neighbors = n)
KNN.fit(X_train, y_train)
knn_yhat = KNN.predict(X_test)
print('Accuracy score of the K-Nearest Neighbors model is {}'.format(accuracy_score(y_test, knn_yhat)))
print('F1 score of the K-Nearest Neighbors model is {}'.format(f1_score(y_test, knn_yhat)))
```
The accuracy score came out to be about 0.99 and the F1-score around 0.83

### LOGISTIC REGRESSION
```
lr = LogisticRegression()
lr.fit(X_train, y_train)
lr_yhat = lr.predict(X_test)
print('Accuracy score of the Logistic Regression model is {}'.format(accuracy_score(y_test, lr_yhat)))
print('F1 score of the Logistic Regression model is {}'.format(f1_score(y_test, lr_yhat)))
```
The accuracy score came out to be about 0.99 and the F1-score around 0.69

### SUPPORT VECTOR MACHINES
```
svm = SVC()
svm.fit(X_train, y_train)
svm_yhat = svm.predict(X_test)
print('Accuracy score of the Support Vector Machines model is {}'.format(accuracy_score(y_test, svm_yhat)))
print('F1 score of the Support Vector Machines model is {}'.format(f1_score(y_test, svm_yhat)))
```
The accuracy score came out to be about 0.99 and the F1-score around 0.77

### RANDOM FOREST
```
rf = RandomForestClassifier(max_depth = 4)
rf.fit(X_train, y_train)
rf_yhat = rf.predict(X_test)
print('Accuracy score of the Random Forest model is {}'.format(accuracy_score(y_test, rf_yhat)))
print('Accuracy score of the Random Forest model is {}'.format(accuracy_score(y_test, rf_yhat)))
```
The accuracy score came out to be about 0.99 and the F1-score around 0.78

## CONCLUSION
Well, congratulation!! We just received 99% accuracy in our credit card fraud detection. This number should not be surprising as our data was balanced towards one class.
