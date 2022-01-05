# Credit Card Fraud Detection

### [Video Link](https://drive.google.com/file/d/11Ks4FvMy7mKwkABjQ7Xu1iYtLfxPjx6X/view?usp=sharing)

<p align="center">
  <img width="600" height="325" src="https://user-images.githubusercontent.com/88443158/143734464-bccb7f1d-581b-4adc-8c1e-2da817328c77.png">
</p>

## Introduction
The challenge is to predict whether a passenger on the titanic would have been survived or not.

The sinking of the Titanic is one of the most infamous wrecks in history. On April 15, 1912, during her maiden voyage, the RMS Titanic, widely considered “unsinkable”, sank after hitting an iceberg.

Unfortunately, there were not enough lifeboats for everyone on board, resulting in the deaths of 1,502 out of 2,224 passengers and crew. While there was an element of luck in survival, it appears that certain groups of people were more likely to survive than others.

Titanic was one of the largest and most opulent ships in the world. It had a gross registered tonnage (i.e., carrying capacity) of 46,328 tons, and when fully laden the ship displaced (weighed) more than 52,000 tons. The Titanic was approximately 882.5 feet (269 metres) long and about 92.5 feet (28.2 metres) wide at its widest point.

## Modules involved
 1. Loading Data.
 2. Exploratory Data Analysis.
 3. Data Preprocessing.
 4. Dealing with missing values.
 5. Converting Features.
 6. Creating Categories.
 7. Splitting the data into training samples and testing samples.
 8. Building Machine Learning models.
 9. Concluding the best model.

Dataset: https://www.kaggle.com/mlg-ulb/creditcardfraud

## Finding Missing values in the train dataset

![img7](https://user-images.githubusercontent.com/88443158/143734593-f8c273d6-96ac-4453-ae00-2a8b563f9f02.PNG)

## Survived, Pclass vs Age column

![img9](https://user-images.githubusercontent.com/88443158/143734629-719270f1-a2c8-45cb-aa38-38937f63c399.PNG)

## Dealing with missing values in the 'Cabin' and 'Age' columns

As there are more than 50% of missing values in the Cabin column so it will be very difficult to deal with cabin column so the best way is to drop the cabin column so as to get the accurate results.

We can deal with age column and fill the missing values with the help of mean and standard deviation of the Age column.

![img12](https://user-images.githubusercontent.com/88443158/143734710-915e6543-abd3-4417-98a1-615f6589877b.PNG)

## Converting Fare and Name features to int type

For machine learning models we have to use the numerical type columns for the prediction so we have to convert the data with categorial column into numerical type.

1. Fare, Name

![img14](https://user-images.githubusercontent.com/88443158/143734763-7866a243-fd21-4f7a-9d6d-d66a38eed12e.PNG)

2. Sex, Ticket and Embarked

![img15](https://user-images.githubusercontent.com/88443158/143734803-bcb37863-46b0-4a25-8b37-a927f3209edb.PNG)

## Building Models:

 1. Random Forest
 2. Decision Tree
 3. Logistic Regression
 4. K-Nearest Neighbors

## 1. Random Forest

 - A random forest is a machine learning technique that's used to solve regression and classification problems. It utilizes ensemble learning, which is a technique that combines many classifiers to provide solutions to complex problems. A random forest algorithm consists of many decision trees.
 - Random forest is a supervised learning algorithm which is used for both classification as well as regression. Similarly, random forest algorithm creates decision trees on data samples and then gets the prediction from each of them and finally selects the best solution by means of voting.

![rfmodel](https://user-images.githubusercontent.com/88443158/143734852-37b980cf-075f-4017-a049-61aac0acd749.PNG)

## 2. Decision Tree

 - Decision Tree is a Supervised learning technique that can be used for both classification and Regression problems, but mostly it is preferred for solving Classification problems.
 - It is a tree-structured classifier, where internal nodes represent the features of a dataset, branches represent the decision rules and each leaf node represents the outcome.
 - The decisions or the test are performed on the basis of features of the given dataset.
 - A decision tree simply asks a question, and based on the answer (Yes/No), it further split the tree into subtrees.

![dtmodel](https://user-images.githubusercontent.com/88443158/143734876-5cf577a8-98bc-4e5b-91ce-65c3f82b9c0b.PNG)

## 3. K-Nearest Neighbors

 - K-Nearest Neighbour is one of the simplest Machine Learning algorithms based on Supervised Learning technique.
 - K-NN algorithm assumes the similarity between the new case/data and available cases and put the new case into the category that is most similar to the available categories.
 - K-NN is a non-parametric algorithm, which means it does not make any assumption on underlying data.KNN algorithm at the training phase just stores the dataset and when it gets new data, then it classifies that data into a category that is much similar to the new data.

![knnmodel](https://user-images.githubusercontent.com/88443158/143734887-3c74ae63-6779-423a-91a2-a021f26878e0.PNG)

## 4. Logistic Regression

 - Logistic regression is one of the most popular Machine Learning algorithms, which comes under the Supervised Learning technique. It is used for predicting the categorical dependent variable using a given set of independent variables.
 - Logistic regression predicts the output of a categorical dependent variable. Therefore the outcome must be a categorical or discrete value. It can be either Yes or No, 0 or 1, true or False, etc. but instead of giving the exact value as 0 and 1, it gives the probabilistic values which lie between 0 and 1.
 - In Logistic regression, instead of fitting a regression line, we fit an "S" shaped logistic function, which predicts two maximum values (0 or 1).

![lrmodel](https://user-images.githubusercontent.com/88443158/143734895-fe45483e-6373-4a90-b375-440593396f21.PNG)

## Finding which model is best from above models using score

![models](https://user-images.githubusercontent.com/88443158/143734924-28afc5ef-3700-49e9-8e6f-08434e784f89.PNG)

As wee can clearly see from the above figure that random forest model is best for our dataset to predict the survival of titanic passengers.

## Corss Validation 

Random Forest model is used to get the score much better with help of cross validation and applying kfold method to it.

![kfold](https://user-images.githubusercontent.com/88443158/143735005-08749b47-1917-413d-8d2b-ecee0ff16b72.PNG)

## Conclusion

 - As we have performed different models to get the best model which gives us the high score of the model for our titanic survival dataset. We have performed various thing like finding missing values, replacing missing values with the appropriate method, training the models, changing categorial column to numerical type.
 - We have used 4 models that are Random Forest, Logistic Regression, Decision Tree and K Nearest Neighbors from which we find that the Random Forest gives us the best result and we can say that with the use of random forest model we will get results much accurate for our titanic dataset.

## References

 1. [RandomForestClassifier](https://www.javatpoint.com/machine-learning-random-forest-algorithm)
 2. [Titanic EDA](https://www.geeksforgeeks.org/python-titanic-data-eda-using-seaborn/)
 3. [Titanic Survival Prediction](https://towardsdatascience.com/predicting-the-survival-of-titanic-passengers-30870ccc7e8)
