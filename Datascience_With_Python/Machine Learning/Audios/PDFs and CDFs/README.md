#  PDFs and CDFs in Machine Learning

# Introduction
PDF (Probablity Density Function) and CDF (Cumulative Distribution Function) are commonly used techniques in the Exploratory data analysis. They are important statistical inference because of finding probalitis distribution between variables.

# Concept of Random Variable
A random variable is a numerical description of the result of a statistical experiment.So, we can say it is a mapping that assigns a real number
to each outcome in a probability space. Rndom variable can be two types:
- Continuous Random Variable
- Discrete Random Variable

A random number can be called discrete when it assumes a value in a finite number of set and if it describes an interval then its continuous. 

For example,, a random variable representing the number of cellphones sold at a particular dealership on one day would be discrete, while a random variable representing the direction of an airplane  would be continuous.

# Probability Density Function (PDF)

- PDF is used to specify the probability of the random variable in a particular range of values.
- The probability density function has nonnegative value
- The integral over the entire space is equal to 1 that means for a random value (X) it will take same value as X.
- PDFs are plotted on a graph typically resembling a bell curve, with the probability of the outcomes lying below the curve.


<img src="https://github.com/ron352/gs-/blob/main/pdf1.PNG">

# Cumulative Distribution Function (CDF)

- Continuous statistical feauture
- CDF of a variable X is  a representation of the probability that of a ranom value (X) which will take a value less than or equal to X.
- It has monotonic increasing that means the probability will always increase.

<img src="https://github.com/ron352/gs-/blob/main/cdf1.PNG">

# PDF vs CDF
 Here, PDF is shaped as a parabola, whereas the CDF is a non-decreasing slope because CDF CDFs are monotonic increasing. As PDF focued on one certain value , CDF is continously updating value with its lesser or equal values.
 

<img src="https://github.com/ron352/gs-/blob/main/pdf%20vs%20cdf.png">

# Applications
- They are implemented in machine learning tools 
- PDFs can be used to find the potential risk/reward of a particular security or fund in a portfolio.
- CDF is always clear and unique for data analysis
- CDF has more robusting features against “manipulation” and misinterpretated data.

# References
1. https://cseweb.ucsd.edu/classes/sp12/cse151-a/lecture3-final.pdf
2. https://towardsdatascience.com/what-is-a-cumulative-distribution-function-2e0540ec2a60
3. https://www.andata.at/en/software-blog-reader/why-we-love-the-cdf-and-do-not-like-histograms-that-much.html
4. https://www.geeksforgeeks.org/how-to-calculate-and-plot-a-cumulative-distribution-function-with-matplotlib-in-python/

# Implementation
<img src="https://github.com/ron352/gs-/blob/main/code1.PNG">
<img src="https://github.com/ron352/gs-/blob/main/code2.PNG">


# Audio Content
The whole BIRCH algorithm is described in an audio. The contents are: 
-  Random Variable
-  Probability Density Function (PDF)
-  Cumulative Distribution Function (CDF)
-  Differences
-  Applications
-  Implementation explain


## Audio Link: 
https://drive.google.com/file/d/1PkQfCeh7Jj-ca_VKxi-IkuiE8g3sGwoe/view?usp=sharing


Thank you.
