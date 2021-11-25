# Overfitting

## Video Link : [Overfitting](https://drive.google.com/file/d/1fG-F091lMS2fyBY91UXQ_12yCfs_-0LB/view?usp=sharing)

A statistical model is said to be overfitted when we feed it a lot more data than necessary. To make it relatable, imagine trying to fit into oversized apparel.

![image](https://user-images.githubusercontent.com/63282184/143027742-b461ae8e-f115-4f6c-b553-896f4aead864.png)

When a model fits more data than it actually needs, it starts catching the noisy data and inaccurate values in the data. As a result, the efficiency and accuracy of the model decrease. Let us take a look at a few examples of overfitting in order to understand how it actually happens.

## Examples Of Overfitting

## Example 1

If we take an example of simple linear regression, training the data is all about finding out the minimum cost between the best fit line and the data points. It goes through a number of iterations to find out the optimum best fit, minimizing the cost. This is where overfitting comes into the picture.

![image](https://user-images.githubusercontent.com/63282184/143027888-47f966e0-0ca8-43ae-b0e8-b2219a4b88c5.png)

The line seen in the image above can give a very efficient outcome for a new data point. In the case of overfitting, when we run the training algorithm on the data set, we allow the cost to reduce with each number of iteration.

Running this algorithm for too long will mean a reduced cost but it will also fit the noisy data from the data set. The result would look something like in the graph below.

![image](https://user-images.githubusercontent.com/63282184/143027945-1075b7ee-6f53-4b4c-b059-6e386bda1a03.png)


This might look efficient but isn’t really. The main goal of an algorithm such as linear regression is to find a dominant trend and fit the data points accordingly. But in this case, the line fits all data points, which is irrelevant to the efficiency of the model in predicting optimum outcomes for new entry data points.

Now let us consider a more descriptive example with the help of a problem statement.



## Signal vs Noise

In predictive modeling, signal refers to the true underlying pattern that helps the model to learn the data. On the other hand, noise is irrelevant and random data in the data set. To understand the concept of noise and signal, let us take a real-life example.

Let us suppose we want to model age vs literacy among adults. If we sample a very large part of the population, we will find a clear relationship. This is the signal, whereas noise interferes with the signal. If we do the same on a local population, the relationship will become muddy. It would be affected by outliers and randomness, for e.g, one adult went to school early or some adult couldn’t afford education, etc.

Talking about noise and signal in terms of Machine Learning, a good Machine Learning algorithm will automatically separate signals from the noise. If the algorithm is too complex or inefficient, it may learn the noise too. Hence, overfitting the model. 


## HOW TO DETECT AND AVOID OVERFIT MODELS
- Cross-validation can detect overfit models by determining how well your model generalizes to other data sets by partitioning your data. This process helps you assess how well the model fits new observations that weren't used in the model estimation process.

- Minitab statistical software provides a great cross-validation solution for linear models by calculating predicted R-squared. This statistic is a form of cross-validation that doesn't require you to collect a separate sample. Instead, Minitab calculates predicted R-squared by systematically removing each observation from the data set, estimating the regression equation, and determining how well the model predicts the removed observation.

- If the model does a poor job at predicting the removed observations, this indicates that the model is probably tailored to the specific data points that are included in the sample and not generalizable outside the sample.

- To avoid overfitting your model in the first place, collect a sample that is large enough so you can safely include all of the predictors, interaction effects, and polynomial terms that your response variable requires. The scientific process involves plenty of research before you even begin to collect data. You should identify the important variables, the model that you are likely to specify, and use that information to estimate a good sample size.

