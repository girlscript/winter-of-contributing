# **Probabilistic Measures and Theorems**

<h2> What is Probability? </h2>


<p> <b>Probability</b> means how likely an event is about to occur or the chance of the occurrence of an event. </p> 



<h5> <i>The Formula is -></i>  </h5>

<img src="https://cdn1.byjus.com/wp-content/uploads/2018/11/formulas/2016/04/07181418/12.jpg">



Example - The probability of getting heads on flipped coin is - 

<i> P(H) = Outcomes of heads/Total outcomes = 1/2 </i>

<h2> Important Definitions - </h2>



> <b>Sample Space</b> - The set of all the possible outcomes to occur in any trial.

> <b>Event</b> - It is a single outcome of an experiment.


> <b>Outcome</b> - Possible result of a trial/experiment.


> <b>Impossible Event</b> - The event cannot happen


> <b>Experiment or Trial</b> - A series of actions where the outcomes are always uncertain.


<h2>Conditional Probability </h2>

<p><b>Conditional probability</b> is the probability of an event occurring provided another event has already occurred.</p>

<i>The formula of conditional probability -></i>

<img src="https://cdn.kastatic.org/googleusercontent/7wjRBuY3NpLE_lQiypt1E2yIQBxqenT6L92UX22pn5hl5IRNAiRj97tLoWjzU2fJkbzJe_RtZ_kFu9g6gEa156Ov">

<p>The students of a class have given two tests of the subject mathematics. In the first test, 60% of the students pass while only 40% of the students passed both the tests. What percentage of students who passed the first test, cleared the second test? Let's look at the following code to find out... </p>

```
# P(A) = People who passed first test
# P(B) = people who passed second test
# P(A and B) = people who passed both tests

p_of_A = 0.6
p_of_A_and_B = 0.4

p_of_B_given_A_had_occured = (p_of_A_and_B/p_of_A)

print("Percentage of students who passed first test also cleared second test - {0}%".format(p_of_B_given_A_had_occured*100) )
```
<h2>Bayes’ Theorem </h2>

<p><b>Bayes’ Theorem</b>  is a very important statistical concept used in many industries such as healthcare and finance. The formula of conditional probability which we have done above has also been derived from this theorem.

It is used to calculate the probability of a hypothesis based on the probabilities of various data provided in the hypothesis.</p>

<i>The formula for Bayes’ theorem is -></i>

<img src="https://www.gstatic.com/education/formulas2/355397047/en/bayes__theorem.svg">


P(A|B)	=	probability of A given B is true
<br>
P(B|A)	=	probability of B given A is true
<br>
P(A), P(B)	=	the independent probabilities of A and B 


For example - Let’s assume there is an HIV test that can identify HIV+ positive patients accurately 99% of the time, and also accurately has a negative result for 99% of HIV negative people. Here, only 0.3% of the overall population is HIV positive.
<br>
Let's look at the following code to understand -

```
# P(A) = is HIV +ve
# P(B) = is tested HIV +ve
# P(B) = (Probability of testing +ve when actually +ve) + (Probability of testing +ve when actually -ve) 

P_of_A = 0.003
P_of_B_given_A = 0.99


P_of_B = (P_of_A * P_of_B_given_A) + ((1-P_of_A) * (1-P_of_B_given_A))

P_of_A_given_B = (P_of_A * P_of_B_given_A)/P_of_B

print("Chances of Someone being HIV +ve given that they tested +ve are {0}%".format(P_of_A_given_B*100))
```

<h2>Probability Distribution </h2>

<p>A <b>Probability Distribution</b> is a statistical function that describes all the possible values and likelihoods that a random variable can take within a given range. This range will be bounded between the minimum and maximum possible values, but precisely where the possible value is likely to be plotted on the probability distribution depends on a number of factors. These factors include the distribution's mean (average), standard deviation, skewness, and kurtosis.</p>
<br>
<p> The most common probability distribution is the normal distribution, or "bell curve," although several distributions exist that are commonly used. <br> Typically, the data generating process of some phenomenon will dictate its probability distribution. This process is called the probability density function. <br> A probability distribution depicts the expected outcomes of possible values for a given data generating process. </p>

<h2>Types of Probability Distributions ▶ </h2>

<h5><i> Look up the Plots and code outputs in the Jupiter Notebook attached</i> </h5>

<h3>Bernoulli Distribution </h3>
<p>The Bernoulli distribution is one of the easiest distributions to understand and can be used as a starting point to derive more complex distributions.

This distribution has only two possible outcomes and a single trial.

A simple example can be a single toss of a biased/unbiased coin. In this example, the probability that the outcome might be heads can be considered equal to p and (1 - p) for tails </p>

<h3>Uniform Distribution </h3>
<p>The Uniform Distribution can be easily derived from the Bernoulli Distribution. In this case, a possibly unlimited number of outcomes are allowed and all the events hold the same probability to take place.

As an example, imagine the roll of a fair dice. In this case, there are multiple possible events with each of them having the same probability to happen. </p>

<h3>Binomial Distribution </h3>
<p>The Binomial Distribution can instead be thought as the sum of outcomes of an event following a Bernoulli distribution. The Binomial Distribution is therefore used in binary outcome events and the probability of success and failure is the same in all the successive trials. This distribution takes two parameters as inputs: the number of times an event takes place and the probability assigned to one of the two classes.

A simple example of a Binomial Distribution in action can be the toss of a biased/unbiased coin repeated a certain amount of times. </p>

The main characteristics of a Binomial Distribution are:


*   Given multiple trials, each of them is independent of each other (the outcome of one trial doesn’t affect another one).
*   Each trial can lead to just two possible results (eg. winning or losing), which have probabilities p and (1 - p).

<h3>Normal Distribution </h3>
<p>The Normal Distribution is one of the most used distributions in Data Science. Many common phenomena that take place in our daily life follows Normal Distributions such as: the income distribution in the economy, students average reports, the average height in populations, etc.In addition to this, the sum of small random variables also turns out to usually follow a normal distribution (by Central Limit Theorem). </p>

<h3>Poisson Distribution </h3>
<p>Poisson Distributions are commonly used to find the probability that an event might happen or not knowing how often it usually occurs. Additionally, Poisson Distributions can also be used to predict how many times an event might occur in a given time period.

Poisson Distributions are for example frequently used by insurance companies to conduct risk analysis (eg. predict the number of car crash accidents within a predefined time span) to decide car insurance pricing. </p>

The main characteristics which describe Poisson Processes are:


*   The events are independent of each other
*   An event can take place any number of times
*  Two events can’t take place simultaneously.

<h3>Exponential Distribution </h3>
<p> the Exponential Distribution is used to model the time taken between the occurrence of different events. A
common application of Exponential distributions is survival analysis (eg. expected life of a device/machine).

Exponential distributions are regulated by a parameter λ. The greater the value of λ and the faster the exponential curve is going to decade. </p>


<h2>Conclusion -</h2>
<p>In this tutorial we have learned the basics of probability
 </p>

*   Various terms and definitions related to Probability, Conditional Probabilty, Bayes' Theorem.
*   Probability distributions that include : Bernoulli Distribution, Uniform Distribution, Binomial Distribution, Normal Distribution, Poisson Distribution, Exponential Distribution.


<h2>References -  </h2>


*   [KDnuggest Probability Distributions](https://www.kdnuggets.com/2020/02/probability-distributions-data-science.html)
*   [Probability and Statistics for Data Science](https://towardsdatascience.com/probability-and-statistics-for-data-science-part-1-3eed6051c40d)
*  [Basics of Probability for Data Science](https://www.analyticsvidhya.com/blog/2017/02/basic-probability-data-science-with-examples/)
