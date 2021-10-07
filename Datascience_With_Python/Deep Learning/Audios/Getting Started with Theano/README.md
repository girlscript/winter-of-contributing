# **Getting started with Theano**

# [Click on this to listen audio](https://drive.google.com/file/d/1ryzBk9bCJt7o4q1RLoFQuiXhYJtHQ_rD/view?usp=sharing)

## **Outline**
* Introduction
* Why use Theano?
* Installation Of Theano
* Basics Operations in Theano
* Resources and References
* Summary

## **Introduction**
Theano is a Python library that allows us to evaluate mathematical operations including multi-dimensional arrays so efficiently. It is mostly used in building Deep Learning Projects. It works a way more faster on Graphics Processing Unit (GPU) rather than on CPU. Theano attains high speeds that gives a tough competition to C implementations for problems involving large amounts of data. It is mainly designed to handle the types of computation required for large neural network algorithms used in Deep Learning. That is why, it is a very popular library in the field of Deep Learning.

![Theano vs tensorflow](https://starship-knowledge.com/wp-content/uploads/2021/02/theano_vs_tensorflow-2-676x681.jpeg)

## **Why use Theano?**
By looking at the complexity of the computational graphs, you will now be able to understand the purpose behind developing Theano. A typical compiler would provide local optimizations in the program as it never looks at the entire computation as a single unit.

Theano implements very advanced optimization techniques to optimize the full computational graph. It combines the aspects of Algebra with aspects of an optimizing compiler. A part of the graph may be compiled into C-language code. For repeated calculations, the evaluation speed is critical and Theano meets this purpose by generating a very efficient code.

## **Installation Of Theano**

To install Theano and its dependencies, you use pip from the command line as follows.

```python
pip install theano
```
Several of the symbols we will need to use are in the tensor subpackage of Theano. We often import such packages with a handy name, let’s say, T.  

```python
from theano import *
import theano.tensor as T
```
![installation](https://learneasysteps.com/wp-content/uploads/2021/06/File12_1-2.png)

### Testing the installation
After the installation completes successfully, open a new notebook in the Anaconda Jupyter. In the code cell, enter the following Python script −
```python
import theano
from theano import tensor
a = tensor.dscalar()
b = tensor.dscalar()
c = a + b
f = theano.function([a,b], c)
d = f(1.5, 2.5)
print (d)
```
Output:
`4.0`

## **Basics Operations in Theano**

Theano is a Python library that allows you to define, optimize, and evaluate mathematical expressions involving multi-dimensional arrays efficiently.Some Theano implementations are as follows.

### Subtracting two scalers:
```python
# Python program showing
# subtraction of two scalars
 
import theano
from theano import tensor
 
# Declaring variables
a = tensor.dscalar()
b = tensor.dscalar()
 
# Subtracting
res = a - b
# Converting it to a callable object
# so that it takes matrix as parameters
func = theano.function([a, b], res)
 
# Calling function
assert 20.0 == func(30.5, 10.5)
```
### Adding two scalers:

```python
# Python program showing
# addition of two scalars
 
# Addition of two scalars
import numpy
import theano.tensor as T
from theano import function
 
# Declaring two variables
x = T.dscalar('x')
y = T.dscalar('y')
 
# Summing up the two numbers
z = x + y
 
# Converting it to a callable object
# so that it takes matrix as parameters
f = function([x, y], z)
f(5, 7)
```
Output:
`array(12.0)`

### Adding two matrices:

```python
# Python program showing
# addition of two matrices
 
# Adding two matrices
import numpy
import theano.tensor as T
from theano import function
x = T.dmatrix('x')
y = T.dmatrix('y')
z = x + y
f = function([x, y], z)
 
f([[30, 50], [2, 3]], [[60, 70], [3, 4]])
```
Output:
```python
array([[ 90.,  120.],
       [ 5.,  7.]])
```
![matrices](https://i0.wp.com/www.rankred.com/wp-content/uploads/2017/10/Theano.jpg?resize=716%2C430&ssl=1)

### Logistic function using theano:

```python
# Python program to illustrate logistic
# sigmoid function using theano
# Load theano library
 
import theano
from theano import tensor
 
# Declaring variable
a = tensor.dmatrix('a')
 
# Sigmoid function
sig = 1 / (1 + tensor.exp(-a))
 
# Now it takes matrix as parameters
log = theano.function([a], sig)
 
# Calling function
print(log([[0, 1], [-1, -2]]))
```
Output:
```python
[[0.5           0.73105858
0.26894142      0.11920292]]
```

## **Resources and References**
* https://www.geeksforgeeks.org/theano-in-python/
* https://www.tutorialspoint.com/theano/theano_installation.htm
* https://www.tutorialspoint.com/theano/theano_computational_graph.htm
* https://i0.wp.com/www.rankred.com/wp-content/uploads/2017/10/Theano.jpg?resize=716%2C430&ssl=1
* https://starship-knowledge.com/wp-content/uploads/2021/02/theano_vs_tensorflow-2-676x681.jpeg
* https://learneasysteps.com/wp-content/uploads/2021/06/File12_1-2.png

## **Summary**
Theano first builds a computational graph for the entire computation. As the whole picture of computation is available as a single image during compilation, several optimization techniques can be applied during pre-compilation and that’s what exactly Theano does. It restructures the computational graph, partly converts it into C, moves shared variables to GPU, and so on to generate a very fast executable code. The compiled code is then executed by a Theano function which just acts as a hook for injecting the compiled code into the runtime. Theano has proved its credentials and is widely accepted in both academics and industry.
