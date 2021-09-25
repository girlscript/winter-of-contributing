# ANOVA(Analysis Of Variance)

## ***📌Introduction***

In the study of our dataset, we often answer questions like which of our predictors are interdependent, which are correlated and related interpretations relevant to our problem statement like, suppose, if we want to find, ***“Is age a factor affecting muscle mass?”*** or ***“Does the size of medication dosage impact the time of recovery?”*** and so on. And on the way we come across different types of data, that can be most commonly categorical or continuous. We often have different purposes like we may want to compare or relate i.e find differences or correlations. 

Now analysis of a given data for a use case is very important, to find out what the data want to interpret. And to find out how we can leverage the data interpretations, we use ***hypothesis testing***.

It is based on what we may assume about our features and how well our data as evidence supports it by performing certain fine statistical steps.
<br>
So, basically, we can chalk out 4 simple steps to answer such questions on inter-relations or intra-relations between our independent population and with dependent or target variables.

- Choose an assumption i.e our Null Hypothesis(H<sub>o</sub>)
- Collect the data
- Perform a relevant testing
- Analyze if Ho is true or H1(alternate hypothesis) is true
- This is based on the evaluation of two mutually exclusive statements (only one of the two statements can hold good at a time) on a population using sample data.

Now, what are the tests we perform?

Well, that depends on the use-case, the purpose of testing, and the dataset itself.
Some popular hypothesis testing involves :
- ***T-test***
- ***Chi-Square test***
- ***Anova***
- ***Z-test***

Generally, we use perform tests as follows:

- One sample proportion test (for one categorical feature)
- Chi-square test (two categoraical feat)
- T-test (1 continuous feature) / (1 categorical and 2 continuous features)
- Correlation (2 continous features)
- Anova test (3 or more categorical and 3 or more continuous features)


## ***📌Why we need ANOVA?***
What if we want to test for multiple populations (groups or predictors or independent features) at once? Well, we can take all combinations of n features two at a time, i.e total <sup>n</sup>C<sub>2</sub> combinations, thereby performing the hypothesis testing for <sup>n</sup>C<sub>2</sub> times. But each test is also associated with an alpha value, that is the probability of making a Type 1 error, so with each test, we will eventually increase the error chances.

So, that is where ***ANOVA*** comes in when we need to compare between multiple groups to study its influence on our dependent variable and can find the significant predictors out of all the possible features in our dataset.

## ***📌What is ANOVA?***
***Analysis of Variance (ANOVA)*** is a statistical technique, commonly used to study differences between three or more group means. ANOVA test is centered on the different sources of variation in a typical variable. ANOVA in R primarily provides evidence of the existence of the mean equality between the groups. This statistical method is an extension of the t-test. It is used in a situation where the factor variable has more than one group
Analysis of such kinds of dependencies using statistics of variance is called ***ANOVA***.
 
Now, variance can be of two types:
- The variance within the groups 
- The variance between the groups

If the variance within the group i.e the error value is much higher than the variance between groups, simply due to different records or evidence we have in our data, we can accept the null hypothesis to be true. But, if there is not a lot of variance within each group but there is a lot of difference between each group, then in that case we can reject the null hypothesis and take up the alternative hypothesis to be true.


So clearly,
- The Anova technique attempts to break down the total variance into possible causes, among the features or population being studied.
- Then, interpret if the feature is a significantly different populated group across multiple features we have or perform hypothsis testing.

## ***📌One-way Anova***
To find if the data comes from the same population across different categories of classes, we can perform a one-way analysis of variance (one-way ANOVA). This test, like any other statistical test, gives evidence of whether the H0 hypothesis can be accepted or rejected.

Hypothesis in ***one-way ANOVA*** test:
- H<sub>o</sub>: The means between groups are identical
- H<sub>1</sub>: At least, the mean of one group is different

In other words, the H<sub>o</sub> hypothesis implies that there is not enough evidence to prove the mean of the groups(factors) is different from another.
This test is similar to the t-test, although the ANOVA test is recommended in situations with more than 2 groups. Except that, the ***t-test*** and ***ANOVA*** provide similar results.

## ***📌Assumptions for one-way ANOVA***
We assume that each factor is randomly sampled, independent, and comes from a normally distributed population with unknown but equal variances.

## ***📌Interpreting the ANOVA test***
The [***F-statistic/F-Score***](https://en.wikipedia.org/wiki/F-distribution) is mainly used to test if the data are from significantly different populations, i.e., different sample means.

To compute the F-statistic, we need to divide the between-group variance over the within-group variance, or

> ***F= (between-group variance)/(within-group variance)***
 
And larger the ratio, the more likely it is that the groups have different means, so we can reject the H<sub>o</sub>.

The ***between-group variance*** reflects the differences between the groups inside all of the population. Look at the two graphs below to understand the concept of between-group variance. <br>

The image below shows the three distributions far apart, and none of them overlap. There is a high chance the difference between the total mean and the group's mean will be large. It leads to an increase of the F-test and tends in favor of the alternative hypothesis.

<img src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/Assets/ho.png" width=100%>


The ***within-group variance*** considers the difference between the groups. The variation comes from the individual observations; some points might be totally different than the group means. The within-group variability picks up this effect and refers to the sampling error. <br>
 
To understand visually the concept of within-group variability, we can analyze at the picture below:

<img src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/Assets/o.png" width=100%>

Here the within-spread of each sample is high and it is clear the individual variance is large. The F-test will decrease, meaning we tend to accept the null hypothesis


It is very intuitive to understand the ***F-statistic***. If the numerator increases, it means the between-group variability is high, and it is likely the groups in the sample are drawn from completely different distributions.
In other words, a low ***F-statistic indicates*** little or no significant difference between the group’s average.

In cases of similar within and b/w variance, calculate F score as: <br>
***F(b,w)***

where,
- b is degree of freedom for between-group variance
- w is degree of freedom for within-group variance

  Calculated as:
  
  b = number of groups - 1
  
  w = total number of observation - number of grps

Now, the ***p-value*** or ***the significance value*** is the threshold to the area to the right of the F statistic obtained from ANOVA. It is the probability of observing a result (F-critical) as big as the one which is obtained in the experiment, assuming the null hypothesis is true. Low p-values are indications of strong evidence against the null hypothesis.

<img src="https://github.com/TishaJhabak1014/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Statistics_for_Machine_Learning/Assets/p.png" width=100%>
 
## ***📌Two-way ANOVA : (Completely Randomized Block Design)***
It is similar to one-way ANOVA or completely randomized design, except that here it focuses on an extra variable called block variable, some unconsidered variable influencing our variable.

At times, there can be interactions and dependencies between the independent variables, in such cases, we use factorial randomized block design type of two-way ANOVA.

We can have effects across rows as,
- H<sub>o</sub>: Variable means are all equal   
- H<sub>1</sub>: At least one of the variable means is different from the others

And across columns,
- H<sub>o</sub>: Block means are all equal
- H<sub>1</sub>: At least one of the blocking means is different from the others



## ***Important terminologies*** : 
- ***Null Hypothesis:*** The mean for all three groups is the same
- ***Alternate Hypothesis:**** The complement of Ho
- ***Hypothesis Testing:*** Hypothesis testing is an act in statistics whereby we test an assumption regarding a population parameter in our data based on an evidence/test.
- ***Test***: An statistical technique to find out what is the likelihood of H1 to be true, considering Ho to be true.
- [***F- Score***](https://en.wikipedia.org/wiki/F-distribution): Ratio measuring the variation between sample means as compared against the variation within the samples. 

<hr>

***Refer to the [sample code](https://colab.research.google.com/drive/1VmLTpwDae4EHLiL1bCjzTtt-51QhJjod?usp=sharing) here to understand the implementation of one-way ANOVA for feature selection.***

***Visit [here](https://medium.datadriveninvestor.com/p-value-t-test-chi-square-test-anova-when-to-use-which-strategy-32907734aa0e) to find more.***
