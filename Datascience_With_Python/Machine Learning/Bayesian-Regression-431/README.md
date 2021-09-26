## What is Regression?
1) Regression is Supervised Machine Learning Techinque.<br>
2) It predicts continuous, real values and plots the 'best-fit' prediction graph.<br>
3) Minimum vertical distance is obtained between data points and the regression line.<br>
## Bayesian Regression
1) Bayesian is an 'approach' to solve regression problems.<br>
2) As the dataset could have poorly distributed values, Bayesian approach does not find the model parameters but focuses on the 'Posterior' distribution of the parameters included in the dataset.<br>
## Main Mathematical Formula Involved
<a href="https://www.codecogs.com/eqnedit.php?latex=Posterior=\frac{(Likelihood*Prior)}{Normalization}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?Posterior=\frac{(Likelihood*Prior)}{Normalization}" title="Posterior=\frac{(Likelihood*Prior)}{Normalization}" /></a><br><br>
1) To find the 'best-fit' points, Normalization Probability Distribution techinique is used to find probability distribution of each model parameter in the dataset.This is known as the Posterior Distribution.<br>
2) So, when we have missing/invalid data, Bayesian approch uses priors instead of the invalid coefficients.
As usually the data is collected in 'real time' during Bayesian Approach, these 'priors' as the name suggests helps us to know/predict the expected value of a specific parameter before we have actually recieved the data in real-time.<br>
3) We then calculate the likelihood which refers to a function where the marginalization of parameter variable has occured.<br>
4) Using Product Rule between the two (Priors and Likelihood) gives the final Joint distribution value and helps to find the Posterior Distribution or the best-fit points so that the graph can easily be plotted.
## Implementation of Bayesian Regression
Please refer to Bayesian_Regression.ipynb
## Advantages of Bayesian Regression
1) Very accurate for simple, small datasets.<br>
2) Very helpful when the data is recieved during real time and is not pre-processed or pre-stored.<br>
3) Handles missing data well and makes use of 'priors' effectively.
## Disadvantages of Bayesian Regression
1) Not very efficient for large datasets as it can be time consuming to find the best-fit points.<br>
2) It has a high computation cost as the posterior distribution calculation is very dependent on calculation of the priors.
