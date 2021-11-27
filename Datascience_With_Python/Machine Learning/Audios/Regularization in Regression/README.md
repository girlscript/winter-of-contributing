## Regularization in Regression
## [Click here to listen the audio](https://drive.google.com/file/d/1kXIPODc3b743P9eNEuER_EHpNMvpFVOq/view?usp=sharing)

- Regularized regression is a type of regression where the coefficient estimates are constrained to zero. 
- The magnitude (size) of coefficients, as well as the magnitude of the error term, are penalized. 
- Complex models are discouraged, primarily to avoid overfitting.
- “Regularization” is a way to give a penalty to certain models (usually overly complex ones). 
- Ridge regression belongs to the set of L2 regularization tools. 
- L2 regularization adds a penalty called an L2 penalty, which is the same as the square of the magnitude of coefficients. 

![image](https://user-images.githubusercontent.com/79050917/143679611-33dbb20f-832c-4772-9e98-058913a33cad.png)

**Types of Regularized Regression**
- Ridge regression 
- Lasso regression 

![image](https://user-images.githubusercontent.com/79050917/143679626-bd0e00c5-d41c-4edd-af31-d29141baf679.png)

**Advantages:**
- Avoids overfitting a model.
- They does not require unbiased estimators.
- They add just enough bias to make the estimates reasonably reliable approximations to true population values.
- They still perform well in cases of a large multivariate data with the number of predictors larger than the number of observations (n).
- The ridge estimator is preferably good at improving the least-squares estimate when there is multicollinearity.

**Disadvantages:**
- They include all the predictors in the final model.
- They are unable to perform feature selection.
- They shrink the coefficients towards zero.
- They trade the variance for bias.

![image](https://user-images.githubusercontent.com/79050917/143679642-753bc824-e7b2-4ba2-b69f-756bdce867df.png)

**Conclusion:**
**Ridge regression:**
- Ridge regression is a way to create a parsimonious model when the number of predictor variables in a set exceeds the number of observations, or when a data set has multicollinearity (correlations between predictor variables).

**Lasso regression:**
- Lasso regression is a type of linear regression that uses shrinkage. Shrinkage is where data values are shrunk towards a central point, like the mean. 
- This type is very useful when you have high levels of muticollinearity or when you want to automate certain parts of model selection, like variable selection/parameter elimination.
