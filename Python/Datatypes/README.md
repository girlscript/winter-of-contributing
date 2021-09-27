
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
```javascript
>>> x = "Hello GWOC"
>>> print(type(x))
>>> <class 'str'>
```
## 2). Numeric Types:	
###  <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> int</br>
```javascript
>>> x = 25
>>> print(type(x))
>>> <class 'int'>
```
###  <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> float</br>
```javascript
>>> x = 25.3
>>> print(type(x))
>>> <class 'float'>
```
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> complex</br>
```javascript
>>> x = 1j
>>> print(type(x))
>>> <class 'complex'>
```
## 3). Sequence Types:	
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> list</br>
```javascript
>>> x = ["Girlscript", "Winter", "of", "Contribution", "Contributed", "by", "Priyanka"]
>>> print(type(x))
>>> <class 'list'>
```
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> tuple</br>
```javascript
>>> x = ("Girlscript", "Winter", "of", "Contribution", "Contributed", "by", "Priyanka")
>>> print(type(x))
>>> <class 'tuple'>
```
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> range</br>
```javascript
>>> x = range(6)
>>> print(x)
>>> range(0, 6)
>>> print(type(x))
>>> <class 'range'>
```
## 4). Mapping Type:	
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> dict</br>
```javascript
>>> x = {"name" : "GWOC", "age" : 2}
>>> print(type(x))
>>> <class 'dict'>
```
## 5). Set Types:	
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> set</br>
```javascript
>>> x = {"Girlscript", "Winter", "of", "Contribution", "Contributed", "by", "Priyanka"}
>>> print(type(x))
>>> <class 'set'>
```
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> frozenset</br>
```javascript
>>> x = frozenset({"Girlscript", "Winter", "of", "Contribution", "Contributed", "by", "Priyanka"})
>>> print(type(x))
>>> <class 'frozenset'>
```
## 6). Boolean Type:	
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> bool</br>
```javascript
>>> x = True
>>> print(type(x))
>>> <class 'bool'>
```
## 7). Binary Types:	
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> bytes</br>
```javascript
>>> x = b"Hello GWOC"
>>> print(type(x))
>>> <class 'bytes'>
```
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> bytearray</br> 
```javascript
>>> x = bytearray(5)
>>> print(x)
>>> bytearray(b'\x00\x00\x00\x00\x00')
>>> print(type(x))
>>> <class 'bytearray'>
```
### <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> memoryview</br>
```javascript
>>> x = memoryview(bytes(5))
>>> print(x)
>>> <memory at 0x006F8FA0>
>>> print(type(x))
>>> <class 'memoryview'>
```
   
