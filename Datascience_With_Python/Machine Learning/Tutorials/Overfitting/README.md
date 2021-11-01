## :star:  Overfitting

## :stars: Introduction

Overfitting is a modeling error in statistics that occurs when a function is too closely aligned to a limited set of data points. ... Thus, attempting to make the model conform too closely to slightly inaccurate data can infect the model with substantial errors and reduce its predictive power.
overfitting typically occurs when we try to fit a complex model with an inadequate amount of training data. And overfitting model uses its ability to capture complex patterns by being great at predicting lots and lots of specific data samples or areas of local variation in the training set. But it often misses seeing global patterns in the training set that would help it generalize well on the unseen test set. It can't see these more global patterns because, intuitively, there's not enough data to constrain the model to respect these global trends. As a result, the training set accuracy is a hopelessly optimistic indicator for the likely test set accuracy if the model is overfitting.

## :stars: How to detect overfitting

A key challenge with overfitting, and with machine learning in general, is that we can’t know how well our model will perform on new data until we actually test it.
To address this, we can split our initial dataset into separate training and test subsets.
This method can approximate of how well our model will perform on new data.
If our model does much better on the training set than on the test set, then we’re likely overfitting.



## :stars: Overfitting in Regression

<p align="center">
  <img width="400" height="300" src="https://github.com/siyinghan/Notes/raw/master/Applied%20Data%20Science%20with%20Python%20(Coursera%20Specialization)/03%20Applied%20Machine%20Learning%20in%20Python/Image/073.png">
  </p>

The first example that we'll look at for overfitting involves regression. In this chart on the x axis, we have a single input variable that might be, for example, the size of a piece of property. And we have a target variable on the y axis. For example, this might be that market selling price of a house that sits on that piece of property. So in regression, we're looking to find the relationship between the input variable and the target variable. And we start off with the idea of a model that we want to fit that might explain this relationship. So, one example of a model that we could try to fit would be a linear model. So trying to predict that there's a linear relationship between the input variable and the target variable. So, the regression model might fit a straight line to these points.

## :stars: Overfitting in classification

<p align="center">
  <img width="400" height="300" src="https://github.com/siyinghan/Notes/raw/master/Applied%20Data%20Science%20with%20Python%20(Coursera%20Specialization)/03%20Applied%20Machine%20Learning%20in%20Python/Image/077.png">
  </p>


The second example will look at overfitting in classification. So, this diagram shows a simple two dimensional classification problem where each data instance is represented by a point, and where there are two features associated with each data instance. This is a binary classification problem so points are labeled either red over here or blue. And the problem in classification is to find a decision boundary. So as we saw with K nearest neighbors we want to take this feature space and find regions that are associated with the different labels. So, one type of classifier that we'll look at shortly is called the linear classifier where we try to find a decision body that's essentially a straight line through the space.

## :stars: Overfitting in KNN classifiers

<p align="center">
  <img width="400" height="300" src="https://github.com/siyinghan/Notes/raw/master/Applied%20Data%20Science%20with%20Python%20(Coursera%20Specialization)/03%20Applied%20Machine%20Learning%20in%20Python/Image/082.png">
  </p>

This third example shows the effect of modifying the K parameter in the K nearest neighbors classifier that we saw previously. The three plots shown here show the decision boundaries for K=10, K=5, and K=1. And here we're using the fruit dataset again with the height of a piece of fruit on the x axis and the width on the y axis. So the K=10 case, as you recall, K=10 means that, for each query point that we want to get a prediction for, let's say over here, we have to look at the 10 nearest points to the query point and we'll take those. We won't go through all 10 here, but let's just say there are several here that are nearby and will average or combine their votes to predict the label for this point. So in the K=10 case, we need the votes from 10 different data instances in the training set to make our prediction. And as we reduce K, so K=5, we only need five neighbors to make a prediction. So for example, if the query point was here, we'd look at these four and then possibly whatever was the closest in this let's say, that one or this one. And then finally, in the K=1 case, that's the most unstable in the sense that for any query point, we only look at the single nearest neighbor to that point. And so, the effect of reducing K in the k-nearest neighbors classifier is to increase the variance of the decision boundaries, because the decision boundary can be affected by outliers. 

## :stars: How to reduce overfitting 

:sparkles: Reduce the network's capacity by removing layers or reducing the number of elements in the hidden layers.

:sparkles: Apply regularization , which comes down to adding a cost to the loss function for large weights.

:sparkles: Use Dropout layers, which will randomly remove certain features by setting them to zero.

## :stars: Output
In ipynb file , I have shown an overfitting model and also how to limit it using lasso regularization

<p align="center">
  <img width="400" height="300" src="https://user-images.githubusercontent.com/66861391/139693067-2014ec24-da71-46a6-b907-c07404f76111.png">
  </p>

<p align="center">
  <img width="400" height="300" src="https://user-images.githubusercontent.com/66861391/139693170-d1ed611a-7d10-43ea-81ad-a2ab121915ff.png">
  </p>
  
<p align="center">
  <img width="400" height="300" src="https://user-images.githubusercontent.com/66861391/139693272-d146c9af-1124-401d-962c-a68a893e9337.png">
  </p>
  
<p align="center">
  <img width="400" height="300" src="https://user-images.githubusercontent.com/66861391/139693358-fdde1afb-16c5-4cba-9b32-b5745a0cd505.png">
  </p>


## :stars: conclusion
As shown above, all three options help to reduce overfitting. We manage to increase the accuracy on the test data substantially. Among these three options, the model with the lasso regularization performs the best on the test data.
