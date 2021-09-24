# **Elastic Net Regression**

# Regression
**First we need to understand the basics of regression and what parameters of the equation are changed when using a specific model.**

Regression analysis is a statistical technique that models and approximates the relationship between a dependent and one or more independent variables. Simple linear regression, also known as ordinary least squares (OLS) attempts to minimize the sum of error squared. The error in this case is the difference between the actual data point and its predicted value.

Linear regression is the standard algorithm for regression that assumes a linear relationship between inputs and the target variable. 
An extension to linear regression involves adding penalties to the loss function during training that encourage simpler models that have smaller coefficient values. 
These extensions are referred to as regularized linear regression or penalized linear regression.

# **Elastic net Regression** 

Elastic Net Regression is an extension of linear regression that adds regularization penalties to the loss function during training.
Elastic net is a popular type of regularized linear regression that combines two popular penalties, specifically the L1 and L2 penalty functions.
![image](https://user-images.githubusercontent.com/57637086/134214127-d36b3b93-21bc-49e4-b74a-6c0bb0362311.png)
The benefit is that elastic net allows a balance of both penalties, which can result in better performance than a model with either one or the other penalty on some problems.

Another hyperparameter is provided called “lambda” that controls the weighting of the sum of both penalties to the loss function. A default value of 1.0 is used to use the fully weighted penalty; a value of 0 excludes the penalty. Very small values of lambada, such as 1e-3 or smaller, are common.

**elastic_net_loss = loss + (lambda * elastic_net_penalty)**

In addition to setting and choosing a lambda value elastic net also allows us to tune the alpha parameter where 𝞪 = 0 corresponds to ridge and 𝞪 = 1 to lasso. Simply put, if you plug in 0 for alpha, the penalty function reduces to the L1 (ridge) term and if we set alpha to 1 we get the L2 (lasso) term. Therefore we can choose an alpha value between 0 and 1 to optimize the elastic net. Effectively this will shrink some coefficients and set some to 0 for sparse selection.

# **Example of Elastic Net Regression**

In this section, we will see how to use the Elastic Net regression algorithm.

**Let’s introduce a standard regression dataset. We will use the housing dataset.**

We will use the housing dataset. The housing dataset is a standard machine learning dataset comprising 506 rows of data with 13 numerical input variables and a numerical target variable.

Using a test harness of repeated stratified 10-fold cross-validation with three repeats, a naive model can achieve a mean absolute error (MAE) of about 6.6. A top-performing model can achieve a MAE on this same test harness of about 1.9. This provides the bounds of expected performance on this dataset.

The dataset involves predicting the house price given details of the house’s suburb in the American city of Boston.

[Housing Dataset (housing.csv)](https://raw.githubusercontent.com/jbrownlee/Datasets/master/housing.csv)

# **Visit the file for the code for example of [Elastic Net Regression](https://colab.research.google.com/drive/1ZaA9Of9Nf0CinU_EWtgRNtQat12I8Rg8?usp=sharing)**

![image](https://user-images.githubusercontent.com/57637086/134709778-b5dfeac9-ecf3-48a4-9c2e-12e386658bf8.png)


Next, we can look at configuring the model hyperparameters.

# *Tuning Elastic Net Hyperparameters*

It is good practice to test a suite of different configurations and discover what works best.

One approach would be to gird search l1_ratio values between 0 and 1 with a 0.1 or 0.01 separation and alpha values from perhaps 1e-5 to 100 on a log-10 scale and discover what works best for a dataset.

The example below demonstrates this using the GridSearchCV class with a grid of values we have defined.

![image](https://user-images.githubusercontent.com/57637086/134709298-adf57969-4134-4af5-b847-fd7d65c1046b.png)

In this case, we can see that we achieved slightly better results than the default 3.378 vs. 3.682. Ignore the sign; the library makes the MAE negative for optimization purposes.

We can see that the model assigned an alpha weight of 0.01 to the penalty and focuses exclusively on the L2 penalty.

The scikit-learn library also provides a built-in version of the algorithm that automatically finds good hyperparameters via the ElasticNetCV class.

To use this class, it is first fit on the dataset, then used to make a prediction. It will automatically find appropriate hyperparameters.

By default, the model will test 100 alpha values and use a default ratio. We can specify our own lists of values to test via the “l1_ratio” and “alphas” arguments, as we did with the manual grid search.

The example below demonstrates this.

![image](https://user-images.githubusercontent.com/57637086/134710735-afa75290-8ae0-421d-8576-a3d61ff78b17.png)


# *Summary*

In this tutorial, you discovered how to develop Elastic Net regularized regression in Python.

1. Elastic Net is an extension of linear regression that adds regularization penalties to the loss function during training.
2. How to evaluate an Elastic Net model and use a final model to make predictions for new data.
3. How to configure the Elastic Net model for a new dataset via grid search and automatically.
