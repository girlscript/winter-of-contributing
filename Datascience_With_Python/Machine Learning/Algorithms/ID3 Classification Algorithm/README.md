# Data Science with Python : ID3 Classification Algorithm #1822

## Description and overview :

<b>ID3 algorithm</b> (Iterative Dichotomiser 3) is a specific machine learning algorithm. <b>Iteratively</b> means doing something repeatedly and <b>Dichotomizes</b> means divides. This classification algorithm is named such as it divides attributes or features into several groups, repeatedly. It follows a greedy approach of building a decision tree. 
Let us learn about <b>decision tree</b> first, it is nothing but a simple tree-like model(with the root at the top) that depicts a clear pathway to a decision. There are two types of nodes decision nodes(contains a condition to split the data) and leaf nodes(decide the class of a new data point).
There are four popular types of decision tree algorithms - ID3, CART, Chi-Square, Reduction in Variance.
Now we will focus on ID3 Classification Algorithm.

## Terms related ID3 :

1. Root node is the attribute that classifies the data best.
2. Splitting is the process of dividing nodes into subnodes. 
3. We will use <b>Information Gain</b> to decide the splitting points.
4. In order to measure the information gain we can use <b>Entropy</b>. Entropy defines the uncertainty in a data set. Fro any given data if the entropy in higher ,it is harder to draw a comclution from the given data. A completely homogeneous dataset has entropy of 0, whereas equally divided dataset has an entropy of 1.

## ID3 Algorithm :

#### This algorithm assumes that all the attributes are discrete and the classification is binary.

Step 1. Calculate the entropy or amount of uncertainity in the data set.

Step 2. Then find the Average Information Entropy:

Step 3. Find the information gain for each attribute. It is the difference between entropy before splitting and average entropy after splitting.

Step 4. Select the Highest Information Gain Attribute.

Step 5. Now just repeat until the desired tree is formed.

## Characteristics of ID3 :

1. ID3 classification algorithm follows greedy approach. There is a high possibility to get stuck in local optimum results.
2. This algorithm helps to build small trees but does not guarantee it to be the smallest.
3. For continuos data, the points of splitting increase and searching for best attribute becomes time time consuming. Hence, it hard to implement ID3 in case of continous data.

## Advantages of ID3 :

1. The algorithm is simple and easy to implement. It does not require very complicated statistical knowledge.
2. Using this classification algorithm we can build the fastest and small tree.
3. Finding the leaf nodes enables our test data to be pruned ,eventually reduces the number of tests.
4. It is useful in data exploration . We can create new features or variables with better power to predict target variables.

## Conclusion :

ID3 Classification Algorithm is a popular and powerful machine learning algorithm. The main aim of this algorithm is to build a decision tree that helps to prectict the value of the target attribute. 
But if the tree is too deep then the decision tree built using ID3 will be overfitting. To avoid overfitting, many more powerful methods are used (for example: Random Forest, gradient boosting etc.) . To build a good foundation of learning data science and machine learning ID3 algorithm is very much useful.

## References :

1. <a href = "https://towardsdatascience.com/id3-decision-tree-classifier-from-scratch-in-python-b38ef145fd90#:~:text=%20ID3%20Decision%20Tree%20Classifier%20from%20scratch%20in,wind%20blows%20from%20the%20South.%20If...%20More%20\">ID3 Decision Tree Classifier from scratch in Python</a>

2. <a href = "https://iq.opengenus.org/id3-algorithm/#:~:text=Characteristics%20of%20ID3%20Algorithm%20are%20as%20follows%3A%201,produce%20the%20smallest%20possible%20tree.%20More%20items...%20\">Characteristics of ID3 Algorithm</a>

3. <a href = "https://en.wikipedia.org/wiki/ID3_algorithm#Pseudocode\"> Pseudocode of ID3 Algorithm</a>
