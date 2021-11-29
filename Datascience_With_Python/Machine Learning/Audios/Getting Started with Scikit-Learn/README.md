# Getting Started with Scikit-Learn

## Audio Link : [Getting Started with Scikit-Learn](https://drive.google.com/file/d/1rllH24LPLyrxGmomXVy4lkz9q35JMmDL/view?usp=sharing)

Scikit-learn, first developed as a Google Summer of Code project in 2007, is the now widely considered to be the most popular Python library for machine learning.

There are a number of reasons why this library is seen as one of the best choices for machine learning projects, especially in production systems. These include, but aren’t limited to the following.

- It has a high level of support and strict governance for the development of the library which means that it is an incredibly robust tool.
- There is a clear, consistent code style which ensures that your machine learning code is easy to understand and reproducible, and also vastly lowers the barrier to entry for coding machine learning models.
- It is widely supported by third-party tools so it is possible to enrich the functionality to suit a range of use cases.

## To install the latest version of Scikit-learn run the following.

```
pip install scikit-learn
```

### Let us take the wine data as an example 

```
from sklearn.datasets import load_wine

X,y = load_wine(return_X_y=True)
```

## Estimators
- The Scitkit-learn library provides a very large variety of pre-built algorithms to perform both supervised and unsupervised machine learning. They are generally referred to as estimators.
- The estimator you choose for your project will depend on the data set you have and the problem that you are trying to solve. The Scikit-learn documentation helpfully provides this diagram, shown below, to help you to determine which algorithm is right for your task.

![image](https://user-images.githubusercontent.com/63282184/143797228-68dedcd1-c571-4616-8c35-991326ebb5cb.png)


### The first step, with Scikit-learn, is to call the logistic regression estimator and save it as an object. 

```
from sklearn.linear_model import LogisticRegression

lr = LogisticRegression()
```

### The next step is to fit the model to some training data. This is performed using the fit() method. 

```
from sklearn.model_selection import train_test_split

X_train, X_test, y_train, y_test = train_test_split(X, y, random_state=0)

model = lr.fit(X_train, y_train)
```

###  predict() method to predict on previously unseen data.

```
predictions = model.predict(X_test)

```

## Preprocessing

###  SimpleImputer() fills in missing values

```
from sklearn.impute import SimpleImputer

imputer = SimpleImputer(strategy='mean')
X_train_clean = imputer.fit(X_train)
```

## Evaluation

```
from sklearn.metrics import classification_report

print(classification_report(rf_predictions, y_test))
```

![image](https://user-images.githubusercontent.com/63282184/143797425-7bcb558e-4d4e-4359-93ad-65d509b43894.png)


## Model optimisation

Scikit-learn provides two tools to automatically perform this task, GridSearchCV which implements a technique known as exhaustive grid search and RandomizedSearchCV which performs randomized parameter optimisation.

```
param_grid = { 
    'n_estimators': [200, 500],
    'max_features': ['auto', 'sqrt', 'log2'],
    'max_depth' : [4,5,6,7,8],
    'criterion' :['gini', 'entropy']
}
from sklearn.model_selection import GridSearchCV
CV = GridSearchCV(rf, param_grid, n_jobs= 1)
                  
CV.fit(X_train, y_train)  
print(CV.best_params_)    
print(CV.best_score_)

```
![image](https://user-images.githubusercontent.com/63282184/143797482-1b3ae8ac-c247-4b35-ae7b-728b6ef0d0cc.png)

## Pipelines
The Scikit-learn package provides a further convenient form of code encapsulation in the form of pipelines. This tool enables all preprocessing tasks to be chained together with the classifier step so that simply calling fit() or predict() on a single pipeline object performs all the steps in your workflow.

```
from sklearn.pipeline import Pipeline
pipe = Pipeline([('imputer', SimpleImputer()), ('rf', RandomForestClassifier())])
pipeline_model = pipe.fit(X_train, y_train)
pipeline_model.score(X_test, y_test)
```

## Advantages and conclusion

Scikit-learn is probably the most useful library for machine learning in Python. The sklearn library contains a lot of efficient tools for machine learning and statistical modeling including classification, regression, clustering and dimensionality reduction.




