# **Random Forest Algorithm**

## **Introduction**

- A random forest is a machine learning technique that’s used to solve regression and classification problems. It utilizes ensemble learning, which is a technique that combines many classifiers to provide solutions to complex problems.

- We will understand the working of this algorithm by a project example by following steps as below:

   1. Data Preprocessing with Visualization.
   2. Model Building

## **Purpose** 

The (random forest) algorithm establishes the outcome based on the predictions of the decision trees. It predicts by taking the average or mean of the output from various trees. Increasing the number of trees increases the precision of the outcome.

## **Brief summary** 

A decision tree consists of three components: decision nodes, leaf nodes, and a root node. A decision tree algorithm divides a training dataset into branches, which further segregate into other branches. This sequence continues until a leaf node is attained. The leaf node cannot be segregated further.
A random forest consists of many such decision trees. 

## **Features**

- It’s more accurate than the decision tree algorithm.

- It provides an effective way of handling missing data.

- It can produce a reasonable prediction without hyper-parameter tuning.

- It solves the issue of overfitting in decision trees.

- In every random forest tree, a subset of features is selected randomly at the node’s splitting point.

## **Advantages**

- Random forests is considered as a highly accurate and robust method because of the number of decision trees participating in the process.

- It does not suffer from the overfitting problem. The main reason is that it takes the average of all the predictions, which cancels out the biases.

- The algorithm can be used in both classification and regression problems.

- Random forests can also handle missing values. There are two ways to handle these: using median values to replace continuous variables, and computing the proximity-weighted average of missing values.

- You can get the relative feature importance, which helps in selecting the most contributing features for the classifier.

## **Random Forest vs Decision Tree**

- Random forests is a set of multiple decision trees.

- Deep decision trees may suffer from overfitting, but random forests prevents overfitting by creating trees on random subsets.

## **Applications**

Where can we use Random Forest Algorithm for Data Science?

- Banking Industry 

- Healthcare and Medicine 

- Stock Market 

- E-Commerce

## **Workflow**

- First we start by collection of our data, for this we have chosen a dataset for Social Network Ads.

- Then we continue on by reading the data, as shown.

![](https://github.com/Akshat2019VITB/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Random%20Forest%20Algorithm/Images/5.PNG)

- Here we will be checking for missing values.

![](https://github.com/Akshat2019VITB/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Random%20Forest%20Algorithm/Images/6.PNG)

- As there are no missing values, we move on to identify outliers in our data. We do this by making boxplots and using the Z-score threshold to remove them.

![](https://github.com/Akshat2019VITB/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Random%20Forest%20Algorithm/Images/8.PNG)

- Now, we will be converting our categorical data into numeric data so that our ML model can work on it.

![](https://github.com/Akshat2019VITB/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Random%20Forest%20Algorithm/Images/7.PNG)

- After the processsing of data, we can now split the data into training and testing data and apply Random Forest Classifier to train our model.

- Evaluation of our model will be done with an accuracy score as shown in the screenshots.

## **Understanding a Boxplot**

![](https://github.com/Akshat2019VITB/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Random%20Forest%20Algorithm/Images/9.png)

The image above is a boxplot. A boxplot is a standardized way of displaying the distribution of data based on a five number summary (“minimum”, first quartile (Q1), median, third quartile (Q3), and “maximum”). It can tell you about your outliers and what their values are. It can also tell you if your data is symmetrical, how tightly your data is grouped, and if and how your data is skewed.

## **Visual Representations**

These are the visual representations to identify outliers in our dataset

![](https://github.com/Akshat2019VITB/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Random%20Forest%20Algorithm/Images/1.PNG)

![](https://github.com/Akshat2019VITB/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Random%20Forest%20Algorithm/Images/2.PNG)

## **Screenshots**

- These are the screenshots for the application of Random Forest Classifier and Accuracy Score obtained after evaluation.

![](https://github.com/Akshat2019VITB/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Random%20Forest%20Algorithm/Images/3.PNG)

![](https://github.com/Akshat2019VITB/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Random%20Forest%20Algorithm/Images/4.PNG)

## **Final Outcomes and Evaluation Results**

- From this project we were able to learn on how to implement Random Forest Algorithm in Data Science using Python.

- We saw it's advantages and how it is useful with its features and it's advantage over Decision Tree.

- Data preprocessing was done to check for missing values and outliers, which were removed through Z-Score threshold.

- Label Encoding was used to convert categorical data into numerical.

- Data was split into Training and Testing for our ML model.

- We were able to get an accuracy score of 0.95 from our model through testing.

## **Conclusion**

- The Random Forest Algorithm is a machine learning algorithm that is easy to use and flexible. It uses ensemble learning, which enables organizations to solve regression and classification problems.

- This is an ideal algorithm for developers because it solves the problem of overfitting of datasets. It’s a very resourceful tool for making accurate predictions needed in strategic decision making in organizations.
