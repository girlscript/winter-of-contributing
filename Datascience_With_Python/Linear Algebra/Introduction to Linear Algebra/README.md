Hello all 👋, In this tutorial I tried to introduce the basic components of linear algebra along with the Code Sample & Examples, but before starting this make sure you know Python Programming Language.This tutorial is short, crisp, and focused.

# Why is Linear Algebra Actually Useful?
Linear algebra has tons of useful applications. However, in data science, there are several very important ones
* Vectorized code (a.k.a. array programming)
* Image recognition
* Dimensionality reduction

# Important definitions of scalars, vectors, matrices, and tensors.

## Scalar :
Any single numerical value is a scalar as shown in the image above. It is simply denoted by lowercase and italics. **For example: 1**

## Vector : 
Vectors are built from components, which are ordinary numbers. We can think of a vector as a list of numbers, and vector algebra as operations performed on the numbers in the list. In other words, the vector is the numpy 1-D array.
**For example :    [5 6 9]**

![](https://github.com/harichandana1406/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Linear%20Algebra/Introduction%20to%20Linear%20Algebra/Images/vector.png)

## Matrix :
A matrix is a 2-D array of shape (m×n) with m rows and n columns.
Each element can be reached via its row and column and is denoted by a subscript. 
For example, A2,₁ returns the element at 2nd row and 1st column.

![](https://github.com/harichandana1406/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Linear%20Algebra/Introduction%20to%20Linear%20Algebra/Images/matrix.png)

## Terms related to Matrix
>**Order of matrix** – If a matrix has 3 rows and 4 columns, order of the matrix is 3*4 i.e. row*column.

>**Square matrix** – The matrix in which the number of rows is equal to the number of columns.

>**Diagonal matrix** – A matrix with all the non-diagonal elements equal to 0 is called a diagonal matrix.

>**Upper triangular matrix** – Square matrix with all the elements below diagonal equal to 0.

>**Lower triangular matrix** – Square matrix with all the elements above the diagonal equal to 0.

>**Identity matrix** – Square matrix with all the diagonal elements equal to 1 and all the non-diagonal elements equal to 0.

>**Column matrix** –  The matrix which consists of only 1 column. Sometimes, it is used to represent a vector.

>**Row matrix** –  A matrix consisting only of row.

>**Trace** – It is the sum of all the diagonal elements of a square matrix.

**Check out the notebook to learn basic operations on matrix.**

## Tensor :
Generally, an n-dimensional array where n>2 is called a Tensor. But a matrix or a vector is also a valid tensor.\
Like vectors and matrices, tensors can be represented in Python using the N-dimensional array (ndarray).\
A tensor can be defined in-line to the constructor of array() as a list of lists.\
Tensors are a type of data structure used in linear algebra, and like vectors and matrices, you can calculate arithmetic operations with tensors.\

![](https://github.com/harichandana1406/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Linear%20Algebra/Introduction%20to%20Linear%20Algebra/Images/tensor.png)

## Python Library used for implementation:
   >***NUMPY***
# Introduction to Linear Algebra using NumPy library
Check the notebook attached in this folder for the Implementation of algebra in python using numpy.




