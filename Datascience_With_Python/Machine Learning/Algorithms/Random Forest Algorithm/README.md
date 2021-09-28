# **Random Forest Algorithm**

## **Introduction**

- Random Forest Algorithm is a Machine Learning Algorithm which is mainly used to solve regression based and classification problems.
  It uses many classifiers to provide solutions to complex problems.

- We will be working on this algorithm with a small project while following steps as below:

   1. Data Preprocessing with Visualization.
   2. Model Building

## **Purpose** 

A random forest works by establishing the prediction based upon the work of decision trees. It gives an output by taking the average or the mean of the result from various trees. By doing this it increases the precision of the outcome.

## **Brief summary** 

A random forest is a collection of decision trees, which contain three main components, leaf nodes, decision nodes, and a root node. A single decision tree algorithm separates training dataset into branches until a leaf node is attained.

## **Features**

- It is more precise than the decision tree algorithm.

- Handling data is much more effective.

- Issue of overfitting is reduced.

- In every random forest tree, a subset of features is selected randomly at the node’s splitting point.

## **Advantages**

- Due to a large amount of decision trees, random forest is highly robust an precise.

- The problem of overfitting is solved. The main reason is that it takes the average of all the predictions, which removes the biases.

- The algorithm is used in mainly classification and regression problems.

- We can get a relative feature importance, which can be used in selecting the most contributing features for the classifier.

## **Random Forest vs Decision Tree**

- Random forests consists of multiple decision trees.

- Decision trees might suffer from overfitting, but random forests avoids overfitting by creating trees on random subsets.

## **Applications**

Where can we use Random Forest Algorithm for Data Science?

- Banking Industry 

- Healthcare and Medicine 

- Stock Market 

- E-Commerce

## **Workflow**

- First we start by collection of our data, for this we have chosen a dataset for Social Network Ads.

- Then we continue on by reading the data.

- Check for missing values with isnull().

- We move on to identify outliers in our data. We do this by making boxplots and using the Z-score threshold to remove them.

- Now, we will be converting our categorical data into numeric data so that our ML model can work on it.

- After the processsing of data, we can now split the data into training and testing data and apply Random Forest Classifier to train our model.

- Evaluation of our model will be done with an accuracy score as shown in the screenshots.

## **Visual Representations**

These are the visual representations to identify outliers in our dataset

![](https://github.com/Akshat2019VITB/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Random%20Forest%20Algorithm/Images/1.PNG)

![](https://github.com/Akshat2019VITB/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Random%20Forest%20Algorithm/Images/2.PNG)

## **Libaraies used**

- Pandas

- Numpy

- Matplotlib

- Seaborn

- Scikit-learn

- SciPy


## **Final Outcomes and Evaluation Results**

- From this project we were able to learn on how to implement Random Forest Algorithm in Data Science using Python.

- We saw it's advantages and how it is useful with its features and it's advantage over Decision Tree.

- Data preprocessing was done to check for missing values and outliers, which were removed through Z-Score threshold.

- Label Encoding was used to convert categorical data into numerical.

- Data was split into Training and Testing for our ML model.

- We were able to get an accuracy score of 0.95 from our model through testing.

## **Conclusion**

- Random Forest Algorithm is a Machine Learning Algorithm which is mainly used to solve regression based and classification problems.

- This is a great algorithm for developers because it prevents the problem of overfitting of training datasets. It’s a resourceful tool for making precise predictions needed in complex decision making in many organizations.
