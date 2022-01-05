# Topic: Stochastic Gradient Descent

# Outline:
Stochastic Gradient Descent is an iterative algorithm used in Machine Learning to mimize the errors between predicted and actual data. So here we will cover the following points.
- What is Gradient Descent?
- Working of Gradient Descent Algorithm
- Stochastic Gradient Descent 
- Feautres of Stochastic Gradient Descent
- Advantages of Stochastic Gradient Descent
- Usage of Stochastic Gradient Descent



Stochastic gradient descent is a very popular and common algorithm used in various Machine Learning algorithms, most importantly forms the basis of Neural Networks. I recommend proper knowledge of Linear Regression and how it works for proper understanding of this topic.

Before Jumping to Stochastic Gradient let us recap gradient descent.

# What is Gradient Descent?
The term Gradient Descent is made up of two very important terms: Gradient and Descent

So just understand the literal meanings of these terms to get an understanding of this.

Gradient in plain terms means slope or slant of a surface. It is basically the rate at which the dependent variable change with respect to the independent variable. 

For Example:

We have the quadratic Equation: 


![picture](https://drive.google.com/uc?id=1Y3qmYxYOz4wNIBmp7DqdUrVjp3lFR1qq)

You can clearly see that the rate at which the value of y will change entirely depends on the value of x. Now when we plot this function we will get a parabbola as shown below.

The slope of this parabola is the gradient of the function at that point.

![picture](https://drive.google.com/uc?id=1jSgJi2igmo_efJONkh5sMgT9yF-pkBKa)

Now what is meant by Descent. Descent as the name means is going down or descending.

So the whole word gradient Descent iterally means descending a slope to reach the lowest point on that surface.

Foe example assume the graph plotted above. Suppose we start finding the slope at every possible point of the graph and we go towards the direction where the slope is found to be decreasing. So we reach the lowest point where the gradient is minimum.

In the above graph, the lowest point on the parabola occurs at x = 1. The objective of gradient descent algorithm is to find the value of **“x”** such that **“y”** is ***minimum***. **“y”** here is termed as the objective function that the gradient descent algorithm operates upon, to descend to the lowest point.

Now before proceeding forward lets understand the actual working of the algorithm.

## Working of Gradient Descent Algorithm
We will use linear regression problem to explain gradient descent algorithm. The objective of regression is to minimize the sum of squared residuals. We know that a function reaches its minimum value when the slope is equal to 0. By using this technique, we solved the linear regression problem and learnt the weight vector. The same problem can be solved by gradient descent technique.

```
Gradient descent is an iterative algorithm, that starts from a random point on a function 
and travels down its slope in steps until it reaches the lowest point of that function.
```

This algorithm is useful in cases where the optimal points cannot be found by equating the slope of the function to 0. In the case of linear regression, you can mentally map the sum of squared residuals as the function “y” and the weight vector as “x” in the parabola above.

How to Move to the lowest point by repeated iteration?

The general idea is to start with a random point (in our parabola example start with a random “x”) and find a way to update this point with each iteration such that we descend the slope.
The steps followed are:
1. Find the slope of the objective function with respect to each parameter/feature. In other words, compute the gradient of the function.
2. Pick a random initial value for the parameters. (To clarify, in the parabola example, differentiate “y” with respect to “x”. If we had more features like x1, x2 etc., we take the partial derivative of “y” with respect to each of the features.
∇y/∇x1, ∇y/∇x2 and so on for all the features)
3. Update the gradient function by plugging in the parameter values.
4. Calculate the step sizes for each feature as : step size = gradient * learning rate.
5. Calculate the new parameters as : new params = old params -step size
6. Repeat steps 3 to 5 until gradient is almost 0.

The ***“learning rate”*** mentioned above is a flexible parameter which heavily influences the convergence of the algorithm. Larger learning rates make the algorithm take huge steps, that is it jumps over larger intervals and calculate the gradient. So there is a high probability the minimum point is skipped, thereby missing it. So, it is always good to stick to low learning rate such as 0.01. It can also be mathematically shown that gradient descent algorithm takes larger steps down the slope if the starting point is high above and takes baby steps as it reaches closer to the destination to be careful not to miss it and also be quick enough.

But although it seems quite easy but it is complex when looked upon mathematically. There are few drawbacks of Gradient Descent Method.

Say we have 1,00,000 data points and 100 features. The sum of squared residuals consists of as many terms as there are data points, so 1,00,000 terms in our case. We need to compute the derivative of this function with respect to each of the features, so in effect we will be doing 1,00,000 * 100 = 100,00,000 computations per iteration. It is common to take 1000 iterations, in effect we have 100,00,000  * 1000 = 10000000000  computations to complete the algorithm. That is pretty much an overhead and hence gradient descent is slow on huge data.
It will take huge amount of time to compute and we would require some high end mechanism for it.

# Stochastic Gradient Descent 

This drawback is overcome by Stochastic Gradient Method. Stochastic simply means random. 

But the Question is why randomness and where to include it?

The SGD method induces randomness in picking up data point in each iteration. Unlike Gradient Descent it does not go through all data points in a step. It randomly picks up one data point and calculates the gradient. This way the number of computations in each iteration is reduced drastically.

So, in SGD, we find out the gradient of the cost function of a single example at each iteration instead of the sum of the gradient of the cost function of all the examples.

In SGD, since only one sample from the dataset is chosen at random for each iteration, the path taken by the algorithm to reach the minima is usually noisier than your typical Gradient Descent algorithm. But that doesn’t matter all that much because the path taken by the algorithm does not matter, as long as we reach the minima and with a significantly shorter training time.\


# Features of Stochastic Gradient Descent
- It is a random descent algorithm.
- It works on a Random Distribution of Data
- It randomly picks one data point from the whole data set
- It is also common to sample a small number of data points instead of just one point at each step and that is called “mini-batch” gradient descent.
- It reduces the number computations in each iteration enormously.
- As it is random, there is a huge noise for reaching the minima. This means it there is no smooth iteration through data points as in Gradient Descent.

# Advantages of Stochastic Gradient Descent
- It is computationally fast as only one sample is processed at a time.
- It follows a random order of using sample data points, reducing the computations.
- For larger datasets it can converge faster as it causes updates to the parameters more frequently.
- Due to frequent updates the steps taken towards the minima of the loss function have oscillations which can help getting out of local minimums of the loss function (in case the computed position turns out to be the local minimum).

# Usage of Stochastic Gradient Descent
In Machine Learning or Data Science our task is to find the minimum values of a functions parameter to minimise the cost function as much as possible. This improves teh accuracy of analaysing or predicting data and reduces the deviations. 

So Stochastic Gradient Descent is mainly used for same purpose but it improves the computational time by a lot. Due to its randomness it can easily be applied on huge datasets and it takes lesser computational time.


# Conclusion
Stochastic Gradient Descent's functionality is same as gradient Descent. the main idea of this this is top reduce the computation time of finding the minima due to its random probability distribution.

## Now follow the Google colab notebook to get a clearer understanding of this through code implementation.
