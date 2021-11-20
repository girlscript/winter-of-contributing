**Title : How Bagging is different from Boosting (D)**

🔴 Type of Content : Document

🔴 Domain : Machine Learning

🔴 Module : Miscellaneous

![image](https://user-images.githubusercontent.com/46518960/142733403-b8b8ee71-c530-4506-a44e-1ca996d498e5.png)

Bagging and Boosting are two types of Ensemble learning models.

**Ensemble learning** models works on the principle that group of weak learners combine together to form a strong learner to improve the accuracy of the model.

**Brief description of Bagging and Boosting**

**1. Bagging:** It is a bootstrap meta-algorithm designed to improve the accuracy and stability of the algorithm used in Classification and Regression. It combines several decision tree models to produce better predictive output than a single model. It works on the principle that group of weak learners combines together to form a strong learner.

**Advantages**
1.	It reduces the overfitting.
2.	Decreases variance

**Disadvantages**
1.	It won’t give precise values as prediction is based on mean from subset trees.

**Implementation of bagging**
1.	Set the number of tuples (n). Multiple subsets are created from the equal original dataset of n tuples with replacement. 
2.	A subset of M features is selected randomly and whichever feature gives the best split is used to split the node iteratively.
3.	A base model is created on each subset.
4.	Each model is learned in parallel from each training set and independent of each other
5.	Repeat the above steps and output is predicted.
For Classification Model each classifier returns its classification. The bagged classifier counts the votes and assigns the class with most votes.
For Regression Model each regression model returns its prediction and final output is based on the aggregation of predictions from k number of trees.
    

**2. Boosting:** It is a method to build a strong classifier model from the number of weak classifiers. Model building is done in series. First model is built from the training set. The second model is built which tries to rectify the errors of previous model. This step is repeated until all the dataset is predicted or the maximum number of models are added.




**Implementation of boosting**
1.	Initialize equal weights to each of the data.
2.	Provide this as input to the model and identify the wrongly classified data points.
3.	Increase the wrongly identified weights.
4.	If all the data points are predicted process will end else step 2 and step 3 will be repeated.

**Advantages**
1.	Supports different loss function

**Disadvantages**
1.	Prone to overfitting.
2.	Needs careful tuning of hyperparameter

**Difference between bagging and boosting**

![image](https://user-images.githubusercontent.com/46518960/142733563-e02d5031-5958-4a04-9058-c64e3818b2f5.png)




