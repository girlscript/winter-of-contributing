# **Python Closures**

## [Click to listen to the audio](https://drive.google.com/file/d/1iEr-6kP37UThCuNeD8Tf_pdCyDhXbtXN/view?usp=sharing) 

## **Outline**
+ Introduction
+ Nested functions and Non-local Variable in Python
+ What are Python Closures?
+ Criteria to use Closures
+ When and Why do you need to use Closures in Python?
+ How can we define Closure?
+ Advantages of using Closures
+ Summary
+ References

## **Introduction**

**Closures** are elegant Python constructs.
Python Closures are inner functions that are enclosed within the outer function.

Before getting into what a closure is, we have to first understand what a nested function and non local variable is.

## **Nested functions and Non-local Variable in Python**

A function that is defined inside another function is known as a **nested function**. Nested functions are able to access variables of the enclosing scope. 
In Python, these **non-local variables** can be accessed only within their scope and not outside their scope.

This can be illustrated by the following example: 

``` python 
def print_msg(msg):
    # This is the outer enclosing function
    def printer():
        # This is the nested function
        print(msg)
    printer()
    
# We execute the function
print_msg("Hello")
``` 

##### **Output**
**Hello**

We can see that the nested printer() function was able to access the non-local msg variable of the enclosing function.

## **What are Python Closures?**

![Python Closures](https://lh3.googleusercontent.com/proxy/oSl4MjzUzM2Ru3QLzF15nONYfO6XEn_SzoI2EeD1jjCXmVMm5AWG-QhvEWTiU7Pq2fxbares8FoGZfvf1Dpr1pDPMhl0yI48Ze58uHgFuDYs3BhYh3s)

Like nested loops, we can also nest functions. That said, Python gives us the power to define functions within functions.

Python Closures are these inner functions that are enclosed within the outer function. Closures can access variables present in the outer function scope. It can access these variables even after the outer function has completed its execution.

## **Criteria to use Closures?**

We have a closure in Python when a nested function references a value in its enclosing scope. For using closures, these three conditions must be met:

+ We must have a nested function.
+ This nested function must refer to a variable nonlocal to it(a variable in the scope enclosing it).
+ The enclosing scope must return this function.

If these three conditions are met, the python will use its closure feature.

## **When and Why do you need to use Closures in Python?**

You can use closures –

+ **To replace the unnecessary use of class**: Suppose you have a class that contains just one method besides the _ _init_ _ method. In such cases, it is often more elegant to use a closure instead of a class.
+ **To avoid the use of the global scope**: If you have global variables which only one function in your program will use, think closure. Define the variables in the outer function and use them in the inner function.
+ **To implement data hiding**: The only way to access the enclosed function is by calling the enclosing function. There is no way to access the inner function directly.
+ **To remember a function environment even after it completes its execution**: You can then access the variables of this environment later in your program.

## **How can we define Closure?**

``` python
def outer(name):
    # this is the enclosing function
    def inner():
        # this is the enclosed function
        # the inner function accessing the outer function's variable 'name'
        print(name)
    return inner
    
# call the enclosing function
myFunction = outer('Python Closures')
myFunction()
```

##### **Output**
**'Python Closures'**

Here, the call to outer function returns the inner function. This then gets assigned to ‘myFunction’. Now when we call myFunction, it prints ‘Python Closures’ (which was earlier given as an argument to outer).

Do you see what just happened here? Even after ‘outer’ finishes its execution and all its variables go out of scope, the value passed to its argument is still remembered.

This is the beauty of closures! We can access the values of a function that no longer exists.
 
 ## **Examples**
 **Ex1:**
![Closure1](https://miro.medium.com/max/4800/1*bCL9EtwhR9IXndx2Q3iTxA.jpeg)

**Ex2**
![Closure2](https://www.pythontutorial.net/wp-content/uploads/2020/11/Python-Closure-Example.png)

## **Advantages of using Closures**

+ Closures help to invoke functions outside their scope.

+ With closures, we can easily extend the scope to invoke a function outside its scope.
 
+ With Python closure, we don’t need to use global values. This is because they let us refer to nonlocal variables. A closure then provides some form of data hiding.

+ A closure lets us implement a Python decorator.

+ When we have only a few Python methods (usually, only one), we may use a Python closure instead of implementing a class for that. This makes it easier on the programmer.


## **Summary**

Closures are just functions, but with an extra environment of variables.
It can be defined when a nested function references a value in its enclosing scope. 
A closure can also be a highly efficient way to preserve state across a series of function calls.
In this we learned about how to define it, conditions required and advantages.


## **References**
+ https://www.programiz.com/python-programming/closure
+ https://techvidvan.com/tutorials/closures-in-python/
+ https://www.geeksforgeeks.org/python-closures/
+ https://data-flair.training/blogs/python-closure/
