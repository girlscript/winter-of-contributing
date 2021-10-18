# Factors to consider for model selection #

## Content ##
1. Type of algorithm  and its cheatsheet
2. Type of problem and its cheatsheet
3. Size of training data
4. Speed of learning/training
5. Parameterization
6. Memory size
7. Overfitting tendency - A discussion
8. Convenient cheatcheet 
9. Conclusion <br><br><br>
Machine learning offers hundreds of algorithms which can be used for making predictions on real life scenarios. Then how do we know which one to choose among them?<br>
On a broader scope it depends on two factors. <b> One is the kind of solution you are looking for and the other being the kind of dataset you have</b>.On going a little deep down further, we need to constantly ask questions and seek answers in detail about these two factors. We'll understand all that in depth in this tutorial, but first let us be clear with initial two major questions.

### Type of algorithm? ###
<b>Machine learning is of three types. Choosing among them totally depend on the dataset and the expected output. Analyze your data and problem statement and categorize it into one of the following type in order to proceed further.</b><br>
<b>1. Supervised Learning:</b> In this case the final output is "labelled" in the dataset.You need to train the data according to given lables and the algorithms will make use of that to give you prediction about a new test data.<br>
Algorithms in this case include<br> Neural networks.<br>
Naive Bayes.<br>
Linear regression.<br>
Logistic regression.<br>
Support vector machine (SVM)<br>
K-nearest neighbor. (among others) <br>
<b>2. Unsupervised Learning:</b> In this case the final output is "not labelled" in the dataset. Training process takes place by understanding patterns in data points and are grouped together based on similar behaviour.<br>Algorithms in this case include<br>
KNN (k-nearest neighbors)<br>
Hierarchal clustering.<br>
Anomaly detection.<br>
Neural Networks.<br>
Principle Component Analysis.<br>
Independent Component Analysis.<br>
Apriori algorithm.(among others)<br>
<b>3. Reinforcement Learning:</b> This kind of learning is a subset of machine learning.It enables machine to learn through the consequences of actions in a specific environment. Here also, large amounts of labeled data with the correct input output pairs are not explicitly presented. Reinforcement learning describes the set of learning problems where an agent must take actions in an environment in order to maximize some defined reward function.<br>Algorithms in this case include<br>
Q-Learning<br> SARSA<br> DQN<br> DDPG (among others)<br>

## A cheatsheet based on classification of algorithm ##
![flowchart1](https://user-images.githubusercontent.com/66819114/137718565-5600db9e-24fe-4b2e-8c61-bb528f34ac66.png)


### Type of problem? ###
The next important analysis of problem statement come when we need to categorize it into one of the type of problem in machine learning. It can be of one of the following types:<br>
<b>1. Regression:</b> When the need is to predict numerical values, such kinds of problems are called regression problems.<br>Algorithms in this type include<br>Linear regression<br> K-NN<br> random forest<br> neural networks<br>
<b>2. Classification:</b> When there is a need to classify the data in different classes, it is called a classification problem.It is of two types i.Biomial classification and ii.Multinomial Classification<br>Algorithms in this type include<br>Logistic regression<br> random forest<br> K-NN, gradient boosting classifier<br> neural networks<br>
<b>3. Clustering:</b> When there is a need to categorize the data points in similar groupings or clusters, this is called a clustering problem.<br>Algorithms in this type include<br>K-Means<br> DBSCAN<br> Hierarchical clustering<br> Gaussian mixture models<br> BIRCH<br>
<b>4. Time-series forecasting:</b> When there is a need to predict a number based on the time-series data, it is called a time-series forecasting problem. Time series data means that data is in a series of particular time periods or intervals.<br>Algorithms in this type include<br>ARIMA<br>SARIMA<br>LSTM<br>Exponential smoothing<br> Prophet<br> GARCH<br> TBATS<br> Dynamic linear models<br>
<b>5. Anomaly detection:</b> When there is a need to find the outliers in the dataset, the problem is called an anomaly detection problem.<br>Algorithms in this type include<br>IsolationForest<br> Minimum covariance determinant<br> Local outlier factor<br> One-class SVM<br>
<b>6. Ranking:</b> When there is a need to order the results of a request or a query based on some criteria, the problem is ranking problems.<br>Algorithms in this type include<br>Bipartite ranking (Bipartite Rankboost, Bipartite RankSVM)<br>
<b>7. Recommendation:</b> When there is a need to recommend such as “next item” to buy or “next video” to watch or “next song” to listen to, the problem is called a recommendation problem.<br>Algorithms in this type include<br>Content-based and collaborative filtering machine learning methods<br>
<b>8. Data generation:</b> When there is a need to generate data such as images, videos, articles, posts, etc, the problem is called a data generation problem. <br>Algorithms in this type include<br>Generative adversarial network (GAN)<br> Hidden Markov models<br>
<b>9. Optimization:</b> When there is a need to generate a set of outputs that optimize outcomes related to some objective (objective function), the problem is called an objective function.<br>Algorithms in this type include<br>Linear programming methods<br> genetic programming<br>

## A cheatsheet based on classification of problem ##
![flowchart2](https://user-images.githubusercontent.com/66819114/137718691-a276c75c-0103-442a-af80-fce929df6acb.png)

# General Factors #
Now let us discuss model selection based on some general factors and dataset insights.

<b>1. Size of training data:</b> The most important observation that we need to make about our data before proceeding is its size i.e. the amount of samples we have for training.
On doing that, two cases can arise. <br>If the size of training data is small and the number of features are relatively large, then we need to choose algorithms with high bias/low variance.
Example of such algorithms include Linear Regression, Naive Bayes algorithm, SVM algorithm etc. <br> Similarly if the size of training data is large then we can go for a low bias/high variance algorithms. Examples include K Nearest neighbour, Decision trees etc.<br>Ther is a well defined procedure to calculate the bias and variance of any algorithm so that can be used to figure out the best algorithm.<br><br>
<b>2. Speed/ time of learning:</b> Sometimes, greater accuracy will cost a lot of training time. Some algorithms take time in different areas of training or data preprocessing and these algorithms can only be chosen if longer time can be invested. A few examples which take time gor various reasons can be seen below: <br> SVM Algorithm => tuing of parameters <br> Neural Network => high convergence time <br> Random forest => More time to train data . <br> These are a few examples. But if time cannot be invested, then algorithms such as Naive Bayes or Linear regression (which are easier to implement) can be used.<br><br>
<b>3. Parameterization:</b> Parameters affect the algorithm’s behavior, such as error tolerance or number of iterations. Typically, algorithms with large numbers parameters require the most trial and error to find a good combination. Even though having many parameters typically provides greater flexibility, training time and accuracy of the algorithm can sometimes be quite sensitive to getting just the right settings.<br><br>
<b>4. Memory size:</b> Some algorithms take up large memory sizes. This can be understood with an example. If for the same dataset, we use Linear Regression on one hand and Deep neural network on the other. Try to observe (graphically), the memory usage % for various operations as data and model scale.<br>We observe that a Scikit-learn linear regression estimator is quite efficient and does not consume much memory for actual model fitting or inference.
It does, however, have a fixed memory footprint in terms of the code and consumes that much while getting loaded.<br>On the other hand, neural network model consumes a lot of memory at the training/fitting step, unlike the linear regression model. However, for a small number of features and large data size, the fitting takes a low amount of memory.<br>Hence, memory space acts as an important factor in model selection as well.<br><br><br>

### Overfitting tendency  - A factor or not (A discussion) ###
Overfitting can be an explanation for poor performance of a predictive model.

Creating learning curve plots that show the learning dynamics of a model on the train and test dataset is a helpful analysis for learning more about a model on a dataset.

But overfitting should not be confused with model selection.

We choose a predictive model or model configuration based on its out-of-sample performance. That is, its performance on new data not seen during training.

The reason we do this is that in predictive modeling, we are primarily interested in a model that makes skillful predictions. We want the model that can make the best possible predictions given the time and computational resources we have available.

This might mean we choose a model that looks like it has overfit the training dataset. In which case, an overfit analysis might be misleading.

It might also mean that the model has poor or terrible performance on the training dataset.

In general, if we cared about model performance on the training dataset in model selection, then we would expect a model to have perfect performance on the training dataset. 

Now, one might wonder that a model that performs well on both train and test datasets be a better model. This is actually a little arguable.
This argument is based on the idea that a model that performs well on both train and test sets has a better understanding of the underlying problem.

A corollary is that a model that performs well on the test set but poor on the training set is lucky (e.g. a statistical fluke) and a model that performs well on the train set but poor on the test set is overfit.
If a model does not perform well in both train ad test sets together, this does not necessarily imply that we are in trouble.

Performance on the training set is not relevant during model selection. We must focus on the out-of-sample performance only when choosing a predictive model.
### A convenient cheatsheet ###
![flowchart3](https://user-images.githubusercontent.com/66819114/137719282-92ca4202-d87a-4368-bd24-9b5a28cbb3a9.png)

### Conclusion ###
Model selection is a key step in every data science project and requires perhaps the most conceptual foundational knowledge.Only by selectig the right machine learing model can the final prediction be more accurate and useful. I this tutorial we discussed some general factors and problem classification to select the right model for any situation. The discussion included Type of algorithm, Type of problem, Size of training data, Speed of learning/training, Parameterization, Memory size, Overfitting tendency.
