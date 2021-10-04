             DATA SCIENCE WITH PYTHON
                                Introduction To NumPy

NumPy stands for ‘Numerical Python’. It is a package for data analysis and scientific computing with Python which is curated for simplifying the process of Python Array Computation.
 NumPy uses a multidimensional array object, and has functions and tools for working with these arrays. A NumPy Array is similar to a list which is usually fixed in size and each element is of same type and performs fast operation on arrays , such as logical calculations  , mathematical calculations, reshaping arrays , sorting and much more.

NumPy Installation
NumPy can be installed on various operating systems like Windows , Mac, Linux, Ubuntu,Fedora, etc.
Before installing NumPy , check out your Python version on command window and make sure pip is installed .
Command to install NumPy with Python 2:
 pip install numpy
Command to install NumPy with Python 3:
pip3 install numpy

How to import NumPy?
NumPy is usually imported under the np alias ; where alias are an alternate name for referring to the same thing.
Create an alias with the as keyword while importing:
import numpy as np                                             
Hereafter, you can call NumPy using its alias name “np”.              
Example:   np.array()  , np.sum() , etc.
Functioning of NumPy

NumPy refers to dimensions as axes. Keep this in mind while familiarizing yourself with the following functions:
•	ndarray.ndim refers to the number of axes in the current array.
•	ndarray.shape defines the dimensions of the array. 
•	ndarray.size counts the number of elements that make up the array. It will be equal to the product of the individual elements in ndarray.shape.
•	ndarray.dtype describes the elements located in the array using standard Python element types or NumPy's special types,.
•	ndarray.itemsize refers to the size of each element in the array, measured in bytes. This is how you determine how much NumPy has actually saved you in terms of storage space.
Using these functions to describe an array in NumPy would look something like this:

>>> import numpy as np
>>> a = np.arange(15).reshape(3, 5)
>>> a

array( [[ 0,  1, 2, 3, 4], [ 5, 6,  7, 8, 9], [10, 11, 12, 13, 14]])
>>> a.shape
(3, 5)
>>> a.ndim
2
>>> a.dtype.name
'int64'
>>> a.itemsize
8
>>> a.size
15
>>> type(a)

<type 'numpy.ndarray'>
>>> b = np.array([6, 7, 8])
>>> b
array([6, 7, 8])
>>> type(b)
<type 'numpy.ndarray'>

The example defines an array as a and then identifies the size, shape, and type of its elements and axes.

How to Create Arrays
Since NumPy is all about creating and indexing arrays, it makes sense that there would be multiple ways to create new arrays. You can create arrays out of regular Python lists and create new arrays comprised of 1s and 0s as placeholder content.
Creating an Array from a Python List
If you have a regular Python list or a tuple that you would like to call using a NumPy array, you can create an array out of the types of elements in the called sequences. This would look like the following example:


>>> import numpy as np
>>> a = np.array([2,3,4])
>>> a

array([2, 3, 4])

>>> a.dtype
dtype('int64')

>>> b = np.array([1.2, 3.5, 5.1])
>>> b.dtype

dtype('float64')

In this example, there is a specific format for calling the np.array that many NumPy beginners get wrong. Notice the parenthesis and the brackets around the list of numbers that comprise the argument:
>>> a = np.array([x,y,z])
Most coders new to NumPy will only use parentheses, which establishes multiple numeric arguments. This will result in a botched array and potentially many hours of frustrated debugging followed a final "ah-hah!" moment.
Understanding how np.array works is actually quite simple. It will transform sequences of sequences into a two-dimensional array. It will transform sequences of sequences of sequences into a three-dimensional array, working in the same way to the nth degree.
This is one of the main ways that NumPy actually delivers on its promise to radically optimize indexing for very large arrays. It functions as a "list of lists" but does so using a matrix of arbitrary dimensions.
The various functions supported by numpy are mathematical, financial, universal, windows, and logical functions. Universal functions are used for array broadcasting, typecasting, and several other standard features.Some of them are below:-
•	numpy.add() function  : It adds two arrays and returns the result.
•	numpy.subtract() function : Subtracts elements of array2 from array1 and returns the result.
•	numpy.multiply() function : Multiplies the elements of both the arrays and returns the product.
•	numpy.divide() function : Divides the array1 by array2 and returns the quotient of array values.
•	numpy.mod() function: Performs modulus operation and returns the remainder array.
•	numpy.power() function: Returns the exponential value of array1 ^ array2.



Advantages of NumPy

Below, we will discuss in what ways Numpy arrays are better and more suitable than lists.


1. More Powerful Slicing and Broadcasting Functionality.
In contrast to regular slicing, NumPy slicing is a bit more powerful. Here’s how NumPy handles an assignment of a value to an extended slice. Regular Python’s slicing method is not able to implement the user’s intention as NumPy. NumPy can perform multi-dimensional slicing which is not convenient in Python.
2. More Efficient Data Representation.
NumPy arrays are much faster to access and create while having a smaller memory footprint. The reduced memory footprint of a NumPy array becomes even more pronounced for larger data sets.
3. More Convenient.
It has a much more natural and convenient integration of mathematical operations than lists.

Conclusion
NumPy array is very fast compared to Python lists. Multiple programmers optimized numpy arrays over the years to make its working fast and very quick than the basic Python lists.
Lists and NumPy both are useful for insertion, deletion, appending, concatenation, etc. but NumPy array provides lot more functionality than the Python list.
NumPy arrays were optimized for memory use as well, hence we see performance benefits with NumPy arrays. It uses less bytes of memory and utilizes continuous memory which makes it faster to process. 

Lists uses memory which is scattered around. It contains pointers to actual information that is scattered around our computer memory. That's why lists are not super fast. 

The operations in NumPy are easy, useful and convenient.




