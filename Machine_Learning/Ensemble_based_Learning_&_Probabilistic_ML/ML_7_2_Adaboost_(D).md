## Title : AdaBoost
🔴 **Type of Content** : Documentation

🔴 **Domain** : Machine Learning

🔴 **Module** : Ensemble based Learning & Probabilistic ML

*********************************************************************
### Introduction
1) AdaBoost(Adaptive Boosting) is one of the Boosting algorithms.
2) It helps to combine weak classifiers into a single strong classifier.
3) Using AdaBoost we build a model where all the data points in a data set are assigned equal weights.
4) All wrongly classfied data points are given higher weights.
5) Points with such higher weights(wrongly classified) are given more priority during the next model evaluations.
6) Like this the steps are carried out recursively to build models which are error-free and accurate.<br>
![image](https://user-images.githubusercontent.com/34717612/140602199-accf2c3e-22e4-4e55-a871-74034e779e85.png)<br>
7) The most common way to implement AdaBoost is to use Decision trees with one level or one split.
8) These trees are known as Decision Stumps.These stumps have only one node and two leaves.
### Algorithm 
Step 1) Initialize the dataset. Assign suitable weight to each of the data points.<br>
Step 2) Identify the wrongly classified points based on the above assigned input.<br>
Step 3) Assign higher weights to the wronly classified points.<br>
Step 4) If accurate results obtained<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;goto next step<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;else<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;goto step 2<br>
Step 5) End            
### Implementation
**1)**<br>
&nbsp;&nbsp;&nbsp;&nbsp;from sklearn.ensemble import AdaBoostClassifier<br>
&nbsp;&nbsp;&nbsp;&nbsp;from sklearn.datasets import make_classification<br>
&nbsp;&nbsp;&nbsp;&nbsp;X, y = make_classification(n_samples=1000, n_features=4, n_informative=2)<br>
&nbsp;&nbsp;&nbsp;&nbsp;clf = AdaBoostClassifier(n_estimators=100, random_state=0)<br>
&nbsp;&nbsp;&nbsp;&nbsp;clf.fit(X, y)<br><br>
Here,<br>
a) We have imported AdaBoostClassifier from skelearn.ensemble.It contains parameters like-<br>
i) n_estimators which indicates the maximum number of estimators at which boosting is terminated.<br>
ii) random_state which helps to control the seed value.<br><br>
b) make_classification helps us create a cluster of points.It contains parameters like-<br>
i) n_samples to get number of samples.<br>
ii) n_features to get total number of features.<br>
iii) n_informative to get the number of informative features.<br><br>
**2)**<br>
&nbsp;&nbsp;&nbsp;&nbsp;print(y)<br><br>
**OUTPUT:**<br>
![image](https://user-images.githubusercontent.com/34717612/140605530-6e9d6090-3d52-4605-b85b-ca736b67f5c5.png)<br><br>
**3)**<br>
&nbsp;&nbsp;&nbsp;&nbsp;print("Performance:",100\*clf.score(X,y))<br><br>
**OUTPUT:**<br>
![image](https://user-images.githubusercontent.com/34717612/140605620-89dbd9dc-6bac-48f9-98d4-92c287a2bf46.png)
### Advantage
1) Fast, simple and easy to implement.
2) Overfitting is reduced which makes the algorithm accurrate.
3) Accuracy of weak classifiers is greatly improved.
### Disadvantage
1) Sensitive to outliers.
2) Not accurate on noisy data.
3) Very weak classifiers can reduce accuracy to a great extent.
### References
1) https://www.geeksforgeeks.org/boosting-in-machine-learning-boosting-and-adaboost/
2) https://www.analyticsvidhya.com/blog/2021/09/adaboost-algorithm-a-complete-guide-for-beginners/
*********************************************************************

### GirlScript Winter of Contributions 2021 
