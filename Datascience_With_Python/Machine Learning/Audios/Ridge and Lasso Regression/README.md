## Ridge and Lasso Regression
## [Click here to listen the audio](https://drive.google.com/file/d/1SO3kgNh5fsiytWSiYe-Gojn7hNyFYUws/view?usp=sharing)

**Lasso Regression:**
- Lasso regression is a regularization technique. 
- It is used over regression methods for a more accurate prediction. 
- This model uses shrinkage. Shrinkage is where data values are shrunk towards a central point as the mean. The lasso procedure encourages simple, sparse models (i.e. models with fewer parameters). 
- This particular type of regression is well-suited for models showing high levels of multicollinearity or when you want to automate certain parts of model selection, like variable selection/parameter elimination.
- Lasso Regression uses L1 regularization technique (will be discussed later in this article). 
- It is used when we have more number of features because it automatically performs feature selection.
- If a regression model uses the L1 Regularization technique, then it is called Lasso Regression. 
- If it used the L2 regularization technique, it’s called Ridge Regression.

![image](https://user-images.githubusercontent.com/79050917/143799320-a70ae227-ea88-433d-a349-6aca114b07d9.png)


**Ridge Regression:**
- Ridge regression is a model tuning method that is used to analyse any data that suffers from multicollinearity. 
- This method performs L2 regularization. When the issue of multicollinearity occurs, least-squares are unbiased, and variances are large, this results in predicted values to be far away from the actual values. 

![image](https://user-images.githubusercontent.com/79050917/143799404-2f23475e-af82-4ef6-ab3a-c1388d54108f.png)

**Assumptions of Ridge Regressions**
- The assumptions of ridge regression are the same as that of linear regression: linearity, constant variance, and independence. 
- However, as ridge regression does not provide confidence limits, the distribution of errors to be normal need not be assumed.

**Advantages:**
- Avoids overfitting a model.
- They does not require unbiased estimators.
- They add just enough bias to make the estimates reasonably reliable approximations to true population values.
- They still perform well in cases of a large multivariate data with the number of predictors (p) larger than the number of observations (n).
- The ridge estimator is preferably good at improving the least-squares estimate when there is multicollinearity.

![image](https://user-images.githubusercontent.com/79050917/143799374-d8128f6f-b6a3-440e-88b4-c6b9f55419ee.png)

**Disadvantages:**
- They include all the predictors in the final model.
- They are unable to perform feature selection.
- They shrink the coefficients towards zero.
- They trade the variance for bias.

**Overview:**
- L1 regularization adds a penalty that is equal to the absolute value of the magnitude of the coefficient. 
- This regularization type can result in sparse models with few coefficients. 
- Some coefficients might become zero and get eliminated from the model. 
- Larger penalties result in coefficient values that are closer to zero (ideal for producing simpler models). 
- On the other hand, L2 regularization does not result in any elimination of sparse models or coefficients. 
- Thus, Lasso Regression is easier to interpret as compared to the Ridge.
