## INTRODUCTION
Python NumPy is a Python module that deals with mathematical structures like arrays and matrices, as well as other complex mathematical functions. It is a very useful and powerful tool in Python primarily used in data science and analytics.

## INSTALLING NumPy
NumPy can be installed by using the command
` pip install numpy `
or 
` conda install numpy `
in your system’s terminal.
IDE’s like Anaconda have the NumPy library preinstalled as a built in package.

## IMPORTING NumPy
NumPy can be imported by writing the following code at the start of your file-
import numpy
In case of numpy and many other modules, it gets tedious to call a function using the entire name of the module. Thus, we use an alias or a nickname that we define while importing.
So instead of writing the previous code, it is preferred to write the following instead-
import numpy as np
Thus while calling functions of the NumPy modules, we would use np rather than numpy.

## NumPy ARRAYS
### CREATING A BASIC ARRAY:
Arrays are data structures whose elements are of the same data type. NumPy arrays are said to be ndarray objects.
NumPy can be used to form arrays from data structures like lists, tuples etc.
For example-

``` 
    list = [1, 2, 3, 4]
    print(list) 
```

The above code will give the output-

```
[1, 2, 3, 4]
```

If a is the name of variable storing the array, then-

```
a = np.array(list)
print(a)
print(type(a))
```

The above will give the output-

```
array([1, 2, 3, 4])

<class 'numpy.ndarray'>
```

Here, the question arises- Why use arrays over lists?
1.	NumPy provides arrays with many functions like mean, max, min etc. which makes analysis of large number of entries a lot easier. 
2.	NumPy arrays are processed much faster than lists.
3.	NumPy uses much less memory to store data and it provides a mechanism of specifying the data types.

### TYPES OF ARRAY:
Before exploring arrays and its functions, it is important to understand the types of arrays.
1.	1D Arrays: This consists of a single row of elements. It’s the most basic type of array. The example discussed in the earlier section is an example of 1D array.

![1dArray](https://github.com/mridu-pant/winter-of-contributing/blob/9f6caf5392dfd09f15ae50ab89d97f9902231b21/Python/Python_Numpy/images/python%20numpy%201d.jpg)

2.	2D Arrays: Arrays that consist of 1D arrays as elements are known as 2D arrays. Here, it can be seen that this type of array has a structure similar to matrices. 

![2DArray](https://github.com/mridu-pant/winter-of-contributing/blob/9f6caf5392dfd09f15ae50ab89d97f9902231b21/Python/Python_Numpy/images/python%20numpy%202d.jpg)

3.	3D Arrays: Arrays that have 2D arrays i.e matrices as its elements are called 3D arrays. 
If the structure of 1D arrays is linear and of 2D arrays is rectangular, then we can conclude that the structure of 3D arrays can be compared to rectangles stacked on top of each other.

![3DArray](https://github.com/mridu-pant/winter-of-contributing/blob/9f6caf5392dfd09f15ae50ab89d97f9902231b21/Python/Python_Numpy/images/python%20numpy%203d.jpg)

An array can be of even higher dimensions like 4D or 5D. However, defining dimensions in a manner similar to the above examples will get too complicated.
In order to create arrays of higher dimensions, we can use the argument ndmin.
Example-
For making a 6D array-

``` 
a = np.array([1, 2, 3], ndmin=6)
```

### ACCESSING ELEMENTS OF AN ARRAY-
Elements of an array can be accessed using square brackets.
NOTE- It is important to note that indexing starts from 0. Thus, in order to access the nth element, the number written in square brackets is n-1.

```
import numpy as np
a = np.array([1, 2, 3, 4])`
print(a[0])
```

Output-

```
1
```

In case of 2D arrays, if we imagine the structure to be similar to that of a table, then in order to obtain a single value, both the row and column must be specified.

```
import numpy as np
a = np.array([[1, 2, 3, 4], [5, 6, 7, 8])
print(a[0])
print(a[0, 1])
```

Output-

```
[1, 2, 3, 4]
2
```

Similarly for 3D arrays-

```
import numpy as np

a = np.array([[[1, 2, 3], [4, 5, 6]], [[7, 8, 9], [10, 11, 12]]])

print(a[0])

print(a[0, 1])

print(a[0, 1, 2])
```

Output-

```
[[1, 2, 3], [4, 5, 6]]

[4, 5, 6]

6
```

NOTE- Another method of indexing is NEGATIVE INDEXING.
Here, the indexing is from -1 to –n where n is the number of elements in the array. The indexing starts from the last element. Therefore, -1 represents the last element of the array, -2 represents the second to last element and so on.

Example 1-

```
a = np.array([1, 2, 3])

print(a[-2])
```

Output-
```
2
```

Example 2-
```
a = np.array([[1, 2, 3], [4, 5, 6]])

print(a[-1])

print(a[-1, -1])

print(a[0, -1])

print(a[-2, 0])
```

Output-

```
[4, 5, 6]

6

3

1
```

### SLICING ARRAYS
Slicing arrays refers to obtaining a portion of elements from one given index to another given index.
Instead of writing only one index, we perform slicing by writing two indices in the format [start:end] where start index is included but end index is excluded. For example-

```
a = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9])

print(a[2:6])
```

Output-

```
[3, 4, 5, 6]
```

We can also define the step as [start : end : step]. For example, if we need to print alternate numbers from a given array, we write step = 2.
NOTE- If start index is not passed, default considered is 0
             If end index is not passed, it is considered the length of array in that dimension
             If step is not passed default considered is 1. 

### ARRAY FUNCTIONS
Given is a list of functions that can be used for numpy arrays. If a, b represent two different ndarrays, then-

np.sort(a) : Sorts elements of array in ascending order

np.concatenate((a, b)) : Concatenation of two arrays

np.copy : Creates a copy of the array

a.ndim : Gives number of dimensions of array as output

a.size : Gives number of elements in array

a.shape : Gives the shape of array. For example, in 2D arrays, it gives rows and columns of array

a.reshape : Can change the shape of an array. Condition- Number of elements should be constant.

np.subtract(a, b) : Performs matrix subtraction

np.add(a, b) : Performs matrix addition

np.multiply(a, b): Performs matrix multiplication

a.max : Gives maximum value present in array

a.mean : Gives mean of all elements in array

np.transpose(a) : Calculates transpose of matrix


References-
https://numpy.org/doc/stable/index.html
