## Poisson Distribution 
## [Click here to listen the audio](https://drive.google.com/file/d/1hbr8yvx4O6dL1IEbU58LjyJVhJhFn6MG/view?usp=sharing)

- The Poisson distribution is a discrete distribution that measures the probability of a given number of events happening in a specified time period. 
- In finance, the Poisson distribution could be used to model the arrival of new buy or sell orders entered into the market or the expected arrival of orders at specified trading venues or dark pools. 
- In these cases, the Poisson distribution is used to provide expectations surrounding confidence bounds around the expected order arrival rates. 
- Poisson distributions are very useful for smart order routers and algorithmic trading.

![image](https://user-images.githubusercontent.com/79050917/143804070-7d355dd6-ccfd-48dc-9352-08997c978084.png)

- The standard deviation is always equal to the square root of the mean
- The exact probability that a Poisson random variable X with mean μ is equal to a is given by the formula:

![image](https://user-images.githubusercontent.com/79050917/143803711-d8f3c453-e451-4f1c-8541-cda8caf65741.png)

- If the mean is large, then the Poisson distribution is approximately normal.

**The Poisson distribution for a variable λ is:**

![image](https://user-images.githubusercontent.com/79050917/143803781-cdb1149b-ea8e-4925-8c6a-0e3fc2204845.png)

**Poisson Regression:**
- The Poisson distribution is widely used as a model for count data. It is frequently appropriate when the counts are of events in specific regions of time or space. 
- Dependent variables that might be modeled using the Poisson regression would include the number of fatal auto accidents during a year at intersections as a function of lane width, number of service interruptions during a month for a network server as a function of usage, and number of fire ant colonies in an acre of land as a function of tree density.

![image](https://user-images.githubusercontent.com/79050917/143804042-6f16b7a2-dbbe-42cb-b9d1-7d657ed2adeb.png)

**Overview:**
- A Poisson distribution, named after French mathematician Siméon Denis Poisson, can be used to estimate how many times an event is likely to occur within "X" periods of time.
- Poisson distributions are used when the variable of interest is a discrete count variable.
- Many economic and financial data appear as count variables, such as how many times a person becomes unemployed in a given year, thus lending themselves to analysis with a Poisson distribution.
