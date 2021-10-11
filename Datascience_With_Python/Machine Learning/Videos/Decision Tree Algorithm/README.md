## Topic: Data Science with Python : Decision Tree Algorithm #1126
## Video Link: [Decision Tree Algorithm](https://drive.google.com/file/d/15cqs6-gTkT2BxEJwmPnz3sIB81G7U5eA/view?usp=sharing)
Data mining is one of the steps in CRISP-DM which uses machine learning models to train the dataset. Supervised machine learning is a part of data mining that deals to train the dataset that includes both input/inputs and output. One of the supervised machine learning models is the Decision tree.

**Decision Tree**

A decision tree is a supervised machine learning model. It is called a decision tree because it takes decisions that help in splitting the dataset and it is called a tree because resembles a tree structure. 


*Example:*

Now let’s look into an example of how the decision tree algorithm train and splits the data set.

*Sample dataset:*

![Capture_1](https://user-images.githubusercontent.com/79050917/134550888-fccfe4ca-77a8-4f38-a675-8e2917973980.PNG)



The decision tree splits the above dataset based on questions like the colour or capacity of the ball.

Question: Capacity  > 25 lt.

Bottles that satisfy the condition get into one node, and others get into another node i.e capacity > 25 lt.

Bottle A and Bottle C get into one node, Bottle B and Bottle D get into another node.

After the split of entropy, further, it divides the bottles based on the colour.

The bottles of a particular colour get into one node.

Question: Colour is red or not.

Bottle A, Bottle B, Bottle C, Bottle D gets into different nodes based on their colour i.e red or blue.

In this way, the decision tree splits the dataset.

**While reading the above example some of the questions that arise are:**

*What exactly decision tree is?*

*What are the measures used in the decision tree while splitting the dataset?*

*When decision tree is used?*

*What are the terminologies used in the decision tree?*

*Why it is known as a greedy algorithm?*

*When to stop splitting of decision tree?*

*What are the advantages?*

*What are the disadvantages?*

*What is pruning and why it is used?*

**Read further to get answers to the above questions:**


**Definition:**

The decision tree splits the dataset based on a decision/condition/question. It continuously splits the data until it reaches a threshold value which is upfront decided or naturally stops.

**Measures used:**

*Information gain*

*Gini index* 

**Information gain:**

- It is calculated based on entropy. Information gain is the difference in entropy before and after splitting of the data set.

- The high value of information gain is preferred in the splitting of the data set.

- Formula: 

- On a board basis: 

Entropy(before) - Entropy(after)

Exactly: 

Entropy= -P(yes)log2 P(yes)- P(no) log2 P(no)

Where, P(yes)= probability of yes, P(no)= probability of no.

**Gini Index:**

- It is based on the purity or impurity of the data set.

- It only splits into binary nodes.

- The low value of the Gini index is preferred in the splitting of data.

- It is used in the CART algorithm (classification and regression tree algorithm)

- Formula:

subtracting the sum of squared probabilities of each class from one.

1 - ∑ ((p(x))^2)

**When it is used:**

It is used in both classification and regression problems. But mostly used for classification problems.

**Terminologies to know:**

The decision tree has root nodes, internal nodes, and leaf nodes.

![Capture_2](https://user-images.githubusercontent.com/79050917/134551463-7e4796d9-6253-47b1-9a4f-509f06e52827.PNG)                         


**Root node:**

It consists of the input data which gets divided into further nodes. 

**Internal node:**

It resembles the decision of the root node.

**Leaf node:**

It represents the output of the data which can be numeric or categorical.

**Entropy:** 

Randomness in the data set.

**A decision tree is a greedy algorithm:**

It is called a greedy algorithm because at every node it takes a decision and splits into further nodes which is a characteristic of a greedy algorithm. Hence, it is called a greedy algorithm.

**Decision tree stopping criteria:**
- Setting a threshold value for the entropy, so when values are less than the threshold value the growth is stopped.
- Pre Setting the depth of the tree.
- Leftover data points after the split are less than the present data points.

**Advantages:**
- It takes the decision which imitates human’s decision-making possibilities that makes it easily understandable.
- It requires less preprocessing of data.
- It is helpful in decision-making problems.

**Disadvantages:**
- It is prone to overfit which can be reduced by using a random forest algorithm or pruning technique.
- It is complex as it involves several layers.

**Pruning:**

Pruning is a data compression method that is used in reducing the layers in the decision tree which reduces the complex nature of the tree that helps in reducing complexity and improves efficiency. 

**Conclusion:**

Decision Tree is easy to understand and easy to implement.
