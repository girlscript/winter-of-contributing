# **Overfitting**

## [Click to listen to the audio](https://drive.google.com/file/d/1J5ZVeENGSGnbui0VrJym3yspz98WUkyn/view?usp=sharing) 

## **Outline**
+ Introduction
+ What is Overfitting?
+ Example
+ Why Overfitting is a problem?
+ Detecting Overfitting
+ Techniques to reduce Overfitting
+ Summary
+ References

## **Introduction**

There is a terminology used in machine learning when we talk about how well a machine learning model learns and generalizes to new data, namely overfitting and underfitting.
These are the two biggest causes for poor performance of machine learning algorithms.

In this, we are going to learn in brief about overfitting.

## **What is Overfitting?**

Overfitting is a concept in data science, which occurs when a statistical model fits exactly against its training data. It occurs when our machine learning model tries to cover all the data points or more than the required data points present in the given dataset. When this happens, the algorithm unfortunately cannot perform accurately against unseen data, defeating its purpose.

The chances of occurrence of overfitting increase as much we provide training to our model. It means the more we train our model, the more chances of occurring the overfitted model.

***The overfitted model has low bias and high variance.***

## **Example**

Example: The concept of the overfitting can be understood by the below graph of the linear regression output:

![Overfitting](https://static.javatpoint.com/tutorial/machine-learning/images/overfitting-and-underfitting.png)

As we can see from the above graph, the model tries to cover all the data points present in the scatter plot. It may look efficient, but in reality, it is not so. Because the goal of the regression model to find the best fit line, but here we have not got any best fit, so, it will generate the prediction errors.

## **Why Overfitting is a problem**

Overfitting can lead to poor model performance. The most common problem in applied machine learning is overfitting.

Overfitting is such a problem because the evaluation of machine learning algorithms on training data is different from the evaluation we actually care the most about, namely how well the algorithm performs on unseen data.


## **Detecting Overfitting**

A key challenge of detecting any kind of fit is almost impossible before you test the data. It can help address the inherent characteristics of overfitting, which is the inability to generalize a dataset. The data can therefore be separated into different subsets to make it easy for training and testing. The data is split into two main parts, i.e., a test dataset and a training dataset.

Splitting technique may vary based on the type of dataset and one can use any splitting technique.

If our model does much better on the training dataset than on the test dataset, then we’re likely overfitting For example, our model performed with a 99% accuracy on the training dataset but only 50-55% accuracy on the test dataset. It is Overfitting the model and did not performed well on unseen dataset.

Another simple way to detect this is by using cross-validation. This attempts to examine the trained model with a new data set to check its predictive accuracy. Given a dataset, some portion of this is held back (say 30%) while the rest is used in training the model. Once the model has been trained the reserved data is then used to check the accuracy of the model compared to the accuracy of derived from the data used in training. A significant variance in these two flags overfitting.




## **Techniques to reduce Overfitting**

There are some ways by which we can reduce the occurrence of overfitting in our model.

+ Cross-Validation
+ Increase training data.
+ Removing features
+ Reduce model complexity.
+ Early stopping the training
+ Regularization
+ Ensembling

## **Disadvantages**

 + Because of overfitting, the model starts caching noise and inaccurate values present in the dataset, and all these factors reduce the efficiency and accuracy of the model. 
 
 + Overfitting is the main problem that occurs in supervised learning.
 
 + An overfit model is one that is too complicated for your data set.
 
 + The quality of the results worsens when you try to learn too much from a sample.
 


## **Summary**

Overfitting is a modeling error that introduces bias to the model because it is too closely related to the data set.
In this, we discussed about how to detect overfitting, how to reduce it and its disadvantages.


## **References**
+ https://www.javatpoint.com/overfitting-and-underfitting-in-machine-learning
+ https://www.geeksforgeeks.org/underfitting-and-overfitting-in-machine-learning/
+ https://datascience.foundation/sciencewhitepaper/underfitting-and-overfitting-in-machine-learning
