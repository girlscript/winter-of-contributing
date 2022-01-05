## Complete Overview of Regression 
## [Click here to listen the audio](https://drive.google.com/file/d/1RwMKhME28Hab3nnnwfx9UyzxGN6oW8xc/view?usp=sharing)

**Linear Regression:**
- Linear Regression makes predictions when output variable is continuous in nature.
- It shows a linear relation between dependent variable and independent variables.
- Equation:  Y = a + bX
- Types of linear regression:
        - Simple linear regression
        - Multiple linear regression.

![image](https://user-images.githubusercontent.com/79050917/143672246-0b4b2d4f-3dd5-415a-b3d0-1fa9ccf04752.png)

**Logistic Regression:**
- Logistic Regression makes predictions when output variable is discrete or categorical in nature.
- It shows a sigmoid relation between dependent variable and independent variables.

![image](https://user-images.githubusercontent.com/79050917/143672250-44ee95f7-dbaa-49e2-93b4-6fb6725c1823.png)

**The Differences between Linear Regression and Logistic Regression:**
- Linear Regression is used to handle regression problems whereas Logistic regression is used to handle the classification problems.
- Linear regression provides a continuous output but Logistic regression provides discrete output.
- The purpose of Linear Regression is to find the best-fitted line while Logistic regression is one step ahead and fitting the line values to the sigmoid curve.
- The method for calculating loss function in linear regression is the mean squared error whereas for logistic 
regression it is maximum likelihood estimation

**Polynomial Regression:**
- Polynomial Regression is a supervised machine learning algorithm.
- It is the relationship between a dependent variable and independent variables as nth degree 
polynomial. 
- Equation: y= b0+b1x1+ b2x12+ b2x13+...... bnx1n

![image](https://user-images.githubusercontent.com/79050917/143672267-5a66c77d-fac3-494c-a82a-d83748b09be2.png)

**Why do we use Polynomial regression?**
- Polynomial regression is a special type of multiple linear regression.
- Multiple linear regression is converted to polynomial regression by adding the polynomial terms to the linear equation.
- It is a linear model with some modification in order to increase the accuracy.
- When data points are arranged in a non-linear fashion, we need the Polynomial Regression model.

**Advantages:**
- Easy to implement when we have a linear relationship in the dataset.
- Easy to interpret the output coefficient.
- Model accuracy increases.
- For non-linear data points we can draw the best fit line.

![image](https://user-images.githubusercontent.com/79050917/143672275-054619b1-7458-44ec-be90-78490f2fc3e4.png)

**Disadvantages:**
- Outliers have a huge effect on the model performance.
- It does not give a complete description of relationship between variables.
- Model complexity increases.
- Training time increases.
- In some cases, it might lead to overfitting for the data values.

