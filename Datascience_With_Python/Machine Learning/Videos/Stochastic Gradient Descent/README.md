# Stochastic Gradient Descent

## Video Link: [Stochastic Gradient Descent](https://drive.google.com/file/d/1sAwmYjKAYjfeRUJCVcoeqA4sn29lc0oP/view?usp=sharing)

### Stochastic gradient descent (often abbreviated SGD) is an iterative method for optimizing an objective function with suitable smoothness properties (e.g. differentiable or subdifferentiable).

Stochastic gradient descent is a very popular and common algorithm used in various Machine Learning algorithms, most importantly forms the basis of Neural Networks.

## What is the objective of Gradient Descent?
Gradient, in plain terms means slope or slant of a surface. So gradient descent literally means descending a slope to reach the lowest point on that surface. Let us imagine a two dimensional graph, such as a parabola in the figure below

![image](https://user-images.githubusercontent.com/63282184/143445261-06370547-9c49-47ec-b36d-d42e138d5222.png)

In the above graph, the lowest point on the parabola occurs at x = 1. The objective of gradient descent algorithm is to find the value of “x” such that “y” is minimum. “y” here is termed as the objective function that the gradient descent algorithm operates upon, to descend to the lowest point.

## Gradient Descent — the algorithm

Lets use linear regression problem to explain gradient descent algorithm. The objective of regression, as we recall , it is to minimize the sum of squared residuals. We know that a function reaches its minimum value when the slope is equal to 0. By using this technique, we solved the linear regression problem and learnt the weight vector. The same problem can be solved by gradient descent technique.

This algorithm is useful in cases where the optimal points cannot be found by equating the slope of the function to 0. In the case of linear regression, you can mentally map the sum of squared residuals as the function “y” and the weight vector as “x” in the parabola above.

## The steps of the algorithm are

```
1.Find the slope of the objective function with respect to each parameter/feature. In other words, compute the gradient of the function.
2.Pick a random initial value for the parameters. (To clarify, in the parabola example, differentiate “y” with respect to “x”. If we had more features like x1, x2 etc., we take the partial derivative of “y” with respect to each of the features.)
3.Update the gradient function by plugging in the parameter values.
4.Calculate the step sizes for each feature as : step size = gradient * learning rate.
5. Calculate the new parameters as : new params = old params -step size
6.Repeat steps 3 to 5 until gradient is almost 0.
```

The “learning rate” mentioned above is a flexible parameter which heavily influences the convergence of the algorithm. Larger learning rates make the algorithm take huge steps down the slope and it might jump across the minimum point thereby missing it. So, it is always good to stick to low learning rate such as 0.01. It can also be mathematically shown that gradient descent algorithm takes larger steps down the slope if the starting point is high above and takes baby steps as it reaches closer to the destination to be careful not to miss it and also be quick enough.

## Stochastic Gradient Descent (SGD)
**There are a few downsides of the gradient descent algorithm.** We need to take a closer look at the amount of computation we make for each iteration of the algorithm.
Say we have 10,000 data points and 10 features. The sum of squared residuals consists of as many terms as there are data points, so 10000 terms in our case. We need to compute the derivative of this function with respect to each of the features, so in effect we will be doing 10000 * 10 = 100,000 computations per iteration. It is common to take 1000 iterations, in effect we have 100,000 * 1000 = 100000000 computations to complete the algorithm. That is pretty much an overhead and hence gradient descent is slow on huge data.

### Stochastic gradient descent comes to our rescue !! “Stochastic”, in plain terms means “random”.

## Now the question arises Where can we potentially induce randomness in our gradient descent algorithm??
- Yes, you might have guessed it right !! It is while selecting data points at each step to calculate the derivatives. SGD randomly picks one data point from the whole data set at each iteration to reduce the computations enormously.
- It is also common to sample a small number of data points instead of just one point at each step and that is called “mini-batch” gradient descent. Mini-batch tries to strike a balance between the goodness of gradient descent and speed of SGD

## Advantages of Stochastic Gradient Descent
- It is easier to fit in the memory due to a single training example being processed by the network.
- It is computationally fast as only one sample is processed at a time.
- For larger datasets, it can converge faster as it causes updates to the parameters more frequently.
- Due to frequent updates, the steps taken towards the minima of the loss function have oscillations that can help to get out of the local minimums of the loss function (in case the computed position turns out to be the local minimum).

## Disadvantages of Stochastic Gradient Descent
- Due to frequent updates, the steps taken towards the minima are very noisy. This can often lean the gradient descent into other directions.
- Also, due to noisy steps, it may take longer to achieve convergence to the minima of the loss function.
- Frequent updates are computationally expensive because of using all resources for processing one training sample at a time.
- It loses the advantage of vectorized operations as it deals with only a single example at a time.
