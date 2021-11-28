# Binning in Python

## VIDEO LINK : [Binning in Python](https://drive.google.com/file/d/16jmPQMVcPjSkXHqlZWSmLRE_rdtnhbJo/view?usp=sharing)

Data binning, bucketing is a data pre-processing method used to minimize the effects of observation errors. Binning is the process of transforming numerical variables into categorical counterparts. Binning improves accuracy of the predictive models by reducing the noise or non-linearity in the dataset. Finally, binning lets easy identification of outliers, invalid and missing values of numerical variables.
Binning is a quantization technique in Machine Learning to handle continuous variables. It is one of the important steps in Data Wrangling.

## There are two types of binning techniques: 

1. Fixed-Width Binning

2. Adaptive Binning


## 1. Fixed-Width Binning

We manually create fix width bins on the basis of some rules and domain knowledge.

age = [12, 15, 13, 78, 65, 42, 98, 24, 26, 38, 27, 32, 22, 45, 27]

Now, let’s create bins of fixed width (say 10):

bins = [0 {0-9}, 1 {10-19}, 2 {20-29}, 3 {30-39}, 4 {40-49}, 5 {50-59}, 6 {60-69}, 7 {70-79}, 8 {80-89}, 9 {90-99}]

After binning, our age variable looks like this:

age = [1, 1, 1, 7, 6, 4, 9, 2, 2, 3, 2, 3, 2, 4, 2]

In this way, all the 15 values will fit in above 10 ranges / bins. Think of a dataset containing thousands of values in the age column instead of just 15! How useful it would be in this case.

![image](https://user-images.githubusercontent.com/63282184/143523643-b1ab0bb2-d7d6-4e72-bc34-ec28ec633399.png)

## 2. Adaptive Binning

In Adaptive Binning, data distribution itself decides bin ranges for itself. No manual intervention is required. So, the bins which are created are uniform in terms of number of data points in it.

![image](https://user-images.githubusercontent.com/63282184/143523696-49852ee5-e232-45d5-96ef-e1f045e61730.png)


## Example code for binning 

```
import numpy as np
import math
from sklearn.datasets import load_iris
from sklearn import datasets, linear_model, metrics

# load iris data set
dataset = load_iris()
a = dataset.data
b = np.zeros(150)

# take 1st column among 4 column of data set
for i in range (150):
	b[i]=a[i,1]

b=np.sort(b) #sort the array

# create bins
bin1=np.zeros((30,5))
bin2=np.zeros((30,5))
bin3=np.zeros((30,5))

# Bin mean
for i in range (0,150,5):
	k=int(i/5)
	mean=(b[i] + b[i+1] + b[i+2] + b[i+3] + b[i+4])/5
	for j in range(5):
		bin1[k,j]=mean
print("Bin Mean: \n",bin1)
	
# Bin boundaries
for i in range (0,150,5):
	k=int(i/5)
	for j in range (5):
		if (b[i+j]-b[i]) < (b[i+4]-b[i+j]):
			bin2[k,j]=b[i]
		else:
			bin2[k,j]=b[i+4]	
print("Bin Boundaries: \n",bin2)

# Bin median
for i in range (0,150,5):
	k=int(i/5)
	for j in range (5):
		bin3[k,j]=b[i+2]
print("Bin Median: \n",bin3)



```

## Advantage of Binning: 

It finds a set of patterns in continuous variables which are easy to analyze and interpret

## Disadvantage of Binning: 

Binning leads to loss of information. The original data is converted into the bins.
