# **Decision Tree Algorithm**

![](https://github.com/dev123singh/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Decision%20Tree%20Algorithm/Images/9.png)
## **Introduction**

- Decision tree algorithm comes under supervised Machine Learning Algorithm where labelled data is used, the decision tree algorithm can be used for solving regression and classification problems too.
- It is generally used in clustering and regression based problems in Data Science.

- Let's understand the working of this algorithm by a project example by following steps as below:

 1. Data Preprocessing.
 2. Model Creation.
 3. Visualization.

## **Important terminologies** 

Root Node: It represents the entire population or sample and this further gets divided into two or more homogeneous sets.

Splitting: It is a process of dividing a node into two or more sub-nodes.

Decision Node: When a sub-node splits into further sub-nodes, then it is called the decision node.

Leaf / Terminal Node: Nodes do not split is called Leaf or Terminal node.

Pruning: When we remove sub-nodes of a decision node, this process is called pruning. You can say the opposite process of splitting.

Branch / Sub-Tree: A subsection of the entire tree is called branch or sub-tree.

Parent and Child Node: A node, which is divided into sub-nodes is called a parent node of sub-nodes whereas sub-nodes are the child of a parent node.

## **Features**

The goal of using a Decision Tree is to create a training model that can use to predict the class or value of the target variable by learning simple decision rules inferred from prior data(training data).

In Decision Trees, for predicting a class label for a record we start from the root of the tree. We compare the values of the root attribute with the record’s attribute. On the basis of comparison, we follow the branch corresponding to that value and jump to the next node.

## **Brief summary** 
Decision trees use multiple algorithms to decide to split a node into two or more sub-nodes. The creation of sub-nodes increases the homogeneity of resultant sub-nodes. In other words, we can say that the purity of the node increases with respect to the target variable. The decision tree splits the nodes on all available variables and then selects the split which results in most homogeneous sub-nodes.


## **Visual Representations**
![](https://github.com/dev123singh/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Decision%20Tree%20Algorithm/Images/8.PNG)
![](https://github.com/dev123singh/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Decision%20Tree%20Algorithm/Images/1.PNG)
![](https://github.com/dev123singh/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Decision%20Tree%20Algorithm/Images/2.PNG)
![](https://github.com/dev123singh/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Decision%20Tree%20Algorithm/Images/3.PNG)
![](https://github.com/dev123singh/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Decision%20Tree%20Algorithm/Images/4.PNG)


## **Test Cases**

![](https://github.com/dev123singh/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Decision%20Tree%20Algorithm/Images/5.PNG)
![](https://github.com/dev123singh/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Decision%20Tree%20Algorithm/Images/6.PNG)



## **Usage**

- Clustering/ Regression based problems.
- Used in Data modelling




## **Advantages**

1 Compared to other algorithms decision trees requires less effort for data preparation during pre-processing.

2 A decision tree does not require normalization of data.

3 A decision tree does not require scaling of data as well.

4 Missing values in the data also do NOT affect the process of building a decision tree to any considerable extent.

5 A Decision tree model is very intuitive and easy to explain to technical teams as well as stakeholders.

## **Screenshots**
![](https://github.com/dev123singh/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Decision%20Tree%20Algorithm/Images/7.PNG)

## **Conclusion**

1 Decision Tree is a very popular machine learning algorithm. Decision Tree solves the problem of machine learning by transforming the data into a tree representation. Each internal node of the tree representation denotes an attribute and each leaf node denotes a class label.

2 A decision tree algorithm can be used to solve both regression and classification problems.
