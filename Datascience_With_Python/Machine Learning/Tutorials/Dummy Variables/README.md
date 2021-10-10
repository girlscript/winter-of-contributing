#   Usage of get_dummies to create Dummy Variables with Pandas #3176


##### Format : Documentation



  
### 🔗 IMPORTANT LINKS 
#### Documentation: [![Documentation](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Dummy%20Variables/dummy_variables.ipynb)
#### Dataset: [![Dataset](https://img.shields.io/badge/Kaggle-20BEFF?style=for-the-badge&logo=Kaggle&logoColor=white)](https://data.princeton.edu/wws509/datasets/salary.dat)



  
## INFORMATION ABOUT DATASET

To share my understanding of the concept and techniques I know, I’ll take the dataset which will help to make you understand the concept of usage of pandas dummy variables

* The dataset used is the salary data, consisting of observations on six variables for 52 tenure-track professors in a small college. 
* The variables are:

* sx = Sex

* rk = Rank

* yr = Number of years in current rank

* dg = Highest degree

* yd = Number of years since highest degree was earned

* sl = Academic year salary


## DESCRIPTION

In the chosen dataset there are multiple independent features out of which some of them are categorical in nature and one is dependent feature. In this documentation we will look how to use categorical variables in order to create model using Machine Learning algorithm to make optimal prediction.

## AIM
In this documentation, we understood the concept of Dummy Variables with the help of an example dataset. We looked at how we can use categorical variables in the dataset, to train our model to predict 

#### Platform used for dataset: Google Colab
#### Imported Libraries: 
- Matplotlib
- Numpy
- Pandas


## Dummy Variables
It is a scenario where there are attributes which are highly correlated and one variable predicts the value of others. When we use this concept for handling the categorical data, then one attribute can be predicted with the help of other dummy variables.


For example, Gender having two values male and female. Either they can be 1/0 or 0/1. Including both dummy variable can cause redundancy because if a person is not male in such case the person is female, hence, we don't need to use both the variables in model.





##  DATA EXPLORATION
Before applying ,the first step is data exploration which helps in data analysis. We visualize the data and try to understand it.





### Printing the first five rows of dataset

head() method is used to display first five rows


```
# To display first five rows of the dataset
df.head()

```



<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Dummy%20Variables/Images/head.PNG'>


### Printing the last five rows of dataset

tail() method is used to display last five rows 
```
# To display last five rows of the dataset
df.tail()
```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Dummy%20Variables/Images/tail.PNG'>


---

### Observations:
From the dataset we can conclude that there are some columns that are cateogorical in nature such as

* sx which has two possible values: male/female

* rk which has three possible values: full/ assistant/associate

* dg which has two possible values: masters/doctorate

---

### info()

info() display concise summary of the dataset

```
# Getting brief information about dataset
df.info()
```


<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Dummy%20Variables/Images/info.PNG'>

---



### describe()
describe() is used to view some basic statistical details like percentile, mean, std etc. of a data frame or a series of numeric values
<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Dummy%20Variables/Images/describe.PNG'>

---

## Splitting of dataset for training & testing

We need to slice data in order to create model and predict optimal values

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Dummy%20Variables/Images/slicing.PNG'>

---

### Observations:
* In order to create a linear regression model from salary-train and predict salary of the professor based on multiple factors on salary-test data

* sx, rk, dg are the categorical data which are independent variables that can take on one of a limited number of possible values.

* Thses data values need to be converted into numerical form so that our machine learning algorithm can take in that as input.

---

## Creating Dummy Variables

##### Syntax:

dataset_name = pd.get_dummies(dataset_name['categorical_column'])

```
gender=pd.get_dummies(x['sx'])
gender.head()

```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Dummy%20Variables/Images/gender1.PNG'>

---
### Observations:
* Notice above, how every new dummy column has at least one "1" within it? This is because every variable is accounted for with a True (1) indicator. Every row specifies a person which could either be male/female.

* However, what if a first male column was filled 0s?This indicates female column is filled with 1s.

* This is also a way to identify one of your values. drop_first allows you to drop your first variable and identify it through all other columns being 0.

* So we only need to use one of these two dummy-coded variables as a predictor.
----

##### (drop_first=True) parameter allow to drop first categorical variable is possible because if every other dummy column is 0, then this means your first value would have been 1. It helps to remove in redundancy from the dataset.

```
# Convert the sx column into categorical columns
gender=pd.get_dummies(x['sx'],drop_first=True)
gender.head()
```



<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Dummy%20Variables/Images/gender2.PNG'>


---

```
# Convert the rk column into categorical columns
rank=pd.get_dummies(x['rk'], drop_first=True)
rank.head()
```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Dummy%20Variables/Images/rank.PNG'>


---

```
# Convert the dg column into categorical columns
degree=pd.get_dummies(x['dg'],drop_first=True)
degree.head()
```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Dummy%20Variables/Images/degree.PNG'>

---

### Dropping Categorical values from the dataset

```
# Drop the sx, rk, dg coulmns 
x=x.drop(['sx', 'rk', 'dg'], axis='columns')
x.head()
```


<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Dummy%20Variables/Images/drop.PNG'>


---

### Concatenation Of Dummy Variables With Original Dataset

```
# concat the dummy variables
x=pd.concat([x,gender,rank,degree],axis='columns')
x.head()

```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Dummy%20Variables/Images/concat.PNG'>

#### Note:  All the cateogorical values are converted into numerical form which can be feeded to any Machine Learning algorithm in order to create model

---
### Model & Test

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Dummy%20Variables/Images/test%26model.PNG'>


<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Dummy%20Variables/Images/tested.PNG'>

#### DataFrame of both tested and predicted values

First column specifies predicted values and second values specifies actual values

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Dummy%20Variables/Images/dataframe.PNG'>

---

### Accuracy Of The Model

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Dummy%20Variables/Images/accuracy.PNG'>

---

### End Note
Hope this documentation provided you some basic idea about usage of get_dummies to create Dummy Variables with Pandas and how to handle categorical values using this approach. 


## Contributor
- ID : 253
- DSWP BATCH : 8
- [@Ayushi Jindal](https://github.com/ayushijindal)
















