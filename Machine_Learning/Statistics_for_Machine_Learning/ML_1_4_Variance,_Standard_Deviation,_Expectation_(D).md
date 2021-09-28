# ML-GWOC


## WHY is Variance , Standard Deviation and Expectation Needed for Machine Learning?

Fundamental statistics are useful tools in applied machine learning for a better understanding your data.
> They are also the tools that provide the foundation for more advanced linear algebra operations and machine learning methods, such as the covariance matrix and principal component analysis respectively. As such, it is important to have a strong grip on fundamental statistics in the context of linear algebra notation.

## VARIENCE
**WHAT IS VARIANCE?**

In statistics, variance refers to the spread of a data set. It’s a measurement used to identify how far each number in the data set is from the mean. 
A variance value of zero represents that all of the values within a data set are identical, while all variances that are not equal to zero will come in the form of positive numbers. A large variance means that the numbers in a set are far from the mean and each other. A small variance means that the numbers are closer together in value.

**How to Calculate Variance?**

Variance is calculated by taking the differences between each number in a data set and the mean, squaring those differences to give them positive value, and dividing the sum of the resulting squares by the number of values in the set.

The formula for variance is as follows:

<img src="https://user-images.githubusercontent.com/66825094/134767544-972d66ea-0b2d-4d85-a261-e0641d34ef56.png" width="200" height="100" />

**Advantage of Variance**

- it treats all deviations from the mean of the data set in the same way, regardless of direction. 
- This ensures that the squared deviations cannot sum to zero, which would result in giving the appearance that there was no variability in the data set at all.

**Disadvantage of Variance**

One of the most commonly discussed disadvantages of variance is that it gives added weight to numbers that are far from the mean, or outliers. Squaring these numbers can at times result in skewed interpretations of the data set as a whole.

## STANDARD DEVIATION

**WHAT IS STANDARD DEVIATION?**

Standard deviation is a measure that tells the dispersion of all possible values of a random variable X from its mean, and is calculated as the square root of variance. The notation of standard deviation of a random variable 𝑿 is 

<img src="https://user-images.githubusercontent.com/66825094/134767698-5342baa5-58fb-408f-86f4-500655234180.png" width="200" height="100" />

**How to Calculate Standard Deviation?**

First find mean.To find the mean, add up all the scores, then divide them by the number of scores.Then find each score’s deviation from the mean i.e.,subtract the mean from each score to get the deviations from the mean. Now square each deviation from the mean. Add up all of the squared deviations.Divide the sum of the squares by n – 1 (for a sample) or N (for a population) – this is the variance.To find the standard deviation, we take the square root of the variance.

**Advantage of Standard Deviation**

* It is rigidly defined and free from any ambiguity.
* Its calculation is based on all the observations of a series and it cannot be correctly calculated ignoring any item of a series.
* It strictly follows the algebraic principles, and it never ignores the + and – signs like the mean deviation.

**Disadvantage of Standard Deviation**

* Its calculation is difficult as it involves many mathematical models and processes.
* It is affected very much by the extreme values of a series in as much as the squares of deviations of big items proportionately bigger than the squares of the smaller items. 
* It cannot be used for comparing the dispersion of two, or more series given in different units.

## EXPECTATION

**WHAT IS EXPECTATION?**

The expected value OR Expectation of a random variable ‘𝑿’ is an average value of repetitions of the same experiment.The symbol 𝐸(𝑿) denotes the expected value of the random variable 𝑿 and, According to its definition, the equation of the expected value 𝐸(𝑿) is as

![image](https://user-images.githubusercontent.com/66825094/134767942-45453bc0-ecc9-4642-92c3-34b27398d3ce.png)

**How to Calculate expected value?**

To find the expected value, E(X), or mean μ of a discrete random variable X, simply multiply each value of the random variable by its probability and add the products. The formula is given as E(X)=μ=∑xP(x).

**Advantage of expected value**
* Takes uncertainty into account by considering the probability of each possible outcome and using this information to calculate an expected value.
* The information is reduced to a single number resulting in easier decisions. 
* Calculations are relatively simple.
 
**Disadvantage of expected value**

* The probabilities used are usually very subjective. 
* The EV is merely a weighted average and therefore has little meaning for a one­off project.
* The EV gives no indication of the dispersion of possible outcomes about the EV, i.e. the risk.
* The EV may not correspond to any of the actual possible outcomes.

***Resources*** 

1. [Medium](https://medium.com/jun-devpblog/prob-stats-3-expected-value-variance-and-standard-deviation-bce9303d8da8)
2. [Alchmer](https://www.alchemer.com/resources/blog/variance-covariance-correlation/#:~:text=In%20statistics%2C%20variance%20refers%20to,set%20is%20from%20the%20mean.&text=A%20large%20variance%20means%20that,are%20closer%20together%20in%20value)
3. Statistics book for Mchine Learning E book
