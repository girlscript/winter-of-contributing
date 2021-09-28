# **Contrast between Linear and Logistic Regression**
![](https://github.com/ayushi424/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/lrlr1.png)

Let's understand the difference between Linear regression and Logistic regression in Machine Learning.

## **Linear Regression**

- Linear Regression comes under SUPERVISED machine learning algorithms which uses labelled data i.e. both input and output are given to the model so that it can train itself nicely.
- Generally, we determine the independent and dependaent variable in the dataset. Indepandent variables or features are independent in nature and do not depend on any other variable or feature.Whereas dependent variable depends on the independent variables or features and generally known as target variable or output variable.
- It is generally used where the output variable is in continous variable form.
- Based on the number of input variables, Linear regression can be:
    1. Simple Linear Regression(with only one input variable)

    2. Multiple Linear Regression(with more than one input variables)

- Linear Regression works on REGRESSION TASKS.

- Example: House Price Prediction where price of the house depands on various features as area, number of rooms, age of the house etc.

- It's Applications include various prediction projects in various fields of healthcare, education, agriculture etc. 

## **Working of Linear Regression**

Step 1: Preprocess and explore the data.This will help in understand what kind of data we are using and also visualiza the data to undertand different features or variables.

Step 2: Split the data into training data and testing data with a specified ratio. 

Step 3: Import Linear Regression from sklearn and initialize the regressor.

Step 4: Fit the data into the model so that it can train itself.

Step 5: Perform predictions!

step 6: Check the performance of the model by accuracy check & erre check.

### **Implementation for Linear Regression**

![](https://github.com/ayushi424/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/lrlr4.jpg)
![](https://github.com/ayushi424/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/lrlr5.jpg)

For the dataset being used [click here](https://www.kaggle.com/quantbruce/real-estate-price-prediction)

## **Logistic Regression**

- Logistic Regression too comes under SUPERVISED machine learning algorithms which uses labelled data i.e. both input and output are given to the model so that it can train itself nicely.

- It is generally used where the output variable is in discrete variable form.


- Linear Regression works on CLASSIFICATION TASKS.

- Example: Email classification as spam or not spam as 0 or 1.
- It's Applications include various classification projects in various fields of healthcare, education, agriculture etc. 

## **Working of Logistic Regression**

Step 1: Preprocess and explore the data.This will help in understand what kind of data we are using and also visualiza the data to undertand different features or variables.

Step 2: Split the data into training data and testing data with a specified ratio. 

Step 3: Import Logistic Regression from sklearn and initialize the classifier.

Step 4: Fit the data into the model so that it can train itself.

Step 5: Perform classifications!

step 6: Check the performance of the model by accuracy check & erre check.

### **Implementation for Logistic Regression**
![](https://github.com/ayushi424/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/lrlr6.jpg)
![](https://github.com/ayushi424/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/lrlr7.jpg)

For the dataset being used [click here](https://www.kaggle.com/adityakadiwal/water-potability)

## **Visual Representation**

### **Linear Regression**
![](https://github.com/ayushi424/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/lrlr2.png)

The dependent variable is on Y-axis (salary) and independent variable is on x-axis(experience).

        y= a0+a1x+ ε

Where, a0 and a1 are the coefficients and ε is the error term.

### **Logistic Regression**

![](https://github.com/ayushi424/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Supervised_Machine_Learning/Assets/lrlr3.png)

        P(y=1) = 1 / (1+ exp -(b0+b1x1+ b2x2+------bkxk))

Where, Y is target or dependent variable, b0 is intercept. x1,x2,x3...xk are predictors or independent variables. b1,b2,b3....bk is coefficients of respective predictors.


## **Conclusion**
- For Linear Regression, the visual representation is a STRAIGHT LINE. Whereas for Logistic Regression a S-SHAPED curve.
- Linear Regression have a linear relationship between the dependent and independent variables. Whereas the  Logistic Regression does not have or need a linear relationship between the dependent and independent variables.
- Linear Regression is used to predict the dependent variable incase there is  a change in independent variables.Whereas Logistic Regression is used to calculate the probability of an event(either 0 or 1). 
- Linear Regression provides a continuous output but Logistic Regression provides discreet output. 
- The purpose of Linear Regression is to find the best-fitted line while Logistic regression is one step ahead and fitting the line values to the sigmoid curve.

### **Some Useful Resources**

- [Linear Regression](https://www.javatpoint.com/linear-regression-in-machine-learning)
- [Logistic Regression](https://www.javatpoint.com/logistic-regression-in-machine-learning)


**Image Credits:** [javatpoint](https://www.javatpoint.com/linear-regression-vs-logistic-regression-in-machine-learning)
