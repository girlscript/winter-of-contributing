# **<ins>Factor Analysis</ins>**

## **INTRODUCTION**
Factor analysis is one of the unsupervised machine learning algorithms which is used for dimensionality reduction. This algorithm creates factors from the observed variables to represent the common variance i.e. variance due to correlation among the observed variables. Yes, it sounds a bit technical so let’s break it down into pizza and slices.
<br><img src='https://miro.medium.com/max/293/1*dlZRhuOKXeBMXvpQer8sSA.png' style='width:20%'><br>
Representing features in terms of factors
<br>
x is the variable and F is the factor and l is the factor loading which can also be considered as the weight of the factor for the corresponding variable. The number of factors is equal to the number of variables.
<br><br>

## **Terminology**

- What is a factor?<br>
    A factor is a latent variable which describes the association among the number of observed variables. The maximum number of factors are equal to a number of observed variables. Every factor explains a certain variance in observed variables. The factors with the lowest amount of variance were dropped. Factors are also known as latent variables or hidden variables or unobserved variables or Hypothetical variables.

- What are the factor loadings?<br>
    The factor loading is a matrix which shows the relationship of each variable to the underlying factor. It shows the correlation coefficient for observed variable and factor. It shows the variance explained by the observed variables.

- What is Eigenvalues?<br>
    Eigenvalues represent variance explained each factor from the total variance. It is also known as characteristic roots.

- What are Communalities?<br>
    Commonalities are the sum of the squared loadings for each variable. It represents the common variance. It ranges from 0-1 and value close to 1 represents more variance.

- What is Factor Rotation?<br>
    Rotation is a tool for better interpretation of factor analysis. Rotation can be orthogonal or oblique. It re-distributed the commonalities with a clear pattern of loadings.
<br><br>

## **STEPS INVOLVED IN FACTOR ANALYSIS**
The various steps involved in factor analysis are
- Bartlett’s Test of Sphericity and KMO Test
- Determining the number of factors
- Interpreting the factors
<br>
Make sure that you have removed the outliers, standard scaled the data and also the features have to be numeric.
<br><br>

### **Assumptions:**
- There are no outliers in data.
- Sample size should be greater than the factor.
- There should not be perfect multicollinearity.
- There should not be homoscedasticity between the variables.
<br><br>

### **BARTLETT’S TEST OF SPHERICITY**
Bartlett’s test checks whether the correlation is present in the given data. It tests the null hypothesis (H0) that the correlation matrix is an Identical matrix. The identical matrix consists of all the diagonal elements as 1. So, the null hypothesis assumes that no correlation is present among the variables.
<br>
We want to reject this null hypothesis because factor analysis aims at explaining the common variance i.e. the variation due to correlation among the variables. If the p test statistic value is less than 0.05, we can decide that the correlation is not an Identical matrix i.e. correlation is present among the variables with a 95% confidence level.
```python
from factor_analyzer.factor_analyzer import calculate_bartlett_sphericitychi2,p = calculate_bartlett_sphericity(dataframe)
print("Chi squared value : ",chi2)
print("p value : ",p)
#OUTPUT:Bartlett Sphericity TestChi squared value : 4054.19037041082
```
Output:
```
p value : 0.0
```
Read the dataset using pandas and store the dataset in a dataframe. We have stored the dataset in a dataframe named ‘dataset’. Just simply pass the ‘dataset’ through the calculate_bartltett_sphericty function, it will test the null hypothesis and will return the chi-squared value and the p test statistic. Since the p test statistic is less than 0.05, we can conclude that correlation is present among the variables which is a green signal to apply factor analysis.
<br><br>

### **KAISER-MEYER-OLKIN (KMO) TEST**
KMO Test measures the proportion of variance that might be a common variance among the variables. Larger proportions are expected as it represents more correlation is present among the variables thereby giving way for the application of dimensionality reduction techniques such as Factor Analysis. KMO score is always between 0 to 1 and values more than 0.6 are much appreciated. We can also say it as a measure of how suited our data is for factor analysis.
```python
from factor_analyzer.factor_analyzer import calculate_kmokmo_vars,kmo_model = calculate_kmo(dataset)
print(kmo_model)
```
Output:
```
KMO Test Statistic 0.8412492848324344
```
Just pass the dataframe which contains information about the dataset to the calculate_kmo function. The function will return the proportion of variance for each variable which is stored in the variable ‘kmo_vars’ and the proportion of variance for the whole of our data is stored in ‘kmo_model’. we can see that our data has an overall proportion of variance of 0.84. It shows that our data has more correlation and dimensionality reduction techniques such as the factor analysis can be applied.
<br><br>

### **DETERMINING THE NUMBER OF FACTORS**
The number of factors in our dataset is equal to the number of variables in our dataset. All the factors are not gonna provide a significant amount of useful information about the common variance among the variables. So we have to decide the number of factors. The number of factors can be decided on the basis of the amount of common variance the factors explain. In general, we will plot the factors and their eigenvalues.
<br>
Eigenvalues are nothing but the amount of variance the factor explains. We will select the number of factors whose eigenvalues are greater than 1.
<br>
But why should we choose the factors whose eigenvalues are greater than 1? The answer is very simple. In a standard normal distribution with mean 0 and Standard deviation 1, the variance will be 1. Since we have standard scaled the data the variance of a feature is 1. This is the reason for selecting factors whose eigenvalues(variance) are greater than 1 i.e. the factors which explain more variance than a single observed variable.
```python
from factor_analyzer import FactorAnalyzerfa = FactorAnalyzer(rotation = None,impute = "drop",n_factors=dataframe.shape[1])fa.fit(dataframe)
ev,_ = fa.get_eigenvalues()plt.scatter(range(1,dataframe.shape[1]+1),ev)
plt.plot(range(1,dataframe.shape[1]+1),ev)
plt.title('Scree Plot')
plt.xlabel('Factors')
plt.ylabel('Eigen Value')
plt.grid()
```
Output:
<br><img src='https://miro.medium.com/max/395/1*981ioYA_KuVocqtlCPXt4A.png' style='width:30%'><br>
The eigenvalues function will return the original eigenvalues and the common factor eigenvalues. Now, we are going to consider only the original eigenvalues. From the graph, we can see that the eigenvalues drop below 1 from the 7th factor. So, the optimal number of factors is 6.
<br><br>

### **INTERPRETING THE FACTORS**
Create an optimal number of factors i.e. 6 in our case. Then, we have to interpret the factors by making use of loadings, variance, and commonalities.
<br>

#### **LOADINGS**
```python
fa = FactorAnalyzer(n_factors=6,rotation='varimax')
fa.fit(dataset)
print(pd.DataFrame(fa.loadings_,index=dataframe.columns))
```
Output:
<br><img src='https://miro.medium.com/max/546/1*_u8YHRVPWR84fqecah1LiA.png' style='width:30%'><br>
Loadings indicate how much a factor explains a variable. The loading score will range from -1 to 1.Values close to -1 or 1 indicate that the factor has an influence on these variables. Values close to 0 indicates that the factor has a lower influencer on the variable.
<br>

#### **VARIANCE**
The amount of variance explained by each factor can be found out using the ‘get_factor_variance’ function.
```python
print(pd.DataFrame(fa.get_factor_variance(),index=['Variance','Proportional Var','Cumulative Var']))
```
Output:
<br><img src='https://miro.medium.com/max/624/1*yJm52ud1QL3H4CwALRLEgQ.png' style='width:30%'><br>
The first row represents the variance explained by each factor. Proportional variance is the variance explained by a factor out of the total variance. Cumulative variance is nothing but the cumulative sum of proportional variances of each factor. In our case, the 6 factors together are able to explain 55.3% of the total variance.
<br>

#### **COMMUNALITIES**
Communality is the proportion of each variable’s variance that can be explained by the factors. Rotations don’t have any influence over the communality of the variables.
```python
print(pd.DataFrame(fa.get_communalities(),index=dataframe.columns,columns=['Communalities']))
```
Output:
<br><img src='https://miro.medium.com/max/452/1*mxPe6Jf9M5J1xPZA6_nY0w.png' style='width:30%'><br>
The proportion of each variable’s variance that is explained by the factors can be inferred from the above. For example, we could consider the variable ‘talkatv’ about 62.9% of its variance is explained by all the factors together.
<br><br>

## **Factor Analysis Vs. Principle Component Analysis**
- PCA components explain the maximum amount of variance while factor analysis explains the covariance in data.
- PCA components are fully orthogonal to each other whereas factor analysis does not require factors to be orthogonal.
- PCA components are uninterpretable. In FA, underlying factors are labelable and interpretable.
- PCA is a kind of dimensionality reduction method whereas factor analysis is the latent variable method.
<br><br>

## **Pros and Cons of Factor Analysis**
Factor analysis explores large dataset and finds interlinked associations. It reduces the observed variables into a few unobserved variables or identifies the groups of inter-related variables, which help the market researchers to compress the market situations and find the hidden relationship among consumer taste, preference, and cultural influence. Also, It helps in improve questionnaire in for future surveys. Factors make for more natural data interpretation.
<br>
Results of factor analysis are controversial. Its interpretations can be debatable because more than one interpretation can be made of the same data factors. After factor identification and naming of factors requires domain knowledge.
<br><br>

## **Conclusion**
Factor Analysis brings in simplicity after reducing variables. Factor Analysis, including Principal Component Analysis, is also often used along with segmentation studies. In this post, we understood about the factor analysis method, and the assumptions made before working on the method. We also saw different kinds of factor analysis, and how they can be performed on different platforms.
<br><br>

### ***View the complete [ipynb](factor_analysis.ipynb) file***
### ***Contribution by : Abhinav Mathur***




