# Discriminant Analysis

* Discriminant analysis is a technique that is used by the researcher to analyze the research data when the criterion or the dependent variable is categorical and the predictor or the independent variable is interval in nature.

* Discriminant analysis is described by the number of categories that is possessed by the dependent variable.

* Discriminant analysis uses a linear or quadratic function to assign each individual to one of the predefined groups based on k variables measured from each experimental sample.

* The objective of discriminant analysis is to develop discriminant functions that are nothing but the linear combination of independent variables that will discriminate between the categories of the dependent variable in a perfect manner.

* It also evaluates the accuracy of the classification.

![Before amd after LDA](https://github.com/HastiSutaria/winter-of-contributing/edit/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Tutorials/Discriminant%20Analysis/Images/Before-LDA-and-after-LDA_)

# Types of Discriminant Analysis
## Linear Discriminant Analysis
Linear Discriminant Analysis is a method of Dimensionality Reduction.This is a technique used in machine learning, statistics and pattern recognition to recognize a linear combination of features which separates or characterizes more than two or two events or objects.

## Multiple Discriminant Analysis
Mutliple Discriminant Analysis is a technique used to compress a multivariate signal for producing a low dimensional signal that is open to classification. Multiple Discriminant Analysis does not perform classification directly.It is referred to as a method used for reducing the distinction among variables for the purpose of classifying them into a given number of broad groups. This method is used in finance for compressing the variance among securities while also permitting the person to screen for a number of variables.

## Quadratic Discriminant Analysis
Similar to the Linear Discriminant Analysis, an observation is classified into the group having the least squared distance. But, the squared distance does not reduce to a linear function as evident from the name, Quadratic Discriminant Analysis.To calculate the parameters needed in quadratic discrimination further data and computation is needed as compared to linear discrimination. If there is less distinction in group covariance matrices, the latter will perform in a similar way to quadratic discrimination.

## Canonical Discriminant Analysis
Canonical Discriminant Analysis is a method of dimension-reduction liked with Canonical Correlation and Principal Component Analysis. If a classification variable and various interval variables are given, Canonical Analysis yields canonical variables which are used for summarizing variation between-class in a similar manner to the summarization of total variation done by principal components.

## Gaussian Discriminant Analysis
Gaussian Discriminant Analysis also known as GDA, is used when data can be approximated with normal distribution. Two variables are mean and standard deviations are important while computing this type of analysis.

# Implementation
We will implement LDA: 

* Objective : To identify different customer segments based on several wine features available. So, the shop owner of Wine shop can recommend wine according to the customer segment.
* Dataset : Wine.csv
* Libraris : Pandas, Matplotlib, NumPy
* Refer DiscriminantAnalysis.ipynb file for more details.

## Applications
There are many applications such as :
* It can be used to know whether heavy, medium and light users of soft drinks are different in terms of their consumption of frozen foods. 
* In the field of psychology, it can be used to differentiate between the price sensitive and non price sensitive buyers of groceries in terms of their psychological attributes or characteristics. 
* In the field of business, it can be used to understand the characteristics or the attributes of a customer possessing store loyalty and a customer who does not have store loyalty.
* We will see the wine recommendation system by Wine shop owner.
