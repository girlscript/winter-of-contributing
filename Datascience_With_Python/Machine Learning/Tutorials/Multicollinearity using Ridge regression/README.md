**What is multicollinearity?**

Multicollinearity is when the correlation between the predictor variables is high. 

![Capture_3](https://user-images.githubusercontent.com/79050917/135652033-6f8c4c09-1c61-44f7-9378-b3e70686c03a.PNG)


**How can we predict multicollinearity?**

Generally, we can usually find correlations of predictor variables using a correlation matrix. The Thumb rule is when it is >85 it is called highly correlated, between 60-85, it is normally correlated and when <60, it is not correlated.

![Capture_4](https://user-images.githubusercontent.com/79050917/135652118-54e026f5-852a-4fc4-8b57-8a3db51f84a7.PNG)

**What happens when we have Multicollinearity?**
- It affects the performance of the model.
- Inaccurate results.

**How can we treat?**

Generally, we use regularization methods to solve multicollinearity.

**Multicollinearity using Ridge regression:**
- Ridge Regression performs an L2 regularization, i.e. adds penalty equivalent to square the magnitude of coefficients. Minimize the sum of the square of coefficients to reduce the impact of correlated predictors.
we introduce a certain amount of bias into the new trend line.
- The bias we introduce is called *LAMBDA*
- Formula: 

  lambda*slope^2
- The Lambda is a penalty term and this value is called Ridge Regression

![Capture_1](https://user-images.githubusercontent.com/79050917/135652233-7b5b8e90-4c0f-4413-bd04-dc8cbb5f5d32.PNG)



**Advantages:**
- Ridge Regression solves the problem of overfitting.
- Helps in better performance of the model.
- Increases the accuracy and reduces the complexity.

**Disadvantages:**
- They include all the predictors in the final model.
- They are unable to perform feature selection.
- They shrink the coefficients towards zero.
- They trade the variance for bias.

**Conclusion:**
 
Whenever we have a multicollinearity problem we always use regularization techniques. One of the most used regularization techniques is ridge regression. It helps to avoid overfitting and increases the model performance.
