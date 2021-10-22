# Maximum Likelihood Estimation (D)

## Definition

The Maximum Likelihood Estimation is a method that measures any parameter of a model based on the likeliness of the same. It is the statistical method of estimating the parameters of the probability distribution by maximizing the likelihood function. The point in which the parameter value that maximizes the likelihood function is called the maximum likelihood estimate. 

## Basic Idea

The concept was first porposed by Ronald Fisher in the 1920s. He said that the probability distribution is the one that makes the parameter observed <i>more likely</i>.

## Goal

Maximum Likelihood Estimation or MLE considers the porblem as an Optimization problem or a Search Problem, where we seek such parameters which would result in the best fit for the joint probability of the data sample.

## Example

### Below given is a normal distribution

<img src = "https://www.statisticshowto.com/wp-content/uploads/2013/09/normal-distribution-probability.jpg">

### Run the below comands to plot a similar distribution in python


```python
#importing all required packages like matplotlib, numpy and math
import matplotlib.pyplot as plt
import numpy as np
import scipy.stats as stats
import math

mu = 0
variance = 1
sigma = math.sqrt(variance)#standard deviation
x = np.linspace(mu - 3*sigma, mu + 3*sigma, 100)
plt.plot(x, stats.norm.pdf(x, mu, sigma))#plotting a normal distribution
plt.show()
```

Lets start with the example:

<u><b><i>Experiment</i></b></u>: Taking 30 marbles of varying sizes, weights and structure. We are going to take into consideration a specific parameter out of the 3 parameters: <b>weight</b>. We are going to plot this parameter on a straight line and compare it with a normal distribution to find out the likeliness of that paramater.


<img src = "https://github.com/amitrakshar01/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/Assets/design.png">


The black circles on the straight line represents the marbles. The dotted straight line represents the average of the weights of the marbles. As we can see that most of the marbles lie very near to the mean of the weights, we can say that this parameter is the most likely factor for this probability distribution.

<img src = "https://github.com/amitrakshar01/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/Assets/image_2021-09-18_19-40-53.png">

From the above image we can see that if we shift the distribution from left to right, the graph on the top of the same picture denoting the likeliness of factor weight with the distribution shifting from left to right. The topmost position the graph represents the most likely parameter.

## A question may arise that, if likelihood is so related to probability then what is the difference?

The term Likelihood and Probability means the same. But, in the language of Statistics, Likelihood refers to the situation or example or experiment provided above, where we are trying to find the optimal value for the mean for the distribution, provided a lot of parameters and one to be optimized.
