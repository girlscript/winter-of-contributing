# Normalization & Standardization

Hello all 👋,
In this topic I have tried to cover everything related to Standardization, Normalization & Feature Scaling along with the Code Sample & Examples, but before starting this make sure you know Python Programming Language along with that you are clear with the basic Data Science Concepts.

So let's start the learning and below is the Index for Topic Contents we are going to cover also you can directly navigate to the topic by clicking on the URL.

| Index                                                                              |
| ---------------------------------------------------------------------------------- |
| [Feature Scaling?](#feature-scaling)                                               |
| [What is Normalization?](#what-is-normalization)                                   |
| [What is Standardization?](#what-is-standardization)                               |
| [Standardization vs Normalization](#standardization-vs-normalization)                               |
| [Implementing Feature Scaling in Python](#implementing-feature-scaling-in-python)  |
| [Normalization and Standardization using Sklearn library](#normalization-and-standardization-using-sklearn-library)        |

## Feature Scaling?

Feature Scaling is an essential technique in the field of Data Scienceg that is used to standardize the Features present in our Dataset within a fixed range. This technique is used to bring values in different units into a single unit. This task is performed during data pre-processing phase. If the feature scaling is not done then the machine learning algorithms does not gives the expected results.

Let's take an example in order to understand this concept. If you are working on some dataset in which few features are in meters and few are in kilometers. If the feature scaling technique is not applied then it can consider value 1000 meters is greater than 2 kilometers.

So now as we know what is feature scaling, let's discuss how to use feature scaling and various techniques to perform Feature Scaling.

Below are the most used techniques that are used for feature scaling.

1. Absolute Maximum Scaling
2. Min-Max Scaling
3. Normalization
4. Standardization
5. Robust Scaling

From the above mentioned techniques, we will be discussing 2 of them i.e Normalization and Standardization.

## What is Normalization?

Normalization is a scaling technique in which values are shifted and rescaled in order to bring them within the range of 0 & 1. Normalization is also called as Min-Max Scaling.

Here is the formula of Normalization

<p align="center">  <img  src="https://www.geeksforgeeks.org/wp-content/ql-cache/quicklatex.com-282fedefcd0fdf4868ad00ca7e161849_l3.svg">  </p>

Here max(x) and min(x) are the maximum and minimum values of the features respectively.
<br/>

◾ When the value of X(i) is minimum value in the column, then X(new) wlll be 0.
<br/>
◾ When the value of X(i) is maximum value in the column, then X(new) wlll be 1.
<br/>
◾ When the value of X(i) is between minimmum and maximum values in the column, then X(new) wlll be between 0 & 1.

So with the help of this formula, we have scaled our feature between 0 and 1.

## What is Standardization?

Standardization is scaling technique where the values are centered around the mean with a unit standard deviation. This means that the mean of the attribute becomes zero and the resultant distribution has a unit standard deviation.

Here is the formula of Standardization

<p align="center">  <img  src="https://www.geeksforgeeks.org/wp-content/ql-cache/quicklatex.com-98d57b82f228c735de66f69c749a14c7_l3.svg">  </p>

Here X(mean) and standard deviation is the mean and standard deviation of the feature values respectively.

Here the values are not restricted within a given range unlike normalization.
So the biggest question now is that what should we use Normaliation or Standardization🤔

## Standardization vs Normalization

Standardization can be used if the values of our feature follow a Gaussian distribution. However, this is not always always true.

While, Normalization can be used if a values of our feature does not follow a Gaussian distribution. It can be used with the algorithms that does not requires data to be in distribution like K-Nearest and Neural Networks.

## Normalization and Standardization using Sklearn library

Check the notebook attached in this folder for the Implementation of Standardization and Normalization in python using sklearn.
