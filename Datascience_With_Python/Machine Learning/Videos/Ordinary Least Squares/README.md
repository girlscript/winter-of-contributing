# Ordinary Least Squares

## Video Link : [Ordinary Least Squares](https://drive.google.com/file/d/1yIvVCbY_Q5sZE4m8HLSpwU4zD4KtZsSC/view?usp=sharing)


- In statistics, ordinary least squares (OLS) is a type of linear least squares method for estimating the unknown parameters in a linear regression model. OLS chooses the parameters of a linear function of a set of explanatory variables by the principle of least squares: minimizing the sum of the squares of the differences between the observed dependent variable (values of the variable being observed) in the given dataset and those predicted by the linear function of the independent variable.

- Geometrically, this is seen as the sum of the squared distances, parallel to the axis of the dependent variable, between each data point in the set and the corresponding point on the regression surface—the smaller the differences, the better the model fits the data. The resulting estimator can be expressed by a simple formula, especially in the case of a simple linear regression, in which there is a single regressor on the right side of the regression equation.

- The OLS estimator is consistent when the regressors are exogenous, and—by the Gauss–Markov theorem—optimal in the class of linear unbiased estimators when the errors are homoscedastic and serially uncorrelated. Under these conditions, the method of OLS provides minimum-variance mean-unbiased estimation when the errors have finite variances. Under the additional assumption that the errors are normally distributed, OLS is the maximum likelihood estimator.

## Understanding the OLS method for Simple Linear Regression

- Linear Regression is the family of algorithms employed in supervised machine learning tasks
-  Knowing that supervised ML tasks are normally divided into classification and regression, we can collocate Linear Regression algorithms in the latter category.
-   It differs from classification because of the nature of the target variable: in classification, the target is a categorical value (‘yes/no’, ‘red/blue/green’, ‘spam/not spam’…); on the other hand, regression involves numerical, continuous values as target, hence the algorithm will be asked to predict a continuous number rather than a class or category. Namely, imagine you want to predict the price of a house based on some relative features: the output of your model will be the price, hence a continuous number.
- Regression tasks can be divided into two main groups: those which use only one feature to predict the target, and those which use more than one features for that purpose. To give you an example, let’s consider the house task above: if you want to predict its price only based on its squared meters, you will fall into the first situation (one feature); if you are going to predict the price based on, let’s say, its squared meters, its position and the liveability of the surrounding environment, you are going to fall into the second situation (multiple features, in that case, three).
- In the first scenario, the algorithm you are likely to employ will be the Simple Linear Regression, which is the one we are going to talk about in this article. On the other side, whenever you are facing more than one features able to explain the target variable, you are likely to employ a Multiple Linear Regression.
Simple Linear Regression is a statistical model, widely used in ML regression tasks, based on the idea that the relationship between two variables can be explained by the following formula:

![image](https://user-images.githubusercontent.com/63282184/143805623-94be434f-0d59-499a-ac9c-f8ace8ec96ed.png)


Graphically

![image](https://user-images.githubusercontent.com/63282184/143805519-7dfac4a3-4660-4f22-9e3e-e0d7f0d95a67.png)


- Now, the idea of Simple Linear Regression is finding those parameters α and β for which the error term is minimized. To be more precise, the model will minimize the squared errors: indeed, we do not want our positive errors to be compensated by the negative ones, since they are equally penalizing for our model.

![image](https://user-images.githubusercontent.com/63282184/143805546-63798648-ccf1-4adb-9265-91c718ebb8a7.png)

## Conclusion:

- To sum up, you can consider the OLS as a strategy to obtain, from your model, a ‘straight line’ which is as close as possible to your data points. Even though OLS is not the only optimization strategy, it is the most popular for this kind of tasks, since the outputs of the regression (that are, coefficients) are unbiased estimators of the real values of alpha and beta. 
- Indeed, according to the Gauss-Markov Theorem, under some assumptions of the linear regression model (linearity in parameters, random sampling of observations, conditional mean equal to zero, absence of multicollinearity, homoskedasticity of errors), the OLS estimators α and β are the Best Linear Unbiased Estimators (BLUE) of the real values of α and β.
