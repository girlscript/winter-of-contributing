# Project Title : Kaggle's Titanic Prediction

## Abstract/Brief Description about the Project :

![image](https://user-images.githubusercontent.com/63282184/142458721-c0a32098-a527-4941-9ee2-f08ba91af594.png)



We have access to a bunch of 9 features (numerical, text, categorical). The <b>big challenge</b> with this competition is the size of the data we have. The <b>training set</b> is composed of only <b>891 samples</b>. The testing set is composed of 418 samples. <br>Therefore, the main issue is to design an algorithm which generalizes enough in order to avoid <b>over-fitting</b>. To do so, a bunch of features is generated. Then, an ensemble modeling method with voting is used in order to get the most generalized model.<br><br>

## Dataset :

This is a multi-label classification, with 2 labels:

- 0: passenger did not survive
- 1: passenger survived

[Kaggle](https://www.kaggle.com) offers 2 datasets:
- One Training set: 891 passengers whose label is known
- One Test set (TS0): 418 passengers whose label is unknown





## Goal/Aim of the project :

Goal: For each passenger, predict the label (0 or 1).

## Libraries used :

- pandas
- matplotlib.pyplot
- seaborn
- sklearn
- Numpy
- matplotlib
## Data Visualization :

![image](https://user-images.githubusercontent.com/63282184/142458506-bd068131-396a-47c3-bd2c-a1d161284334.png)

![image](https://user-images.githubusercontent.com/63282184/142458560-cc885512-1f0b-4cac-91c3-20277fbfbb45.png)

![image](https://user-images.githubusercontent.com/63282184/142458621-a187310d-49a0-4c69-8af3-0e2ac445db18.png)


## Model comparison :

The models tried are:
- Cross Validation (K-fold)
- kNN
- Decision Tree
- Ramdom Forest
- Naive Bayes
- SVM



The different algorithms perform differently. We need to look at the average, but also at the standard deviation of the accuracy of these algorithms. Indeed, we want our model to perform well on average, but we don't want it to perform really poorly sometimes or really greatly on other times. 
I decided to use a hand-crafted criterion in order to take into account both average and deviation. The criterion is defined as the average minus the half of the deviation. So we take the algorithm with the best accuracy modulated by a not to big deviation.


### Feature Engineering

In this part, I designed the features following the previous part. I ended with the following features:

- PClass
- Title (engineered from Name)
- Sex
- Age
- FamilyType (engineered from SibSp + Parch)
- Prefix (engineered from Ticket - it's the prefix of the ticket)
- Fare
- cabin_letter (engineered from the Cabin)
- Embarked 

### Hyper-Parameters Optimization 

In this part, I tried to improve the accuracy of the selected classifiers by hyper-parameters optimization. To do so, I used a Scikit-Learn implemented tool in order to perform a grid search.

### Ensemble Modeling

The classifier are quiet correlated. This is a good sign! However we observe some differences between the 5 classifiers. This is good for you because we can leverage the use of a voting system to improve our prediction. 


## Conclusion and Discussion :

The evaluation metric is accuracy score. 

The project is decomposed in 3 parts:

The framework of this notebook is:
- Preliminary Work:
    - General Exploration
    - NaN values
    - Feature Exploration
- Analysis of the features
    - Categorical and Integer Numerical
    - Numerical
    - Text
- Feature Engineering
- Modeling
    - Simple Models & Selection
    - Hyper-Parameters Optimization 
    - Ensemble Modeling


In the training dataframe, we observe that the 2 label are slightly balanced (61% labeled as 0). We also see we have access to 16 different features per passengers. <br> 4 of the features have missing values:

- Age: Age is fractional if less than 1. If the age is estimated, is it in the form of xx.5 -> Numerical Variable
- Cabin: Cabin number -> Categorical variable
- Embarked: Port of Embarkation (3 categories)  -> Categorical variable
- Fare: Numerical: Only 1 missing in the test dataset. Can be replace by the mean in the training set. 

### Categorical & Integer Numerical Features

For this type of feature, we can observe the average survival of passengers within each categories. The observed features are: 

- PClass
- Sex
- Embarked
- SibSp
- Parch

Conclusion:

- Pclass and Sex has a great correlation with the survival of people -> Keep directly them as features
- SibSp & Parch have a sort of correlation but feature engineering is required: We can sum the two and then know:
	- if the passenger was alone 
	- if the passenger was with a big or a small family
- Embarked: 3 labels with no assumed order -> one-hot encoding 

### Numerical Features

For this type of feature, we can observe the distribution of the passengers given the survival. The observed features are: 

- Age
- Fare

<u>Conclusion:</u>
- Younger and older people survived.
- The middle age (20-40) people did not survive. 
- We should consider the age as predictor
- Fare is less clear
- Age is skewed and Fare is highly skewed  -> [Box-Cox Transformation](https://docs.scipy.org/doc/scipy/reference/generated/scipy.stats.boxcox.html) is required

### Text Features

For this type of features, we don't directly do analysis. A first transformation is needed. The observed features are:

- Cabin
- Name 

<u>Engineering:</u>
- Cabin: We can extract two informations: 
	- if a passenger has a cabin 
	- what is the letter of the cabin deck and so we have an estimate of the position of the passenger in the boat
- Name: We can extract one information:
	- the title of the passenger
	- Group the title to reduce the number of categories

- The accuracy score of SVM (support vector machine ) is 83.5  

- The accuracy score of Naive Bayes which is 78.78

- The accuracy score of Random forest is 80.59

- The accuracy score of Decision Tree is 79.69

### So by comparing all this we can see that the accuracy score of SVM is highest and we use SVM for our prediction 

**********************************************************************
**GirlScript Winter of Contributions 2021**




