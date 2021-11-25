# TOPIC: Heart Disease Prediction

# AUDIO LINK : [Heart Disease Prediction](https://drive.google.com/file/d/1oXkwf2pQhQJZv8770wrv-nxpSR4YjVr1/view?usp=sharing)

# Introduction:

Over the last decade, heart disease or cardiovascular remains the primary basis of death worldwide.  The vast number of deaths is common amongst low and middle-income countries. Many predisposing factors such as personal and professional habits and genetic predisposition accounts for heart disease. Heart disease refers to a variety of conditions that affect the heart — from infections to genetic defects and blood-vessel diseases. Most heart disease can be prevented with healthy lifestyle choices, yet it’s still the number one health threat in the world.
Data mining is the process of extracting valuable data and information from huge databases. Various data mining techniques such as regression, clustering, association rule and classification techniques like Naïve Bayes, decision tree, random forest and K-nearest neighbor are used to classify various heart disease attributes in predicting heart disease.
Machine learning is an emerging subdivision of artificial intelligence. Its primary focus is to design systems, allow them to learn and make predictions based on the experience. It trains machine learning algorithms using a training dataset to create a model. The model uses the new input data to predict heart disease. Using machine learning, it detects hidden patterns in the input dataset to build models. It makes accurate predictions for new datasets. The dataset is cleaned and missing values are filled. The model uses the new input data to predict heart disease and then tested for accuracy.

# Dataset :

For this task, I have used Kaggle's [Heart Disease Prediction](https://www.kaggle.com/ronitf/heart-disease-uci dataset).

## SUPPORT VECTORS MACHINES :
Support vector machines (SVMs) are a set of supervised learning methods used for classification, regression and outliers detection.
The advantages of support vector machines are:

Effective in high dimensional spaces.
Still effective in cases where number of dimensions is greater than the number of samples.
Uses a subset of training points in the decision function (called support vectors), so it is also memory efficient.
## LOGISTIC REGRESSION :
Logistic regression is an algorithm used for classification where the predicted variable y is a discrete value. Examples of classification problems:

- Email: spam/ not spam
- Tumor: malignant/ benign
Such classification problems are known as binary classification where the predicted variable y can take only two values that is either 0 or 1/ spam or not spam. In a multi-class classification problem, the predicted variable y can take more than two values like 0, 1, or 2.

## RANDOM FOREST :
Random forest is an ensemble model. Ensemble models are those that use more than two or three models in combination for prediction. Ensemble uses two types of methods: Bagging and Boosting. Random forest works on the Bagging principle. Bagging chooses a random sample from the dataset.Hence each model (individual decision tree) is generated from the samples known as row sampling. This step of row sampling with replacement is called bootstrap. Each model is trained independently which generates results. The final answer is based on majority voting after combining the results of all the models. This step is known as aggregation.

## K NEAREST NEIGHBORS :
K Nearest Neighbor algorithm falls under the Supervised Learning category and is used for classification and regression. It is a versatile algorithm also used for imputing missing values and resampling datasets. As the name suggests it considers K Nearest Neighbors (Data points) to predict the class or continuous value for the new Datapoint.

# Summary :
In this task, I have used four machine learning models to predict the heart disease in people.
The accuracy score using:

- Support Vector Classifier is 0.836
- Logistic Regression is 0.868
- Random Forest Classifier is 0.819
- K Neighbours Classifier is 0.868
The highest accuracy score (0.868) was obtained by using logistic regression and K neighbors classifier models.
