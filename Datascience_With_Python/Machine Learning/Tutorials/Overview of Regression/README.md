# Overview of Regression
************************************************************************************
- Regression is a problem of predicting a real-valued label (often called a target) given an unlabeled example. Estimating house price valuation based on house features, such as area,the number of bedrooms, location and so on is a famous example of regression.
- The regression problem is solved by a regression learning algorithm that takes a collection of labeled examples as inputs and produces a model that can take an unlabeled example as input and output a target.
- In Regression, we plot a graph between the variables which best fits the given datapoints, using this plot, the machine learning model can make predictions about the data. In simple words, "Regression shows a line or curve that passes through all the datapoints on target-predictor graph in such a way that the vertical distance between the datapoints and the regression line is minimum." The distance between datapoints and line tells whether a model has captured a strong relationship or not.

## Advanatges of Regression
- The significance of regression analysis lies in the fact that it is all about data: data refers to the statistics and figures that characterise your company. The benefits of regression analysis are that it allows you to essentially crunch the data to assist you make better business decisions now and in the future.
- The importance of regression analysis is that it is all about data: data means numbers and figures that actually define your business. The advantages of regression analysis is that it can allow you to essentially crunch the numbers to help you make better decisions for your business currently and into the future. 
- Advantages of Linear Regression Linear regression has a considerably lower time complexity when compared to some of the other machine learning algorithms. The mathematical equations of Linear regression are also fairly easy to understand and interpret. Hence Linear regression is very easy to master.

## Applications of Regression
- Prediction : Regression analysis is a statistical technique for determining the relationship between a single dependent (criterion) variable and one or more independent (predictor) variables. The analysis yields a predicted value for the criterion resulting from a linear combination of the predictors

- Forecasting : The regression method of forecasting involves examining the relationship between two different variables, known as the dependent and independent variables. Suppose that you want to forecast future sales for your firm and you've noticed that sales rise or fall, depending on whether the gross domestic product goes up or down. (The gross domestic product, or GDP, is the sum of all goods and services produced within a nation's borders. In the U.S., it is calculated quarterly by the Commerce Department.)

Your sales, then, would be the dependent variable, because they "depend" on the GDP, which is the independent variable. (An independent variable is the variable against which you are measuring something by comparison – your sales in this case.) You would need to figure out how closely these two variables - sales and GDP - are related. If the GDP goes up 2 percent, how much do your sales rise?

- Time series modeling : Time series regression is a statistical method for predicting a future response based on the response history (known as autoregressive dynamics) and the transfer of dynamics from relevant predictors.

- Determining the casual effect relationship between variables

## Interpolation and Extrapolation
Regression models predict a value of the Y variable given known values of the X variables. Prediction within the range of values in the dataset used for model-fitting is known informally as interpolation. Prediction outside this range of the data is known as extrapolation. Performing extrapolation relies strongly on the regression assumptions. The further the extrapolation goes outside the data, the more room there is for the model to fail due to differences between the assumptions and the sample data or the true values.

It is generally advised that when performing extrapolation, one should accompany the estimated value of the dependent variable with a prediction interval that represents the uncertainty. Such intervals tend to expand rapidly as the values of the independent variable(s) moved outside the range covered by the observed data.

For such reasons and others, some tend to say that it might be unwise to undertake extrapolation.

However, this does not cover the full set of modeling errors that may be made: in particular, the assumption of a particular form for the relation between Y and X. A properly conducted regression analysis will include an assessment of how well the assumed form is matched by the observed data, but it can only do so within the range of values of the independent variables actually available. This means that any extrapolation is particularly reliant on the assumptions being made about the structural form of the regression relationship. Best-practice advice here[citation needed] is that a linear-in-variables and linear-in-parameters relationship should not be chosen simply for computational convenience, but that all available knowledge should be deployed in constructing a regression model. If this knowledge includes the fact that the dependent variable cannot go outside a certain range of values, this can be made use of in selecting the model – even if the observed dataset has no values particularly near such bounds. The implications of this step of choosing an appropriate functional form for the regression can be great when extrapolation is considered. At a minimum, it can ensure that any extrapolation arising from a fitted model is "realistic" (or in accord with what is known).

## Other Methods
Although the parameters of a regression model are usually estimated using the method of least squares, other methods which have been used include:
- Bayesian methods, e.g. Bayesian linear regression
- Percentage regression, for situations where reducing percentage errors is deemed more appropriate.
- Least absolute deviations, which is more robust in the presence of outliers, leading to quantile regression
- Nonparametric regression, requires a large number of observations and is computationally intensive
- Scenario optimization, leading to interval predictor models
- Distance metric learning, which is learned by the search of a meaningful distance metric in a given input space.

## Conclusion
Regression is performed when the dependent variable is of continuous data type and Predictors or independent variables could be of any data type like continuous, nominal/categorical etc. Regression method tries to find the best fit line which shows the relationship between the dependent variable and predictors with least error. 

In the attached .ipynb you can find about Regression and how to evaluate it with some basics on Linear Regression and Polynomial Regression.
Feel free to reach out or commit any changes to the repository .

### Sources :
1. The Hundred-Page Machine Learning Book by Andriy Burkov
2. https://www.javatpoint.com/regression-analysis-in-machine-learning
3. https://builtin.com/data-science/regression-machine-learning
4. Hands-on-Machine Learning with Scikit-Learn & TensorFlow by Aurelien Geron
5. www.wikipedia.com
