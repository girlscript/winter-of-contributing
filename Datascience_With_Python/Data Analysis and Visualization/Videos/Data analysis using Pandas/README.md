# Data analysis using Pandas

## VIDEO LINK: [Data analysis using Pandas](https://drive.google.com/file/d/1eHyMx9Ej1qqLB4YnfCebnpxHcxHQO8-L/view?usp=sharing)

Pandas is the most popular python library that is used for data analysis. It provides highly optimized performance with back-end source code is purely written in C or Python.

**We can analyze data in pandas with:**

1.	Series
2.	DataFrames

### Series:

Series is one dimensional(1-D) array defined in pandas that can be used to store any data type.

### **Code: Creating Series**

```
# Program to create series
  
# Import Panda Library
import pandas as pd  
  
# Create series with Data, and Index
a = pd.Series(Data, index = Index)  
```

Here, Data can be:

1.	A Scalar value which can be integerValue, string
2.	A Python Dictionary which can be Key, Value pair
3.	A Ndarray

Note: Index by default is from 0, 1, 2, …(n-1) where n is length of data.

### Code: When Data contains scalar values

```
# Program to Create series with scalar values 
  
# Numeric data
Data =[1, 3, 4, 5, 6, 2, 9]  
  
# Creating series with default index values
s = pd.Series(Data)    
  
# predefined index values
Index =['a', 'b', 'c', 'd', 'e', 'f', 'g'] 
  
# Creating series with predefined index values
si = pd.Series(Data, Index) 

```
### Output:

![image](https://user-images.githubusercontent.com/63282184/139567780-9e19c508-6676-40b3-b007-c6a2adac6dc1.png)

Scalar Data with default Index

![image](https://user-images.githubusercontent.com/63282184/139567787-60489f33-ccfa-4889-92e3-9f5d84d61b1c.png)

Scalar Data with Index

### Code : When Data contains Dictionary

```
# Program to Create Dictionary series
dictionary ={'a':1, 'b':2, 'c':3, 'd':4, 'e':5} 
  
# Creating series of Dictionary type
sd = pd.Series(dictionary) 

```

### Output:

![image](https://user-images.githubusercontent.com/63282184/139567823-2233cd43-5449-4980-a76d-ddddcf83aa58.png)

 
Dictionary type data


### Code: When Data contains Ndarray
```
# Program to Create ndarray series
  
# Defining 2darray
Data =[[2, 3, 4], [5, 6, 7]]  
  
# Creating series of 2darray
snd = pd.Series(Data)    

```

Output:

![image](https://user-images.githubusercontent.com/63282184/139567861-10c88ea9-42a1-45a1-9e64-a3196d220c79.png)
 
Data as Ndarray


## DataFrames:
DataFrames is two-dimensional(2-D) data structure defined in pandas which consists of rows and columns.

### Code: Creation of DataFrame
```
# Program to Create DataFrame
  
# Import Library
import pandas as pd   
  
# Create DataFrame with Data
a = pd.DataFrame(Data)  
```

**Here, Data can be:**

1.	One or more dictionaries
2.	One or more Series
3.	2D-numpy Ndarray
 
### Code: When Data is Dictionaries
```
# Program to Create Data Frame with two dictionaries
  
# Define Dictionary 1
dict1 ={'a':1, 'b':2, 'c':3, 'd':4}   
  
# Define Dictionary 2     
dict2 ={'a':5, 'b':6, 'c':7, 'd':8, 'e':9} 
  
# Define Data with dict1 and dict2
Data = {'first':dict1, 'second':dict2} 
  
# Create DataFrame 
df = pd.DataFrame(Data)  
```

### Output:

![image](https://user-images.githubusercontent.com/63282184/139567950-06b77c61-afdd-4038-9006-567c46eceb6f.png)

DataFrame with two dictionaries

### Code: When Data is Series
```
# Program to create Dataframe of three series 
import pandas as pd
  
# Define series 1
s1 = pd.Series([1, 3, 4, 5, 6, 2, 9])   
  
# Define series 2       
s2 = pd.Series([1.1, 3.5, 4.7, 5.8, 2.9, 9.3]) 
  
# Define series 3
s3 = pd.Series(['a', 'b', 'c', 'd', 'e'])     
  
# Define Data
Data ={'first':s1, 'second':s2, 'third':s3} 
  
# Create DataFrame
dfseries = pd.DataFrame(Data)              
```

### Output:

![image](https://user-images.githubusercontent.com/63282184/139567965-cdd0e684-fa10-4855-8e0e-b5828e2d08da.png)

DataFrame with three series

### Code: When Data is 2D-numpy ndarray

Note: One constraint has to be maintained while creating DataFrame of 2D arrays – Dimensions of 2D array must be same.
```
# Program to create DataFrame from 2D array
  
# Import Library
import pandas as pd 
  
# Define 2d array 1
d1 =[[2, 3, 4], [5, 6, 7]] 
  
# Define 2d array 2
d2 =[[2, 4, 8], [1, 3, 9]] 
  
# Define Data
Data ={'first': d1, 'second': d2}  
  
# Create DataFrame
df2d = pd.DataFrame(Data)    
```

### Output:

![image](https://user-images.githubusercontent.com/63282184/139567998-d6c87a71-8518-497a-8f38-1e14f27f2167.png)

DataFrame with 2d ndarray


## Advantages of Using Pandas

- It can present data in a way that is suitable for data analysis via its Series and DataFrame data structures. 
- The package contains multiple methods for convenient data filtering. 
- Pandas has a variety of utilities to perform Input/Output operations in a seamless manner.


## Cons of the Pandas Library:

1. A complex syntax which is not always in line with Python
2. Learning curve
3. Poor documentation
4. Poor 3D matrix compatibility
