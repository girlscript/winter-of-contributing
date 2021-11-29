# Poisson Distribution

## Video Link : [Poisson Distribution](https://drive.google.com/file/d/1g8sahWC5HFbbCUrmNjpPnWIYul_1OMkC/view?usp=sharing)

- In probability theory and statistics, the Poisson distribution (/ˈpwɑːsɒn/; French pronunciation: ​[pwasɔ̃]), named after French mathematician Siméon Denis Poisson, is a discrete probability distribution that expresses the probability of a given number of events occurring in a fixed interval of time or space if these events occur with a known constant mean rate and independently of the time since the last event.
-  The Poisson distribution can also be used for the number of events in other specified intervals such as distance, area or volume.

- For instance, a call center receives an average of 180 calls per hour, 24 hours a day. The calls are independent; receiving one does not change the probability of when the next one will arrive. 
- The number of calls received during any minute has a Poisson probability distribution: the most likely numbers are 2 and 3 but 1 and 4 are also likely and there is a small probability of it being as low as zero and a very small probability it could be 10. Another example is the number of decay events that occur from a radioactive source during a defined observation period.



Let X = The number of events in a given interval.
Then, if the mean number of events per interval is λ
In a given interval the probability of observing x events is given by

<img src = "https://anomaly.io/wp-content/uploads/2015/06/poisson-formula.png" width="200"/>


##  Poisson Distribution: a Limiting Case of the Binomial Distribution

<img src = "https://www.davidyding.com/navPages/latex/derivation.png" width ="800"/>
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


## Conditions for Poisson Distribution:

1. An event can occur any number of times during a time period.
2. Events should be independent. In other words, occurrence of one event, should not affect the probability of another event occurring in the same time period.
3. The rate of occurrence (λ) will be constant; that is, the rate should not change over the time.
4. The probability of an event occurring is proportional to the length of the time period.


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



