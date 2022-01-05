# Bias vs Variance tradeoff

## Video Link : [Bias vs Variance tradeoff](https://drive.google.com/file/d/1UiX4XKyPBvo2UaZL2bZWwxErG1k-ln--/view?usp=sharing)

## What is Bias?
The bias is known as the difference between the prediction of the values by the ML model and the correct value. 
It tells us the difference between the expected value and the true function. <br/><br/>
Let’s say f(x) is the true model and f̂(x) is the estimate of the model, then <br/>
<b> Bias(f̂(x) )= E[f̂(x)]-f(x) </b> <br/>
where E[f̂(x)] → Expected value of the model
<br/><br/>
![](https://github.com/101Priyanshi/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/DS%20Resources/bias1.jpg) <br/>
IMG SRC : https://www.reddit.com/r/statistics/comments/qfg3zz/q_so_whats_the_deal_with_sql/ <br/>
<br/> The first graph has high bias as the predicted values differ a lot from actual values whereas 
the second graph has low bias as the predicted values are very close to the actual values. <br/>

## What is Variance?
The variance is a measure of variability. It is the expectation of the squared deviation of a random variable from its population mean or sample mean. <br/><br/>
Variance(f̂(x) )= E[(f̂(x)]-E[f̂(x)])²]
<br/><br/>
![](https://github.com/101Priyanshi/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/DS%20Resources/variance1.png) <br/>
IMG SRC : https://en.wikibooks.org/wiki/Statistics/Summary/Variance <br/>
<br/> We can observe from the above figure that the orange graph has the highest variance as the extrema points are very far from the mean value 
whereas the blue graph has the lowest variance as the extrema points are closest to the mean value as compared to the other graphs.

## Why do we need a bias vs variance tradeoff
When it comes to accuracy in any machine learning algorithm, 
it's crucial to understand prediction errors (bias and variance). 
When choosing a value for the Regularization constant, there is a 
tradeoff between a model's capacity to minimise bias and variance, 
which is referred to as the best solution. Understanding these errors 
will aid in avoiding overfitting and underfitting of a data set during algorithm training.

## Model Building
Let's look at how the training error and prediction error change as the model complexity increases before diving into the bias-variance trade-off. <br/><br/>
![](https://github.com/101Priyanshi/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/DS%20Resources/m1.png)
<br/>
The fitted line is far from the data points in the simple model, so the fitting error/training error is considerable
<br/><br/>
![](https://github.com/101Priyanshi/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/DS%20Resources/m2.png) <br/><br/>
![](https://github.com/101Priyanshi/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/DS%20Resources/m3.png) <br/><br/>
![](https://github.com/101Priyanshi/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/DS%20Resources/m4.png)
<br/>
Because the fitted curve crosses across all of the data points in the complex model, the fitting error/training error will be near to zero. 
Instead of generalising the data, the complex model tries to memorise it together with the noise. 
As a result, this model will not perform well on unobserved test/validation data. This scenario is known as Overfitting.
<br/><br/>
![](https://github.com/101Priyanshi/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/DS%20Resources/error_vs_model_complexity.PNG) <br/><br/>

## Bias Variance Tradeoff
If the algorithm is too simple (hypothesis with linear equation) then it may be on high bias and low variance condition and thus is error-prone. 
If algorithms fit too complex ( hypothesis with high degree eq.) then it may be on high variance and low bias. 
In the latter condition, the new entries will not perform well. Well, there is something between both of these conditions, known as Trade-off or Bias Variance Trade-off.

## Expected Predicted Error Formula
EPE= Bias² + Variance + Irreducible Error <br/>
Using model f̂(x), we are predicting the value of a new data point (x,y) that is not in training data.<br/>
Then the expected mean square error will be <br/>
EPE =E[(y-f̂(x)²] <br/>
From the formula of EPE, we know that error depends on bias and variance. <br/>
This tradeoff in complexity is why there is a tradeoff between bias and variance. An algorithm can’t be more complex and less complex at the same time. <br/>
![](https://github.com/101Priyanshi/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/DS%20Resources/bias_vs_var_tradeoff.PNG)


## Conclusion : 

An optimal balance of bias and variance would never overfit or underfit the model.

Therefore understanding bias and variance is critical for understanding the behavior of prediction models.
