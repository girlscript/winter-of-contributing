## Purpose
In this documentation, we will learn about the basic concept behind Bayesian Regression and know its usage/advantages by a practical implementation.
## What is Regression?
1) Regression is Supervised Machine Learning Techinque.<br>
2) It predicts continuous, real values and plots the 'best-fit' prediction graph.<br>
3) Minimum vertical distance is obtained between data points and the regression line.<br>
## Bayesian Regression
1) Bayesian is an 'approach' to solve regression problems.<br>
2) As the dataset could have poorly distributed values, Bayesian approach does not find the model parameters but focuses on the 'Posterior' distribution of the parameters included in the dataset.<br>
## Important types of Bayesian Regression-
As Bayesian is an 'approach' to Regression it can be applied to most Regression Techniques like:<br>
1)Bayesian Linear Regression<br>
2)Bayesian Logistic Regression<br>
3)Bayesian Ridge Regression<br>
4)Bayesian Lasso Regression<br>
3)Bayesian Polynomial Regression.<br>
## Main Mathematical Formula Involved
### => Posterior ∝ (Prior * Likelihood)
1) To find the 'best-fit' points, Normalization Probability Distribution techinique is used to find probability distribution of each model parameter in the dataset.This is known as the Posterior Distribution.<br>
2) So, when we have missing/invalid data, Bayesian approch uses priors instead of the invalid coefficients.
As usually the data is collected in 'real time' during Bayesian Approach, these 'priors' as the name suggests helps us to know/predict the expected value of a specific parameter before we have actually recieved the data in real-time.<br>
3) We then calculate the likelihood which refers to a function where the marginalization of parameter variable has occured.<br>
4) Using Product Rule between the two (Priors and Likelihood) gives the final Joint distribution value and helps to find the Posterior Distribution or the best-fit points so that the graph can easily be plotted.
## Implementation of Bayesian Regression
Link to the sample code - [bayesian_regression.ipynb](https://github.com/uttarabahad/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Bayesian%20Regression/bayesian_regression.ipynb)
#### I) Steps Followed During Implementation
1)We take two arrays(X ,Y) which states two different events/parameters that are occuring.<br>
2)To find the Posterior Values as specified above, we perform Product Rule using the assumed(priors);alpha and beta values.<br>
3)Like this the Posterior Values of all the parameters/events in the data set are calculated.<br>
4)These Posterior Values are the best-fit values obtained by Bayesian Aprroach and are then plotted suitable using the graph.<br>
#### II) Outcome of the Implementation
In the above Output Visualization-<br>
<img src='https://github.com/uttarabahad/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Bayesian%20Regression/Images/Curve.png'>
1) The orginal data points are represented by * symbols.<br>
2) The red curve shows us the 'best-fit' graph that could have been drawn,using Bayesian Regression Technique.<br>
## Advantages of Bayesian Regression
1) Very accurate for simple, small datasets.<br>
2) Very helpful when the data is recieved during real time and is not pre-processed or pre-stored.<br>
3) Handles missing data well and makes use of 'priors' effectively.
## Disadvantages of Bayesian Regression
1) Not very efficient for large datasets as it can be time consuming to find the best-fit points.<br>
2) It has a high computation cost as the posterior distribution calculation is very dependent on calculation of the priors.
## Conclusion
Using the Bayesian Approach is very accurate when we have smaller data sets as it is very robust mathematically.
