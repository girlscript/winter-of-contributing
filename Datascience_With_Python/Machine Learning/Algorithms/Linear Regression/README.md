
#   Linear Regression Algorithm #1567


##### Format : Documentation



  
### 🔗 IMPORTANT LINKS 
#### Documentation: [![Documentation](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/linear_regression.ipynb)




  
## INFORMATION ABOUT DATASET

To share my understanding of the concept and techniques I know, I’ll take the dataset which will help to make you understand the concept of Linear Regression

* In the dataset Year Of Experience is independent variable
* In the dataset Salary is dependent variable


## DESCRIPTION

The data set contains cases from a study that is based on a company it contains records of employee's salary according to their years of experience

## AIM
In this documentation, we understood the concept of Linear Regression with the help of an example dataset. We looked at how we can analyze the dataset, train our model to predict 

#### Platform used for dataset: Google Colab
#### Imported Libraries: 
- Matplotlib
- Numpy
- Pandas


## Linear Regression
In supervised learning machine learn under guidance as same as teacher guided and teaches  us, By feeding them labelled data. So teacher in this case is training data.
In supervised learning we are provide both features and labels 

Linear regression is the simplest approach for statistical learning. It is a good starting point for more advanced approaches, and in fact, many fancy statistical learning techniques can be seen as an extension of linear regression. It is a type of supervised machine learning. It is used to predict the relationship between dependent variable and given independent variables.

* Linear regression analysis is used to predict the value of a variable based on the value of another variable.

* The variable you want to predict is called the dependent variable.

* The variable you are using to predict the other variable's value is called the independent variable.


Output type- continuous (number)
Evaluation- Mean Square Error



<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/dig.png'>


##  DATA EXPLORATION
Before applying linear regression,the first step is data exploration which helps in data analysis. We visualize the data and try to understand it.
It also help in cleaning of unwanted data which eventually help in incereasing the accuracy of our model and makes more precise prediction.

### Printing the first five rows of dataset

head() method is used to display first five rows


```
# To display first five rows of the dataset
df.head()

```



<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/head.PNG'>





### Printing the last five rows of dataset

tail() method is used to display last five rows 


```
# To display last five rows of the dataset
df.tail()
```


<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/tail.PNG'>



---


### null()
null() helps to find out the NA values from the dataset. It is necessary to remove such rows if exists as it can reduce the accuracy of our model


```
# checking for null values
df.isnull().sum()

```


<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/null.PNG'>



---


### min()
min() display the minimum value from the dataset


```
# printing the min value from the dataset
df.min()

```


<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/min.PNG'>




---


### max()

max() display the maximum value from the dataset



```
# printing the max value from the dataset
df.max()

```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/max.PNG' >


---



### info()

info() display concise summary of the dataset


```
# info() provides brief information about the dataset
df.info()

```




<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/info.PNG'>


---



### corr()
corr() helps to find the dependency of one variables to another

```
# Finding the correlation between variables
df.corr()

```


<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/corr.PNG'>





#### Observation:
Rows: 30
Columns: 2

Column Name: Year Of Experience , Salary

Year Of Experience : Independent Variable

Salary:Dependent Variable


---




### describe()
describe() is used to view some basic statistical details like percentile, mean, std etc. of a data frame or a series of numeric values
<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/describe.PNG'>


#### Observation:

Average year of experience : 5

Average salary : 76003


RANGE OF COLUMNS :

Experience(MIN:1, MAX:10)

Salary(MIN:37731, MAX:122391)


---





##  DATA VISUALIZATION

Data visualization gives us a clear idea of what the information means by giving it visual context through plots or graphs. This makes the data more natural for the human mind to comprehend and therefore makes it easier to identify trends, patterns, behaviour within large data sets.

```
x=df['YearsExperience'] 
y=df['Salary']
plt.xlabel('Years of Experience')
plt.ylabel('Salary')
plt.scatter(x,y,color='green',marker='*')
plt.show()

```


<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/plot1.PNG'>

---



## Splitting of dataset for training & testing


Splitting of data to fit in the model, we split the data into two groups features and labels according to supervised learning
* In linear regression features are the independent varables.
* Labels are the dependent variables and the outcome which are gained from predcition.
* We feed both features and labelled data to our model.
* Slicing is one of the way of splitting the dataset for training and testing

##### Syntax for slicing:

dataset_name.iloc[start_row:end_row, start_col: end_col]

in the above syntax start_row and start_col are inclusive whereas end_row and end_col are exclusive



<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/testingpart1.PNG'>

---


## train_test_split()
The train-test split is a technique for evaluating the performance of a machine learning algorithm

* Train Dataset: Used to fit the machine learning model.

* Test Dataset: Used to evaluate the fit machine learning model.

* "Random state: any number" - Random_state is basically used for  reproducing same set of train  and test data points ,every time when you  make a split. If you do not use random_state in train_test_split every time you make the split you might  get different set of train and test data point. This will not help you debugging your model.

In this case I have reserved 30% data for testing and 70% data for training the model

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/testingpart2.PNG'>

---


## Creating Simple Linear Model

Y = aX + b
Equation for a linear model with 1 variable and 1 target

Where,  b is constant or bias or intercept of line, a is coefficient or weight,

X is predictor or independent variable, 

Y is predicted or dependent variable.



<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/linearmodel.PNG'>


## Making Predictions with Linear Regression

### predict()

##### Syntax for prediction:

model_name.predict(testing_data)

Model which is created by linear regression can predict the values by passing testing data


<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/prediction.PNG'>



### Dataframe Of Actual And Predicted Values

The first column is the specifies actual values and second column specifies predicted values by model

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/dataframe.PNG'>

---


## Using Mathematical Knowledge

Let’s assume we only have one variable and one target. Then, linear regression is expressed as:

Y=aX+b
Equation for a linear model with 1 variable and 1 target

Where,  b is constant or bias or intercept of line, a is coefficient or weight,

X is predictor or independent variable, 

Y is predicted or dependent variable.

###### In the equation above, the "a" and "b" are the coefficient and intercept. These values are what we need in order to make predictions with our model.


##### Both Coefficient(a) and Intercept(b) can be obtained by using following command


<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/coef.PNG'>


##### Use both Coefficient(a) and Intercept(b) values and taking X(predictor) = 6 in the linear equation(Y = aX + b) as follows: 

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/math.PNG'>


#### Both mathematical and model_predicted values are same.


<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/model_predicted.PNG'>


---

## Estimation of accuracy and mean square error

When working with linear regression, our main goal is to find the best fit line that means the error between predicted values and actual values should be minimized. The best fit line will have the least error.

The different values for bias or the coefficient of lines (a, b) gives a different line of regression, so we need to calculate the best values for a and b to find the best fit line, so to calculate this we use error or cost function.


<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/error.PNG'>



<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/accuracy.PNG'>


---



## Visualization of True price and Predicted price 


Visualization of predicted and actual values from the Linear Regression model.In the following mentioned plot, data points are the actual values and the straight line passing through is the predicted values.The straight line is known as "Line of Regression".

```
plt.scatter(xtrain,ytrain,color='red')
plt.plot(xtrain,mymodel.predict(xtrain))
plt.show()
```

<img src='https://github.com/ayushijindal/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Linear%20Regression/Images/plot2.PNG'>



## Contributor
- ID : 253
- DSWP BATCH : 8
- [@Ayushi Jindal](https://github.com/ayushijindal)










