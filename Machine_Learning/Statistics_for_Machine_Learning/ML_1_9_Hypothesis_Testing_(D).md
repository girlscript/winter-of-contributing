**What is meant by hypothesis testing?**

Hypothesis testing is a statistical method which is used in making statistical decisions using experimental data. It is basically an assumption that we make about the population parameter.

- **Ex:**  Average number of students in a class are 40.

![image](https://user-images.githubusercontent.com/63282184/134289888-0c979c9b-2e3a-432c-8f3b-26343ae9e412.png)

**What is the use of Hypothesis testing?**

- Hypothesis testing is the process used to evaluate the strength of evidence from the sample and provides a framework for making determinations related to the population, that is, it provides a method for understanding how reliably one can extrapolate observed findings in a sample under study to the larger population from which the sample was drawn

**what are the basics of hypothesis?**

- The basic of hypothesis is normalisation and standard normalisation. All our hypothesis is revolving around basic of these 2 terms. let’s see these.

![image](https://user-images.githubusercontent.com/63282184/134290114-cb9716f9-e39f-4bf9-b64a-ab78ab99abdd.png)

In this picture we can see there are different normal curve all those normal curves can have different means and variances. 

![image](https://user-images.githubusercontent.com/63282184/134290136-747df722-854b-48e9-9aaa-8b6b0780847e.png)

In this image if you notice the graph is properly distributed and mean =0 and variance =1 always. concept of z-score comes in picture when we use standardised normal data.

**Now let us try to understand this two topics:**
1.	Normal distribution 
2.	Standardised normal distribution 

**1.Normal Distribution -**

- A variable is said to be normally distributed if its distribution has the shape of a normal curve — a special bell-shaped curve. … The graph of a normal distribution is called the normal curve.

**Properties of a normal curve:** 

1.	The mean, median, and mode are equal.

**Formula:**

![image](https://user-images.githubusercontent.com/63282184/134290278-e7c8e6c0-ed9a-4450-bb29-4909f2d47df4.png)


**2.Standardised Normal Distribution —**

- A standard normal distribution is a normal distribution with mean 0 and standard deviation 1.

**Formula:**

![image](https://user-images.githubusercontent.com/63282184/134290433-2105e0e2-2df6-4856-9850-db151bc8e1aa.png)

**Parameters of Hypothesis testing:**

1.	Null Hypothesis

2.	Alternative Hypothesis

**1. Null hypothesis:** In inferential statistics (make predictions (“inferences”) from that data.), the null hypothesis is a general statement or default position that there is no relationship between two measured phenomena, or no association among groups
- In other words, it is a basic assumption or made, based on the domain or problem knowledge.

- **Ex:** a company production is = 50 unit/per day etc.

**2. Alternative hypothesis:**
The alternative hypothesis is the hypothesis used in hypothesis testing that is contrary to the null hypothesis. It is usually taken to be that the observations are the result of a real effect (with some amount of chance variation superposed)

- **Ex:** A company production is! =50 unit/per day etc.

![image](https://user-images.githubusercontent.com/63282184/134290653-d0cd7bc7-9cfa-4ce1-9e9c-7f7a4cdbaa8d.png)

**Level of significance:** Refers to the degree of significance in which we accept or reject the null-hypothesis. 100% accuracy is not possible for accepting or rejecting a hypothesis, so we therefore select a level of significance that is usually 5%.
- This is normally denoted with alpha(maths symbol ) and generally it is 0.05 or 5% , which means your output should be 95% confident to give similar kind of result in each sample.

- **Type I error**: When we reject the null hypothesis, although that hypothesis was true. Type I error is denoted by alpha. In hypothesis testing, the normal curve that shows the critical region is called the alpha region

- **Type II errors:** When we accept the null hypothesis but it is false. Type II errors are denoted by beta. In Hypothesis testing, the normal curve that shows the acceptance region is called the beta region.

**One tailed test :-** 

- A test of a statistical hypothesis , where the region of rejection is on only one side of the sampling distribution , is called a one-tailed test.

- **Ex :-**

(1) a college has ≥ 4000 student

(2) data science ≤ 80% org adopted.

![image](https://user-images.githubusercontent.com/63282184/134290835-a07a878f-b867-4afd-a3ff-0f73a57acb95.png)

**Two-tailed test :-** 

- A two-tailed test is a statistical test in which the critical area of a distribution is two-sided and tests whether a sample is greater than or less than a certain range of values. If the sample being tested falls into either of the critical areas, the alternative hypothesis is accepted instead of the null hypothesis.

- **Ex :**

(1)a college != 4000 student

(2)data science != 80% org adopted

![image](https://user-images.githubusercontent.com/63282184/134290903-7f0ef93d-aedc-4573-bc2e-3a59582f83c9.png)


**P-value :**

- It is the probability of finding the observed, or more extreme, results when the null hypothesis (H 0) of a study question is true — the definition of ‘extreme’ depends on how the hypothesis is being tested.

- If your P value is less than the chosen significance level then you reject the null hypothesis 

- **Ex :** you have a coin and you don’t know whether that is fair or tricky so let’s decide null and alternate hypothesis

H0 : a coin is a fair coin.

H1 : a coin is a tricky coin. and alpha = 5% or 0.05

- Now let’s toss the coin and calculate p- value (probability value).

- Toss a coin 1st time and result is tail- P-value = 50% (as head and tail have equal probability)

- Toss a coin 2nd time and result is tail, now p-value = 50/2 = 25%

- and similarly, we Toss 6 consecutive time and got result as P-value = 1.5%

- but we set our significance level as 95% means 5% error rate we allow and here we see we are beyond that level i.e., our null- hypothesis does not hold good so we need to reject and propose that this coin is a tricky coin which is actually.

**Degree of freedom :-**

- Now imagine you’re not into hats. You’re into data analysis. You have a data set with 10 values. If you’re not estimating anything, each value can take on any number, right? Each value is completely free to vary. But suppose you want to test the population mean with a sample of 10 values, using a 1-sample t test. You now have a constraint — the estimation of the mean. What is that constraint, exactly? By definition of the mean, the following relationship must hold: The sum of all values in the data must equal n x means, where n is the number of values in the data set.

- So if a data set has 10 values, the sum of the 10 values must equal the mean x 10. If the mean of the 10 values is 3.5 (you could pick any number), this constraint requires that the sum of the 10 values must equal 10 x 3.5 = 35.
- With that constraint, the first value in the data set is free to vary. Whatever value it is, it’s still possible for the sum of all 10 numbers to have a value of 35. The second value is also free to vary, because whatever value you choose, it still allows for the possibility that the sum of all the values is 35.

**Now Let’s see some of widely used hypothesis testing type :-**
1.	**T Test**
2.	**Z Test**
3.	**F- Test**
4.	**ANOVA**
5.	**Chi-Square Test**

**1. T- TEST**

**A t-test is used to compare the mean of two given samples. **

- Like a z-test, a t-test also assumes a normal distribution of the sample. 
- A t-test is used when the population parameters (mean and standard deviation) are not known.

There are three versions of t-test

1. Independent samples t-test which compares mean for two groups
2. Paired sample t-test which compares means from the same group at different times
3. One sample t-test which tests the mean of a single group against a known mean.
The statistic for this hypothesis testing is called t-statistic, the score for which is calculated as

**t = (x1 — x2) / (σ / √n1 + σ / √n2),** where

x1 = mean of sample 1

x2 = mean of sample 2

n1 = size of sample 1

n2 = size of sample 2

![image](https://user-images.githubusercontent.com/63282184/134291349-a2983c36-32ef-4513-8d7f-959b59c595bd.png)

**2. Z-TEST**

- In a z-test, the sample is assumed to be normally distributed. 

- A z-score is calculated with population parameters such as “population mean” and “population standard deviation” and is used to validate a hypothesis that the sample drawn belongs to the same population.

- Null: Sample mean is same as the population mean

- Alternate: Sample mean is not same as the population mean

- The statistics used for this hypothesis testing is called z-statistic, the score for which is calculated as

![image](https://user-images.githubusercontent.com/63282184/134291457-2f5818d4-0c2b-43b5-be37-2b083b1a1f5a.png)


- If the test statistic is lower than the critical value, accept the hypothesis or else reject the hypothesis

You would use a Z test if:

•	Your sample size is greater than 30. Otherwise, use a t test.
•	Data points should be independent from each other. In other words, one data point isn’t related or doesn’t affect another data point.
•	Your data should be normally distributed. However, for large sample sizes (over 30) this doesn’t always matter.
•	Your data should be randomly selected from a population, where each item has an equal chance of being selected.
•	Sample sizes should be equal if at all possible.

**3. F-TEST**

- An “F Test” is a term for any test that uses the F-distribution. In most cases, F-Test, what people are actually talking about is The F-Test to Compare Two Variances. = -- - However, the f-statistic is used in a variety of tests including regression analysis, the Chow test and the Scheffe Test (a post-hoc ANOVA test).

General Steps for an F Test:

1.	Calculate the F value. The F Value is calculated using the formula F = (SSE1 — SSE2 / m) / SSE2 / n-k, where SSE = residual sum of squares, m = number of restrictions and k = number of independent variables.
2.	Find the F Statistic (the critical value for this test). The F statistic formula is:
F Statistic = variance of the group means / mean of the within group variances.
You can find the F Statistic in the F-Table.
3.	Support or Reject the Null Hypothesis.

**4. ANOVA**

- ANOVA, also known as analysis of variance, is used to compare multiple (three or more) samples with a single test.

There are 2 major flavors of ANOVA

1. One-way ANOVA: It is used to compare the difference between the three or more samples/groups of a single independent variable.
2. MANOVA: MANOVA allows us to test the effect of one or more independent variable on two or more dependent variables. In addition, MANOVA can also detect the difference in co-relation between dependent variables given the groups of independent variables.

The hypothesis being tested in ANOVA is

- Null: All pairs of samples are same i.e., all sample means are equal

- Alternate: At least one pair of samples is significantly different

The statistics used to measure the significance, in this case, is called F-statistics. The F value is calculated using the formula

**F= ((SSE1 — SSE2)/m)/ SSE2/n-k**, where

SSE = residual sum of squares

m = number of restrictions

k = number of independent variables

- There are multiple tools available such as SPSS, R packages, Excel etc. to carry out ANOVA on a given sample.

![image](https://user-images.githubusercontent.com/63282184/134293706-52f045d1-3b7e-473d-8d29-a314aa09d9cb.png)


**5. Chi-Square Test**

**Chi-square test is used to compare categorical variables**. There are two type of chi-square test

1. Goodness of fit test, which determines if a sample matches the population.
2. A chi-square fit test for two independent variables is used to compare two variables in a contingency table to check if the data fits.

a. A small chi-square value means that data fits
b. A high chi-square value means that data doesn’t fit.

The hypothesis being tested for chi-square is

- Null: Variable A and Variable B are independent

- Alternate: Variable A and Variable B are not independent.

The statistic used to measure significance, in this case, is called chi-square statistic. 

The formula used for calculating the statistic is

**Χ2 = Σ [ (Or,c — Er,c)2 / Er,c ]**

![image](https://user-images.githubusercontent.com/63282184/134293956-aa97827d-d343-4038-86dd-052027663020.png)







































































