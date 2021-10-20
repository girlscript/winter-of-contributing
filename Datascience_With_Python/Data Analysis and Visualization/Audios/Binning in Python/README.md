# **Binning in Python**

## [Click to listen to the audio](https://drive.google.com/file/d/19BiiJ9R8sAFmtfPQ1UytS61Rb-Gc0rFL/view?usp=sharing) 

## **Outline**
+ Introduction
+ What is Binning?
+ Purpose of Binning
+ Types of Binning with Example
+ Advantages of Binning
+ Drawbacks of Binning
+ Summary
+ References

## **Introduction**

Binning is a technique for data smoothing. Data smoothing is employed to remove noise from data. 
There are three techniques for data smoothing:
+ binning
+ regression
+ outlier analysis

Here, we are going to discuss about Binning in brief.

## **What is Binning?**

Data binning, also known variously as bucketing, discretization, categorization, or quantization, is a way to simplify and compress a column of data, by reducing the number of possible values or levels represented in the data.

It is a data pre-processing technique used to reduce the effects of minor observation errors. The original data values which fall into a given small interval, a bin, are replaced by a value representative of that interval, often the central value.

Two approaches can be followed -
+ the first approach converts numeric data into categorical data
+ the second approach performs data sampling, by reducing the number of samples


## **Purpose of Binning**

The purpose of binning is to analyze the frequency of quantitative data grouped into categories that cover a range of possible values. 
A useful example is grouping quiz scores with a maximum score of 40 points with 10-point bins. The first bin contains scores​ 0-9, the second bin contains scores 10-19, and so on.

Data binning (or bucketing) groups data in bins (or buckets), in the sense that it replaces values contained into a small interval with a single representative value for that interval. Sometimes binning improves accuracy in predictive models.




## **Types of Binning with Example**

There are three approaches to perform smoothing –

+ **Smoothing by bin means** : In smoothing by bin means, each value in a bin is replaced by the mean value of the bin.

+ **Smoothing by bin median** : In this method each bin value is replaced by its bin median value.

+ **Smoothing by bin boundary** : In smoothing by bin boundaries, the minimum and maximum values in a given bin are identified as the bin boundaries. Each bin value is then replaced by the closest boundary value.

 **Example**
Let us take an example -

Suppose that we have a set of following values: [4, 8, 15, 21, 21, 24, 25, 28, 34]

We will divide this dataset into sets of equal frequency.

Bin1: 4, 8, 15

Bin2: 21, 21, 24

Bin3: 25, 28, 34

The three ways of binning the values are-

+ #### Smoothing by bin means

Mean of 4, 8, 15 = 9

Mean of 21, 21, 24 = 22

Mean of 25, 28, 34 = 29

Bin1: 9, 9, 9

Bin2: 22, 22, 22

Bin3: 29, 29, 29

+ #### Smoothing by bin medians

Median of 4, 8, 15 = 8

Median of 21, 21, 24 = 21

Median of 25, 28, 34 = 28

Bin1: 8, 8, 8

Bin2: 21, 21, 21

Bin3: 28, 28, 28

+ #### Smoothing by bin boundaries

Bin1: 4, 4, 15

Bin2: 21, 21, 24

Bin3: 25, 25, 34

+ #### Others
**Binning a set of values using Pandas**

![Binning](https://cdn-images-1.medium.com/max/1000/1*RFYo6GWG-EzxBIo_-DewJQ.png)



## **Advantages of Binning**

+ Binning may improve accuracy of the predictive models by reducing the noise or non-linearity.

+ Binning allows easy identification of outliers, invalid and missing values of numerical variables.

+ It helps in getting accurate results from the data.

+ Data binning is a type of data preprocessing, a mechanism which includes also dealing with missing values, formatting, normalization and standardization.

## **Drawbacks of Binning**

+ It doesn’t always provide a clear explanation of the patterns among the data.

+ It is possible that certain data points being ignored by focusing the other data points.


## **Summary**

In this tutorial, I have illustrated what data binning is, which is a technique for data preprocessing.Data binning is very useful when discretization is needed.
Also, discussed about its purpose, ways of binning, its advantages and disadvantages.


## **References**
+ https://www.geeksforgeeks.org/python-binning-method-for-data-smoothing/
+ https://www.asquero.com/article/removing-noise-from-the-data-using-the-binning-technique-pandas-python-programming/
+ https://towardsdatascience.com/data-preprocessing-with-python-pandas-part-5-binning-c5bd5fd1b950
