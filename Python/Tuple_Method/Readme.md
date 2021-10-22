# What are Tuple  Methods

Python has a set of built-in methods that you can use on tuple.<br/>
Python tuples are a data structure that store an ordered sequence of values. Tuples are immutable<br/>
Tuples can be accessed but value in tuple cannot be changed

# Tuple value changes using List method
```Python
t = (1,2,3,4)
m = list(t)
m[1]=5
t=tuple(m)
print(t)
```
(1, 5, 3, 4)

# Main Purpose
Tuples are used to store multiple items in a single variable.

# Tuple Representation
Tuple is created using simple brackets

# Types and Methods
Tuple Methods are count and Index

# Sample Code and Explanation
## Count : Counts the specific value in a tuple
```python
thistuple = (1, 4 ,5, 6 , 6 , 7 , 6)
x = thistuple.count(6)
x
```
3

## Index : finds the first ocurrence of specific value
```python
thistuple = (1, 4 ,5, 6 , 6 , 7 , 6)
x = thistuple.index(5)
x
```
2

# References
https://www.w3schools.com/python/python_ref_tuple.asp<br/>
https://www.programiz.com/python-programming/methods/tuple

# Advantage
Tuples are faster than list<br/>
Tuples can be used as dictionary keys 

# Conclusion
The tuple is preferred over List to store different types of data types in a sequence<br/>
Since a tuple is immutable, iterating through the tuple is slightly faster than a list. <br/>

