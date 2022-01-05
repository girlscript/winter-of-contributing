## Ordinary Least Squares
## [Click here to listen the audio](https://drive.google.com/file/d/1_UK9fQUU7od_zV6mdaDMejBf1OfJr8vF/view?usp=sharing)
- OLS or Ordinary Least Squares is a method used in Linear Regression for estimating the unknown parameters by creating a model which will minimize the sum of the squared errors between the observed data and the predicted one.

![image](https://user-images.githubusercontent.com/79050917/143733388-796d0f7d-ac9e-436e-969c-41e7c602fe0c.png)

- Ordinary Least Squares method requires a machine learning algorithm called “Gradient Descent”.

**Advantages:**
- It has earned its place as the primary tool for process modeling because of its effectiveness and completeness.
- Though there are types of data that are better described by functions that are nonlinear in the parameters, many processes in science and engineering are well-described by linear models. 
- This is because either the processes are inherently linear or because, over short ranges, any process can be well-approximated by a linear model.

![image](https://user-images.githubusercontent.com/79050917/143733552-dd1a4bcd-b613-4343-a10f-582a5cfe3a16.png)

**Disadvantages:**
- The main disadvantages of ordinary least squares are limitations in the shapes that linear models can assume over long ranges, possibly poor extrapolation properties, and sensitivity to outliers.
- This models with nonlinear terms in the predictor variables curve relatively slowly, so for inherently nonlinear processes it becomes increasingly difficult to find a linear model that fits the data well as the range of the data increases. 
- As the explanatory variables become extreme, the output of the linear model will also always more extreme. This means that linear models may not be effective for extrapolating the results of a process for which data cannot be collected in the region of interest. 
- Of course extrapolation is potentially dangerous regardless of the model type.

![image](https://user-images.githubusercontent.com/79050917/143733578-9b125b0d-1790-4005-abe3-4209896a15a7.png)

**Overview:**
- The OLS estimator is consistent when the regressors are exogenous, and—by the Gauss–Markov theorem—optimal in the class of linear unbiased estimators when the errors are homoscedastic and serially uncorrelated. 
- Under these conditions, the method of OLS provides minimum-variance mean-unbiased estimation when the errors have finite variances. 
