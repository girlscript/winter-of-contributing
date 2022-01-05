
## LEAST  ANGLE  REGRESSION:

### INTRODUCTION:

In statistics, least-angle regression (LARS) is an algorithm for fitting linear regression models to high-dimensional data, developed by Bradley Efron, Trevor Hastie, Iain Johnstone and Robert Tibshirani.

Suppose we expect a response variable to be determined by a linear combination of a subset of potential covariates. Then the LARS algorithm provides a means of producing an estimate of which variables to include, as well as their coefficients.

Instead of giving a vector result, the LARS solution consists of a curve denoting the solution for each value of the L1 norm of the parameter vector. The algorithm is similar to forward stepwise regression, but instead of including variables at each step, the estimated parameters are increased in a direction equiangular to each one's correlations with the residual.

It is an alternative approach to solving the optimization problem of fitting the penalized model. Technically, LARS is a forward stepwise version of feature selection for regression that can be adapted for the Lasso model.

Unlike the Lasso, it does not require a hyperparameter that controls the weighting of the penalty in the loss function. Instead, the weighting is discovered automatically by LARS.

### PURPOSE:

" *… least angle regression (LARS), is a broad framework that encompasses the lasso and similar models. The LARS model can be used to fit lasso models more efficiently, especially in high-dimensional problems.*"

### Properties derived:

Least Angle Regression (LARS), a new model selection algorithm, is a useful and less greedy version of traditional forward selection methods. Three main properties are derived:

(1) A simple modification of the LARS algorithm implements the Lasso, an attractive version of ordinary least squares that constrains the sum of the absolute regression coefficients; the LARS modification calculates all possible Lasso estimates for a given problem, using an order of magnitude less computer time than previous methods. 
 
(2) A different LARS modification efficiently implements Forward Stagewise linear regression, another promising new model selection method; this connection explains the similar numerical results previously observed for the Lasso and Stagewise, and helps us understand the properties of both methods, which are seen as constrained versions of the simpler LARS algorithm.
 
(3) A simple approximation for the degrees of freedom of a LARS estimate is available, from which we derive a Cp estimate of prediction error; this allows a principled choice among the range of possible LARS estimates. LARS and its variants are computationally efficient: the paper describes a publicly available algorithm that requires only the same order of magnitude of computational effort as ordinary least squares applied to the full set of covariates.

### Working:

-Assume for simplicity that we've standardized our explanatory variables to have zero mean and unit variance, and that our response variable also has zero mean.

-Start with no variables in your model.

-Find the variable  x1  most correlated with the residual. (Note that the variable most correlated with the residual is equivalently the one that makes the least angle with the residual, whence the name.)

-Move in the direction of this variable until some other variable  x2  is just as correlated.

-At this point, start moving in a direction such that the residual stays equally correlated with  x1  and  x2  (i.e., so that the residual makes equal angles with both variables), and keep moving until some variable  x3  becomes equally correlated with our residual.

-And so on, stopping when we've decided our model is big enough.

For example, consider the following image (slightly simplified from the original LARS paper;  x1,x2  are our variables, and  y  is our response):



![larexp.png](attachment:larexp.png)

-Our model starts at  μ0^ .

-The residual (the green line) makes a smaller angle with  x1  than with  x2 , so we start moving in the direction of  x1 .

-At  μ1^ , the residual now makes equal angles with  x1,x2 , and so we start moving in a new direction that preserves this equiangularity/equicorrelation.

-If there were more variables, we'd change directions again once a new variable made equal angles with our residual, and so on.

## Pros and Cons:

The advantages of the LARS method are:

1.It is computationally just as fast as forward selection.

2.It produces a full piecewise linear solution path, which is useful in cross-validation or similar attempts to tune the model.

3.If two variables are almost equally correlated with the response, then their coefficients should increase at approximately the same rate. The algorithm thus behaves as intuition would expect, and also is more stable.

4.It is easily modified to produce efficient algorithms for other methods producing similar results, like the lasso and forward stagewise regression.

5.It is effective in contexts where p >> n (i.e., when the number of predictors p is significantly greater than the number of points n)


The disadvantages of the LARS method include:

1.With any amount of noise in the dependent variable and with high dimensional multicollinear independent variables, there is no reason to believe that the selected variables will have a high probability of being the actual underlying causal variables. This problem is not unique to LARS, as it is a general problem with variable selection approaches that seek to find underlying deterministic components. Yet, because LARS is based upon an iterative refitting of the residuals, it would appear to be especially sensitive to the effects of noise. This problem is discussed in detail by Weisberg in the discussion section of the Efron et al. (2004) Annals of Statistics article. Weisberg provides an empirical example based upon re-analysis of data originally used to validate LARS that the variable selection appears to have problems with highly correlated variables.

2.Since almost all high dimensional data in the real world will just by chance exhibit some fair degree of collinearity across at least some variables, the problem that LARS has with correlated variables may limit its application to high dimensional data.


### Conclusion:

Least Angle Regression (LARS) is the best algorithm used in regression for high dimensional data. It is computationally as fast as forward selection but may sometimes be more accurate.
Numerically very efficient when the number of features is much larger than the number of data instances.
It can easily be modified to produce solutions for other estimators.
