# Regression analysis (Linear regression, Logistics regression)
## Video Link : [Regression analysis (Linear regression, Logistics regression)](https://drive.google.com/file/d/1uD2wkQgHrkZpoiD5KWZpyWW20TPluwFg/view?usp=sharing)

- Linear Regression and Logistic Regression are the two famous Machine Learning Algorithms which come under supervised learning technique. Since both the algorithms are of supervised in nature hence these algorithms use labeled dataset to make the predictions. 
- But the main difference between them is how they are being used. The Linear Regression is used for solving Regression problems whereas Logistic Regression is used for solving the Classification problems. The description of both the algorithms is given below along with difference table.

![image](https://user-images.githubusercontent.com/63282184/144040336-bff6ea53-b881-4ea1-b599-f7d01578eb45.png)


## Linear Regression:
- Linear Regression is one of the most simple Machine learning algorithm that comes under Supervised Learning technique and used for solving regression problems.
- It is used for predicting the continuous dependent variable with the help of independent variables.
- The goal of the Linear regression is to find the best fit line that can accurately predict the output for the continuous dependent variable.
- If single independent variable is used for prediction then it is called Simple Linear Regression and if there are more than two independent variables then such regression is called as Multiple Linear Regression.
- By finding the best fit line, algorithm establish the relationship between dependent variable and independent variable. And the relationship should be of linear nature.
- The output for Linear regression should only be the continuous values such as price, age, salary, etc. The relationship between the dependent variable and independent variable can be shown in below image:

![image](https://user-images.githubusercontent.com/63282184/144040451-bad34dcc-7540-484e-a220-1e934a04667b.png)

In above image the dependent variable is on Y-axis (salary) and independent variable is on x-axis(experience). The regression line can be written as:

```
y= a0+a1x+ ε
```
Where, a0 and a1 are the coefficients and ε is the error term.

## Logistic Regression:
- Logistic regression is one of the most popular Machine learning algorithm that comes under Supervised Learning techniques.
- It can be used for Classification as well as for Regression problems, but mainly used for Classification problems.
- Logistic regression is used to predict the categorical dependent variable with the help of independent variables.
- The output of Logistic Regression problem can be only between the 0 and 1.
- Logistic regression can be used where the probabilities between two classes is required. Such as whether it will rain today or not, either 0 or 1, true or false etc.
- Logistic regression is based on the concept of Maximum Likelihood estimation. According to this estimation, the observed data should be most probable.
- In logistic regression, we pass the weighted sum of inputs through an activation function that can map values in between 0 and 1. Such activation function is known as sigmoid function and the curve obtained is called as sigmoid curve or S-curve. Consider the below image:

![image](https://user-images.githubusercontent.com/63282184/144040587-7762a345-5ec2-45a9-9ecf-bcc021573fca.png)


The equation for logistic regression is:

![image](https://user-images.githubusercontent.com/63282184/144040627-ac12b817-872e-410b-8264-058402210570.png)


## Difference between Linear Regression and Logistic Regression:

![image](https://user-images.githubusercontent.com/63282184/144040697-2d1ca792-a739-481b-b8a5-d0f12b3835b3.png)



## Conclusion

Linear regression has a considerably lower time complexity when compared to some of the other machine learning algorithms. The mathematical equations of Linear regression are also fairly easy to understand and interpret. Hence Linear regression is very easy to master.

Logistic regression is easier to implement, interpret, and very efficient to train. If the number of observations is lesser than the number of features, Logistic Regression should not be used, otherwise, it may lead to overfitting. It makes no assumptions about distributions of classes in feature space.
