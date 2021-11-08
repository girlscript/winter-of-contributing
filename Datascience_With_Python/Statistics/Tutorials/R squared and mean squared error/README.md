# R squared and Mean squared error

## What is R-Squared?
R-squared evaluates the scatter of the data points around the fitted regression line.

R-squared is the percentage of the dependent variable variation that a linear model explains.

It is also called the coefficient of determination, or the coefficient of multiple determination for multiple regression.

![image](https://user-images.githubusercontent.com/88443158/140752678-2c6db153-a972-4435-b7ed-a84af2eae69d.png)

## Perfomance of the R squared model

R-squared is always between 0% and 100%.
 - 0% represents a model that does not explain any of the variations in the response variable around its mean. The mean of the dependent variable predicts the dependent variable as well as the regression model.
 - 100% represents a model that explains all of the variations in the response variable around its mean.
The high the value of R-square determines the less is the difference between the actual values and the predicted values therefore the result will be efficient.

## Implementation of R-Squared:

![](https://user-images.githubusercontent.com/88443158/140755009-83d643d7-2c27-4505-9c9b-f264928bca1a.PNG)

## Visual Representation of R-Squared

![](https://user-images.githubusercontent.com/88443158/140756105-9ecdcc99-0672-4b1b-bf00-2a4e56004afb.png)

## Advantages

 - R-square is a goodness-of-fit measure for linear regression models. This statistic indicates the percentage of the variance in the dependent variable that the independent variables explain collectively.
 - R-squared measures the strength of the relationship between your model and the dependent variable on a convenient 0 – 100% scale.
 - R-Squared captures the fraction of response variance captured by the regression and tend to give better picture of quality of regression model.

## Limitations
 - We cannot use R-squared to determine whether the coefficient estimates and predictions are biased, which is why you must assess the residual plots.
 - R-squared does not indicate if a regression model provides an adequate fit to your data. A good model can have a low R2 value. On the other hand, a biased model can have a high R2 value!

## What is Mean Squared Error?

The Mean Squared Error (MSE) or Mean Squared Deviation (MSD) of an estimator measures the average of error squares i.e. the average squared difference between the estimated values and true value.

It is a risk function, corresponding to the expected value of the squared error loss.

The MSE is the second moment of the error (about the origin) and thus incorporates both the variance of the estimator and its bias.

It is always non – negative and values close to zero are better.

![](https://user-images.githubusercontent.com/88443158/140758118-687ecbc8-d52a-41d6-95aa-40d961073f8d.png)

* N = Number of items,
* Y = Original values
* ŷ = Predicted values

## Implementation of Mean Squared Error

There are 2 ways using which we can find the error value of MSE that are listed below:

Method 1: Calculating MSE using Scikit-Learn:

![](https://user-images.githubusercontent.com/88443158/140760241-cabf1541-194e-46a8-9ed4-dd8f5444255a.PNG)

Method 2: Calculating MSE using Numpy:

![](https://user-images.githubusercontent.com/88443158/140760275-88e21c72-0dad-4d42-862e-d4ad64358476.PNG)

## Advantages

- MSE is used to check how close estimates or forecasts are to actual values. Lower the MSE, the closer is forecast to actual.
- The MSE is great for ensuring that our trained model has no outlier predictions with huge errors, since the MSE puts larger weight on theses errors due to the squaring part of the function.

## Disadvantages

- If our model makes a single very bad prediction, the squaring part of the function magnifies the error.
- Yet in many practical cases we don’t care much about these outliers and are aiming for more of a well-rounded model that performs good enough on the majority.
- The disadvantage of using MSE is that the value of MSE varies based on whether the values of response variable is scaled or not. If scaled, MSE will be lower than the unscaled values.

## Limitations

- MSE function is non-convex for binary classification. Thus, if a binary classification model is trained with MSE Cost function, it is not guaranteed to minimize the Cost function.
- A better measure is root mean squared error (RMSE) which takes even more care of the values of the response variable is scaled or not.

## Conclusion

We have already discussed that there are 2 different ways to get error value which are using R-Squared and Mean-Squared-Error. They vary on different conditions:

- Mean squared error (MSE) is the most commonly used loss function for regression. The loss is the mean overseen data of the squared differences between true and predicted values, or writing it as a formula.R-Squared represents the fraction of response variance captured by the regression model.
- Both R2 and MSE will never be negative, since we are always squaring the errors.
- Use MSE when doing regression, believing that your target, conditioned on the input, is normally distributed, and want large errors to be significantly (quadratically) more penalized than small ones.

## References

 1. [R-Squared - Great Learning](https://www.mygreatlearning.com/blog/r-square/)
 2. [Mean Squared Error - GeeksforGeeks](https://www.geeksforgeeks.org/python-mean-squared-error/#:~:text=The%20Mean%20Squared%20Error%20(MSE,of%20the%20squared%20error%20loss. )
 3. [R-Squared - towardsdatascience](https://towardsdatascience.com/demystifying-r-squared-and-adjusted-r-squared-52903c006a60)
