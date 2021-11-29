## Least angle Regression (LARS)
## [Click here to listen the audio](https://drive.google.com/file/d/1EW1GMYquw7J63_lVoAIjuFQWyZUIs4f5/view?usp=sharing)

- Regression is a supervised machine learning task that can predict continuous values (real numbers), as compared to classification, that can predict categorical or discrete values.
- Least Angle Regression (LARS) is an algorithm used in regression for high dimensional data (i.e., data with a large number of attributes). 
- Least Angle Regression is somewhat similar to forward stepwise regression.
- Since it is used with data that has lots of attributes, at each step, LARS finds the attribute which is most highly correlated to the target value. 
- There may be more than one attribute that has the same correlation. 
- In this scenario, LARS averages the attributes and proceeds in a direction that is at the same angle to the attributes. 
- This is exactly why this algorithm is called Least Angle regression. Basically, LARS makes leaps in the most optimally calculated direction without overfitting the model. 
- When we have two variables that have the same correlation, move the regression line at an angle that is in between (i.e., least angle between the two variables).
Continue this until all of our data is exhausted or until you think the model is big and ‘general’ enough.

![image](https://user-images.githubusercontent.com/79050917/143807892-cb5455a4-66e1-4f42-b42e-10207e77a433.png)

**Algorithm:**
    - Normalize all values to have zero mean and unit variance.
    Find a variable that is most highly correlated to the residual. Move the regression line in this direction until we reach another variable that has the same or higher correlation.

![image](https://user-images.githubusercontent.com/79050917/143807920-76e60c32-f4a2-4546-be23-9384da0db3be.png)
 
**Mathematically, LARS works as follows :**
- All coefficients, ‘B’ are set to 0.
- The predictor, xj is found that is most correlated to y.
- Increase the coefficient Bj in the direction that is most correlated with y and stop when you find some other predictor xk the has equal or higher correlation than xj.
- Extend (Bj, Bk) in a direction that is equiangular (has the same angle) to both xj and xk.
- Continue and repeat until all predictors are in the model.

**Advantages** 
- It is computationally just as fast as forward selection.
- It produces a full piecewise linear solution path, which is useful in cross-validation or similar attempts to tune the model.
- If two variables are almost equally correlated with the response, then their coefficients should increase at approximately the same rate. The algorithm thus behaves as intuition would expect, and also is more stable.
- It is easily modified to produce efficient algorithms for other methods producing similar results, like the lasso and forward stagewise regression.

![image](https://user-images.githubusercontent.com/79050917/143807945-52502a58-32f6-4a83-aba7-bed88d1cb69e.png)

**Disadvantages:**
- With any amount of noise in the dependent variable and with high dimensional multicollinear independent variables, there is no reason to believe that the selected variables will have a high probability of being the actual underlying causal variables. 
- This problem is not unique to LARS, as it is a general problem with variable selection approaches that seek to find underlying deterministic components. 
- Yet, because LARS is based upon an iterative refitting of the residuals, it would appear to be especially sensitive to the effects of noise. This problem is discussed in detail by Weisberg in the discussion section of the Efron et al. (.
- Since almost all high dimensional data in the real world will just by chance exhibit some fair degree of collinearity across at least some variables, the problem that LARS has with correlated variables may limit its application to high dimensional data.

![image](https://user-images.githubusercontent.com/79050917/143807971-f07e15a0-3068-4f4e-a81c-2f24bcc2a78c.png)

**Overview:**
- Regression is a supervised machine learning task that can predict continuous values (real numbers), as compared to classification, that can predict categorical or discrete values.
- Least Angle Regression (LARS) is an algorithm used in regression for high dimensional data (i.e., data with a large number of attributes). 



 




