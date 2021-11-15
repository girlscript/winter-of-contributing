# ADABOOST ALGORITHM

## Introduction

AdaBoost algorithm, is short form for Adaptive Boosting, and it is a Boosting technique used as an Ensemble Method. This is called Adaptive Boosting because the weights are re-assigned to each instance, and higher weights are given to incorrectly classified instances. It is used to decrease bias and variance for supervised learning. It works on the concept of learners increasing sequentially as each subsequent learner is grown from previous learners except the first layer. Weak learners are transformed into strong ones. 

## Properties and Applications of the Algorithm

1. It adjusts the errors of the weak hypotheses by weak learner in an adaptive way.
2. The prior error need not be known ahead of time which is not the case of the normal boosting algorithm.
3. The update rule decreases the probability given to examples on which the hypothesis makes good predictions and increases the probability of the examples
on which the prediction is not good.

AdaBoost can be used to solve a variety of daily life problems, such as predicting customer churn and classifying the types of topics customers are having conversation about. The algorithm is heavily utilised for solving classification problems, because of its relative ease of implementation in languages such as R and Python.

## Advantages of AdaBoost Algorithm:

1. One of the many advantages of the AdaBoost Algorithm is it is fast, simple and easy to program.
2. Boosting has been shown to be robust to overfitting.
3. It has been extended to learning problems beyond binary classification (i.e.) it can be used with text or numeric data.

## Drawbacks:

1. AdaBoost can be sensitive to noisy data and outliers.
2. Weak classifiers being too weak can lead to low margins and overfitting.

## How does it work?

Boosting works by making ‘n’ number of decision trees during the training process. As the first decision tree is made, the incorrectly classified record in the first model is given priority. Only these records are sent as input to the second model. The process continues until we specify a number of base learners we want to create.

![GLcjrWSUkjadvf0hTV_y7ATgh7l-UQQ12_UYluxQYxxWvSKoP5AJN6cvKS5s-uvO_kR3OVBlgL6Q0MATYoueKF59-eIO718Fz9KsVVcObbO54OhfIEkEYlWrn6vA2rr4qXfn2rbsIkMMnHuWEQ](https://user-images.githubusercontent.com/54388275/141856132-cd327f83-2a2b-4cbf-ba38-595fa63bae1f.png)

This figure shows how the first model is made and errors from the first model are noted by the algorithm. The record which is incorrectly classified is used as input for the next model. This process is repeated until the specified condition is met. As you can see in the figure, there are ‘n’ number of models made by taking the errors from the previous model. This is how boosting works. The models 1,2, 3,…, N are individual models that can be known as decision trees. All types of boosting models work on the same principle. 

Now we can look at the working of AdaBoost Algorithm. When the random forest is used, the algorithm makes an ‘n’ number of trees. It makes proper trees that consist of a start node with several leaf nodes. Some trees might be bigger than others, but there is no fixed depth in a random forest. 
With AdaBoost, however, the algorithm only makes a node with two leaves, known as Stump.

![yqhv97qgnTW3X7yOYdk_e9UukHkNpIVw9tes9Ah3jbXZO9y1IwrjlIt54eemNDO-x7qqDCfWYhHGrz07arxoDEhfG5rG5WSqWZkRgRO0QeeGz0DECPZwBFVRWwdNNAZ2rbYBv0wLc5ZXpOvFUg](https://user-images.githubusercontent.com/54388275/141856178-7c84bdaf-7090-4d91-985a-c15fc3139114.png)

The figure here represents the stump. It can be seen clearly that it has only one node with two leaves. These stumps are weak learners and boosting techniques prefer this. The order of stumps is very important in AdaBoost. The error of the first stump influences how other stumps are made. 


## Implementation of AdaBoost Algorithm


Step 1 – First, we start by creating the first base learner. So, we take the first feature, and hence build the first stump, f1. AdaBoost will create the same number of stumps as the number of features. Here, it will create 3 stumps as there are only 3 features in this dataset. From these stumps, it will create three decision trees. Then from the 3 models, the algorithm selects only one of them. Gini and Entropy are considered while selecting the first base learner. The stump with the minimum value will be the first base learner.  So, let’s take stump 1, i.e., feature 1 as our first base learner.

![RfnGcSykUeWrhnZnDBZ8i8w4vH9s57LILIYJrOHkSbbmdDNUll_NUpEJoJH0_eTJvgVPUAUsAX7nOKyYPxE01AA_GCJHLK4vhMURQ-AyjrxAIhsE2BfVbTJM058cmP0Fmj7a4p8IP_JMyn3kFQ](https://user-images.githubusercontent.com/54388275/141850735-6c3fee2b-e67e-462e-8084-2cc5da62a5d8.png)

![GyllEoiJtZeRI-_bdJsSimz3f0wxSs7vCZsEYYoA7V-S75wGrUNf7r_geuW1qTG470qdgtNpnrpv3J-Y9YE9gBHzBDhOTxd7C70d5m06UceSHeH32xHkJx5UtAjtIzQ9XYOmOL2wfp1QydmR7w](https://user-images.githubusercontent.com/54388275/141850649-f4336503-4aa3-4cea-84b8-e2840d789988.png)

Here, feature f1 has predicted 2 records accurately and 1 incorrectly. The row in the figure that is marked red is incorrectly classified. For this, we will be calculating the total error.

Step 2 – Calculating the Total Error (TE)
The total error is the sum of all the errors in the classified record for sample weights. 
Here, there is only 1 error, so Total Error (TE) = 1/5.

Step 3 – Calculation of Performance of the Stump
Formula for calculating Performance of the Stump is: –

![GLQJhUiPMqLy8XeQ7MwHvidwjwuF5vNrqSnAr63YmT7fTibePfVDByqqKyM-qU0QkLeFgNxZkQypD2E5YJMUaX8KMYTRxQGlQhnrMI-MSQowJzPAMyO8D5hzh0mx-j-ZZDEaVt2uaINZycwA3A](https://user-images.githubusercontent.com/54388275/141855064-fe9ade39-d736-4ac2-a6cb-6e78e3419da4.png)

Performance of Stump Formula
where, ln is natural log and TE is Total Error.

It is necessary to calculate the TE and performance of a stump because we must update the sample weight before proceeding to the next model or stage because if the same weight is applied, the output received will be from the first model. In boosting, only the wrong records classified records would get more preference than the correctly classified records but in AdaBoost, both records were allowed to pass and the wrong records are repeated more than the correct ones. We must increase the weight for the wrongly classified records and decrease the weight for the correctly classified records. In the next step, we will be updating the weights based on the performance of the stump.

Step 4 – Updating Weights
For incorrectly classified records, the formula for updating weights is:

New Sample Weight = Sample Weight * e^(Performance) 


For correctly classified records, we use the same formula with the performance value being negative. This leads the weight for correctly classified records to be reduced as compared to the incorrectly classified ones. The formula is:

New Sample Weight = Sample Weight * e^- (Performance)

Putting the values, 1/5 * e^-(0.693) = 0.100

![tMYAB3cZHp9PsTYSCasaeod8th5qvmZUYdIAybagt5K4Q6UfrH4ltxVDy-V_nhKIDYoTtls-6bzarO2LNOUpGX8XzioMYbFWrFUGC-SBWsvBVEbM95S6GVO88Mt9-WnwIwO9RTydwARWMliUUw](https://user-images.githubusercontent.com/54388275/141855095-4ae3afff-57c4-4911-bc97-77f18b7c22ec.png)

Updated Weight
The updated weight for all the records can be seen in the figure. As is known, the total sum of all the weights should be 1. In this case, it is seen that the total updated weight of all the records is not 1, it’s 0.799. To bring the sum to 1, every updated weight must be divided by the total sum of updated weight. 
For example, if our updated weight is 0.399 and we divide this by 0.799, i.e. 0.399/0.799=0.50. 

0.50 can be known as the normalized weight. In the below figure, we can see all the normalized weight and their sum is approximately 1.

![WSeQLplGzze6scU9KvUH9qiSZ5Pl9NPsVcIO7SsOF2vjkQALkQqzdgU6QOD-JBTyt32Li6Emy3GNHXsScR3jY3eSqvvHzBy-EVN0Xfa1eAc-1kQmUv4JkQtO6wh9-pTIsVrl9jGoXw8ekXHj4g](https://user-images.githubusercontent.com/54388275/141855120-f3facc3d-1399-4f74-8be6-690e9ce9011e.png)

Normalized Weight
Step 5 – Creating a New Dataset
Now, it’s time to create a new dataset from our previous one. In the new dataset, the frequency of incorrectly classified records will be more than the correct ones. The new dataset has to be created using and considering the normalized weights. It will probably select the wrong records for training purposes. That will be the second decision tree/stump. To make a new dataset based on normalized weight, the algorithm will divide it into buckets.

![wPe2-195UokO0IHgxIW4NKp6TaMDS36zYFW03ZSxbHLQCseE5KwUfHSQQIPHbFIuHtWsJgdUVWSOAds8IcHSu05EyXyroEwwyQXwZz6eguIaCtPd4pvICHdi9GhdbYnsDh5c0bBFO8ttN2WVeg](https://user-images.githubusercontent.com/54388275/141855146-faed0a08-b3ed-4b3b-9f67-020a723b70df.png)

So, our first bucket is from 0 – 0.13, second will be from 0.13 – 0.63(0.13+0.50), third will be from 0.63 – 0.76(0.63+0.13), and so on. After this the algorithm will run 5 iterations to select different records from the older dataset. Suppose in the 1st iteration, the algorithm will take a random value 0.46 to see which bucket that value falls into and select that record in the new dataset. It will again select a random value, see which bucket it is in and select that record for the new dataset. The same process is repeated 5 times. 

There is a high probability for wrong records to get selected several times. This will form the new dataset. It can be seen in the image below that row number 2 has been selected multiple times from the older dataset as that row is incorrectly classified in the previous one. 

![GdEsShAjQ0H9rwO8552I0uV2YVLXmtcvvx8xvJl-apL2c43hDiFm2AgdDg_3eh9fx_3_KhhcxGFbZK-OaGa-l3xVzNbTwanTPAr0yOFGqSxs6Uj2oDUP3ipWSzVkBLhuMXIU6muVxNEgjnR-QQ](https://user-images.githubusercontent.com/54388275/141855178-ff6122df-487e-48fc-a544-e6ec5f406896.png)

Based on this new dataset, the algorithm will create a new decision tree/stump and it will repeat the same process from step 1 till it sequentially passes through all stumps and finds that there is less error as compared to normalized weight that we had in the initial stage.

## Conclusion

AdaBoost helps in choosing the training set for each new classifier that is trained based on the results of the previous classifier. Also, while combining the results; it determines how much weight should be given to each classifier’s proposed answer. It combines the weak learners to create a strong one to correct classification errors which is also the first successful boosting algorithm for binary classification problems.
