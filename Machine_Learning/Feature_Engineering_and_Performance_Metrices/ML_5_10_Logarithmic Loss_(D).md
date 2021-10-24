## Title : Logarithmic Loss
🔴 **Type of Content** : Documentation

🔴 **Domain** : Machine Learning

🔴 **Module** : Name of the module for every week
<br><br>

## **Defination**
Log Loss is the most important classification metric based on probabilities. It’s hard to interpret raw log-loss values, but log-loss is still a good metric for comparing models. For any given problem, a lower log loss value means better predictions.
<br>
Mathematical interpretation:
<br>
Log Loss is the negative average of the log of corrected predicted probabilities for each instance.
<br><br>

## **Logarithmic Loss Sklearn metrics**
<img src="https://i.ibb.co/41Hdmyc/image.png" style="width:30%"><br>
```sklearn.metrics.log_loss(y_true, y_pred, *, eps=1e-15, normalize=True, sample_weight=None, labels=None)```
- y_true : array-like or label indicator matrix
Ground truth (correct) labels for n_samples samples.
- y_pred : array-like of float, shape = (n_samples, n_classes) or (n_samples,)
Predicted probabilities, as returned by a classifier’s predict_proba method. If y_pred.shape = (n_samples,) the probabilities provided are assumed to be that of the positive class. The labels in y_pred are assumed to be ordered alphabetically, as done by preprocessing.LabelBinarizer.
- eps : float, default=1e-15
Log loss is undefined for p=0 or p=1, so probabilities are clipped to max(eps, min(1 - eps, p)).
- normalize : bool, default=True
If true, return the mean loss per sample. Otherwise, return the sum of the per-sample losses.
- sample_weight : array-like of shape (n_samples,), default=None
Sample weights.
- labels : array-like, default=None
If not provided, labels will be inferred from y_true. If labels is None and y_pred has shape (n_samples,) the labels are assumed to be binary and are inferred from y_true.
<br><br>

## **Code Support for Logarithmic Loss**
Using Log Loss in your models is relatively simple. XGBoost has logloss and mlogloss options for the eval_metric parameter, which allow you to optimise your model with respect to binary and multiclass Log Loss respectively. Both metrics are available in caret’s train() function as well. The Metrics package also implements a number of Machine Learning metrics including Log Loss.
<br><img src='https://media.geeksforgeeks.org/wp-content/uploads/20190620140051/log-loss-graph.jpg' style='width:30%'>
<br><br>

## **Steps to find Logarithmic Loss**
1. To find corrected probabilities.
2. Take a log of corrected probabilities.
3. Take the negative average of the values we get in the 2nd step.
<br><img src='https://editor.analyticsvidhya.com/uploads/90149Capture0.PNG' style='width:30%'><br>
Here Yi represents the actual class and log(p(yi)is the probability of that class.
- p(yi) is the probability of 1.
- 1-p(yi) is the probability of 0.
<br><br>

## **Example**
A model predicts probabilities of ```[0.8, 0.4, 0.1]``` for three houses. The first two houses were sold, and the last one was not sold. So the actual outcomes could be represented numeically as ```[1, 1, 0]```.
<br>
Let's step through these predictions one at a time to iteratively calculate the likelihood function.
<br>
The first house sold, and the model said that was 80% likely. So, the likelihood function after looking at one prediction is 0.8.
<br>
The second house sold, and the model said that was 40% likely. There is a rule of probability that the probability of multiple independent events is the product of their individual probabilities. So, we get the combined likelihood from the first two predictions by multiplying their associated probabilities. That is ```0.8 * 0.4```, which happens to be 0.32.
<br>
Now we get to our third prediction. That home did not sell. The model said it was 10% likely to sell. That means it was 90% likely to not sell. So, the observed outcome of not selling was 90% likely according to the model. So, we multiply the previous result of 0.32 by 0.9.
<br>
We could step through all of our predictions. Each time we'd find the probability associated with the outcome that actually occurred, and we'd multiply that by the previous result. That's the likelihood.
<br><br>

## **Likelihood to Logarithmic Loss**
Each prediction is between 0 and 1. If you multiply enough numbers in this range, the result gets so small that computers can't keep track of it. So, as a clever computational trick, we instead keep track of the log of the Likelihood. This is in a range that's easy to keep track of. We multiply this by negative 1 to maintain a common convention that lower loss scores are better.
<br><br>

## **Applications**
Log-loss is an appropriate performance measure when you're model output is the probability of a binary outcome.
<br>
The log-loss measure considers confidence of the prediction when assessing how to penalize incorrect classification. For instance consider two predictions of an outcome P(Y=1|X), where the predictions are 0.51 and 0.99 respectively. In the former case the model is only slightly confident of the class prediction (assuming a 0.5 cutoff), while in the latter it is extremely confident. Since in our case both are wrong, the penalty will be more harsh for the more confident (but incorrect) prediction by employing a log-loss penalty.
<br><br>

## **Advantages and Disadvantages of Logarithmic Loss**
- Logarithmic loss leads to better probability estimation at the cost of accuracy
- Hinge loss leads to better accuracy and some sparsity at the cost of much less sensitivity regarding probabilities
- Cross entropy error is one of many distance measures between probability distributions, but one drawback of it is that distributions with long tails can be modeled poorly with too much weight given to the unlikely events  
-  Its usage in statistics dates back to Good, and it has found a prominent role in learning and prediction
<br><br>

## **Conclusion**
- In simple words, log loss measures the UNCERTAINTY of the probabilities of your model by comparing them to the true labels. Let us look closely at its formula and see how it measures the UNCERTAINTY
- Log Loss is hard to interpret. A Log Loss may be good in a multiclass problem, but very bad in a binary biased case.
- While creating a statistical model, it should accomplish the baseline log-loss score depending on the given dataset. If it does not achieve the log score, the trained statistical model is inaccurate and not helpful. In that case, you should use a better model to find the log loss of a probability.
<br><br>

## **References**
- https://datascience.eu/computer-programming/log-loss/
- https://pandio.com/blog/what-is-log-loss-in-machine-learning/
- https://towardsdatascience.com/intuition-behind-log-loss-score-4e0c9979680a
<br><br>

### GirlScript Winter of Contributions 2021
