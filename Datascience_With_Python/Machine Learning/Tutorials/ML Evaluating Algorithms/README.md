
# **EVALUATING ALGORITHMS:**

### INTRODUCTION:
    
  Evaluating our Algorithm is an essential part of any project.Once we defined our problem and prepared data we need to apply machine learning algorithm to the data in order to solve our problem.

We spend lot of time choosing, running and tuning algorithm.We have to make sure, we are using our time effectively to get closer to solve our goal.

We must evaluate our machine learning algorithms on data that is not used to train the algorithm.

The evaluation is an estimate that we can use to talk about how well we think the algorithm may actually do in practice. It is not a guarantee of performance.

Once we estimate the performance of our algorithm, we can then re-train the final algorithm on the entire training dataset and get it ready for operational use.

### PURPOSE:
  
  Algorithm evaluation is the process of assessing a property or properties of an algorithm. This helps in choosing the best algorithm which makes our model more accurate, increases the performance of the model, we can handle large datasets, execution speed increases and faster interpretation.

Evaluation of an Algorithms includes 3 steps:

**1. Test the Harness:**

We need to run a test harness to check the effectiveness of our particular answer, think deeply and make insightful interpretations about the problem. The estimation of the problem set by applying various algorithms to it will  make for a better harness.The quick insight into the learnability of the problems will indicate whether we should carry on the problem and its evaluation further.This implies the beneficial structure of the problem which can be easily read and learned by the machine. Test Harness is also used for cross-validation to estimate the working effectiveness of the chosen algorithm.

A test harness should allow specific tests to run (this helps in optimizing), orchestrate a runtime environment, and provide a capability to analyse results.

The typical objectives of a test harness are to:

-Automate the testing process.

-Execute test suites of test cases.

-Generate associated test reports.

A test harness provides a consistent way to evaluate machine learning algorithms on a dataset.

It involves 3 elements:

1.The resampling method to split-up the dataset.

2.The machine learning algorithm to evaluate.

3.The performance measure by which to evaluate predictions.

The loading and preparation of a dataset is a prerequisite step that must have been completed prior to using the test harness.

The test harness must allow for different machine learning algorithms to be evaluated, whilst the dataset, resampling method and performance measures are kept constant.

**Advantages**

A test harness may provide some of the following benefits:

-Increased productivity due to automation of the testing process.

-Increased probability that regression testing will occur.

-Increased quality of software components and application.

-Repeatability of subsequent test runs.

-Offline testing 

-Access to conditions and/or use cases that are otherwise difficult to simulate (load, for example).


**2.Explore and select algorithms:**

A better algorithm will always put forward an easy way to solve a problem.Classification, regression analysis, and clustering are some of the methods which help to create meaningful results. It is not that challenging to find a good performance measure.

Here are some important considerations while choosing an algorithm.

1.Size of the training data:

It is usually recommended to gather a good amount of data to get reliable predictions. However, many a time, the availability of data is a constraint. So, if the training data is smaller or if the dataset has a fewer number of observations and a higher number of features like genetics or textual data, choose algorithms with high bias/low variance like Linear regression, Naïve Bayes, or Linear SVM.

If the training data is sufficiently large and the number of observations is higher as compared to the number of features, one can go for low bias/high variance algorithms like KNN, Decision trees, or kernel SVM.

2.Accuracy and/or Interpretability of the output:

 Accuracy of a model means that the function predicts a response value for a given observation, which is close to the true response value for that observation. A highly interpretable algorithm (restrictive models like Linear Regression) means that one can easily understand how any individual predictor is associated with the response while the flexible models give higher accuracy at the cost of low interpretability.

3.Speed or Training time:

Higher accuracy typically means higher training time. Also, algorithms require more time to train on large training data. In real-world applications, the choice of algorithm is driven by these two factors predominantly.

Algorithms like Naïve Bayes and Linear and Logistic regression are easy to implement and quick to run. Algorithms like SVM, which involve tuning of parameters, Neural networks with high convergence time, and random forests, need a lot of time to train the data.

4.Linearity:

Many algorithms work on the assumption that classes can be separated by a straight line (or its higher-dimensional analog). Examples include logistic regression and support vector machines. Linear regression algorithms assume that data trends follow a straight line. If the data is linear, then these algorithms perform quite good.

However, not always is the data is linear, so we require other algorithms which can handle high dimensional and complex data structures. Examples include kernel SVM, random forest, neural nets.

The best way to find out the linearity is to either fit a linear line or run a logistic regression or SVM and check for residual errors. A higher error means the data is not linear and would need complex algorithms to fit.

5.Number of features:

The dataset may have a large number of features that may not all be relevant and significant. For a certain type of data, such as genetics or textual, the number of features can be very large compared to the number of data points.

A large number of features can bog down some learning algorithms, making training time unfeasibly long. SVM is better suited in case of data with large feature space and lesser observations. PCA and feature selection techniques should be used to reduce dimensionality and select important features.

![alg3.png](attachment:alg3.png)

**3.Interpret and report results:**

After choosing an algorithm based on various parameters, it is always useful to test it and see the structure it generates and whether the machine is capable of learning and analyzing the given dataset and its provided structure. Spot checking is one of the ways to do that. 

Instead of testing the whole data we may use a proportion of the whole data and divide it among testing and training. The sample should be a good representative of your population. It is not necessary to train the entire model on the given dataset.


### ADVANTAGES:

-Increases the performance of the model

-Increases the quality and productivity

-Accuracy increases

-Easy to handle large data sets

-Execution speed increases

-Faster interpretation

### CONCLUSION:

There are many machine learning algorithms. Choosing the best algorithm that is suitable for our data is most important. So choose effectively by evaluating all the algorithms and check their accuracies on training and test set and then finalize one model.


