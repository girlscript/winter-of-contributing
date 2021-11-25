# 🚢 **TITANIC SURVIAL PREDICTION**

<p align="center">
  <img width="600" height="325" src="https://www.icegif.com/wp-content/uploads/titanic-icegif-10.gif">
</p>

Titanic, in full Royal Mail Ship (RMS) Titanic, British luxury passenger liner that sank on April 14–15, 1912, during its maiden voyage, en route to New York City from Southampton, England, killing about 1,500 (see Researcher’s Note: Titanic) passengers and ship personnel. 
One of the most famous tragedies in modern history, it inspired numerous stories, several films, and a musical and has been the subject of much scholarship and scientific speculation.

## 🗼 **STRUCTURE OF THE SHIP**
<p align="center">
  <img width="700" height="350" src="https://miro.medium.com/max/875/1*ePbfZdw6sz397xLWlFZLCQ.jpeg">
</p>

As it prepared to embark on its maiden voyage, the Titanic was one of the largest and most opulent ships in the world. It had a gross registered tonnage (i.e., carrying capacity) of 46,328 tons, and when fully laden the ship displaced (weighed) more than 52,000 tons.
The Titanic was approximately 882.5 feet (269 metres) long and about 92.5 feet (28.2 metres) wide at its widest point.


## 💡 **INTRODUCTION**
We aim at creating a machine learning model that provides information on the fate of passengers on the Titanic, summarized according to economic status (class), sex, age and survival. 

We will build a predictive model that answers the question: “What sorts of people were more likely to survive?” Using passenger data (ie name, age, gender, socio-economic class, etc).

## 📑 **ROADMAP**
In the project following, we will be performing the following steps:
1. Extracting the datasets.
2. Perform exploratory analysis on the data.
3. Check for missing values and extracting important features.
4. Use seaborn and matplotlib to aid visualizations.
5. Perform data preprocessing; compute missing values, convert features into numeric ones, group values into categories and created a few new features.
6. Train different Machine Learning models and choose the best one.
7. Apply cross validation on the chosen model.
8. Tune the performance of the model using hyperparameter values.
9. Computed the models precision, recall and f-score.

## 🎴 **WORKFLOW**
<p align="center">
  <img width="600" height="350" src="https://user-images.githubusercontent.com/36481036/143469335-7233deee-20d0-4b84-8b83-40c9e7caa769.png">
</p>


## 📗 **DATASETS**
* The dataset reference was taken from https://www.kaggle.com/c/titanic
* The dataset consists of a training and testing dataset and also a gender submission file.

## :thought_balloon: **PREREQUISITES**
All the dependencies and required libraries are included in the file <code>requirements.txt</code> [See here](./requirements.txt)

## 💻 **CODING**
**Each of the following data blocks is explained in deep in the jupyter notebook.**
1. Import the libraries.
2. Load the datasets.
3. Perform Data Exploration.
4. Perform Data Preprocessing
5. Train several Machine Learning models and compare their results.


## 💲 **BLOCKWISE OUTPUTS**
All the blockwise outputs are present in the <code>Images</code> folder for reference [See here](./Images)

## 🖥️ **MODELS TRAINED**
1. Stochastic Gradient Descent (SGD):
Stochastic gradient descent (often abbreviated SGD) is an iterative method for optimizing an objective function with suitable smoothness properties (e.g. differentiable or subdifferentiable)
2. Random Forest: A random forest is a machine learning technique that's used to solve regression and classification problems. It utilizes ensemble learning, which is a technique that combines many classifiers to provide solutions to complex problems.
3. Logistic Regression: In statistics, the logistic model is used to model the probability of a certain class or event existing such as pass/fail, win/lose, alive/dead or healthy/sick.
4. K Nearest Neighbor: The k-nearest neighbors (KNN) algorithm is a simple, supervised machine learning algorithm that can be used to solve both classification and regression problems. 
5. Gaussian Naive Bayes: Gaussian Naive Bayes is a variant of Naive Bayes that follows Gaussian normal distribution and supports continuous data.
6. Perceptron:A perceptron model, in Machine Learning, is a supervised learning algorithm of binary classifiers. A single neuron, the perceptron model detects whether any function is an input or not and classifies them in either of the classes. 
7. Linear Support Vector Machine: Support Vector Machine or SVM is one of the most popular Supervised Learning algorithms, which is used for Classification as well as Regression problems. However, primarily, it is used for Classification problems in Machine Learning. 
8. Decision Tree: A decision tree is a decision support tool that uses a tree-like model of decisions and their possible consequences, including chance event outcomes, resource costs, and utility. 

<p align="center">
  <img width="500" height="350" src="https://user-images.githubusercontent.com/36481036/143472161-5557fb27-066f-4024-baaa-a9650d94fda7.png">
</p>

## ⭐ **OUTCOME IN ACCORDANCE WITH THE MODELS TRAINED**
The Random Forest classifier goes on the first place. 

### 🌲 **WHAT IS A RANDOM FOREST ?**
Random Forest is a supervised learning algorithm. Like you can already see from it’s name, it creates a forest and makes it somehow random. The forest it builds, is an ensemble of Decision Trees, most of the time trained with the “bagging” method. The general idea of the bagging method is that a combination of learning models increases the overall result.
To say it in simple words: Random forest builds multiple decision trees and merges them together to get a more accurate and stable prediction.

<p align="center">
  <img width="600" height="450" src="https://files.ai-pool.com/a/3406775c0c6f8fd9f8701c7ca671dad9.png">
</p>


### 📌 **ADVANTAGES**
* One big advantage of random forest is, that it can be used for both classification and regression problems, which form the majority of current machine learning systems. 
With a few exceptions a random-forest classifier has all the hyperparameters of a decision-tree classifier and also all the hyperparameters of a bagging classifier, to control the ensemble itself.

* The random-forest algorithm brings extra randomness into the model, when it is growing the trees. 
* Instead of searching for the best feature while splitting a node, it searches for the best feature among a random subset of features. 
* This process creates a wide diversity, which generally results in a better model. Therefore when you are growing a tree in random forest, only a random subset of the features is considered for splitting a node.

## 🔴 **CROSS VALIDATION OF RANDOM FOREST**

### **Feature Importance**
Another great quality of random forest is that they make it very easy to measure the relative importance of each feature. Sklearn measure a features importance by looking at how much the treee nodes, that use that feature, reduce impurity on average (across all trees in the forest). 
It computes this score automaticall for each feature after training and scales the results so that the sum of all importances is equal to 1. 
<p align="center">
  <img width="600" height="350" src="https://miro.medium.com/max/875/1*_jE0Ha2nq2zD0OpMHKL0Ig.png">
</p>

### **Hyperparameter Tuning**
Below you can see the hyperparamter tuning for the parameters criterion, min_samples_leaf, min_samples_split and n_estimators:

<p align="center">
  <img width="600" height="300" src="https://miro.medium.com/max/875/1*D_Lg43_vnHCChBCi-5Y0MA.png">
</p>

## 🖋️ **MODEL EVALUATION**

### 😕 **CONFUSION MATRIX**

<p align="center">
  <img width="800" height="80" src="https://miro.medium.com/max/875/1*IFLtfeeAZsZgvtjEHuZtfw.png">
</p>

* The first row is about the not-survived-predictions: 493 passengers were correctly classified as not survived (called true negatives) and 56 where wrongly classified as not survived (false positives).
* The second row is about the survived-predictions: 93 passengers where wrongly classified as survived (false negatives) and 249 where correctly classified as survived (true positives).

### 📈 **PRECISION RECALL CURVE**
For each person the Random Forest algorithm has to classify, it computes a probability based on a function and it classifies the person as survived (when the score is bigger the than threshold) or as not survived (when the score is smaller than the threshold). 
That’s why the threshold plays an important part.
<p align="center">
  <img width="600" height="350" src="https://user-images.githubusercontent.com/36481036/143478889-0281aa7f-955c-48fd-ab63-b404d37434db.png">
</p>

Above you can clearly see that the recall is falling of rapidly at a precision of around 85%. 

Another way is to plot the precision and recall against each other:

<p align="center">
  <img width="600" height="350" src="https://user-images.githubusercontent.com/36481036/143479132-4e05583a-789e-4fec-91f3-e5337b4eb9b7.png">
</p>

### 📐 **ROC AUC CURVE**
Another way to evaluate and compare your binary classifier is provided by the ROC AUC Curve. 
This curve plots the true positive rate (also called recall) against the false positive rate (ratio of incorrectly classified negative instances), instead of plotting the precision versus the recall.
<p align="center">
  <img width="600" height="350" src="https://user-images.githubusercontent.com/36481036/143479299-59f1bfef-1507-4161-ab79-e62da46b1661.png">
</p>

### 📝 **ROC AUC SCORE**
The ROC AUC Score is the corresponding score to the ROC AUC Curve. It is simply computed by measuring the area under the curve, which is called AUC.
A classifiers that is 100% correct, would have a ROC AUC Score of 1 and a completely random classiffier would have a score of 0.5.
<p align="center">
  <img width="900" height="225" src="https://user-images.githubusercontent.com/36481036/143479526-3725cdb7-bcfe-4ed5-a115-7c2af371b914.png">
</p>

## 📉 **AFTERMATH**
Below you can see a before and after picture of the “train_df” dataframe:

BEFORE
-------
![raw train_df](https://user-images.githubusercontent.com/36481036/143480210-20d73528-0825-4451-a7b3-928d237025dd.png)

AFTER
------
![processed train_df](https://user-images.githubusercontent.com/36481036/143480218-affd3bd2-45f5-42ca-b804-9096beb98359.png)

## 📍 **SUMMARY**
* We started with the data exploration where we got a feeling for the dataset, checked about missing data and learned which features are important.
 During this process we used seaborn and matplotlib to do the visualizations. During the data preprocessing part, we computed missing values, converted features into numeric ones, grouped values into categories and created a few new features. 

* Afterwards we started training 8 different machine learning models, picked one of them (random forest) and applied cross validation on it. 
Then we discussed how random forest works, took a look at the importance it assigns to the different features and tuned it’s performace through optimizing it’s hyperparameter values. Lastly, we looked at it’s confusion matrix and computed the models precision, recall and f-score.

## 🟥 **CONCLUSION**
There is still room for improvement, like doing a more extensive feature engineering, by comparing and plotting the features against each other and identifying and removing the noisy features.


## :bust_in_silhouette: **CREDITS**
* https://towardsdatascience.com/predicting-the-survival-of-titanic-passengers-30870ccc7e8
* https://www.kaggle.com/c/titanic
* https://www.britannica.com/topic/Titanic

**:sunglasses:** **CREATOR**- https://github.com/theshredbox
