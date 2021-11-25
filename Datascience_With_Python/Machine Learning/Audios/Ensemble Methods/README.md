## Ensemble Methods
## [Click here to listen the audio](https://drive.google.com/file/d/1MewRtso4wgmKkDeUFSFrHG18PV7GbvRa/view?usp=sharing)

-  It is a machine learning technique 
-  It combines several base models in order to produce one optimal model.

## Types of Ensemble Methods:
- Bagging
- Stacking
- Boosting

**_Bagging:_**
-  The goal of bagging is to reduce the variance of a decision tree classifier.
-  The objective is to create subsets of data from training sample that are chosen randomly with replacement. Each collection of subset data that chosen is used to train their decision trees.
-  Then, Bagging algorithm is used to aggregate over the Decision Trees for the most efficient predictor.
![image](https://user-images.githubusercontent.com/79050917/143415022-25390d6f-ed39-4bea-92b5-32669602ec4c.png)
![image](https://user-images.githubusercontent.com/79050917/143415812-5db0f5db-f256-4089-9982-7670a0bfd8a6.png)

**_Boosting:_**
- It is used to create a collection of predictors.
- It creates a strong classifier from a number of weak classifiers.
![image](https://user-images.githubusercontent.com/79050917/143416050-1fa60fc2-b1bb-4e8d-aff5-4ec77a6011f3.png)

**_Stacking:_**
- It learns on how to combine the predictions from multiple machine learning models.
- It uses predictions for multiple nodes(for example kNN, decision trees, or SVM) to build a new model.
![image](https://user-images.githubusercontent.com/79050917/143418238-8cf4c56f-d67f-4bd0-bc05-082807d07289.png)

**Advantages:**
- Better predictions
- Increase the efficiency
- Increase the model performance.

**Disadvantages:**
- Increases the complexity within the model.
- Takes time to evaluate.

## Conclusion:
- A minimum benefit of using ensembles is to reduce the spread in the average skill of a predictive model.
- A key benefit of using ensembles is to improve the average prediction performance over any contributing member in the ensemble.
