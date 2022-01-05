# MACHINE LEARNING ALGORITHMS
## LINEAR REGRESSION
#### DEFINITION
Linear regression is a linear model, e.g. a model that assumes a linear relationship between the input variables (x) and the single output variable (y). More specifically, that y can be calculated from a linear combination of the input variables (x). When there is a single input variable (x), the method is referred to as simple linear regression. When there are multiple input variables, literature from statistics often refers to the method as multiple linear regression.<br/> We can easily depict linear regression with a simple equation :-<br/>
<img src="https://github.com/ishreyakumari/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Mathematics%20behind%20Machine%20Learning%20models/Images/equation.jpg"/></br>
The purpose of linear regression is to find best fit line. Let's understand this with an example. Suppose we have 3 lines passing in a scatter plot. Now 3 lines are there which passing through the dots. For finding best fit we need to measure distance between that line to all points.<br/>
<img src="https://github.com/ishreyakumari/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Mathematics%20behind%20Machine%20Learning%20models/Images/best%20fit%20line.png"/>
For finding best fit line, we have to find the difference between all points and the line and do the summation. The minimum result will be our best fit line.Here we will measure distance between all points with each line. After that we will find the nearest line from points.<br/>

#### CODING
https://github.com/ishreyakumari/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Mathematics%20behind%20Machine%20Learning%20models/Machine%20Learning%20Algorithms/Linear%20Regression.ipynb

#### LIBRARIES USED
- NUMPY
- PANDAS
- MATPLOTLIB

## LOGISTIC REGRESSION
#### DEFINITION
Logistic Regression is a regression model that used to model the probability of a certain class or event existing such as pass/fail, win/lose, alive/dead or healthy/sick. This can be extended to model several classes of events such as determining whether an image contains a cat, dog, lion, etc. Logistic regression is a process of modeling the probability of a discrete outcome given an input variable. The most common logistic regression models a binary outcome; something that can take two values such as true/false, yes/no, and so on. Multinomial logistic regression can model scenarios where there are more than two possible discrete outcomes. Logistic regression is a useful analysis method for classification problems, where you are trying to determine if a new sample fits best into a category. Each object being detected in the image would be assigned a probability between 0 and 1, with a sum of one. We can easily depict logistic regression with a simple equation :-<br/>
<img src="https://github.com/ishreyakumari/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Mathematics%20behind%20Machine%20Learning%20models/Images/sigmoid.png"/></br>Here whatever values we will provide, this algorithm will supress it between 0 and 1 and then predict the results.That is why it is widely used in classification algorithms.

#### CODING
https://github.com/ishreyakumari/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Mathematics%20behind%20Machine%20Learning%20models/Machine%20Learning%20Algorithms/Logistic%20Regression.ipynb

#### LIBRARIES USED
- NUMPY
- PANDAS
- MATPLOTLIB

## DECISION TREE
#### DEFINITION
Decision Tree algorithm belongs to the family of supervised learning algorithms. Unlike other supervised learning algorithms, the decision tree algorithm can be used for solving regression and classification problems too.The goal of using a Decision Tree is to create a training model that can use to predict the class or value of the target variable by learning simple decision rules inferred from prior data(training data).In Decision Trees, for predicting a class label for a record we start from the root of the tree. Decision trees classify instances by sorting them down the tree from the root to some leaf node, which provides the classification of the instance. An instance is classified by starting at the root node of the tree, testing the attribute specified by this node, then moving down the tree branch corresponding to the value of the attribute as shown in the above figure. This process is then repeated for the subtree rooted at the new node. We compare the values of the root attribute with the record’s attribute. On the basis of comparison, we follow the branch corresponding to that value and jump to the next node.-<br/>
<img src="https://github.com/ishreyakumari/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Mathematics%20behind%20Machine%20Learning%20models/Images/Decision_Tree-2.png"/></br> In this model, we will take decision on each problem statement as 'Yes' or 'No'. Level by level we will move forward for predictions. Decision tree is widely used in both regression and classification problems.

#### CODING
https://github.com/ishreyakumari/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Mathematics%20behind%20Machine%20Learning%20models/Machine%20Learning%20Algorithms/Decision%20tree.ipynb

#### LIBRARIES USED
- NUMPY
- PANDAS
- PPRINT


## RANDOM FOREST

#### DEFINITION
Random Forest is a popular machine learning algorithm that belongs to the supervised learning technique. It can be used for both Classification and Regression problems in ML. It is based on the concept of ensemble learning, which is a process of combining multiple classifiers to solve a complex problem and to improve the performance of the model. Random Forest is a classifier that contains a number of decision trees on various subsets of the given dataset and takes the average to improve the predictive accuracy of that dataset. The (random forest) algorithm establishes the outcome based on the predictions of the decision trees. It predicts by taking the average or mean of the output from various trees. Increasing the number of trees increases the precision of the outcome.<br/>
<img src="https://github.com/ishreyakumari/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Mathematics%20behind%20Machine%20Learning%20models/Images/random.png"/></br>

#### CODING
https://github.com/ishreyakumari/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Mathematics%20behind%20Machine%20Learning%20models/Machine%20Learning%20Algorithms/Random%20Forest.py

#### LIBRARIES USED
- NUMPY
- PANDAS
