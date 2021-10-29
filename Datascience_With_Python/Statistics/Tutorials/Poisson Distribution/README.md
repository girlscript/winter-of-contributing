# Data Science with Python: Poisson Distribution #6361

The <b>Poisson distribution</b> is a discrete probability distribution for the counts of events that occur randomly in a given interval of time (or space). In other words, we can say that a Poisson distribution measures how many times an event is likely to occur within “t” period of time. Poisson distribution is named after the French mathematician <b>Denis Poisson</b>. It is a limiting process of the <b>binomial distribution</b>. 

Let X = The number of events in a given interval.
Then, if the mean number of events per interval is λ
In a given interval the probability of observing x events is given by

<img src = "https://anomaly.io/wp-content/uploads/2015/06/poisson-formula.png" width="200"/>


##  Poisson Distribution: a Limiting Case of the Binomial Distribution

The number of successes in a Bernoullian sequence of <b>n</b> trials with probability of success <b>p</b>, where n is very large and p is very small such that λ = np is of moderate magnitude, has an approximate Poisson Distribution having parameter λ.

That does not mean that the Poisson Distribution only occurrs as an approximation to the binomial distribution. It may also arise itself in connection with various practical problems.

## Properties Of Poisson Distribution:

1. The variance of a Poisson distributed random variable is also the same as the mean, λ.
2. The number of trials in a Poisson distribution can be extremely large. Thus, it can be close to infinity.
3. The constant probability of success in each trial is minimal. Thus, it is close to zero.
4. Poisson Distribution is also known as uni-parametric distribution, because Poisson distribution is characterised by only one parameter (λ).
5. Poisson distribution can be unimodal or bi-modal, depending on the rate parameter (λ). 
   If it is a non-integer, then the distribution will be uni-modal, 
   If it is an integer, then it will be bi-modal.


## Mean & Variance of a Poisson Distribution :

In Poisson distribution, the mean is represented as E(X) = λ.

For a Poisson Distribution, the mean and the variance are equal.
It means that E(X) = V(X)
where,V(X) is the variance.

Therefore, the expected value (mean) and the variance of the Poisson distribution is equal to λ.


## Applications of Poisson Distribution :

There are many applications of the Poisson distribution in many fields -

1. We can use Poisson Distributon to model the number of births, deaths, marriages, divorces, homicides and suicides per year.
2. Some systems use Poisson Distribution to model the number of telephone calls arriving in those systems.
3. Website hosting companies use the Poisson distribution to model the number of expected visitors per day those websites will receive.
4. The number of jumps in a stock price in a given time interval may be modelled as a Poisson Distribution.
5. We can model the number of typographical errors found in a book as a Poisson Distribution.


## Libraries Used for Implementing Poisson distribution :

1. scipy.stats
2. numpy
3. matplotlib.pyplot
4. seaborn

## References :

1. [Poisson distribution](https://en.wikipedia.org/wiki/Poisson_distribution)
2. [poisson distribution and poisson process](https://towardsdatascience.com/the-poisson-distribution-and-poisson-process-explained-4e2cb17d459)
