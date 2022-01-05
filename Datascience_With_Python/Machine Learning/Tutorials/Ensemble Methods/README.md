# Ensemble Learning Methods

<img src="https://github.com/nakshatra-garg/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Ensemble%20Methods/Images/Ensemble_Methods.png" width="600" height="375">

# Description
### What is Ensemble Learning
The idea of ensemble learning is closely related to the idea of the “wisdom of crowds“. This is where many different independent decisions, choices or estimates are combined into a final outcome that is often more accurate than any single contribution.

Ensemble Learning Methods use multiple learning algorithms to obtain better predictive performance than could be obtained from any of the constituent learning algorithms alone. Ensemble learning combines several techniques into one predictive model in order to decrease variance (bagging), bias (boosting), or improve predictions (stacking).


### How Ensemble Learning Methods Work
Suppose you want to construct a machine learning model for your organisation that estimates organisation's sales based on historical data from past years. You use four different algorithms to train four machine learning models: linear regression, support vector machine, decision tree regressor, and a basic deep artificial neural network (DNN).
However, despite significant tweaking and configuration, none of them achieves your desired forecast accuracy of 95%. As they fail to converge to the desired level, these machine learning models are referred to as "weak learners."<br>

<img src="https://github.com/nakshatra-garg/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Ensemble%20Methods/Images/Ensemble_Methods_2.webp" width="700" height="325">

But weak doesn’t mean useless. You can put them together to make an ensemble. You run your input data through all four models for each new prediction, then take the average of the results. When you look at the new result, you'll find that the overall accuracy is 96 percent, which is more than acceptable.

The reason ensemble learning is efficient is that your machine learning models work differently. Each model may perform well on certain data while performing poorly on others. When all of them are combined, their flaws are balanced out.

<img src="https://github.com/nakshatra-garg/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Ensemble%20Methods/Images/Ensemble_Methods_3.webp" width="700" height="325">

<br>

### Random Forests

Decision trees, a machine learning algorithm that is particularly valuable because of its flexibility and interpretability, is one area where ensemble learning is very popular. Decision trees can make predictions on complex problems,  and trace their outputs back to a series of well-defined steps.

The problem with decision trees is that they don't create smooth boundaries between different classes unless they're broken down into too many branches, at which point they're prone to "overfitting," which occurs when a machine learning model performs well on training data but poorly on novel examples from the real world.

This is a challenge that ensemble learning can help with. Random forests (thus the name "forest") are machine learning ensembles made up of several decision trees. Using random forests prevents a machine learning model from becoming trapped inside the constraints of a single decision tree.

In Python, random forests have their own independent implementation.

`from sklearn.ensemble import RandomForestRegressor` and `from sklearn.ensemble import RandomForestClassifier`

### Types of Ensemble Methods

- **Bagging**: It's a model for homogeneous weak learners that learns from each other in parallel and then combines the results to determine the model average.
- **Boosting**: It's also a model for homogeneous weak learners, but it's not as effective as Bagging. Learners in this approach learn sequentially and adaptively to enhance a learning algorithm's model predictions.
- **Voting**: Voting is an ensemble machine learning algorithm. For regression, a voting ensemble involves making a prediction that is the average of multiple other regression models. In classification, a _hard voting_ ensemble involves summing the votes for crisp class labels from other models and predicting the class with the most votes. A _soft voting_ ensemble involves summing the predicted probabilities for class labels and predicting the class label with the largest sum probability.
- **Extra Trees**: An extra-trees classifier/regressor. This class implements a meta estimator that fits a number of randomized decision trees (a.k.a. extra-trees) on various sub-samples of the dataset and uses averaging to improve the predictive accuracy and control over-fitting.

### Advantages
- Performance: An ensemble can make better predictions and achieve better performance than any single contributing model.
- Robustness: An ensemble reduces the spread or dispersion of the predictions and model performance.

### Applications
Ensemble Learning is generally used to solve classification tasks but it can also perform well on regression tasks. Ensemble Learning can be used in healthcare where even the smallest amount of improvement in the accuracy of machine learning algorithms can be something truly valuable.

### Conclusion
Any machine learning task seeks to determine a single model that best predicts our desired outcome. Rather than creating a single model and hope it is the best/most accurate predictor possible, ensemble methods consider a variety of models and aggregate them to get an one final model.<br>
Although ensemble methods can help you win machine learning competitions by devising sophisticated algorithms and producing results with high accuracy, it is often not preferred in the industries where interpretability is more important. Nonetheless, the effectiveness of these methods are undeniable, and their benefits in appropriate applications can be tremendous. It's worth noting that Decision Trees aren't the only type of ensemble approach; they're merely the most popular and useful in Data Science currently.

### References
https://scikit-learn.org<br>
https://machinelearningmastery.com/why-use-ensemble-learning/<br>
https://bdtechtalks.com/2020/11/12/what-is-ensemble-learning/
