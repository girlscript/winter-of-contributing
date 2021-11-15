## Multicollinearity using Ridge Regression 

## Video link : [Multicollinearity using Ridge Regression](https://drive.google.com/file/d/1DTnS9jg5DV1BkBz1r7MaCDWkQKY7EABM/view?usp=sharing)

## What is Multicollinearity?

- Multicollinearity generally occurs when there are high correlations between two or more predictor variables. 
- In other words, one predictor variable can be used to predict the other. 
- This creates redundant information, skewing the results in a regression model. 
- Examples of correlated predictor variables (also called multicollinear predictors) are: a person’s height and weight, age and sales price of a car, or years of education and annual income.
- An easy way to detect multicollinearity is to calculate correlation coefficients for all pairs of predictor variables. 
- If the correlation coefficient, r, is exactly +1 or -1, this is called perfect multicollinearity. 
- If r is close to or exactly -1 or +1, one of the variables should be removed from the model if at all possible.

##  Multicollinearity using Ridge Regression ?

• Multicollinearity is a phenomenon in which two or more predictors in 
a multiple regression are highly correlated (R-squared more than 0.7), 
this can inflate our regression coefficients.
• We can test multicollinearity with the Variance Inflation Factor VIF is 
the ratio of variance in a model with multiple terms, divided by the 
variance of a model with one term alone.
• VIF = 1/1-R-squared. A rule of thumb is that if VIF > 10 then 
multicollinearity is high (a cutoff of 5 is also commonly used).
• To reduce multicollinearity we can use regularization that means to 
keep all the features but reducing the magnitude of the coefficients of 
the model.
• This is a good solution when each predictor contributes to predict 
the dependent variable.

• Ridge Regression performs a L2 regularization, i.e. adds penalty 
equivalent to square the magnitude of coefficients. 
• Minimize the sum of square of coefficients to reduce the impact of 
correlated predictors.
• Keeps all predictors in a model. 
• In Ridge Regression, we try to use a trend line that overfit the training 
data, and so, it has much higher variance then the OLS. 
• The main idea of Ridge regression is to fit a new line that doesn’t fit 
the training data. 
• In other words, we introduce a certain amount on bias into the new 
trend line.
• Ridge Regression Models
Following the usual notation, suppose our regression equation is 
written in matrix form as

![image](https://user-images.githubusercontent.com/63282184/135718952-c1d53ba0-af61-4d37-ac87-c620296fd250.png)


• where Y is the dependent variable, X represents the independent 
variables, B is the regression coefficients to be estimated, 
and e represents the errors are residuals.

![image](https://user-images.githubusercontent.com/63282184/135718976-88e29812-2798-4b19-adee-797f68bd3920.png)

• Ridge is a more restricted model, so this model overfit.
• A less complex model means worse performance on the training set, 
but if you over complex model, this is bad because can overfit. 
• How much importance the model places on simplicity versus training 
set performance can be specified by the user, using the alpha 
parameter. 
• In the previous example, we used the default parameter alpha=1.0 . 
• There is no reason why this will give us the best trade-off, though.
The optimum setting of alpha depends on the particular dataset we are 
using.


![image](https://user-images.githubusercontent.com/63282184/135718989-9de4dbc5-79df-447b-9ab6-7a23c90afed7.png)

![image](https://user-images.githubusercontent.com/63282184/135718997-8f2482c2-f8f2-4874-815b-17a5c7d397d8.png)

## Summary :
Ridge regression is a model tuning method that is used to analyse any data that suffers from multicollinearity.

This method performs L2 regularization. 

When the issue of multicollinearity occurs, least-squares are unbiased, and variances are large, this results in predicted values to be far away from the actual values. 



