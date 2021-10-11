# BAGGING AND BOOSTING
<img src="https://github.com/ishreyakumari/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Bagging%20And%20Boosting/Images/bagging-and-boosting.png">

## Introduction
Bagging and Boosting are Ensemble techniques. In bagging and boosting, we utilize multiple models and predict the dataset by considering outputs of all models. Ensemble techniques mainly focused on training multiple models (called weak learners) to solve same problem and their prediction will be combined together to predict accurate result. The primary importance of this technique is that, when multiple models are correctly combined, we can obtain more robust model.


## BAGGING
<img src="https://github.com/ishreyakumari/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Bagging%20And%20Boosting/Images/bagging.png">
Bagging (also called Bootstrap Aggregation) is commonly used to **reduce variance** within a dataset. It uses **parallel learning**. It is a machine learning ensemble algorithm used to improve the stability and accuracy of machine learning algorithms used in classification and regression models. It also helps to **avoid overfitting** by reducing variance.

### Use Case
Let's understand this with an example:<br />Suppose we have a dataset named 'D'. We have 4 machine learning models named 'M1', 'M2', 'M3' and 'M4'. Now we will give small samples of data to all the 4 models. The strategy we will use to give data samples to models is called "Row sampling with replacement'. It means we will give small random samples to different models but data can be repeated in other model also. Suppose we gave 'D1', 'D2', 'D3', 'D4' to 'M1', 'M2', 'M3', 'M4' respectively. Now we will train all 4 models with all 4 sample data. After training is done, we will give our test data to each of these 4 models and check their prediction. Suppose '1', '0', '1', '1' is predicted by 'M1', 'M2', 'M3', 'M4' respectively. Bagging works on voting classification. It means our prediction will be majority of prediction among all predictions. In this example 1 will be our output since 3 models predicted '1' and 1 model predicted '0'.

### Features
- Helps in reducing variance
- Very useful for avoiding overfitting
- Improves stability and accuracy
- Works on all types of machine learning models
- Each machine learning gets same weightage

### Example
'Random Forest' uses Bagging technique.


## BOOSTING
<img src="https://github.com/ishreyakumari/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Bagging%20And%20Boosting/Images/bias-and-variance.png">
Boosting is commonly used to **reduce bias** within a dataset. It uses **sequential learning**. It is a machine learning ensemble algorithm used to improve the stability and accuracy of machine learning algorithms used in classification and regression models. It also helps to **avoid underfitting** by reducing bias.

### Use Case
Lets's understand this with an example:<br />Suppose we have a dataset named 'D'. We have 4 machine learning models named 'M1', 'M2', 'M3' and 'M4'. Firstly we will build a sample data 'D1' which will contain random data from D. Now we will train model 'M1' with 'D1'. For testing, we will give 'D' to 'M1'. Now, 'M1' predicted some data incorrectly i.e. some datapoints are incorrectly classified by 'M1'. We will give higher weight to that datapoints. Giving higher weight means, when data will be picked for traning next model, the probability of picking  these datapoints would be higher. Now, 'M2' model will be trained by 'D2' sample data and will predict some datapoints incorrect. Like we did earlier, we will give high weight to these datapoints. This process will continue till the point that we have specified. In this process, we are increasing the accuracy of our predictions by focussing more on incorrect predictions. For final output, we will consider outputs/predictions of all models according to the weight of data that we have provided and will find average.

### Features
- Helps in reducing bias
- Very useful for avoiding underfitting
- Improves stability and accuracy
- Works on all types of machine learning models
- Each new model gets more amount of incorrectly classified data to improve accuracy

### Example
'XGBoost' uses Boosting technique.


## CONCLUSION

### Application
<img src="https://github.com/ishreyakumari/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Bagging%20And%20Boosting/Images/bias-variance-tradeoff.png">
Whenever we predict results, we want our data to be LBLV (Less bias Less variance). Bias means favouring of particular part of data and ariance means spread of data.

### Difference between Bagging and Boosting
- Bagging is used to reduce 'Bias' and Boosting is used to reduce 'Variance'.
- Bagging follows 'Parallel Learning' and Boosting follows 'Sequencial Learning'.
- Bagging gives equal weight to all models and Boosting gives weight according to the performance of models.
- In Bagging, individual models are bulit seperately and in Boosting, each new model is influenced by the performance of previously built model.
- Bagging works on 'Voting System' for final output and Boosting works on 'Average System' for final output.
