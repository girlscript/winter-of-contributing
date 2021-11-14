# ADABOOST ALGORITHM

## Introduction

AdaBoost algorithm, short for Adaptive Boosting, is a Boosting technique used as an Ensemble Method in Machine Learning. It is called Adaptive Boosting as the weights are re-assigned to each instance, with higher weights assigned to incorrectly classified instances. Boosting is used to reduce bias as well as variance for supervised learning. It works on the principle of learners growing sequentially. Except for the first, each subsequent learner is grown from previously grown learners. In simple words, weak learners are converted into strong ones. The AdaBoost algorithm works on the same principle as boosting with a slight difference. 

## Properties and Applications of the Algorithm

1. Adaboost adjusts adaptively the errors of the weak hypotheses by weak learner.
2. Unlike the conventional boosting algorithm, the prior error need not be known ahead of time.
3. The update rule reduces the probability assigned to those examples on which the hypothesis makes a good predictions and increases the probability of the examples
on which the prediction is poor.

AdaBoost can be used to solve a variety of real-world problems, such as predicting customer churn and classifying the types of topics customers are talking/calling about. The algorithm is heavily utilised for solving classification problems, given its relative ease of implementation in languages such as R and Python.

## How does it work?

First, let us discuss how boosting works. It makes ‘n’ number of decision trees during the data training period. As the first decision tree/model is made, the incorrectly classified record in the first model is given priority. Only these records are sent as input for the second model. The process goes on until we specify a number of base learners we want to create. Remember, repetition of records is allowed with all boosting techniques.

This figure shows how the first model is made and errors from the first model are noted by the algorithm. The record which is incorrectly classified is used as input for the next model. This process is repeated until the specified condition is met. As you can see in the figure, there are ‘n’ number of models made by taking the errors from the previous model. This is how boosting works. The models 1,2, 3,…, N are individual models that can be known as decision trees. All types of boosting models work on the same principle. 

Since we now know the boosting principle, it will be easy to understand the AdaBoost algorithm. Let’s dive into AdaBoost’s working. When the random forest is used, the algorithm makes an ‘n’ number of trees. It makes proper trees that consist of a start node with several leaf nodes. Some trees might be bigger than others, but there is no fixed depth in a random forest. With AdaBoost, however, the algorithm only makes a node with two leaves, known as Stump.

The figure here represents the stump. It can be seen clearly that it has only one node with two leaves. These stumps are weak learners and boosting techniques prefer this. The order of stumps is very important in AdaBoost. The error of the first stump influences how other stumps are made. 


## Implementation of AdaBoost Algorithm


Step 1 – Creating the First Base Learner
To create the first learner, the algorithm takes the first feature, i.e., feature 1 and creates the first stump, f1. It will create the same number of stumps as the number of features. In the case below, it will create 3 stumps as there are only 3 features in this dataset. From these stumps, it will create three decision trees. This process can be called the stumps-base learner model. Out of these 3 models, the algorithm selects only one. Two properties are considered while selecting a base learner – Gini and Entropy. We must calculate Gini or Entropy the same way it is calculated for decision trees. The stump with the least value will be the first base learner. In the figure below, all the 3 stumps can be made with 3 features. The number below the leaves represents the correctly and incorrectly classified records. By using these records, the Gini or Entropy index is calculated. The stump that has the least Entropy or Gini will be selected as the base learner. Let’s assume that the entropy index is the least for stump 1. So, let’s take stump 1, i.e., feature 1 as our first base learner.

Stumps
No alt text provided for this image
Here, feature (f1) has classified 2 records correctly and 1 incorrectly. The row in the figure that is marked red is incorrectly classified. For this, we will be calculating the total error.

Step 2 – Calculating the Total Error (TE)
The total error is the sum of all the errors in the classified record for sample weights. In our case, there is only 1 error, so Total Error (TE) = 1/5.

Step 3 – Calculating Performance of the Stump
Formula for calculating Performance of the Stump is: –

Performance of Stump Formula
where, ln is natural log and TE is Total Error.

In our case, TE is 1/5. By substituting the value of total error in the above formula and solving it, we get the value for the performance of the stump as 0.693. Why is it necessary to calculate the TE and performance of a stump? The answer is, we must update the sample weight before proceeding to the next model or stage because if the same weight is applied, the output received will be from the first model. In boosting, only the wrong records/incorrectly classified records would get more preference than the correctly classified records. Thus, only the wrong records from the decision tree/stump are passed on to another stump. Whereas, in AdaBoost, both records were allowed to pass and the wrong records are repeated more than the correct ones. We must increase the weight for the wrongly classified records and decrease the weight for the correctly classified records. In the next step, we will be updating the weights based on the performance of the stump.

Also Read: Decision Tree Algorithm Explained

Step 4 – Updating Weights
For incorrectly classified records, the formula for updating weights is:

New Sample Weight = Sample Weight * e^(Performance) 

In our case Sample weight = 1/5 so, 1/5 * e^ (0.693) = 0.399

For correctly classified records, we use the same formula with the performance value being negative. This leads the weight for correctly classified records to be reduced as compared to the incorrectly classified ones. The formula is:

New Sample Weight = Sample Weight * e^- (Performance)

Putting the values, 1/5 * e^-(0.693) = 0.100

Updated Weight
The updated weight for all the records can be seen in the figure. As is known, the total sum of all the weights should be 1. In this case, it is seen that the total updated weight of all the records is not 1, it’s 0.799. To bring the sum to 1, every updated weight must be divided by the total sum of updated weight. For example, if our updated weight is 0.399 and we divide this by 0.799, i.e. 0.399/0.799=0.50. 

0.50 can be known as the normalized weight. In the below figure, we can see all the normalized weight and their sum is approximately 1.

Normalized Weight
Step 5 – Creating a New Dataset
Now, it’s time to create a new dataset from our previous one. In the new dataset, the frequency of incorrectly classified records will be more than the correct ones. The new dataset has to be created using and considering the normalized weights. It will probably select the wrong records for training purposes. That will be the second decision tree/stump. To make a new dataset based on normalized weight, the algorithm will divide it into buckets.

Buckets
So, our first bucket is from 0 – 0.13, second will be from 0.13 – 0.63(0.13+0.50), third will be from 0.63 – 0.76(0.63+0.13), and so on. After this the algorithm will run 5 iterations to select different records from the older dataset. Suppose in the 1st iteration, the algorithm will take a random value 0.46 to see which bucket that value falls into and select that record in the new dataset. It will again select a random value, see which bucket it is in and select that record for the new dataset. The same process is repeated 5 times. 

There is a high probability for wrong records to get selected several times. This will form the new dataset. It can be seen in the image below that row number 2 has been selected multiple times from the older dataset as that row is incorrectly classified in the previous one. 

New Dataset
Based on this new dataset, the algorithm will create a new decision tree/stump and it will repeat the same process from step 1 till it sequentially passes through all stumps and finds that there is less error as compared to normalized weight that we had in the initial stage.



## Conclusion
