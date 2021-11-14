# **Itertools Module**

## [Click to listen to the audio](https://drive.google.com/file/d/1HCE_4da1Rap2KcN9LPWpfFN2UrnqOHIF/view?usp=sharing) 

## **Outline**
+ Introduction
+ Types of Iterator in Itertools Module
+ Advantages of using Itertools Module
+ Summary
+ References

## **Introduction**

According to the official definition of itertools, "this module implements a number of iterator building blocks inspired by constructs from APL, Haskell, and SML." In other words, the number of iterators can together create 'iterator algebra' which helps it to complete a complex task

It is a module that produce complex iterators by working on it using its different functions. It is a fast and memory-efficient tool that helps in many functions.  

## **Types of Iterator in Itertools Module**

There are three types of iterator in itertools module. This include:

+ Infinite Iterators
+ Combinatoric Iterators
+ Terminating Iterators




### **Infinite Iterators**

 An iterator that runs infinite times is called as an infinite iterator.
 Python lists, tuples, dictionaries and sets are all examples of inbuilt iterators.

There are three types of infinite iterators: 

+ **count(start, stop)**: This iterator starts printing from the “start” number and prints infinitely. The step argument is optional, if the value is provided to the step then the number of steps will be skipped else step is 1 by default.


Example:

```python
import itertools
   
   for i in itertools.count(5, 5):
    if i == 35:
        break
    else:
        print(i, end =" ")
```

**Output**
5 10 15 20 25 30

 + **cycle(iterable)**: It prints all values in  sequence from the passed container. It prints the values in a cyclic manner. It restarts printing from the beginning again when all of its elements are done printing in a cyclic manner.

Lets consider the following example:
  
```python
import itertools  
temp = 0  
for i in itertools.cycle('123'):  
    if temp > 7:  
        break  
    else:  
        print(i,end=' ')  
        temp = temp+1  
```

**Output**
  1 2 3 1 2 3 1 2 3 1 2

+ **repeat(val, num)**: As its name suggests, it repeatedly prints the passed value for infinite time.The num argument is optional. If num is mentioned, then it repeatedly prints 'num' number of times. 


Example:

```python
import itertools  
print(list(itertools.repeat(40,15))) 
```

**Output**
[40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40]

## **Combinatoric Iterators**

The recursive generators that are used to simplify combinatorial constructs are called combinatoric iterators.

These are of four types:

+ **Product()**:  It is used to calculate the cartesian product of input iterable.

```python
from itertools import product
print(list(product(['hello', 'all', 'there'], '2')))
print()
```

**Output**
[('hello', '2'), ('all', '2'), ('there', '2')]

+ **Permutations()**: It is used to generate all possible permutations of an iterable.

```python
from itertools import permutations
print(list(permutations('AB')))  
print()  
```

**Output**
[('A', 'B'), ('B', 'A')]

+ **Combinations()**: It is used to print all the possible combinations (without replacement) of the container which is passed as argument in the specified group size in sorted order.

```python
from itertools import combinations
print(list(combinations('AB', 2)))
print()
```

**Output**
[('A', 'B')]

+ **Combination_with_replacement()**: It accepts two arguments, first argument is a r-length tuple and the second argument is repetition. It returns a subsequence of length n from the elements of the iterable and repeat the same process. 



```python
from itertools import combinations_with_replacement
print(list(combinations_with_replacement("XY", 3)))  
print() 
```

**Output**
[('X', 'X', 'X'), ('X', 'X', 'Y'), ('X', 'Y', 'Y'), ('Y', 'Y', 'Y')]

## **Terminating Iterators**

Terminating iterators are used to work on the small input sequence  and generate the output based on the functionality of the method used in iterator.

There are different types of terminating iterators. These are:

+ **accumulate(iter, func)**: This iterator takes two arguments,  which are iterable target and the function which would be followed at each iteration of value in target. If no function is passed, addition takes place by default. If the input iterable is empty, the output iterable will also be empty.

+ **chain(iter1, iter2)**: This function is used to print all the values in iterable targets one after another mentioned in its arguments.

+ **dropwhile(func, seq)**: It starts printing the character only after the func

+ **filterfalse(func,seq)**: This iterator prints only those values that return false for the passed function.
 
+ **islice(iterable,start,stop,step)**: It slices the given iterable according to given position. It accepts four arguments respectively and these are iterable, container, starting pos., ending position and step(optional).

+ **starmap(func, tuple list)**: It takes two arguments; first argument is function and second argument is list which consists element in the form of tuple.

+ **takewhile(func, iterable)**: It is visa-versa of dropwhile(). It will print values until it returns false condition.

+ **tee(iterator, count)**: It divides the container into a number of iterators which is defined in the argument.

+ **zip_longest(iterable1, iterable2, fillval)**: It prints the values of iterable alternatively in sequence. If one of the iterable prints all values, remaining values are filled by the values assigned to fill value.


## **Advantages of using Itertools Module**

+ This module works as a fast, memory-efficient tool that is used either by themselves or in combination to form iterator algebra.

+ These tools either let you select a finite sequence from an infinite one, or they let you make an infinite sequence out of a finite one.

+ It can be used in place of nested loops and make the function short and simple.

+ Helps in dealing with the entries in a list based on a condition.


## **Summary**

In this, we came across and discussed about what is itertools module which is basically a module that provides various functions that work on iterators to produce complex iterators.

Also, discussed the three kinds of iterators generated by functions from the module itertool which are infinite, combinatorics, and terminating iterators.


## **References**
+ https://www.geeksforgeeks.org/python-itertools/
+ https://www.javatpoint.com/python-itertools
