# Regularization in Regression

## Video Link : [Regularization in Regression](https://drive.google.com/file/d/1ZX6F1YzlG51ioNqW0w628ZBVJ55aASuO/view?usp=sharing)

## Regression: 

The regression model is a statistical procedure that allows us to estimate the linear or polynomial relationship that relates two or more variables. It is mainly based on the amount of change on the output variable for a significant change in the predictor variables, basically the correlation between the variables.

## Regression can be classified as:
- Linear Regression
- Polynomial Regression
- Logistic Regression
- Ridge Regression
- Lasso Regression
- Elasticnet regression

## Regularization: 
- Regularization is a very important concept that is used to avoid overfitting of the data especially when the trained and tested data are much varying.
- Regularization is implemented by adding a “penalty” term to the best fit derived from the trained data, in order to achieve a lesser variance with the tested data and also restricts the influence of predictor variables over the output variable by compressing their coefficients.

## Ridge Regression
Ridge regression is a technique that is implemented by adding bias to a multilinear regression model to expect a much accurate regression with tested data at a cost of losing accuracy for the training data.

The general equation of a best-fit line for multilinear regression is
```
y = β0 + β1x1 + β2x2 + ··· βkxk
```

where y is the output variable and x1,x2…xk are predictor variables.

The penalty term for ridge regression is λ(slope) ², where lambda denotes the degree of deflection from the original curve by restricting the coefficients of predictor variables but never makes them zero.

Therefore the equation for ridge regression is
```
y = β0 + β1x1 + β2x2 + ··· βkxk + λ(slope) ²

```

Let us consider an example by taking the salary_data dataset, the ridge regression-scatter plot using lambda value as 100 :

![image](https://user-images.githubusercontent.com/63282184/143524369-bb662d03-a16b-43fa-906f-8923c81e0581.png)

## Lasso Regression
- Lasso regression is much similar to ridge regression but only differs in the penalty term.
- The penalty for lasso regression is λ|slope|.
- Lasso regression can even eliminate the variables by making their coefficients to zero thus removing the variables that have high covariance with other predictor variables.
- The equation for lasso regression is

```
y = β0 + β1x1 + β2x2 + ··· βkxk + λ|slope|
```
Consedring the same example for the lasso regression, the lasso regression-scatter plot using a lambda value as 10000 is:

![image](https://user-images.githubusercontent.com/63282184/143524524-3f3d90a9-3fc5-44a2-aaf4-044f49f24d0b.png)

### Comparison of lasso and ridge with the linear regression model, we get:

![image](https://user-images.githubusercontent.com/63282184/143524586-3019ce31-d9e1-4f01-b055-b0fb848452f3.png)


## Elasticnet regression 
It is just a fancier combination of both ridge and lasso regressions that is capable of removing an overfitting model to a greater extent.

With a proper value of lambda chosen, the model can be regularized and accuracy can be achieved.


## Advantages

- Avoids overfitting a model.
- They does not require unbiased estimators.
- They add just enough bias to make the estimates reasonably reliable approximations to true population values.
- They still perform well in cases of a large multivariate data with the number of predictors (p) larger than the number of observations (n).
- The ridge estimator is preferably good at improving the least-squares estimate when there is multicollinearity.

## Disadvantages

- They include all the predictors in the final model.
- They are unable to perform feature selection.
- They shrink the coefficients towards zero.
- They trade the variance for bias.
