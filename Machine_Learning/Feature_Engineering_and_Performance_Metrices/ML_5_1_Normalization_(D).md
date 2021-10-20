## Normalization
---
### Introduction and Working
1) Normalization is a popular and frequently used technique used to prepare data for further analysis.<br>
2) It is very useful for data pre-processing especially when the datasets are large/ complex with different datapoints.
3) When there is a huge difference in the value range between two parameters in the dataset, Normalization is used to 'scale' them so that they can be comparable to each other or be on an equal range.<br>
4) For example: If the data set contains parameters like salary of a person and the age of a person, we can understand that the values in the salary column could range from Rs. 15,000 to 1,00,000 or more whereas the values of age can only range from 22 to 75.<br>
There is a huge gap between the range values of two paramaters hence normalization is used to transform the columns to make the values of two different parameters scaled or comparable to each other.
### Techniques Used
There are three main ways/ methods by which we can apply the normalization technique-<br><br>
**1) Min-Max Normalization:** Here the new scaled parameter value is calculated using the formula-<br>
![minmax](https://user-images.githubusercontent.com/34717612/137886439-3bad2323-97b8-4fac-8d13-c135a0e443c8.png)<br>
Where- a) max(x) is the maximum values of x.<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;b) min(x) is the minimum value of x.<br>
It is also known as Rescaling.<br><br>
**2) Mean Normalization:** Here the new scaled parameter values is calculated using the formula-<br>
![Average](https://user-images.githubusercontent.com/34717612/137887733-8b74dc97-9594-4266-90d0-f3f1a974562d.png)<br>
Where- average(x) stores the value of the mean of all the observations of x.<br><br>
**3) Z-Score normalization:** Here the new scaled parameter values is calculated using the formula-<br><br>
![zscore](https://user-images.githubusercontent.com/34717612/137888052-35916639-501f-4d97-a61e-ff7b4969d19f.png)<br>
Where- a) µ stores the value of 'mean' of all observations<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;b) σ stores the calculated value of standard deviation.<br>
This method is also known as the standard score normalization.
### Sample Implementation
**1)**<br>
&emsp;&emsp;&emsp;import numpy as np<br>
&emsp;&emsp;&emsp;dataset= np.array([[0.08, 50.1], [0.12, 11.1722], [0.5379, 32.027], [0.3084, 17.784]])<br>
&emsp;&emsp;&emsp;print(dataset)<br><br>
**OUTPUT:**<br><br>
![image](https://user-images.githubusercontent.com/34717612/137917696-2491565a-24a2-420e-90a7-9a2e085f9143.png)<br><br>
a) Here we have created an array containing two columns with a huge range difference between them.<br>
b) Column 1 contains values in range 0-0.6, whereas Column 2 contains values in range 11-51.<br>
c) Hence we need to use normalization to 'scale' the values of column 2 to make it comparable to that of column 1.<br><br>
**2)**<br>
&emsp;&emsp;&emsp;x = dataset[:, 1]<br>
&emsp;&emsp;&emsp;dataset[:, 1] = (x - x.min()) / (x.max() - x.min())<br>
&emsp;&emsp;&emsp;print(dataset)<br><br>
**OUTPUT:**<br><br>
![image](https://user-images.githubusercontent.com/34717612/137919078-c7935a5d-5619-4572-85c4-846e0f5854f5.png)<br><br>
a) We have used Min-Max Normalization formula on column 2.<br>
b) Now both the colums have similar ranges of values.<br>
c) Column 1 contains values from 0-0.6 and Column 2 contains values from 0-1.
### Need for Normalization
1) It Improves model accuracy.
2) Very helpful when distribution data in the dataset does not follow Gaussian distribution.
3) Gives equal importance to variables present in the dataset and makes comparison/ analysis between them easier and efficient.
### References
1) https://towardsdatascience.com/data-normalization-in-machine-learning-395fdec69d02
