# Topic: Wine Quality Prediction 🍷

## Introduction:
Wine is an alcoholic drink that is made up of fermented grapes. There are different types of wine such as red wine and white wine based on different varieties of grapes. The worldwide distribution of wine is 31 million tonnes.
In this task we are going to predict the quality of wine i.e. to predict whether the wine quality is good(1) or bad(0) using three different ML models: RandomForestClassifier, DecisionTreeClassifier, and AdaBoostClassifier and to see which yields the highest accuracy score.

## Dataset:
For this task I have used Kaggle's [Red Wine Quality](https://www.kaggle.com/uciml/red-wine-quality-cortez-et-al-2009) dataset.<br>
Each wine in this dataset is given a quality score between 0 and 10. The quality of a wine is determined by 11 input variables: Fixed acidity, Volatile acidity, Citric acid, Residual sugar, Chlorides, Free sulfur dioxide, Total sulfur dioxide, Density, pH, Sulfates, and Alcohol.

## Workflow:
* Importing libraries
* Reading the dataset
* Data Analysis & Visualization
* Data preprocessing
* Train test split
* Training the model
* Prediction
* Accuracy score

## Decision Tree:
A decision tree is a graphical representation of all the possible solutions to a decision based on some conditions.<br>
![image](https://user-images.githubusercontent.com/89564985/141346256-63184b7f-0261-4421-8fc9-1ec3a089df8d.png)<br>
For example in the above decision tree, our dataset contains two 1s and five 0s. First, we have to classify it using color features. So we have a condition i.e. "Is it red?" to split our first node. Now we have two options either the Yes branch or the No branch. The data which meet the criteria go down the Yes branch and the ones that don't go down the No branch.<br>
The No branch cannot be split further, but the Yes branch can be split further. Here we use another feature that is whether the number is underlined or not.<br<
Similarly, for this case, we have two branches either Yes or No. The underlined number goes down the Yes branch and the other numbers go down the No branch.<br>
That's it. We have built our decision tree.

## Random Forest:
Random forest is an ensemble model. Ensemble models are those that use more than two or three models in combination for prediction. Ensemble uses two types of methods: Bagging and Boosting.<br>
![image](https://user-images.githubusercontent.com/89564985/141355336-3d36e085-f3af-44a6-b4fb-3831e86756b5.png)<br>
[Image source](https://www.pluralsight.com/guides/ensemble-methods:-bagging-versus-boosting)<br>
Random forest works on the Bagging principle. Bagging chooses a random sample from the dataset.Hence each model (individual decision tree) is generated from the samples known as row sampling. This step of row sampling with replacement is called bootstrap. Each model is trained independently which generates results. The final answer is based on majority voting after combining the results of all the models. This step is known as aggregation.<br>
![image](https://user-images.githubusercontent.com/89564985/141353446-160fba98-a213-4269-b750-9b37872ec7d6.png)<br>
Random forest gives more accurate and stable predictions.<br>

## AdaBoost (Adaptive Boosting):
This is a boosting algorithm that combines weak learners to form strong learners by creating sequential models to increase the accuracy of the model. It is developed for the classification problems. In each iteration, AdaBoost identifies miss-classified data points, increasing their weights (and decrease the weights of correct points, in a sense) so that the next classifier will pay extra attention to get them right.<br>
Steps:<br>
* Assign equal weightage to all of the data points and then you draw out a decision stump for a single input feature.
* The results from the first decision stump are analyzed and if any observations are misclassified then they are assigned higher weightage.
* A new decision stump is drawn by considering the observations with higher weights as more significant.
* Draw another decision stump that tries to classify the data points by giving more importance to the data points with higher weightage.
* Again if any observations are misclassified they are given higher weightage.
This process will keep continuing until all the observations fall into the right class.

## Summary:
In this task, I have used three machine learning models to classify wine quality into good or bad i.e. 1 or 0.
We saw that the best accuracy score i.e. 0.928 was obtained by using the random forest model. The accuracy score for the decision tree is 0.909 and for the AdaBoost model is 0.925.

#### References:
* https://towardsdatascience.com/predicting-wine-quality-with-several-classification-techniques-179038ea6434
* https://www.analyticsvidhya.com/blog/2021/04/wine-quality-prediction-using-machine-learning/
* https://www.analyticsvidhya.com/blog/2021/06/understanding-random-forest/
* https://towardsdatascience.com/understanding-random-forest-58381e0602d2
* https://towardsdatascience.com/boosting-algorithms-explained-d38f56ef3f30
