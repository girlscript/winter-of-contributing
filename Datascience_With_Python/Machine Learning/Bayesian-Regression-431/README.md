## What is Regression?
1) Regression is Supervised Machine Learning Techinque.<br>
2) It predicts continuous, real values and plots the 'best-fit' prediction graph.<br>
3) Minimum vertical distance is obtained between data points and the regression line.<br>
## Bayesian Regression
1) Bayesian is an 'approach' to solve regression problems.<br>
2) As the dataset could have poorly distributed values, Bayesian approach does not find the model parameters but focuses on the 'Posterior' distribution of the parameters included in the dataset.<br>
## Main Mathematical Formula Involved
When we have missing/invalid data, Bayesian approch uses priors for the invalid coefficients.<br><br>
<a href="https://www.codecogs.com/eqnedit.php?latex=Posterior=\frac{(Likelihood*Prior)}{Normalization}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?Posterior=\frac{(Likelihood*Prior)}{Normalization}" title="Posterior=\frac{(Likelihood*Prior)}{Normalization}" /></a><br>
Here-<br>
a) Posterior refers to the probability that an event will occur.<br>
b) Likelihood refers to a function where the marginalization of parameter variable has occured.<br>
c) Prior as the name suggests tells us that some event has occurred before some other event.<br>
## Implementation of Bayesian Regression
Please refer to Bayesian_Regression.ipynb
## Advantages of Bayesian Regression
1) Very accurate for simple, small datasets.<br>
2) Very helpful when the data is recieved during real time and is not pre-processed or pre-stored.<br>
3) Handles missing data well and makes use of 'priors' effectively.
