# **Python Closures**

## [Click to listen to the audio](https://drive.google.com/file/d/1iEr-6kP37UThCuNeD8Tf_pdCyDhXbtXN/view?usp=sharing) 

## **Outline**
+ Introduction
+ Nested functions and Non-local Variable in Python
+ What are Python Closures?
+ Criteria to use Closures
+ When to use Closures in Python?
+ How can we define Closure?
+ Advantages of using Closures
+ Summary
+ References

## **Introduction**

**Closures** are elegant Python constructs.
Python Closures are inner functions that are enclosed within the outer function.

Before moving forward to what Python closures are, we first have to know about what is a nested function and non-local variable.

## **Nested functions and Non-local Variable in Python**

A function that is defined inside another function is known as a **nested function**. Nested functions are able to access variables of the enclosing scope. 
In Python, these **non-local variables** are those that can be accessed only within their scope and not outside their scope.

Let's understand it by an example: 

``` python 
def print_msg(msg):
    #  outer enclosing function
    def printer():
        # This is the nested function
        print(msg)
    printer()
    
# We execute the function
print_msg("Hello")
``` 

##### **Output**
**Hello**

Here, the nested printer() function was able to access the non-local variable i.e, msg of the enclosing function.

## **What are Python Closures?**

![Python Closures](https://lh3.googleusercontent.com/proxy/oSl4MjzUzM2Ru3QLzF15nONYfO6XEn_SzoI2EeD1jjCXmVMm5AWG-QhvEWTiU7Pq2fxbares8FoGZfvf1Dpr1pDPMhl0yI48Ze58uHgFuDYs3BhYh3s)

Like nested loops, we can nest functions too. Python provides us with a tool to define functions within functions. For this purpose, we can use Python Closures.

Python Closures are inner functions that are enclosed within the outer function. Closures can access variables present in the outer function scope. It can access these variables even after the outer function has completed its execution. 

## **Criteria to use Closures?**

We use a closure in Python when a nested function references a value in its enclosing scope. For using closures, these three conditions must be met:

+ We must have a nested function.
+ This nested function must refer to a variable nonlocal to it(a variable in the scope enclosing it).
+ The enclosing scope must return this function.

If all the three above criteria is met, the python will use its closure feature.

## **When to use Closures in Python?**

+ If you have global variables that has only one function in your program, you can use closure. We can define these variables in the outer function itself and then use them in the inner function.

+ The only way to access the enclosed function is by calling the enclosing function. There is no way to access the inner function directly. So. it helps in data hiding.

+ Closures remembers a function environment even after it completes its execution which can then be accessed in the program.

## **How can we define Closure?**

``` python
def outer(name):
    # this is the enclosing function
    def inner():
        # this is the enclosed function
        # here the inner function is accessing the outer function's variable i.e., 'name'
        print(name)
    return inner
    
# call the enclosing function
myFunction = outer('Python Closures')
myFunction()
```

##### **Output**
**'Python Closures'**

Here, the calling of outer function returns the inner function. This then gets assigned to ‘myFunction’. Now when we call myFunction, it prints ‘Python Closures’ (which was earlier given as an argument to outer function).

Do you see what just happened here? Even if the ‘outer’ finishes its execution and all its variables go out of scope, the value still gets passed to its argument and is accessible.

We can access the values of a function that no longer exists.
 
 ## **Examples**
 **Ex1:**
![Closure1](https://miro.medium.com/max/4800/1*bCL9EtwhR9IXndx2Q3iTxA.jpeg)

**Ex2**
![Closure2](https://www.pythontutorial.net/wp-content/uploads/2020/11/Python-Closure-Example.png)

## **Advantages of using Closures**

+ With the help of closures, we can invoke functions outside their scope.
 
+ We don’t need to use global values with Python closure. It let us refer to nonlocal variables.

+ Lets us implement a Python decorator.

+ It makes it easier on the programmer. When we have only a few Python methods (usually, only one), we may use a closure.


## **Summary**

Closures are basically just functions, but with an extra environment of variables.
It can be defined when a nested function references a value in its enclosing scope. 
A closure can also be a effective way to preserve state across a series of function calls.
In this we learned about how to define it, conditions required and advantages.


## **References**
+ https://www.programiz.com/python-programming/closure
+ https://techvidvan.com/tutorials/closures-in-python/
+ https://www.geeksforgeeks.org/python-closures/
