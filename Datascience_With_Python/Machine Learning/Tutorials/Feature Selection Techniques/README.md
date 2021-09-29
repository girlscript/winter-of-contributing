## Feature Selection Techniques 


Working with datasets of different domains is emerging more as it helps to discover new insights and patterns. But while working with datasets, we come across different challenges like a huge number of columns, different ranges of values, inconsistent data to tackle these challenges we do a feature selection process which helps to overcome the challenges. We do a feature selection process in order to improve efficiency, accuracy and also to avoid overfitting problems.
 
**Feature Selection:**
 
![image](https://user-images.githubusercontent.com/79050917/134203028-8eb89790-39fd-46fe-bdf4-6ea1ad0030d8.png)
 
 
Definition of feature selection can be derived from its own words feature and selection. Process of selecting the important or relevant features which help in increasing the performance of the model.
 
![image](https://user-images.githubusercontent.com/79050917/134200966-dcfc6504-8f03-4471-a3b5-10cb1c8034ad.png)
 
**Why it is used?**
 
It helps in reducing the number of columns as we remove the irrelevant columns.
 
- Increases efficiency.
- Decrease the complexity.
- Increases the accuracy.
- Reduces training time.
- Reduces overfitting.
 
**Types of feature selection:**
 
- Filter Methods
- Wrapper Methods
- Embedded Methods
 
![image](https://user-images.githubusercontent.com/79050917/134201072-a915fd19-2133-4881-91cf-4d97f2d9fe71.png)
 
 
**Filter methods:**
 
Filter methods use to reduce the computational complexity using statistical methods and correlation measures. Columns having a high correlation have a linear effect with one other. Hence, removing one of the columns will help in reducing the complexity of the model. It uses statistical methods for the evaluation of a subset of features.
 
**Types of filter methods.**
* Pearson’s Correlation
* Linear discriminant analysis
* ANOVA
* Chi-Square
* Hypothesis Testing 
 
***Pearson’s Correlation:***
 
Pearson’s Correlation is a measure of linear correlation between two sets of data. It is the covariance of the two variables divided by the product of their standard deviations.
 
Formula:
 
![pearson image](https://user-images.githubusercontent.com/79050917/134202255-d12adc12-9e23-47b6-975a-34ecf44fe5f9.PNG)
 
ρ(x,y)= (cov(x,y)) / (σ(x)*σ(y))
 
cov is the covariance of the independent variable and dependent variable.
 
σ(x) standard deviations of the independent variable.
 
σ(y) standard deviations of the dependent variable.
 
***Linear discriminant analysis (LDA):***
 
LDA is used to reduce the number of columns while maximizing the variance. It is mostly used for categorical problems.
 
 
***ANOVA:***
 
ANOVA is known as “analysis of variance”, it is a statistical hypothesis to determine whether samples of data have the same distribution or not. Results of ANOVA helps in removing columns that are independent of the dependent variables.
 
 
***Chi-square:***
 
The Chi-square test is a statistical measure that is used to test the independence of two events. It is used to select the columns which are highly dependent on each other.
 
 
***Hypothesis Testing:***
 
A hypothesis test is a statistical test that is used to figure out whether we can apply a certain condition for an entire population and given a data sample. It helps to land on a conclusion whether to consider the condition or not.
**Wrapper Methods:**
 
Wrapper Methods follows a greedy approach. It selects the combination of features that gives the optimal results for the specified machine learning algorithm.
 
![image](https://user-images.githubusercontent.com/79050917/134201218-a1c517f2-112b-4fb5-a0a9-e9541577c7f7.png)
 
**Types of Wrapper Methods:**
 
* Forward Selection
* Backward Selection
* Bi-directional elimination(Stepwise Selection)
 
***Forward Selection:***
 
Forward Selection starts with a null model and fits the feature with the minimal p-value. It continuously increases the features and accepts the combination with less p-value.
 
***Backward Selection:***
 
Backward Selection starts with the full model and removes the features with the highest p-values. It continuously checks the p-values of features till it reaches the finite set of significant features by removing the features with the high p-value.
 
***Bi-directional elimination(Stepwise Selection):***
 
Bi-directional elimination(Stepwise Selection) is a combination of forward selection and backward selection. It selects the with the low p-value.
 
**Embedded Methods:**
 
Embedded Methods use built-in methods which have the capability of selecting features on their own algorithm. It is mostly used in reducing the effect of overfitting.
 
**Types of Embedded Methods:**
* Lasso regression
* Ridge regression
* Random Forest
 
***Lasso regression and Ridge regression:***
 
Both the techniques work by penalizing the magnitude of coefficients of features along with minimizing the error between predictions and actual values or records.
 
***Random Forest:***
 
Random Forest is used in removing the branches in the decision tree which helps in increasing its accuracy, efficiency and reducing complexity.
All of the embedded methods are mostly used to reduce as regularization techniques which helps in avoiding overfit in data.
 
**The advantages of feature selection:**
- Decreases over-fitting: Less redundant data means fewer chances of making decisions based on noise.
- Reduces training time: fewer data means that the algorithms train sooner.
- Improved accuracy: Less ambiguous data means improvement of modeling accuracy.
 
**Application of Feature selection:**
 
In most cases, we apply when we have:
- a huge number of columns.
- Inaccurate results.
 
**Goal:**
 
The goal of feature selection in machine learning is to find the best set of features that allows one to build useful models of studied phenomena.
 
**Conclusion:**
 
Feature Selection is an important step to follow while dealing with the dataset. It is important as it helps to increase the quality of the model and helps to reach better accuracy than before.
 
![image](https://user-images.githubusercontent.com/79050917/134203098-a2302eb0-df9e-460a-b391-abb429e72c7a.png)


