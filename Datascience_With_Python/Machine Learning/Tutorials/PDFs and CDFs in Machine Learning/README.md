# Data Science with Python : PDFs and CDFs in ML #3520

PDF (Probability Density Function) and CDF (Cumulative Distribution Function) are two commonly used tools for Exploratory data analysis(EDA) to find the probabilistic relation between the variables. Before going into the topic we have to understand Random variables.

## Random Variables :

In probability, a random variable is a real-valued function whose domain is the outcomes of any random experiment. Like you are rolling a dice or flipping a coin ,these are random process and random variables are the ways to map the outcomes of these processes to numbers. These variables are tend to be denoted by capital letters. The two types of Random variables are -

<b>Discrete Random Variables</b> : they take on separate or distinct values. (Example: X is equal to 1 if rolling a dice results in even numner and 0 if it's an odd number.)

<b>Continuous Random Variables</b> : they can take on any values in a range or interval. (For an instance Y is equal to the height of any random animal in the universe.)

## Introduction to PDF :

<b>Probability Density Function :</b> The probability density function(PDF) is the probability of the value of a continuous random variable falling within a range or an interval. In case of discrete random variables probability mass function(PMF) can be used.

### Properties of PDF :

1. If we want to find the probability for a continuous random variable to take some value between certain limits, say a and b, then the PDF is equal to the area under its curve and the X-axis within the lower limit (a) and upper limit (b). 

2. PDF can only be non-negative real numbers for all the possible values.

3. The density function curve is continuous for all over the given range.

4. The total area between the density curve and X-axis is equal to 1.

## Introduction to CDF :

<b>Cumulative Distribution Function :</b> The meaning of Cumulate is to gather or sum up. CDFs do the same. CDF is the probability of a random variable X to take a value lesser than or equal to x. The best part is CDFs are defined in the same way for both discrete and continuous variables.

### Properties of CDF :

1. Every Cumulative Distribution Function is non decreasing and right continuous.
2. For a completely discrete random variable, the CDF  will be discontinuous at some points.
3. The cumulative distribution function ranges from 0 to 1.

## Applications of PDF and CDF :

1. Probability density functions and cumulative distribution functions are used in statistical analysis.
2. Using Cumulative Distribution Function we can find frequency of occurrences of any event.
3. We can use CDF to determine the likelihood that a random observation.

## References :

1. [pdf pmf and cdf in machine learning](https://medium.com/analytics-vidhya/pdf-pmf-and-cdf-in-machine-learning-225b41242abe)
2. [Cumulative distribution function](https://en.wikipedia.org/wiki/Cumulative_distribution_function)
