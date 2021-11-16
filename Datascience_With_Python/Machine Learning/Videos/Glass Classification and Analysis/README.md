# Glass Classification and Analysis

### [Video Link](https://drive.google.com/file/d/1Tl4O45MjU6xprXTmNv7TqjcPGGdtnBpy/view?usp=sharing)

## What is glass classification?
Basically there are different types of glasses in the dataset which we have to use and predict and analyse the score.

For predcition we have to use model that are there in the machine learning and from that we have to find which model is more efficient.

## Modules involved
 1. Loading Data , pre-processing our data
 2. Splitting the data into training samples and testing samples
 3. Using classification techniques and finding the accuracy of the model
 4. Analyzing different classification metrics like MSE, RMSE , Precision , Recall , Accuracy etc.
 5. Concluding the best model.

Dataset: https://www.kaggle.com/uciml/glass

## Attribute Information:
 1. Id number: 1 to 214
 2. RI: refractive index
 3. Na: Sodium
 4. Mg: Magnesium
 5. Al: Aluminum
 6. Si: Silicon
 7. K: Potassium
 8. Ca: Calcium
 9. Ba: Barium
 10. Fe: Iron
 11. Type of glass: (class attribute) — 1 building_windows_float_processed — 2 building_windows_non_float_processed — 3 vehicle_windows_float_processed — 4 vehicle_windows_non_float_processed (none in this database) — 5 containers — 6 tableware — 7 headlamps

Goal - Our target attribute is “Type”, we need to classify the glass in 7 types as mentioned above based on the features.

## Preprocessing and normalizing the data

![](https://user-images.githubusercontent.com/88443158/142005849-5e548460-7b74-4f38-a713-099eaf17d327.PNG)
![](https://user-images.githubusercontent.com/88443158/142005934-f41b6cb2-ac4c-4dd2-a697-bfdae5a23ca1.PNG)

## Splitting dataset into training and testing data

import module using below command:
```
from sklearn.model_selection import train_test_split
```
![](https://user-images.githubusercontent.com/88443158/142006377-a42a10a9-c702-447c-9dbc-c439aaf08893.PNG)

## We have used 3 different types of models for prediction and find the accuracy of the model

 1. ID3 Decision Tree model
 2. CART Decision Tree
 3. RandomForestClassifier model

## ID3 Decision Tree model

 - ID3 stands for Iterative Dichotomiser 3 and is named such because the algorithm iteratively (repeatedly) dichotomizes(divides) features into two or more groups at each step. ID3 uses a top-down greedy approach to build a decision tree.

### Advantages of ID3 Decision Tree Algorithm:

 1. Builds the fastest tree.
 2. Understandable prediction rules are created from the training data.
 3. Only need to test enough attributes until all data is classified.
 4. Whole dataset is searched to create tree.

### Disadvantages of ID3 Decision Tree Algorithm:

 1. Data may be over-fitted or over-classified, if a small sample is tested.
 2. Only one attribute at a time is tested for making a decision.
 3. Classifying continuous data may be computationally expensive, as many trees must be generated to see where to break the continum.

## CART Decision Tree model

 - Classification And Regression Trees (CART) algorithm is a classification algorithm for building a decision tree based on Gini's impurity index as splitting criterion. CART is a binary tree build by splitting node into two child nodes repeatedly.

### Advantages of CART Decision Tree Algorithm:

 1. Transparent and easy to understand.
 2. Decision trees can inherently perform multiclass classification.
 3. They can handle both numerical and categorical data.
 4. Nonlinear relationships among features do not affect the performance of the decision trees.

### Disadvantages of CART Decision Tree Algorithm:

 1. A small change in the dataset can make the tree structure unstable which can cause variance.
 2. It does not work well if there are smooth limits.
 3. It has high variance and it is unstable.
 4. Decision tree learners create underfit trees if some classes are imbalanced.

## RandomForestClassifier model

 - A random forest is a machine learning technique that's used to solve regression and classification problems. It utilizes ensemble learning, which is a technique that combines many classifiers to provide solutions to complex problems. A random forest algorithm consists of many decision trees.
 - Random forest is a supervised learning algorithm which is used for both classification as well as regression. Similarly, random forest algorithm creates decision trees on data samples and then gets the prediction from each of them and finally selects the best solution by means of voting.

### Advantages of Random Forest:

 1. Random Forest is capable of performing both Classification and Regression tasks.
 2. It is capable of handling large datasets with high dimensionality.
 3. It enhances the accuracy of the model and prevents the overfitting issue.

### Disadvantages of Random Forest:

 1. Although random forest can be used for both classification and regression tasks, it is not more suitable for Regression tasks.

## Conclusion

 - As there are different classification techniques to predict the accuracy of the glass dataset.
 - We have tried 3 models as shown above such that we can select the model with the high accuracy result.
 - We used 'ID3 Decision Tree', 'CART Decision Tree', 'Random Forest Classifier' and from that we find that the accuracy of the 'CART decision tree' is highest among all and for our dataset the 'CART decision tree' is the best model for predicting the results.

## References

 1. [RandomForestClassifier](https://www.javatpoint.com/machine-learning-random-forest-algorithm)
 2. [ID3 decision tree](https://towardsdatascience.com/decision-trees-for-classification-id3-algorithm-explained-89df76e72df1)
 3. [CART decision tree](https://machinelearningmastery.com/classification-and-regression-trees-for-machine-learning/)
