# Python - Error

Errors are the problems or mistakes in a program, because of which a program may not yield the expected output, or it may terminate unexpectedly. 
It might be some issue with the indentation,or it might be some issue with a wrong input, etc.

Mostly an error occurs when the prescribed rules of a certain programming language is not followed, i.e., if we accidently use wrong syntax. It is called Syntax Error. The compiler mentions the type of error along with the line number and a description.

###### Example


```python
a=10
if(a<12)
    print('Hello')
```


      File "<ipython-input-1-deccd3af3bd6>", line 2
        if(a<12)
                ^
    SyntaxError: invalid syntax
    


File "<ipython-input-1-deccd3af3bd6>", line 2
    
    
    if(a<12)         ^    
SyntaxError: invalid syntax

We see that in the example above, a colon after the IF condition is missing.

Sometimes a program a program may execute without any error, but after it is run it may misbehave. This type of error is called a runtime error or an exception.

 A number of built-in exceptions are predefined in the Python library. Let's walk through few common error types.

    1.  IndexError - It occurs when the index of a sequence is out of range.
    2.  KeyError  -  It occurs when a key is missing in a dictionary.
    3.  NameError	-It occurs when a variable is not found in the local or global scope.
    4.  AssertionError	-It occurs when the assert statement fails.
    5.  FloatingPointError-	It occurs when a floating point operation fails.
    6.  KeyboardInterrupt-	It occurs when the user hits the interrupt key (Ctrl+c or delete).
    7.  RuntimeError	-It occurs when an error does not fall under any other category.
    8.  SyntaxError	-It occurs by the parser when a syntax error is encountered.
    9.  IndentationError-	It occurs when there is an incorrect indentation.
    10. TabError	-It occurs when the indentation consists of inconsistent tabs and spaces.
    11. TypeError	-It occurs when a function or operation is applied to an object of an incorrect type.
    12. ValueError	-It occurs when a function gets an argument of correct type but improper value.
    13. ZeroDivisionError	-It occurs when the second operand of a division or module operation is zero.
    14. OverflowError	-It occurs when the result of an arithmetic operation is too large to be represented.
    15. ReferenceError	-It occurs when a weak reference proxy is used to access a garbage collected referent.
    16. AttributeError	-It occurs on the attribute assignment or reference fails.
    17. EOFError	-It occurs when the input() function hits the end-of-file condition.

Let us look at some of the error types with examples

#### ModuleNotFoundError
The ModuleNotFoundError is thrown when a module cannot be found.


```python
import okay
```


    ---------------------------------------------------------------------------

    ModuleNotFoundError                       Traceback (most recent call last)

    <ipython-input-3-2214fa8e330b> in <module>
    ----> 1 import okay
    

    ModuleNotFoundError: No module named 'okay'


##### ImportError
The ImportError is thrown when a specified function of an import statement cannot be found.


```python
from time import wake
```


    ---------------------------------------------------------------------------

    ImportError                               Traceback (most recent call last)

    <ipython-input-4-510751bcd6a0> in <module>
    ----> 1 from time import wake
    

    ImportError: cannot import name 'wake' from 'time' (unknown location)


##### TypeError
The TypeError is thrown when an operation is applied to an object of an inappropriate type.


```python
'Hello roll num' +10 
```


    ---------------------------------------------------------------------------

    TypeError                                 Traceback (most recent call last)

    <ipython-input-5-e0ea01a3b076> in <module>
    ----> 1 'Hello roll num' +10
    

    TypeError: can only concatenate str (not "int") to str


##### NameError
The NameError is thrown when an object or a variable cannot be found.


```python
print(a)
```


    ---------------------------------------------------------------------------

    NameError                                 Traceback (most recent call last)

    <ipython-input-6-bca0e2660b9f> in <module>
    ----> 1 print(a)
    

    NameError: name 'a' is not defined


##### IndexError
The IndexError is thrown when one tries to access an item at an invalid index.


```python
list1=[1,2,3,4,5]
print(list1[5])
```


    ---------------------------------------------------------------------------

    IndexError                                Traceback (most recent call last)

    <ipython-input-7-67dfd3a5bd4e> in <module>
          1 list1=[1,2,3,4,5]
    ----> 2 print(list1[5])
    

    IndexError: list index out of range


##### ZeroDivisionError
The ZeroDivisionError is thrown when the second digit in the division is zero.


```python
avg= (56+76+70)/0
print(avg)
```


    ---------------------------------------------------------------------------

    ZeroDivisionError                         Traceback (most recent call last)

    <ipython-input-8-5dd9ba7b8e51> in <module>
    ----> 1 avg= (56+76+70)/0
          2 print(avg)
    

    ZeroDivisionError: division by zero



```python

```
