# Evaluation Metrics

Evaluating a machine learning algorithm is an essential part of any project. A model may give satisfying results when evaluated using a metric say accuracy_score but may give poor results when evaluated against other metrics such as *r-squared*, *mean squared error* or any other such metric. Most of the times we use classification accuracy to measure the performance of our model, however it is not enough to truly judge our model. 

## Link for the Video:

[![Picture1](https://user-images.githubusercontent.com/62233992/136450703-cd4730d7-5625-4806-9286-1829910eb5ca.png)](https://youtu.be/1LLpFmGaAgo)

## What is R-squared?

R-squared is a statistical measure of how close the data are to the fitted regression line. 

It is the percentage of the response variable variation that is explained by a linear model.

![image](https://user-images.githubusercontent.com/62233992/136450275-0e3be8a4-3bf6-4b4b-8518-48c60a6d2eb7.png)

It is also called a coefficient of determination, or coefficient of multiple determination for multiple regression.

### The Parameter in deciding performance of the model:

R-squared is always between 0 and 100%:

* 0% indicates that the model explains none of the variability of the response data around its mean.
* 100% indicates that the model explains all the variability of the response data around its mean.

The high value of R-square determines the less difference between the predicted values and actual values and hence represents a good model.

### Graphical Representation of R-squared

![image](https://user-images.githubusercontent.com/62233992/136452797-12b59735-fd88-4571-87c8-d87f25bfdb0e.png)

### Implementation

![image](https://user-images.githubusercontent.com/62233992/136770628-37371480-8a00-46db-a0f9-965fa095ef19.png)

### Advantages

* It is recommended to use R-Squared or rather adjusted R-Squared for evaluating the model performance of the regression models.
* This is primarily because R-Squared captures the fraction of response variance captured by the regression and tend to give better picture of quality of regression model.
* The goodness of fit of regression models can be analyzed perfectly on the basis of R-square method. The more the value of r-square near to 1, the better is the model. The value of R-square can also be negative when the models fitted is worse than the average fitted model.

### Key Limitations of R-squared

* R-squared cannot determine whether the coefficient estimates, and predictions are biased, which is why you must assess the residual plots.
* R-squared does not indicate whether a regression model is adequate. You can have a low R-squared value for a good model, or a high R-squared value for a model that does not fit the data!


## What is Mean Squared Error?

The Mean Squared Error (MSE) or Mean Squared Deviation (MSD) of an estimator measures the average of error squares i.e., the average squared difference between the estimated values and true value. 

It is a risk function, corresponding to the expected value of the squared error loss. 

It is always non – negative and values close to zero are better. 

The MSE is the second moment of the error (about the origin) and thus incorporates both the variance of the estimator and its bias.

![image](https://user-images.githubusercontent.com/62233992/136450160-6fc36707-783f-4c25-a926-e44de2e75226.png)
* n = number of items,
* Σ = summation notation,
* Actual = original or observed y-value,
* Forecast = y-value from regression

### Graphical Representation of MSE

![image](https://user-images.githubusercontent.com/62233992/136453062-672c9b20-64fd-4174-84d5-ebb3cfed0343.png)

### Implementation

1. Code 1: MSE using Sckit-learn

![image](https://user-images.githubusercontent.com/62233992/136770931-dee0428d-4f0a-4c7a-bd3a-109a0bee12c2.png)

2. Code 2: MSE using numpy module

![image](https://user-images.githubusercontent.com/62233992/136771189-62ec1325-238b-4bc0-80b4-f18eb9357633.png)


### Advantages

* Sensitive to outliers, punishes larger error more not like the r-squared which is not sensitive to outliers.
* MSE values takes care of the fact related to whether the values of the response vairable is scaled or not, unlike the r-squared.
* MSE is a good choice for a Cost function when we are doing Linear Regression (i.e fitting a line through data for extrapolation).

### Key Limitaions

* In the absence of any knowledge of how the data is distributed assuming normal/gaussian distribution mse becomes useless.
* MSE function is non-convex for binary classification. Thus, if a binary classification model is trained with MSE Cost function, it is not guaranteed to minimize the Cost function.
* A better measure is root mean squared error (RMSE) which takes even more care of the values of the response variable is scaled or not.


### Conclusion

So, in conclusion we come out with what to use either mean square error (MSE) or R-Squared in the given condition:

* MSE represents the residual error which is nothing but sum of squared difference between actual values and the predicted / estimated values. R-Squared represents the fraction of response variance captured by the regression model.
* R-squared does not indicate whether a regression model is adequate. You can have a low R-squared value for a good model, or a high R-squared value for a model that does not fit the data!
* The disadvantage of using MSE is that the value of MSE varies based on whether the values of response variable is scaled or not. If scaled, MSE will be lower than the unscaled values. 

## References:

* [Python | Coefficient of Determination-R2 score - GeeksforGeeks](https://www.geeksforgeeks.org/python-coefficient-of-determination-r2-score/#:~:text=Coefficient%20of%20determination%20also%20called,input%20independent%20variable(s).)
* [Python | Mean Squared Error - GeeksforGeeks](https://www.geeksforgeeks.org/python-mean-squared-error/#:~:text=The%20Mean%20Squared%20Error%20(MSE,of%20the%20squared%20error%20loss. )
