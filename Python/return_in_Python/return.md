# *return* in Python

▶️ The Python return statement is a special statement that exits a function and returns a value back to the caller. 

▶️In python , function always returns something. 

▶️The statements after using the return statement is not executed in the program. 

▶️Functions in python can return any numerical values (like int ,float ,and complex ) ,sequences of objects (like string,list, tuple,dictionary and set),user-defined class,objects,functions and modules or packages. 

▶️when we say the function returns nothing , it just means the keyword return is not written. 

▶️return statement can't be used outside the function. 

**Example 1:**
```python
def f1():
    print("GWOC")
x=f1()
print(x) #None
print(type(x)) #<class 'NoneType'>

```
▶️When Python doesn't return anything , it returns a special value 'None'.

**Example 2:**

```python
def f1():
    return "GWOC"
print(f1()) # the function returns a string value
print(type(f1())) #<class 'str'>
```
**Example 3:**

```python
def sum():
    return 50-30 
print("The value is ",sum()) # the function returns an expression
print(type(sum()))  #<class 'int'>
```
**Example 4:**

```python
def f1():
    return
print("The value returned is ",f1())   # the function returns the value 'None'
print(type(f1()))  #<class 'NoneType'>
```




