# **ORDINARY LEAST SQUARES REGRESSION (OLSR)**

# **INTRODUCTION**

* Ordinary least square regression (OLSR) is an approach for solving linear
regression problems. 

* Linear regression is the basic supervised machine learning algorithm.

*  It aims at finding the relationship between the input and the output variable by fitting a linear equation. 

* OLSR is a method for predicting the parameter values in the linear regression model.

# **PRINCIPLE**

* The crux of ordinary least squares regression is minimizing the sum of squared differences(errors) between the predicted output and actual output.

* We square the error since some errors are positive and some are negative so to get rid of these signs.

# **Assumptions of OLS**

* There should be no multicollinearity between any two independent variables.

* The value of the mean of the error terms should be zero for given independent variables.

* The sample taken for the OLS regression model should be taken randomly from the population.

* All the error terms in the regression should have the same variance, which means homoscedasticity.

# **Ordinary Least Squares (OLS) using statsmodels**

- Statsmodels is part of the scientific Python library that’s inclined towards data analysis, data science, and statistics. 

- It’s built on top of the numeric library NumPy and the scientific library SciPy.

- The Statsmodels package provides different classes for linear regression, including OLS. 
- However, linear regression is very simple and interpretative using the OLS module. 
-We can perform regression using the sm.OLS class, where sm is alias for Statsmodels.

# **Modules used :**

 **statsmodels:**  provides classes and functions for the estimation of many different statistical models.

    pip install statsmodels


**pandas :** library used for data manipulation and analysis.

    pip install pandas

**NumPy :** core library for array computing.

    pip install numpy

**Matplotlib :** a comprehensive library used for creating static and interactive graphs and visualisations.

    pip install matplotlib

# **Approach :**

* First we define the variables x and y.

* The OLS() function of the statsmodels.api module is used to perform OLS regression. It returns an OLS object. 
* Then fit() method is called on this object for fitting the regression line to the data.

* The summary() method is used to obtain a table which gives an extensive description about the regression results.


# **EXAMPLE**










    from pandas import DataFrame
    import statsmodels.api as sm

    Stock_Market = {'Year': [2017,2017,2017,2017,2017,2017,2017,2017,2017,2017,2017,2017,2016,2016,2016,2016,2016,2016,2016,2016,2016,2016,2016,2016],
                'Month': [12, 11,10,9,8,7,6,5,4,3,2,1,12,11,10,9,8,7,6,5,4,3,2,1],
                'Interest_Rate': [2.75,2.5,2.5,2.5,2.5,2.5,2.5,2.25,2.25,2.25,2,2,2,1.75,1.75,1.75,1.75,1.75,1.75,1.75,1.75,1.75,1.75,1.75],
                'Unemployment_Rate': [5.3,5.3,5.3,5.3,5.4,5.6,5.5,5.5,5.5,5.6,5.7,5.9,6,5.9,5.8,6.1,6.2,6.1,6.1,6.1,5.9,6.2,6.2,6.1],
                'Stock_Index_Price': [1464,1394,1357,1293,1256,1254,1234,1195,1159,1167,1130,1075,1047,965,943,958,971,949,884,866,876,822,704,719]        
                }

    df = DataFrame(Stock_Market,columns=['Year','Month','Interest_Rate','Unemployment_Rate','Stock_Index_Price']) 


    X = df[['Interest_Rate','Unemployment_Rate']] # here we have 2 variables for the multiple linear regression. If you just want to use one variable for simple linear     regression, then use X = df['Interest_Rate'] for example
    Y = df['Stock_Index_Price']
    X = sm.add_constant(X)

    model = sm.OLS(Y, X).fit()
    predictions = model.predict(X) 
    print_model = model.summary()
    print(print_model)
    
 **OUTPUT**
 
 ![Picture](https://datatofish.com/wp-content/uploads/2018/04/00A_statsmodels.png)

# **Interpreting the Regression Results:**

**1.Adjusted. R-squared** reflects the fit of the model. R-squared values range from 0 to 1, where a higher value generally indicates a better fit, assuming certain conditions are met.

**2.const coefficient** is your Y-intercept. It means that if both the Interest_Rate and Unemployment_Rate coefficients are zero, then the expected output (i.e., the Y) would be equal to the const coefficient.

**3.Interest_Rate** coefficient represents the change in the output Y due to a change of one unit in the interest rate (everything else held constant).

**4.Unemployment_Rate** coefficient represents the change in the output Y due to a change of one unit in the unemployment rate (everything else held constant).

**5.std err** reflects the level of accuracy of the coefficients. The lower it is, the higher is the level of accuracy.


**6.P >|t|** is your p-value. A p-value of less than 0.05 is considered to be statistically significant.

**7.Confidence Interval** represents the range in which our coefficients are likely to fall (with a likelihood of 95%)

**8.AIC stands for Akaike Information Criterion**, which estimates the relative quality of statistical models for a given dataset.

**9.BIC stands for Bayesian Information Criterion**, which is used as a criterion for model selection among a finite set of models. BIC is like AIC, however it adds a higher penalty for models with more parameters.



# **Advantages of OLSR**

* The model has minimum variance.

* Easy computation.

* OLSR is the most basic approach and has wide application.

# **Drawbacks of OLSR**

* OLSR model are insensitive to the outliners.

* It has a tendancy to overfit the data.

* Requires high number of data points.

# **Conclusion:**

Here we worked through a quick overview of OLS using Statsmodels and its implementation with sample data.






