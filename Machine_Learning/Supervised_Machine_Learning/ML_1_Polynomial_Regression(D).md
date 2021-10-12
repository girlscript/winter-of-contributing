# Polynomial Regression 
Linear regression is a good algorithm but you are not always going to come across linear data. Here polynomial regression comes into the picture. 
It can a very useful algorithm in case we have non-linear data. 
Its equation is given by the below formula. <br/><br/>
![](https://cdn.analyticsvidhya.com/wp-content/uploads/2020/03/pr3.png) <br/><br/>
Where,<br/> 
x is the independent variable <br/>
Y is the target variable <br/>
θo, θ1, θ2... θn are parameters or weights<br/><br/>
Polynomial regression is a special case of multivariate linear regression as it is a linear combination of different powers of x <br/><br/>


## Code
To understand the concept of polynomial regression further, we will take the help of code. <br/>
You can view the code in the  ML_2_Polynomial_Regression_(D).ipynb document attached in the directory. 
https://github.com/101Priyanshi/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/ML_2_Polynomial_Regression_(D).ipynb<br/>
If you want to run the code for yourself, then follow the Link below<br/>
https://colab.research.google.com/drive/1tLss6GslONOovP_2G6oipJ7psgMawfEq?usp=sharing
<br/><br/>
### Visualising the polynomial regression results
plt.scatter(X,y,color="blue")<br/>
plt.plot(X,poly_reg.predict(X_poly),color="red")<br/>
plt.show()<br/><br/>
![](https://github.com/101Priyanshi/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/poly_reg.PNG)
 
### NOTE
In deciding which degree to choose, you will have to use hit and trial method and choose the degree accordingly. 
If there is not much difference between degree n and degree n+1 then go for degree n as higher degree polynomial leads to overfitting 
which will result in your model generalizing poorly on newer observations
