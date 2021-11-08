<div align = 'center'>
<h1>♦️ Chapter 1 - Statistics for Machine Learning ♦️</h1>
   </div>
   
<p align = 'justify'>
   <b>Machine learning and statistics are two tightly related fields of study.</b> So much so that statisticians refer to machine learning as “applied statistics” or “statistical learning” rather than the computer-science-centric name. Machine learning is almost universally presented to beginners assuming that the reader has some background in statistics. Raw observations alone are data, but they are not information or knowledge.</p>
   
Data raises questions, such as:

- What is the most common or expected observation?
- What are the limits on the observations?
- What does the data look like? <br>

Although they appear simple, these questions must be answered in order to turn raw observations into information that we can use and share.

Beyond raw data, we may design experiments in order to collect observations. From these experimental results we may have more sophisticated questions, such as:

- What variables are most relevant?
- What is the difference in an outcome between two experiments?
- Are the differences real or the result of noise in the data?

<p align = 'justify'>
Questions of this type are important. The results matter to the project, to stakeholders, and to effective decision making. Statistical methods are required to find answers to the questions that we have about data. We can see that in order to both understand the data used to train a machine learning model and to interpret the results of testing different machine learning models, that statistical methods are required. </p>

This is just the tip of the iceberg as each step in a predictive modeling project will require the use of a statistical method. Take a look at this quote from the beginning of a popular applied machine learning book titled _**“Applied Predictive Modeling"**_:

   > `… the reader should have some knowledge of basic statistics, including variance, correlation, simple linear regression, and basic hypothesis testing (e.g. p-values and test statistics).`<br/>
    — Page vii, _Applied Predictive Modeling_, 2013

Let's dive into the topics covered here,

*************************************************************************

## 📌 List of Contents 


| Sl. no. | Name of the topics | Audio | Documentation | Video |
|:---:|:---:|:---:|:---:|:---:|
| 1.1 | **Variables, Range, Population Distribution, Sample Distribution** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_1_Variables%2C%20Range%2C%20Population%20Distribution%2C%20Sample%20Distribution_(A).md) |  [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_1_Variables%2C%20Range%2CPopulation_Distribution%2CSample_Distribution_(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_1_Variables%2C%20Range%2C%20Population%20Distribution%2C%20Sample%20Distribution_(V).md) |
| 1.2 | **PDFs, CDFs** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_2%20_PDFs%20and%20CDFs_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_2_PDFs_and_CDFs_(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_2_PDFs_and_CDFs_(V).md) |
| 1.3 | **Central Limit Theorem** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_3_Central_Limit_Theorem(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_3_Central_Limit_Theorem_(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_3_Central_Limit_Theorem_(V).md) | 
| 1.4 | **Variance, Standard Deviation, Expectation** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_4%20_Variance_Standard_Deviation_Expectation_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_4_Variance%2C_Standard_Deviation%2C_Expectation_(D).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_4_Variance_Standard_Deviation_Expectation_(V).md) |
| 1.5 | **Probability Distributions (Gaussian, Standard, Poisson)** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_5_Probability%20Distributions(Gaussian%2CStandard%2CPoisson)_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_5_Probability_Distributions_(Gaussian%2C_Standard%2C_Poisson)_(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_5_Probability%20Distributions%20(Gaussian%2C%20Standard%2C%20Poisson)_(V).md) |
| 1.6 | **Maximum Likelyhood Estimation** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_6_Maximum_Likelihood_Estimation_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_6_Maximum_Likelihood_Estimation_(D).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_6_Maximum_Likelihood_Estimation_(V).md) |
| 1.7 | **Parzen Windows** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_7_Parzen%20Windows%20(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_7_Parzen_Windows_(D).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_7_Parzen_Windows_(V).md) |
| 1.8 | **A/B Testing** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_8_AB%20Testing_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_8_AB%20Testing_(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_8_A%5CB%20Testing%20(V).md) |
| 1.9 | **Hypothesis Testing** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_9_Hypothesis_Testing(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_9_Hypothesis_Testing_(D).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_9_Hypothesis_Testing_(V).md) |
| 1.10 | **P-Value** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_10_P-Value_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_10_P_Value_(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_10_P-Value_(V).md) |
| 1.11 | **Skewness** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_11_Skewness_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_11_Skewness_(D).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_11_Skewness_(V).md) |
| 1.12 | **Confusion Matrix** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_12_Confusion%20Matrix_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_12_Confusion_Matrix_(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_12_Confusion%20Matrix_P-Value%20(V).md) |
| 1.13 | **Confidence Interval** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_13_Confidence_Intervals(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_13_Confidence_Intervals(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_13_Confidence_Interval_(V).md) |
| 1.14 | **ANOVA** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_14_ANOVA(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_14_ANOVA_(D).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_14_ANOVA(V).md) |
| 1.15 | **Types of Distribution** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_15_Types%20of%20Distribution_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_15_Types_of_Distribution(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_15_Types%20of%20distributions%20(V).md) |
| 1.16 | **Bootstarp Sampling** | ❌  | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/ML_1_16_Bootstrap_Sampling_(D).ipynb) | ❌ |



----------------------------------------------------------------

## GirlScript Winter of Contributions, [GW:snowflake:C21]
**_Happy Contributions!_** 🍀:heart:





