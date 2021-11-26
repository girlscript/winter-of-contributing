#  Bayesian Regression

## Video Link: [Bayesian Regression](https://drive.google.com/file/d/1PclHywk-m3hGm25Ip7b1FmsWW1P6BPTS/view?usp=sharing)

- Regression is a Machine Learning task to predict continuous values (real numbers), as compared to classification, that is used to predict categorical (discrete) values.
- When you hear the word, ‘Bayesian’, you might think of Naive Bayes. However, Bayesian principles can also be used to perform regression. 
- First of all, you must understand that Bayesian is just an approach to defining and estimating statistical models. 
- Bayesian Regression can be very useful when we have insufficient data in the dataset or the data is poorly distributed. 
- The output of a Bayesian Regression model is obtained from a probability distribution, as compared to regular regression techniques where the output is just obtained from a single value of each attribute. The output, ‘y’ is generated from a normal distribution (where mean and variance are normalized).
-  The aim of Bayesian Linear Regression is not to find the model parameters, but rather to find the ‘posterior‘ distribution for the model parameters. Not just the output y, but the model parameters are also assumed to come from a distribution.
  
The expression for Posterior is :

![image](https://user-images.githubusercontent.com/63282184/143527452-3a511db9-0bc1-4a37-8903-315f595cda07.png)


where

- Posterior: It is the probability of an event to occur; say, H, given that another event; say, E has already occurred. i.e., P(H | E).
- Prior: It is the probability of an event H has occurred prior to another event. i.e., P(H)
- Likelihood: It is a likelihood function in which some parameter variable is marginalized.

This is actually equivalent to the Bayes’ Theorem which says,

![image](https://user-images.githubusercontent.com/63282184/143527508-99f0fdef-3c80-4d10-a064-6f692505a711.png)

- where A and B are events, P(A) is the probability of occurrence of A, and P(A|B) is the probability of A to occur given that event B has already occurred. P(B), the probability of event B occurring cannot be 0 since it has already occurred. 

- Looking at the formula above, we can see that, in contrast to Ordinary Least Square (OLS), we have a posterior distribution for the model parameters which is proportional to the likelihood of the data multiplied by the prior probability of the parameters.
-  As the number of data points increase, the value of likelihood will increase and will become much larger than the prior value. 
-  In the case of an infinite number of data points, the values for the parameters converge to the values obtained from OLS. So, we begin our regression process with an initial estimate (the prior value). 
-  As we start to cover more data points, our model becomes less wrong. So for Bayesian Ridge Regression, a large amount of training data is needed to make the model accurate.
  
Now, let us have a quick brief overview of the mathematical side of things. In a linear model, if ‘y’ is the predicted value, then

![image](https://user-images.githubusercontent.com/63282184/143527590-fb1b257f-239f-473b-96a7-64b019aaa746.png)

where, ‘w’ is the vector w. w consists of w0, w1, … . ‘x’ is the value of the weights.

![image](https://user-images.githubusercontent.com/63282184/143527612-fe5267de-a00d-473a-a98d-15c146a62fae.png)

So, now for Bayesian Regression to obtain a fully probabilistic model, the output ‘y’ is assumed to be the Gaussian distribution around Xw as shown below:

![image](https://user-images.githubusercontent.com/63282184/143527635-66ac348a-0f58-4ab8-8d1c-a7cabf6e0d8c.png)

where alpha is a hyper-parameter for the Gamma distribution prior. It is treated as a random variable estimated from the data. Here, the implementation for Bayesian Ridge Regression is given below. The mathematical expression on which Bayesian Ridge Regression works is :

![image](https://user-images.githubusercontent.com/63282184/143527667-dff77d29-79f8-4679-b607-9f71520e8fa3.png)


where alpha is the shape parameter for the Gamma distribution prior to the alpha parameter and lambda is the shape parameter for the Gamma distribution prior to the Lambda parameter.

## Advantages of Bayesian Regression:

- Very effective when the size of the dataset is small.
- Particularly well-suited for on-line based learning (data is received in real-time), as compared to batch based learning, where we have the entire dataset on our hands before we start training the model. This is because Bayesian Regression doesn’t need to store data.
- The Bayesian approach is a tried and tested approach and is very robust, mathematically. So, one can use this without having any extra prior knowledge about the dataset.

## Disadvantages of Bayesian Regression:

- The inference of the model can be time-consuming.
- If there is a large amount of data available for our dataset, the Bayesian approach is not worth it and the regular frequentist approach does a more efficient job

