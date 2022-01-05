# **Dealing with Categorical Columns**

## [Click this to listen to the audio](https://drive.google.com/file/d/19YjxVtM3M8kYDJ_mSDAebtC1-54UHJi_/view?usp=sharing)


## Outline
*  Introduction
*  Types of Categorical Data
*  Implementation of Techniques to convert categorical to numerical
*  Reasons why we need encoding
*  Resources and References
*  Summary

## Introduction

The categorical data consists of categorical variables which represent the characteristics such as a person’s gender, hometown etc. Categorical measurements are expressed in terms of natural language descriptions, but not in terms of numbers. Sometimes categorical data can take numerical values, but those numbers do not have mathematical meaning. 
Categorical variables can take on only a limited, and usually fixed number of possible values. Besides the fixed length, categorical data might have an order but cannot perform numerical operation. Categorical are a Pandas data type.

![Categorical data](https://th.bing.com/th/id/OIP.BfGjPxZexlO3hKIqgti-pQHaDt?w=288&h=175&c=7&r=0&o=5&dpr=1.5&pid=1.7)

## Types of Categorical Data

In general, categorical data has values and observations which can be sorted into categories or groups. The best way to represent these data is bar graphs and pie charts. Categorical data are further classified into two types namely,
Nominal Data-Nominal data is a type of data that is used to label the variables without providing any numerical value. Some of the few common examples of nominal data are letters, words, symbols, gender etc. These data are analyzed with the help of the grouping method.
Ordinal Data-Ordinal data is a type of data that follows a natural order. The notable features of ordinal data are that the difference between data values cannot be determined. It is commonly encountered in surveys, questionnaires, finance and economics.

![types](https://miro.medium.com/max/698/1*A2zAEX3OydZ0r_Gk4gYjEg.png)

## Implementation of Techniques to convert categorical to numerical

#### Adding the dataset:
```python
import pandas as pd 
df = pd.read_csv('household_data.txt') 
print(df)
```
Output:
```python
Item_Category Gender Age Salary Purchased
0 Fitness Male 20 30000 Yes
1 Fitness Female 50 70000 No
2 Food Male 35 50000 Yes
3 Kitchen Male 22 40000 No
4 Kitchen Female 30 35000 Yes
```
#### Create the dependent matrix (X) from the data set and extract the dataset to get the dependent vector:
```python
X = df.iloc[:, :-1].values
print(X)
y = df.iloc[:, -1].values
print(Y)
```
Output:
```python
[['Fitness' 'Male' 20 30000]
['Fitness' 'Female' 50 70000]
['Food' 'Male' 35 50000]
['Kitchen' 'Male' 22 40000]
['Kitchen' 'Female' 30 35000]]

['Yes', 'No', 'Yes', 'No', 'Yes']
```
#### To implement One Hot encoding:
```python
import pandas as pd 
from sklearn.preprocessing import LabelEncoder, OneHotEncoder
df = pd.read_csv('household_data.txt') 
X = df.iloc[:, :-1].values 
y = df.iloc[:, -1].values 
labelencoder_X = LabelEncoder()
X[:,0] = labelencoder_X.fit_transform(X[:,0])
X[:,1] = labelencoder_X.fit_transform(X[:,1])
onehotencoder = OneHotEncoder(categorical_features=[0,1])
X = onehotencoder.fit_transform(X).toarray()
print(X)
```
Output:
```python
[[1.0e+00 0.0e+00 0.0e+00 0.0e+00 1.0e+00 2.0e+01 3.0e+04]
[1.0e+00 0.0e+00 0.0e+00 1.0e+00 0.0e+00 5.0e+01 7.0e+04]
[0.0e+00 1.0e+00 0.0e+00 0.0e+00 1.0e+00 3.5e+01 5.0e+04]
[0.0e+00 0.0e+00 1.0e+00 0.0e+00 1.0e+00 2.2e+01 4.0e+04]
[0.0e+00 0.0e+00 1.0e+00 1.0e+00 0.0e+00 3.0e+01 3.5e+04]]
```
#### Encoding the Dependent Vector Y:
```python
labelencoder_y = LabelEncoder()
y = labelencoder_y.fit_transform(y)
print(y)
```
Output:
```python
[1 0 1 0 1]
```
![one hot encoding](https://th.bing.com/th/id/OIP.4YmRMG5WBHuEoIAF3Kh_kAHaEK?pid=ImgDet&rs=1)

#### Binary Encoding:
```python
ce_be = ce.BinaryEncoder(cols=['class']);

# transform the data
data_binary = ce_be.fit_transform(data["class"]);
data_binary
```

#### Label Encoding:
```python
from sklearn.preprocessing import LabelEncoder

le = LabelEncoder()
Label encoder takes no arguments
le_class = le.fit_transform(data[["class"]])
```
![encoding](https://womaneng.com/wp-content/uploads/2018/09/onehotencoding.jpg)

#### Ordinal encoding:
```python
temp = {'temperature' :['very cold', 'cold', 'warm', 'hot', 'very hot']}
df=pd.DataFrame(temp,columns=["temperature"])
temp_dict = {'very cold': 1,'cold': 2,'warm': 3,'hot': 4,"very hot":5}
df
df["temp_ordinal"] = df.temperature.map(temp_dict)
df
```
#### Dropping the categorical Columns:

```python
drop_X_train = X_train.select_dtypes(exclude=[‘object’])
drop_X_valid = X_valid.select_dtypes(exclude=[‘object’])
```

## Reasons why we need encoding

* Most machine learning algorithms cannot handle categorical variables unless we convert them to numerical values.
* Many algorithm’s performances even vary based upon how the categorical variables are encoded.

## Resources and References
* https://www.pluralsight.com/guides/handling-categorical-data-in-machine-learning-models
* https://www.kdnuggets.com/2021/05/deal-with-categorical-data-machine-learning.html
* https://byjus.com/maths/categorical-data/
* https://medium.com/big-data-center-of-excellence/how-to-handle-categorical-values-byaryan
* https://th.bing.com/th/id/OIP.BfGjPxZexlO3hKIqgti-pQHaDt?w=288&h=175&c=7&r=0&o=5&dpr=1.5&pid=1.7
* https://womaneng.com/wp-content/uploads/2018/09/onehotencoding.jpg
* https://th.bing.com/th/id/OIP.4YmRMG5WBHuEoIAF3Kh_kAHaEK?pid=ImgDet&rs=1
* https://miro.medium.com/max/698/1*A2zAEX3OydZ0r_Gk4gYjEg.png

## Summary

Here, we have discovered how categorical columns are converted to numerical as understanding the categorical data is one of the most important aspects of dealing with Data Science. If the output of your model is an input to some other data engine than it is best to leave it in the numeric form. So having knowledge of this topic enables us to implement machine learning models effectively.
