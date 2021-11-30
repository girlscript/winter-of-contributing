## R squared and Mean squared error 
## [Click here to listen the audio](https://drive.google.com/file/d/1NXnw4haJyCbwGlV3yPCEB-B6Wd_alvEY/view?usp=sharing)

**Mean Squared Error (MSE)**
- It is the average of sum of squared difference between actual value and the predicted or estimated value. 
- It is also termed as mean squared deviation (MSD). 
- This is how it is represented mathematically:

![image](https://user-images.githubusercontent.com/79050917/143680235-97bd9eef-96fb-4f81-a6da-77364bc2b872.png)

**R-Squared**
- R-Squared is the ratio of Sum of Squares Regression (SSR) and Sum of Squares Total (SST). 
- Sum of Squares Regression is amount of variance explained by the regression line. 
- R-squared value is used to measure the goodness of fit. 
- Greater the value of R-Squared, better is the regression model. 
- However, we need to take a caution. This is where adjusted R-squared concept comes into picture. 
- This would be discussed in one of the later posts. R-Squared is also termed as the coefficient of determination. 

![image](https://user-images.githubusercontent.com/79050917/143680261-1537db21-497c-4ca0-8c97-b0862ecd2f5c.png)

**Difference between Mean Square Error & R-Squared**
- The similarity between mean-squared error and R-Squared is that they both are a type of metrics which are used for evaluating the performance of the regression models, especially statistical model such as linear regression model. 
- The difference is that MSE gets pronounced based on whether the data is scaled or not.
- For example, if the response variable is housing price in the multiple of 10K, MSE will be different (lower) than when the response variable such as housing pricing is not scaled (actual values). This is where R-Squared comes to the rescue. 
- R-Squared is also termed as the standardized version of MSE.
- R-squared represents the fraction of variance of response variable captured by the regression model rather than the MSE which captures the residual error.

**Conclusions:**
- MSE represents the residual error which is nothing but sum of squared difference between actual values and the predicted / estimated values.
- R-Squared represents the fraction of response variance captured by the regression model
