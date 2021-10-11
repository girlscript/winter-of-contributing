# Introduction to Linear Algebra
Hello all 👋, In this tutorial I tried to introduce the basic components of linear algebra along with the Code Sample & Examples, but before starting this make sure you know Python Programming Language.This tutorial is short, crisp, and focused.

## Purpose of Linear Algebra in Data Science
Linear Algebra is a branch of mathematics that is extremely useful in data science and machine learning. Linear algebra is the most important math skill in machine learning. Most machine learning models can be expressed in matrix form. A dataset itself is often represented as a matrix. Linear algebra is used in data preprocessing, data transformation, and model evaluation. Here are the topics you need to be familiar with:
1. **Scalar**
2. **Vector**
3. **Matrice**
4. **Tensor**

## Advantages
* Linear Algebra is also central to almost all areas of mathematics like geometry and functional analysis.
* Its concepts are a crucial prerequisite for understanding the theory behind Data Science.
* With an understanding of Linear Algebra, you will be able to develop a better intuition for machine learning and deep learning algorithms .\
So if you really want to be a professional in this field, you will have to master the parts of Linear Algebra that are important for Data Science and Machine Learning.

## Important definitions of scalars, vectors, matrices, and tensors.

## Scalar :
Any single numerical value is a scalar as shown in the image above. It is simply denoted by lowercase and italics. **For example: 1**

## Vector : 
Vectors are built from components, which are ordinary numbers. We can think of a vector as a list of numbers, and vector algebra as operations performed on the numbers in the list. In other words, the vector is the numpy 1-D array.
**For example :    [5 6 9]**
![](https://github.com/harichandana1406/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Linear%20Algebra/Tutorials/Introduction%20to%20Linear%20Algebra/Images/vector.png)

### How vectors are used in Data Science?
In Data Science, vectors are used to represent numeric characteristics, called features, of an object in a mathematical and easily analyzable way. Vectors are essential for many different areas of machine learning and pattern processing.

**Representation of a Vector with length 5**

![](https://github.com/harichandana1406/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Linear%20Algebra/Tutorials/Introduction%20to%20Linear%20Algebra/Images/array.png)

## Matrix :
A matrix is a 2-D array of shape (m×n) with m rows and n columns.
Each element can be reached via its row and column and is denoted by a subscript. 
For example, A2,₁ returns the element at 2nd row and 1st column.

![](https://github.com/harichandana1406/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Linear%20Algebra/Tutorials/Introduction%20to%20Linear%20Algebra/Images/matrix.png)
### What is the role of matrix algebra in Data Science?
Matrix is a way of writing similar things together to handle and manipulate them as per our requirements easily. 
Matrix algebra is used in a number of areas of the machine learning field. Optimisation and cost functions are based on matrix algebra. Dimension reduction algorithms heavily depend on the matrix algebra. Support vector machines, time series analysis and the entire deep learning is based on the matrix algebra concept.

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
Tensors are a type of data structure used in linear algebra, and like vectors and matrices, you can calculate arithmetic operations with tensors.

Tensors are mathematical objects that generalize scalars, vectors and matrices to higher dimensions. At its core, a tensor is a container for data almost always numerical data.So, it’s a container for numbers.You may already be familiar with matrices, which are 2D tensors: tensors are a generalization of matrices to an arbitrary number of dimensions (note that in the context of tensors, a dimension is often called an axis).

![](https://github.com/harichandana1406/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Linear%20Algebra/Tutorials/Introduction%20to%20Linear%20Algebra/Images/tensor.png)

## Applications
Linear algebra has tons of useful applications. However, in data science, there are several very important ones
* Vectorized code (a.k.a. array programming)
* Image recognition
* Dimensionality reduction

## Python Library used for implementation:
   >***NUMPY***
## Introduction to Linear Algebra using NumPy library
Check the notebook attached in this folder for the Implementation of algebra in python using numpy.

## Conclusion
**There is a tremendous use of linear algebra structures when working with data, such as tabular datasets and images. Linear algebra is a must-know subject in data science. It will open up possibilities of working and manipulating data.It powers major areas of Data Science including the hot fields of Natural Language Processing and Computer Vision. With an understanding of Linear Algebra, you will be able to develop a better intuition for machine learning and deep learning algorithms.**


