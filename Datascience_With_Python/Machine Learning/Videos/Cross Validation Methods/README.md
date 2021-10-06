## Why do we need to do  Cross-Validation : 

Cross-validation is primarily used in applied machine learning to estimate the skill of a machine learning model on unseen data.

That is, to use a limited sample in order to estimate how the model is expected to perform in general when used to make predictions on data not used during the training of the model.

## What is Cross-Validation ?

## Video Link: [Cross-Validation Methods](https://drive.google.com/file/d/1ToZRdKyO996QKVOZ9wQIUGpJgLRlTgYe/view?usp=sharing)

- Cross-validation is a resampling procedure used to evaluate machine learning models on a limited data sample.

- It is commonly used in applied machine learning to compare and select a model for a given predictive modeling problem because it is easy to understand.

## Types of Cross-Validation:

![image](https://user-images.githubusercontent.com/63282184/134794417-cbb9b4af-6590-4fbd-ab76-496eb2e349a7.png)


## Holdout Method

Holdout Method is the simplest sort of method to evaluate a classifier. In this method, the data set (a collection of data items or examples) is separated into two sets, called the Training set and Test set. 

A classifier performs function of assigning data items in a given collection to a target category or class![image](https://user-images.githubusercontent.com/63282184/134794430-b96190e1-6a94-45e6-9d93-64ec5372c011.png)

![image](https://user-images.githubusercontent.com/63282184/134794434-1777bfad-fa3b-469e-aab5-93beda295bc6.png)

**When to use Holdout Method ?**

The hold-out method is good to use when you have a very large dataset, you’re on a time crunch, or you are starting to build an initial model in your data science project

## K-Fold Cross Validation

In K Fold cross validation, the data is divided into k subsets. Now the holdout method is repeated k times, such that each time, one of the k subsets is used as the test set/ validation set and the other k-1 subsets are put together to form a training set.


![image](https://user-images.githubusercontent.com/63282184/134794476-2785e27d-fedd-4c7e-96a7-b5a2df3c4c0a.png)


**Advantages of K-Fold validation**

Computation time is reduced as we repeated the process only 10 times when the value of k is 10.

Reduced bias.

Every data points get to be tested exactly once and is used in training k-1 times.

The variance of the resulting estimate is reduced as k increases.

## Stratified K-Fold Cross Validation

To understand this concept we must first know what is the difference between Stratified Sampling and Cluster Sampling(Random Sampling)

![image](https://user-images.githubusercontent.com/63282184/134794511-a438bad8-f662-47e4-8885-c6444195bb4e.png)


**What is Stratified K-Fold Cross Validation?** 

Stratified k-fold cross-validation is same as just k-fold cross-validation, But in Stratified k-fold cross-validation, it does stratified sampling instead of random sampling.

![image](https://user-images.githubusercontent.com/63282184/134794532-b0bdbf56-32a3-49e0-bff0-f6f5ef32cec6.png)


**Advantages of Stratified K-Fold Cross Validation**

Cross-validation implemented using stratified sampling ensures that the proportion of the feature of interest is the same across the original data, training set and the test set. This ensures that no value is over/under-represented in the training and test sets, which gives a more accurate estimate of performance/error.


## Conclusion:

Cross validation techniques help us to validate our model and hence they work as a cross checking to our model and there by reducing the errors and improving the accuracy.






