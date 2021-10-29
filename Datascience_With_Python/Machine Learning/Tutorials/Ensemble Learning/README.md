# Ensemble Learning

## What is Ensemble Learning
Ensemble learning is use of multiple learning algorithms to obtain better predictive performance than could be obtained from any of the constituent learning algorithms alone. We aggregate the predictions of several predictors and then predict the final result which will be far more accurate than an alone best predictor can predict.


![image](https://user-images.githubusercontent.com/78369337/138807427-d609c1e4-d390-464f-8563-79cbc8016c17.png)




## How Ensemble Learning Works
Suppose you give an expert a complex problem to solve and he even solves it and gets close to the right answer. And then you give the same problem to hundred people and aggregate their reults. In many cases, you will find that the aggregate of the hundred people's results was better than the result of the expert. This is known as Wisdom Of Crowd .
Similarly if you are given few predictors such as Logistic Regression classifier, an SVM classfier, a Random Forest classifier, a K-Nearest Neighbors and each of the classifiers is trained and tested on the dataset. Despite significant tweaking and fine tuning, none of them achieves the desired results. These predictors are called *Weak Learners*.

To get the desired results we can put all of the predictors together into an ensemble and train each of them on the training set and then aggregating the predictions. You will be surprised to see the results as it will be much closer or better than the desired results. Just by aggregating the predictions of all the predictors you were able to create a robust predictor with high accuracy.

## Ensemble Methods
 - **Boosting** : It's an ensemble modeling technique that attempts to build a strong classifier from the number of weak classifiers. It is done by building a model from the training data. Then the second model is built which tries to correct the errors present in the first model. And this process goes on until desired results are obtained.
 - **Bagging** : Bagging in ensemble machine learning takes several weak models, aggregating the predictions to select the best prediction. 
 - **Stacking** : It uses a meta-learning algorithm to learn how to best combine the predictions from two or more base machine learning algorithms.
 
![image](https://user-images.githubusercontent.com/78369337/138754749-351b8469-134b-4f0e-93af-d39a6fbd28e9.png)

## Random Forest

Random forest is a supervised learning algorithm. The "forest" it builds, is an ensemble of decision trees, usually trained with the “bagging” method. The general idea of the bagging method is that a combination of learning models increases the overall result.

Each individual tree in the random forest spits out a class prediction and the class with the most votes becomes our model’s prediction

![image](https://user-images.githubusercontent.com/78369337/138754715-9aac7d61-6f07-48ee-a3a2-ded5ca2f23ca.png)


## Advantages 
 - Ensemble learning methods are popular and the go-to technique when the best performance on a predictive modeling project is the most important outcome.
 - An ensemble reduces the spread or dispersion of the predictions and model performance. Hence, yields a robust model.
 - Using ensembles to reduce the variance properties of prediction errors leads to the key benefit of using ensembles in the first place: to improve predictive performance.

## Tradeoofs
Using ensemble means you must spend more time and resources on training your machine learning models. For instance, a random forest with 500 trees provides much better results than a single decision tree, but it also takes much more time to train. Running ensemble models can also become problematic if the algorithms you use require a lot of memory.

## Applications
Ensemble Learning is generally used to solve classification tasks but it can also perform well on regression tasks. Ensemble Learning can be used in healthcare where even the smallest amount of improvement in the accuracy of machine learning algorithms can be something truly valuable. Random Forest (RF) and Extremely Randomized Trees or Extra Trees (ET) algorithms are used to classify breast cancer.

## Conclusion
The goal of any machine learning problem is to find a single model that will best fit to our training dataset and make best future predictions. Rather than making one model and hoping this model is the best/most accurate predictor we can make, ensemble methods take a myriad of models into account, and average those models to produce one final model. And this is known as Ensemble Learning. Though being a powerful tool it does have few limitations when it comes on the memory usage and time taken for training.
