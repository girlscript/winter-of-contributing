# Gradient Boosting Algorithm

- Gradient boosting algorithm is one of the most powerful algorithms in the field of machine learning. As we know that the errors in machine learning algorithms are broadly classified into two categories i.e. Bias Error and Variance Error. As gradient boosting is one of the boosting algorithms it is used to minimize bias error of the model.

- Unlike, Adaboosting algorithm, the base estimator in the gradient boosting algorithm cannot be mentioned by us. The base estimator for the Gradient Boost algorithm is fixed and i.e. Decision Stump. Like, AdaBoost, we can tune the n_estimator of the gradient boosting algorithm. However, if we do not mention the value of n_estimator, the default value of n_estimator for this algorithm is 100.

- Gradient boosting algorithm can be used for predicting not only continuous target variable (as a Regressor) but also categorical target variable (as a Classifier). When it is used as a regressor, the cost function is Mean Square Error (MSE) and when it is used as a classifier then the cost function is Log loss.

## Example for understanding the algorithm:

Let us now understand the working of the Gradient Boosting Algorithm with the help of one example. In the following example, Age is the Target variable whereas LikesExercising, GotoGym, DrivesCar are independent variables. As in this example, the target variable is continuous, GradientBoostingRegressor is used here.

![image](https://user-images.githubusercontent.com/63282184/137612993-1d784703-4f4b-45a2-b233-6085675f1fec.png)

### 1st-Estimator

For estimator-1, the root level (level 0) will consist of all the records. The predicted age at this level is equal to the mean of the entire Age column i.e. 41.33(addition of all values in Age column divided by a number of records i.e. 9). Let us find out what is the MSE for this level. MSE is calculated as the mean of the square of errors. Here error is equal to actual age-predicted age. The predicted age for the particular node is always equal to the mean of age records of that node. So, the MSE of the root node of the 1st estimator is calculated as given below.

![image](https://user-images.githubusercontent.com/63282184/137613024-74c751d1-cf0f-4460-a46d-754dcc3726c7.png)

The cost function hers is MSE and the objective of the algorithm here is to minimize the MSE.

Now, one of the independent variables will be used by the Gradient boosting to create the Decision Stump. Let us suppose that the LikesExercising
is used here for prediction. So, the records with False LikesExercising will go in one child node, and records with True LikesExercising will go in another child node as shown below.

![image](https://user-images.githubusercontent.com/63282184/137613042-cb5e558f-c3a1-40f9-a78c-61214d639b50.png)

Let us find the means and MSEs of both the nodes of level 1. For the left node, the mean is equal to 20.25 and MSE is equal to 83.19. Whereas, for the right node, the mean is equal to 58.2 and MSE is equal to 332.16. Total MSE for level 1 will be equal to the addition of all nodes of level 1 i.e. 83.19+332.16=415.35. We can see here, the cost function i.e. MSE of level 1 is better than level 0.

### 2nd-Estimator:

Let us now find out the estimator-2. Unlike AdaBoost, in the Gradient boosting algorithm, residues (agei – mu)of the first estimator are taken as root nodes as shown below. Let us suppose for this estimator another dependent variable is used for prediction. So, the records with False GotoGym
will go in one child node, and records with True GotoGym will go in another child node as shown below.

![image](https://user-images.githubusercontent.com/63282184/137613077-5cf8825e-fcda-41ba-a015-76a055c735c6.png)


The prediction of age here is slightly tricky. First, the age will be predicted from estimator 1 as per the value of LikeExercising, and then the mean from the estimator is found out with the help of the value of GotoGym and then that means is added to age-predicted from the first estimator and that is the final prediction of Gradient boosting with two estimators.

Let us consider if we want to predict the age for the following records:

![image](https://user-images.githubusercontent.com/63282184/137613112-6240db32-9056-4e12-8438-f7bb04505e41.png)

Here, LikesExercising is equal to False. So, the predicted age from the first estimator will be 20.25 (i.e. mean of the left node of the first estimator). Now we need to check what is the value of GotoGym for the second predictor and its value is True. So, the mean of True GotoGym in the 2nd estimator is -3.56. This will be added to the prediction of the first estimator i.e. 20.25. So final prediction of this model will be 20.25+(-3.56) = 16.69.

Let us predict of ages of all records we have in the example.

![image](https://user-images.githubusercontent.com/63282184/137613132-48dc95f1-bc86-4fc3-b764-4b8de12dbc07.png)


Let us now find out the Final MSE for above all 9 records.

MSE= ((-2.69)2 +(-1.69)2 + (-0.69)2 +(-28.64)2 +(19.31)2 +(-15.33)2 + (14.36)2 +(6.67)2 +(7.67)2 )/9

= 194.2478

**So, we can see that the final MSE is much better than the MSE of the root node of the 1st Estimator. This is only for 2 estimators. There can be n number of estimators in gradient boosting algorithm.**

## Applications:

i) Gradient Boosting Algorithm is generally used when we want to decrease the Bias error.

ii) Gradient Boosting Algorithm can be used in regression as well as classification problems. In regression problems, the cost function is MSE whereas, in classification problems, the cost function is Log-Loss.

## Advantages of Gradient Boosting are:


- Often provides predictive accuracy that cannot be trumped.
- Lots of flexibility - can optimize on different loss functions and provides several hyper parameter tuning options that make the function fit very flexible.
- No data pre-processing required - often works great with categorical and numerical values as is.
- Handles missing data - imputation not required.

## Disadvantages of Gradient Boosting are:

- Gradient Boosting Models will continue improving to minimize all errors. This can overemphasize outliers and cause overfitting.
- Computationally expensive - often require many trees (>1000) which can be time and memory exhaustive.
- The high flexibility results in many parameters that interact and influence heavily the behavior of the approach (number of iterations, tree depth, regularization parameters, etc.). This requires a large grid search during tuning.
- Less interpretative in nature, although this is easily addressed with various tools.


## Conclusion:

Gradient Boosting Algorithm is generally used when we want to decrease the Bias error.

Here, the example of GradientBoostingRegressor is shown. GradientBoostingClassfier is also there which is used for Classification problems. Here, in Regressor MSE is used as cost function there in classification Log-Loss is used as cost function.

The most important thing in this algorithm is to find the best value of n_estimators.
