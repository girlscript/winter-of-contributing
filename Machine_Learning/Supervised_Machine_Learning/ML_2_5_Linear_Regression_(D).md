# Linear Regression 

## ***📍Introductuon***

In the initial learning curve of Machine Learning, perhaps, ***Linear regression*** is one of the most well-known and well-understood algorithms in statistics and machine learning.
It is one of the most common and simplest supervised machine learning algorithms, which comes under predictive modeling, in which we feed a labeled dataset with a continuous target variable to our linear model, which devices a rule while trying to find patterns on its way of getting trained to map the input variables to output variables.

Yes, the traditional programming paradigm is overturned as here we give the data along with the corresponding outputs and the model devices a rule mapping the input features in our dataset to the output features.

<img src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/ml_vs_traditional_paradigm.png" width=80% />

          
## ***📍Intuition for Linear Regression***
***House or car or stock price prediction, prediction of average rainfall, measuring the effect of fertilizer and water on crop yields***, and so forth, based on some independent features, involves ***regression analysis*** which is necessarily the estimation of the relationship between a ***continuous dependent variable*** and one or more ***independent variables***. This technique is widely applied to predict the outputs upon finding the effect and dependencies between the variables and the target output. Specifically, linear regression tries to fit a ***straight line*** to map the input features(s) to the continuous target. 

For example, if we consider predicting the average annual snowfall based on the independent feature temperature recorded over spans of 10 years, we get scattered data points as shown below, and to predict future average rainfall recorded annually, we train the model on the data to fit a line mapping the input to the output, and that line becomes the hypothesis or rule for any further predictions for unknown values of X<sub>s</sub> which is the year recorded as per here.

<img src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/eg.png" width=80% />

However, the word ***“Training a model”*** is a long and repetative process. In the above case, the model does not get to fit an optimal line to the dataset at one go, it is rather an iterative process for the model to learn from the data, update itself with respect to the error it makes, and finally, give us the best fit hypothesis.

## ***📍How the Linear Regression Works?***

Since we are trying to fit a linear hypothesis to our data, the equation or rule that our ML model devices takes the form of a ***straight line***, like the equation given below, where,

- X is the independent feature(s)

- Y is the target variable

- &theta;<sub>o</sub> and &theta;<sub>1</sub> are the parameters or weights, which the model learns iteratively throughout the training process to give the best fit line.

***y = &theta;<sub>o</sub>  + &theta;<sub>1</sub> X***

Let us consider training a linear regression with a single feature at the first place.

At the very first stage of model training, the model gets initialized with random values of &theta;<sub>s</sub> , thus gives the linear relation as,

 ***y = &theta;<sub>o</sub>  + &theta;<sub>1</sub> X***

Now, let us assume the line fits as follows( which evidently won't be a good fit due to the random initializations):

<img src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/erfit.PNG" width=80% /> 

Well, we clearly see that the model retuened a poor fit line, and the way our model learns how good or how bad it has performed is by a ***cost function***.

Now, the ***cost function*** is basically a measure of the error on the hypothesis, calculated as :

<img src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/cf.png" width=100% />

Where,

- ***&theta;:*** Weights of the hypothesis.
- ***h<sub>θ</sub>(xi):*** Predicted y value for ith input
- ***i:*** ith training example.
- ***m:*** Total number of training examples in the dataset
- ***y<sup>(i)</sup>:*** True value of y for ith input

It is basically the ***mean square error***, and, the term within the brackets for each data point, in the formula of cost function above, is the vertical distance marked by the red lines in the graph, that is the difference between the true output and the predicted output.

<img src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/ERROR.png" width=80% />

Thus, the higher the value of the cost function, the worse is the performance of our model. So, clearly, our goal is to minimize the cost function, thus minimizing the error. Hence, the model updates its parameters to get a better line, upon which again the cost is calculated, and this process is repeated till the model can compute a set of optimal parameters for the given dataset.

<img src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/LR.gif" width=80% />


Till here we are at a position defined as under:

<img src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/till goal.png" width=80% />


But, surely there are other forms of well-known cost functions for different machine learning problems. The cost function discussed above is one of the most common for linear regression problems.

## ***📍Gradient Descent***
Most commonly what converges the cost function to attain its minima, for a given dataset, based on the features, is the one-order optimization function for various supervised laerning algorithms called ***Gradient Descent***, which makes the use of ***differential calculus*** over the cost function and a hyperparameter ***learning rate*** &alpha; to simultaneously update the parameters &theta;<sub>s</sub> iteratively till its convergence against the most optimal value of &theta;<sub>s</sub> for that particular use case. It is widely used to train our linear regression models.

The guiding gradient descent takes the mathematical form as below:

<img src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/LR+GD.png" width=100% />

If we plot a graph between the ***&theta;<sub>s</sub>*** values and the ***cost function***, we necessarily get a ***parabola*** as shown below. Note that in the diagram below ***w*** is equivalent to ***&theta;***. 

<img src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/jvsw.png" width=100% />

While the ***derivative term*** in the ***gradient descent*** helps in the convergence of the cost function to its global minima over different sets of theta values, the ***&alpha;***, which is a positive term, is the learning rate that decides how big or small the simultaneous updates of theta values should be. Be it one the right or the left of the minima of the cost function curve, the derivative term adjusts its value in such a way that the updates of the &theta; values holds good for the convergence of the cost function.

But, it is to be noted that the value of the ***learning rate*** affects the time of convergence and efficiency of gradient descent. If &alpha; value is too small, gradient descent will converge very slowly whereas if the value of its is too high, gradient descent can overshoot the minima and fail to converge at all. So, it must be specified carefully. Mostly its value lies between `0.0 and 1.0`. 


## ***📍Types of Linear Regression***
So far we have discussed some examples with one independent feature, but we can always have the scope to train a linear regression model on two or multiple features tjat are somehow linearly influencing the dependent feature.

This leads to the types of linear regression as follows:
- ***Univariate linear regression:*** It is characterized by ***one independent variable***. Consider the price of the house based on only one field that is the size of the plot then that would be a simple linear regression.
- ***Bivariate Linear Regression:***  It is characterized by training with **two independent variables***. For instance, predicting the price of the house based on the total size of rooms and location.
- ***Multivariate Linear Regression:*** It is characterized by ***multiple independent variables***. The price of the house if depends on more than one like the size of the plot area, the economy, transportation, walkability, etc then it is considered as multiple linear regression, which is in most real-world scenarios.

<img src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/MV1.PNG" width=60% />


For bivariate or multivariate linear regression models, we can extend the entire regression optimization to give the formulations and computations as below:

<img src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/MV.jpg" width=80% />

Where,

- ***&theta;<sub>j</sub>:*** Weights of the hypothesis
- ***h<sub>θ</sub>(xi):*** Predicted y value for ith input
- ***j:*** Feature index number (can be 0, 1, 2, ......, n)
- ***&alpha;:*** Learning Rate of Gradient Descent
- ***m:*** Total number of training examples in the dataset
- ***n:*** Total number of features in the training set

We can rather use a ***vector represantation*** of the entire set of equations we came across till now,

<img src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/MV2.PNG" width=100% />

## ***📍Normal Equation***
This vector form is a compact representation of the above formulations. Practically, the vector notation is more useful when we compute our &theta; vector for the training feature vector using a normal equation, which, unlike the gradient descent algorithm, computes the theta values directly without repeated training.

***&theta; = ( X<sup>T</sup> )<sup>-1</sup> . ( X<sup>T</sup>y )***


## ***📍Differences between Gradient Descent and Normal Equation***
There may be situations where using linear regression is much better than gradient descent and vice versa.

<img src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/diff.png" width=100% />


## ***📍Advantages of Linear Regression***
- Linear Regression is simple to implement and makes it easier to interpret the output coefficients.	
- When we know the relationship between the independent and dependent variable have a linear relationship, this algorithm is the best to use because of it’s less complexity to compared to other algorithms.
- Linear Regression is susceptible to over-fitting but it can be avoided using some dimensionality reduction techniques, regularization (L1 and L2) techniques and cross-validation.	

## ***📍Disadvantages of Linear Regression***
- In linear regression technique outliers can have huge effects on the regression as boundaries are linear in this technique.
- Diversely, linear regression assumes a linear relationship between dependent and independent variables. That means it assumes that there is a straight-line relationship between them. It assumes independence between attributes, which does not holds good for all datasets.
- Evidently, linear regression looks at a relationship between the mean of the dependent variables and the independent variables. Just as the mean is not a complete description of a single variable, linear regression is not a complete description of relationships among variables.

## ***📍Some Important Terminologies***

- ***Linear Regression:*** A supervised learning algorithm that attempts to model the relationship between two variables by fitting a linear equation to observed data. 
- ***Independent variable:*** Also known as predictors, these are the variables that influences the target or dependent feature under observation.
- ***Dependent Variable:*** The feature under observation which is dependents on what are the corresponding values of the independent feature.
- ***Hypothesis:*** The equation or rule that the model devices to map the input feature(s) to the output features and utilizes it to predict on unkown feature variables.
- ***Cost function:*** A cost function is a mechanism utilized in supervised machine learning, the cost function returns the error between predicted outcomes compared with the actual outcomes.
- ***Gradient Descent:*** Gradient Descent is an optimization algorithm used for minimizing the cost function in various machine learning algorithms. It is basically used for updating the parameters of the learning model simultaneously over each iteration.
- ***Normal Equation:*** Normal Equation is an analytical approach to Linear Regression with a Least Square Cost Function in which we can directly find out the value of &theta;<sub>s</sub> without using Gradient Descent. This approach can an effective and time-saving option when we are working with a dataset with less number of features. 

 
<hr>

***Click [here](https://en.wikipedia.org/wiki/Linear_regression) to know more.***

***Image credits: [kdnuggets](https://www.kdnuggets.com/2019/03/beginners-guide-linear-regression-python-scikit-learn.html) and other related sources.***
 



