# Topic: Polynomial Regression
Linear regression algorithm only works better if the relationship between the data is linear. But what if our data is non-linear? In that case, Linear regression will not be able to draw the best fit line. So in such conditions, we use Polynomial regression to overcome the non-linearity problem.

## Dataset:
For this task I have used Boston housing dataset.

## Polynomial Regression:
Polynomial Regression is a form of linear regression in which the relationship between the independent variable x and dependent variable y is modeled as an nth degree polynomial.<br>
The Polynomial Regression equation is given below:<br>

![image](https://user-images.githubusercontent.com/89564985/143682202-88baac5c-cf3f-4e91-be9a-67cf31c29388.png)<br>
[Image source](https://www.analyticsvidhya.com/blog/2020/03/polynomial-regression-python/)<br>

Here:
* 𝜃0 is the bias,
* 𝜃1, 𝜃2, …, 𝜃n are the weights in the equation of the polynomial regression,
* and n is the degree of the polynomial

Polynomial Regression is also called the special case of Multiple Linear Regression in ML. Because we add some polynomial terms to the Multiple Linear regression equation to convert it into Polynomial Regression.<br>

![image](https://user-images.githubusercontent.com/89564985/143682319-682c4f75-ac77-4d7a-8d58-8334193ff0e6.png)<br>
[Image source](https://www.javatpoint.com/machine-learning-polynomial-regression)<br>
In the above image, we have taken a dataset which is arranged non-linearly. So if we try to cover it with a linear model, then we can clearly see that it hardly covers any data point. On the other hand, a curve is suitable to cover most of the data points, which is of the Polynomial model.

## Advantages:
* Polynomial provides the best approximation of the relationship between the dependent and independent variable.
* A Broad range of function can be fit under it.
* Polynomial basically fits a wide range of curvature.

## Disadvantages:
* The presence of one or two outliers in the data can seriously affect the results of the nonlinear analysis.
* These are too sensitive to the outliers.
* In addition, there are unfortunately fewer model validation tools for the detection of outliers in nonlinear regression than there are for linear regression.

## Applications:
* Rate of growth of tissues.
* Progression of the epidemics related to disease.
* Distribution phenomenon of the isotopes of carbon in lake sediments.

## Summary:
Polynomial regression is a special case of linear regression where we fit a polynomial equation on the data with a curvilinear relationship between the target variable and the independent variables. In this task I have implemented polynomial regression on Boston housing dataset and obtained R2 score of 0.864 on the test data.

#### References:
* https://www.analyticsvidhya.com/blog/2020/03/polynomial-regression-python/
* https://www.javatpoint.com/machine-learning-polynomial-regression
* https://www.analyticsvidhya.com/blog/2021/07/all-you-need-to-know-about-polynomial-regression/
* https://www.geeksforgeeks.org/polynomial-regression-in-r-programming/
* https://towardsdatascience.com/polynomial-regression-bbe8b9d97491
