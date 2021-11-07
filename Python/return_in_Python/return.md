# *return* in Python

▶️ The Python return statement is a special statement that exits a function and returns a value back to the caller. 

▶️In python , function always returns something. 

▶️The statements after using the return statement is not executed in the program. 

▶️Functions in python can return any numerical values (like int ,float ,and complex ) ,sequences of objects (like string,list, tuple,dictionary and set),user-defined class,objects,functions and modules or packages. 

▶️when we say the function returns nothing , it just means the keyword return is not written. 

▶️return statement can't be used outside the function. 

# Examples illustrating the usage of _return_
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

# _return_ **vs** (_break_ , _continue_ and _pass_) 

- _return_ is used to give a value back to the caller object or to stop execution of a function. Whereas ,
  - _break_ terminates execution of a loop and resumes the execution of next lines of code.
  - when _continue_ statement is used , control moves to the next iteration.
  - _pass_ is used to make empty block

# Examples
## using _break_
```python
num=int(input("Enter a number: "))
for i in range(1,11):
    if i==num:
        break
    print(i,end=' ')
```
Output
```python
Enter a number: 5
1 2 3 4 
```

## using _continue_

```python
num=int(input("Enter a number: "))
for i in range(1,11):
    if i==num:
        continue
    print(i,end=' ')
```
Output

```python
Enter a number: 5
1 2 3 4 6 7 8 9 10
```

## using _pass_
```python

for i in 'GWOC':
    pass
print("The Last letter of the given string: {}".format(i))
```
Output
```python
The Last letter of the given string: C
```
