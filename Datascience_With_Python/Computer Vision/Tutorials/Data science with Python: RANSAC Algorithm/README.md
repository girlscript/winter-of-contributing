Random sample consensus (RANSAC)
Definition
Hello EveryOne ! In this tutorial , we are going to have a look on RANSAC.So let's get started ! Hope you like it.

Basic Idea
After reading this tutorial , you will acquire a basic knowledge of RANSAC and its imortance in computer vision.

Goal
To understand the concept of RANSAC in detail.

Topics to be Covered in this Tutorial :
WHAT IS RANSAC?

Random sample consensus (RANSAC) is an iterative method to estimate parameters of a mathematical model from a set of observed data that contains outliers, when outliers are to be accorded no influence on the values of the estimates.

PURPOSE

This explains about the main purpose of using RANSAC over other algorithms and what is the basic idea behind using this.

The RANSAC algorithm is a learning technique to estimate parameters of a model by random sampling of observed data. Given a dataset whose data elements contain both inliers and outliers, RANSAC uses the voting scheme to find the optimal fitting result.

Major Advantages and Disadvantages

An advantage of RANSAC is its ability to do robust estimation of the model parameters, i.e., it can estimate the parameters with a high degree of accuracy even when a significant number of outliers are present in the data set.

A disadvantage of RANSAC is that there is no upper bound on the time it takes to compute these parameters. When the number of iterations computed is limited the solution obtained may not be optimal, and it may not even be one that fits the data in a good way. In this way RANSAC offers a trade-off; by computing a greater number of iterations the probability of a reasonable model being produced is increased.

Another disadvantage of RANSAC is that it requires the setting of problem-specific thresholds.

RANSAC can only estimate one model for a particular data set. As for any one-model approach when two (or more) model instances exist, RANSAC may fail to find either one. The Hough transform is an alternative robust estimation technique that may be useful when more than one model instance is present.

Implementation of algorithm in Python

This covers a detailed explaination of RANSAC algorithm using Python on a given Image. Feature Extraction and FEature matching are done for a given image.

Bibliography

http://www.cse.yorku.ca/~kosta/CompVis_Notes/ransac.pdf

https://en.wikipedia.org/wiki/Random_sample_consensus#Advantages_and_disadvantages

https://scikit-learn.org/stable/auto_examples/linear_model/plot_ransac.html

https://vitalflux.com/ransac-regression-explained-with-python-examples/
