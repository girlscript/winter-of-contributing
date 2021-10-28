
# CatBoost Algorithm 


##### Format : Documentation


### CatBoost beat many other machine learning algorithms on benchmark datasets where logloss was the error metric. It has particularly hit LightGBM and XGBoost, which have recently become commonplace not only in data science competitions but also in professional settings.


#### When its comes to understand the performances and comparing various boosting algorithm it necessary to understand the term Boosting refers here.


Boosting is an ensemble learning strategy with the aim of reducing training errors by combining a set of weak learners and converting them to strong learners. It achieves this by consecutively building on weak learners, each trying to compensate for the weakness of its predecessor in order to generate one strong prediction rule.


#### To convert weak learner to strong learner, we’ll combine the prediction of each weak learner using methods like:
- Using average/ weighted average.
- Considering prediction has higher vote.


If we are talking about boosting alogrithm how we can forget to mention other boosting algorithms out there.


#### Different Types of Boosting Algorithm:
* AdaBoost (Adaptive) Boosting Algorithm
* Gradient Boosting Algorithm
* XGBoost Algorithm
* 

#### What is CatBoost Algorithm?

CatBoost is an algorithm for gradient boosting on decision trees. It is developed by Yandex researchers and engineers, and is used for search, recommendation systems, personal assistant, self-driving cars, weather prediction and many other tasks at Yandex and in other companies, including CERN, Cloudflare, Careem taxi. It is in open-source and can be used by anyone.

### Gist of CatBoost

CatBoost is an open-source software library developed by Yandex. It provides a gradient boosting framework which attempts to solve for Categorical features using a permutation driven alternative compared to the classical algorithm.It works on Linux, Windows, macOS, and is available in Python, R, and models built using catboost can be used for predictions in C++, Java, C#, Rust, Core ML, ONNX, and PMML. The source code is licensed under Apache License and available on GitHub.


### Features

CatBoost has uper hand and gained popularity compared to other gradient boosting algorithms primarily due to the following features.

- CatBoost can handle missing values internally
- Make use of GPU
- Ordered Boosting to overcome over fitting
- Native handling for categorical features
- Using Oblivious Trees or Symmetric Trees for faster execution



### Hyperparameters  of CatBoost 

- iterations -Return the identifier of the iteration with the best result of the evaluation metric or loss function on the last validation set
- depth
- learning_rate -It determines the step size at each iteration while moving toward a minimum of a loss function.
- loss_function
- verbose -The purpose of this parameter depends on the type of the given value:-
-
             int — The frequency of iterations to print the information to stdout.
             bool — Print the information to stdout on every iteration (if set to True) or disable any logging (if set to False).
- task_type -Supported processing units(CPU and GPU)




### Now jump onto implementation of CatBoost Classifier  


Installation of CatBoost Classifier

```
pip install catboost 
```


Importing the necessary Libraries

```
import pandas as pd                                     #For data manipulation and analysis
from catboost import CatBoostClassifier                 #For model and predication
from sklearn.model_selection import train_test_split    #For spliting into test and train set
from sklearn.metrics import accuracy_score, f1_score    #For checking of the accuracy of model
```


Now lets dicuss the problem we are going to solve here and what kind of that we have here with us.
so we have to predict wheather a person will get a loan or not.



The link for the data data that we will be working on is given  below:

https://github.com/m0hit-kumar/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/DS%20Datasets/Machine%20Learning/CatBoost%20Dataset.csv


```
Now let see our Dataset what kind of features we have to work with to prepare our classfication model.

Loan approval applicationn dataset
----------------------------------

**Data Set Characteristics:** 

   :Number of Instances: 506 

   :Number of Attributes: 6 (5 numeric + 1 categorical predictive).
   
   :Attribute List ( Name are self explanatory)
   
  - ApplicantIncome
  - CoapplicantIncome
  - LoanAmount
  - Loan_Amount_Term
  - Credit_History
  - Loan_Status
  
   :Missing Attribute Values: 9
              

                | Name              |  dtypes | Missing | Uniques |
                | ------------------|---------|---------|---------|
                | ApplicantIncome   | float64 |     2   |    503  |
                | CoapplicantIncome | float64 |     2   |    287  |
                | LoanAmount        | float64 |     3   |    203  |
                | LoanAmount        | float64 |     2   |     11  |
                | Credit_History    | object  |     0   |      2  |
                | Loan_Status       | int64   |     0   |      2  |


```



Loading Data

```
data=pd.read_csv("data.csv")
```


Using head function to take a overview of data

```
data.head()
```
<img src="https://github.com/m0hit-kumar/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/CatBoost/Images/1.png">
     </img>


Seprating the X and Y from the data

```
X=data.loc[:,data.columns!="Loan_Status"]
Y=data.loc[:,data.columns=="Loan_Status"]
```


Using sklearn train_test_split to divide dataset into Test and train spilt sets
```
X_train, X_test, y_train, y_test = train_test_split(X, Y,test_size=0.2,random_state=0)
```



```
X_train.head()
```
<img src="https://github.com/m0hit-kumar/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/CatBoost/Images/2.png">
     </img>



```
y_train.head()
```
<img src="https://github.com/m0hit-kumar/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/CatBoost/Images/3.png">
     </img>



Creating a CatBoostClassifier

```
model = CatBoostClassifier(task_type='GPU', iterations=150, 
                              random_state = 2000, 
                              eval_metric="F1")
```



Model Fitting

```
model.fit(X_train, y_train, cat_features= ["Credit_History"], plot=True,eval_set=(X_test, y_test))
```


Predicting the values for X_test

```
y_pred=model.predict(X_test)
```



Finding the accuracy of model using f1_score and accuracy_score

```
f1_score(y_test, y_pred)
```
<img src="https://github.com/m0hit-kumar/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/CatBoost/Images/4.png">
     </img>

```



accuracy_score(y_test,y_pred)
```
<img src="https://github.com/m0hit-kumar/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/CatBoost/Images/5.png">
     </img>




## Conclusion
From starting we understand about CatBoost ,its features , its hyperparameters ,what is boosting and see other algorithms we have other then CatBoost then implement the CatBoost Classifier from importing Catboost and Dataset and then splitting dataset into test and training set and creating classifier for predication at last checked the accuracy using f1_score and accuracy_score.

## References

- https://catboost.ai/
- https://www.analyticsvidhya.com/blog/2015/11/quick-introduction-boosting-algorithms-machine-learning/
- https://towardsdatascience.com/4-easy-steps-for-implementing-catboost-c196fd82274b
- https://en.wikipedia.org/wiki/Catboost
  
## Contributor

- DSWP BATCH : 4
- <a href="https://github.com/m0hit-kumar">MOHIT KUMAR   (GitHub : m0hit-kumar)</a> 





