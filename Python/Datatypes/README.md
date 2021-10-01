
# Python Data Types

# What are data types?
In programming, data type is a classification that specifies which type of value a variable has and what type of mathematical, relational or logical operations can be applied to it without causing an error.
Variables can store data of different types, and different types can do different things.

```javascript
>>> x = 5
>>> print(type(x))
>>> <class 'int'>
```

# List of Data types in python

## 1). Text Type:	
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> str </br>
   In Python, Strings are arrays of bytes representing Unicode characters. A string is a collection of one or more characters put in a single quote, double-quote or triple quote. In python there is no character data type, a character is a string of length one. It is represented by str class.
```javascript
>>> x = "Hello GWOC"
>>> print(type(x))
>>> <class 'str'>
```
## 2). Numeric Types:	
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> int</br> 
   In Python, integers are zero, positive or negative whole numbers without a fractional part and having unlimited precision, e.g. 0, 100, -10.
   
  

```javascript
>>> x = 25
>>> print(type(x))
>>> <class 'int'>
```
###  <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> float</br>
   The float type in Python represents the floating point number. Float is used to represent real numbers and is written with a decimal point dividing the integer and fractional parts. For example, 97.98, 32.3+e18, -32.54e100 all are floating point numbers.
```javascript
>>> x = 25.3
>>> print(type(x))
>>> <class 'float'>
```
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> complex</br>
   Complex numbers are written in the form, x + yj , where x is the real part and y is the imaginary part.
```javascript
>>> x = 1j
>>> print(type(x))
>>> <class 'complex'>
```
## 3). Sequence Types:	
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> list</br>
   A list is created by placing all the items (elements) inside square brackets [] , separated by commas.
```javascript
>>> x = ["Girlscript", "Winter", "of", "Contribution", "Contributed", "by", "Priyanka"]
>>> print(type(x))
>>> <class 'list'>
```
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> tuple</br>
   Tuples are used to store multiple items in a single variable. Tuple is a collection of values separated by comma and enclosed in parenthesis. Unlike lists, tuples are immutable. 
```javascript
>>> x = ("Girlscript", "Winter", "of", "Contribution", "Contributed", "by", "Priyanka")
>>> print(type(x))
>>> <class 'tuple'>
```
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> range</br>
   Range in python is another in-built python datatype which is mainly used with loops in python. It returns a sequence of numbers specified in the function arguments.
```javascript
>>> x = range(6)
>>> print(x)
>>> range(0, 6)
>>> print(type(x))
>>> <class 'range'>
```
## 4). Mapping Type:	
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> dict</br>
   Dictionary in Python is an unordered collection of data values, used to store data values like a map, which, unlike other Data Types that hold only a single value as an element, Dictionary holds key:value pair.
```javascript
>>> x = {"name" : "GWOC", "age" : 2}
>>> print(type(x))
>>> <class 'dict'>
```
## 5). Set Types:	
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> set</br>
   In Python, Set is an unordered collection of data type that is iterable, mutable and has no duplicate elements. The order of elements in a set is undefined though it may consist of various elements.
```javascript
>>> x = {"Girlscript", "Winter", "of", "Contribution", "Contributed", "by", "Priyanka"}
>>> print(type(x))
>>> <class 'set'>
```
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> frozenset</br>
   In Python, frozenset is the same as set except the frozensets are immutable which means that elements from the frozenset cannot be added or removed once created.
```javascript
>>> x = frozenset({"Girlscript", "Winter", "of", "Contribution", "Contributed", "by", "Priyanka"})
>>> print(type(x))
>>> <class 'frozenset'>
```
## 6). Boolean Type:	
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> bool</br>
   Python boolean type is one of the built-in data types provided by Python, which represents one of the two values i.e. True or False. Generally, it is used to represent the truth values of the expressions.
```javascript
>>> x = True
>>> print(type(x))
>>> <class 'bool'>
```
## 7). Binary Types:	

### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> bytearray</br> 
   The bytearray type is a mutable sequence of integers in the range 0 <= x < 256. It has most of the usual methods of mutable sequences.
```javascript
>>> x = bytearray(5)
>>> print(x)
>>> bytearray(b'\x00\x00\x00\x00\x00')
>>> print(type(x))
>>> <class 'bytearray'>
```
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> bytes</br> 
   In Python, it is an immutable sequence of small integers in the range 0 <= x < 256, print as ASCII characters when displayed. Bytes is an immutable version of bytearray – it has the same non-mutating methods and the same indexing and slicing behavior.
```javascript
>>> x = b"Hello GWOC"
>>> print(type(x))
>>> <class 'bytes'>
```
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> memoryview</br>
   As Memory view is a safe way to expose the buffer protocol in Python and a memoryview behaves just like bytes in many useful contexts (for example, it supports the mapping protocol) so it provides an adequate replacement if used carefully.
```javascript
>>> x = memoryview(bytes(5))
>>> print(x)
>>> <memory at 0x006F8FA0>
>>> print(type(x))
>>> <class 'memoryview'>
```
  
  Resources : www.google.com | www.geeksforgeeks.org | www.w3resource.com
