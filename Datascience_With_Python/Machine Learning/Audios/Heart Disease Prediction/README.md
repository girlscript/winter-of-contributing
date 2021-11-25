# TOPIC: Heart Disease Prediction

# AUDIO LINK : [Heart Disease Prediction](https://drive.google.com/file/d/1oXkwf2pQhQJZv8770wrv-nxpSR4YjVr1/view?usp=sharing)

# Introduction:

Over the last decade, heart disease or cardiovascular remains the primary basis of death worldwide. Many predisposing factors such as personal and professional habits and genetic predisposition accounts for heart disease. Heart disease refers to a variety of conditions that affect the heart — from infections to genetic defects and blood-vessel diseases. Most heart disease can be prevented with healthy lifestyle choices, yet it’s still the number one health threat in the world.

Data mining is the process of extracting valuable data and information from huge databases. Various data mining techniques such as regression, clustering, association rule and classification techniques like Naïve Bayes, decision tree, random forest and K-nearest neighbor are used to classify various heart disease attributes in predicting heart disease.

Machine learning is an emerging subdivision of artificial intelligence. Its primary focus is to design systems, allow them to learn and make predictions based on the experience. It trains machine learning algorithms using a training dataset to create a model. The model uses the new input data to predict heart disease. Using machine learning, it detects hidden patterns in the input dataset to build models.

# Implementation :

Here, aim is to foresee the odds of having heart disease as probable cause of computerized prediction of heart disease that is helpful in the medical field for clinicians and patients. To accomplish the aim, we have discussed the use of various machine learning algorithms on the data set and dataset analysis is mentioned in this audio. This may spare the expense of different trials of a patient, as all the attributes may not contribute such a substantial amount to expect the outcome.

# Data Pre-processing
The real-life information contains large numbers with missing and noisy data. These data are pre-processed to overcome such issues and make predictions vigorously. Below is a flowchart showing the processing of heart disease predictiion method.

![image](https://user-images.githubusercontent.com/75624735/143441339-066f9ca3-5e01-40c2-9683-d9994ff402fd.png)

## K NEAREST NEIGHBORS :
K Nearest Neighbor algorithm falls under the Supervised Learning category and is used for classification and regression. It is a versatile algorithm also used for imputing missing values and resampling datasets. As the name suggests it considers K Nearest Neighbors (Data points) to predict the class or continuous value for the new Datapoint.

![image](https://user-images.githubusercontent.com/75624735/143442405-6ef73c52-edfa-43e4-9a89-3f862c18a007.png)

## SUPPORT VECTORS MACHINES :
Support vector machines (SVMs) are a set of supervised learning methods used for classification, regression and outliers detection.
The advantages of support vector machines are:

- Effective in high dimensional spaces.
- Still effective in cases where number of dimensions is greater than the number of samples.
- Uses a subset of training points in the decision function (called support vectors), so it is also memory efficient.

![image](https://user-images.githubusercontent.com/75624735/143442478-43072a67-3a99-412d-b839-d2ec4fa36881.png)

## Decision Tree Classifier :
This classifier creates a decision tree based on which, it assigns the class values to each data point. Here, we can vary the maximum number of features to be considered while creating the model. Decision tree is a classification algorithm that works on categorical as well as numerical data. Decision tree is used for creating tree-like structures. Decision tree is simple and widely used to handle medical dataset. It is easy to implement and analyse the data in tree-shaped graph. The decision tree model makes analysis based on three nodes.

- Root node: main node, based on this all other nodes functions.
- Interior node: handles various attributes.
- Leaf node: represent the result of each test.

![image](https://user-images.githubusercontent.com/75624735/143443219-5daeb410-654d-4297-83ca-e5208a54e728.png)

## RANDOM FOREST :
Random forest is an ensemble model. Ensemble models are those that use more than two or three models in combination for prediction. Ensemble uses two types of methods: Bagging and Boosting. Random forest works on the Bagging principle. Bagging chooses a random sample from the dataset.Hence each model (individual decision tree) is generated from the samples known as row sampling. This step of row sampling with replacement is called bootstrap. Each model is trained independently which generates results. The final answer is based on majority voting after combining the results of all the models. This step is known as aggregation.

![image](https://user-images.githubusercontent.com/75624735/143443300-f0d4e3d6-c0ce-4aac-938a-2f1fb40ca57a.png)

# Conclusion :
In this task, I have used four machine learning models to predict the heart disease in people.
The accuracy score using:

- K Neighbors Classifier: 87%
- Support Vector Classifier: 83%
- Decision Tree Classifier: 79%
- Random Forest Classifier: 84%

K Neighbors Classifier scored the best score of 87% with 8 neighbors.

# References :

- https://towardsdatascience.com/predicting-presence-of-heart-diseases-using-machine-learning-36f00f3edb2c
- https://link.springer.com/article/10.1007/s42979-020-00365-y
- https://www.analyticsvidhya.com/blog/2021/04/simple-understanding-and-implementation-of-knn-algorithm/
- https://scikit-learn.org/stable/modules/svm.html
