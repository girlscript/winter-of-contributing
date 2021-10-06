# PDF and CDF in Machine learning :[Link to video](https://drive.google.com/file/d/1Mj91cNigPu64w65YUpr68K-IGbrzEFmO/view?usp=sharing) #
Note : Detailed explanation about each of the following topics can be seen in the video link.
## content ##
1. Variables
2. Probability Mass Function (PMF)
3. Probability Density Function (PDF)
4. Cumulative Distribution Function (CDF)
5. Uses in data analysis
6. Implementation
7. Conclusion

### Variables ###
<b> Discrete variables </b> : Discrete variables can only take up countable values or simply put, a discrete variable is a variable whose value is obtained by counting. Examples include number of children, number of petals in a flower etc.<br>
<br>
<b> Continuous variables </b>: Continuous data is data that can take any value. It is not something that can be counted, for example area of a room, speed of wind etc.


### PMF ###
A probability mass function is a function that gives the probability that a discrete random variable is exactly equal to some value.
Graphically,<br> ![image](https://user-images.githubusercontent.com/66819114/135879670-a1622597-d2be-4ccf-b30a-d8127ca43689.png)

## PDF ##
A probability density function (PDF) is used to define the random variable's probability coming within a distinct range of values, as opposed to taking on any one value.
However, unlike a discrete random variable the probability of continuous variable cannot be specified directly; instead calculated as integral (area under the curve) of a small range.
Mathematically,<br> ![image](https://user-images.githubusercontent.com/66819114/135880811-6610c0e6-c85c-4ff6-bd3e-6292ba8035c1.png) <br>
Graphically, <br> ![image](https://user-images.githubusercontent.com/66819114/135881015-1c42507f-216b-4011-ac3d-435df7ec2204.png)

## CDF ##
What a cumulative distribution function tells is the probability that X will take a value less than or equal to x. <br>
Mathematically, given as  P(X <= x) <br>Grphically, <br> ![image](https://user-images.githubusercontent.com/66819114/135881481-97d5e7d4-4655-487e-aaa9-1dee6720510c.png)

## Use in Data analysis ##
Q. How can this information be used in data analysis?<br>
Answer: The amount of data points less or greater than a range or within a range gets clearer.<br><br>
For example, we need information about how many students can surpass the criteria of height more than 150cm. CFD will specify P(X<150)=0.6. This means that about 60% students fall short and the rest 40% have surpassed the criteria. <br><br>
Similarly, information about amount of students falling in the category of heights 140 to 160 can be found out using PDF. If it specifies that P(140<x<160)=0.3, we know that about 30% of students fall in our required category.<br><br>
This is how it can used in real world problems.

## Implementation ##
Head over to the .ipynb file in this folder for code snippets and in the video you will find the detailed explanation of its working.

## Conclusion and further study ##
In this tutorial we understood the uses, code implementation and mathematics behind Probability Density Function and Cumulative Distribution Function both theoretically and graphically.<br>
This was focused on normal distribution of data points however in further reading we can also explore about exponential distribution and pareto distribution as well, although the use and logic will be same, it will differ in graph structure.<br>
Another thing that can be exploerd from here are the functions in python that can help us get more direct/specific values or percentage about the amount of data points we require in certain range. One such function includes .ppf() which is Percent-Point Function and it returns a discrete value that is less than or equal to the given probability. <br>
Like so, there is a lot more that can be studied and explored from here once you get an idea about the basics of PDF and CDF.







