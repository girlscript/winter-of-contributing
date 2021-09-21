# Decorators in Python - Documentation

## Outline of Topics covered:
Elaborated the use and code snippets for Decorators in Python in this [Python notebook](decorators.ipynb).
* What are decorators?
* How and Why do they work?
* Decorating functions with parameters (using `*args` and `**kwargs`)
* Chaining Decorators in Python
* Decorator with arguments (decorator factory)
* Decorator class
* Decorating Class Methods

## Summary of Topics Covered
* **What are decorators?**<br>
A function that takes a function as a parameter and returns an augmented/modified/decorated function is called a decorator in Python.<br><br>
![What are Decorators?](Images/screenshot1.PNG)<br>
Decorators allow the user to perform **metaprogramming** i.e. the concept when a part of the program tries to modify another part of the program at compile time.<br><br>
* **How and Why do they work?**<br>
Since in Python everything is an object. It is possible to pass function as argument in another function and thus it can be modified/decorated. It should also be considered that a function can create a function within itself and also return a function. This allows the basic functionality of decorators to exist.
    - Functions can be assigned as normal objects:<br>
    ![Functions as Objects](Images/screenshot2.PNG)<br>
    - Functions can be passed as arguments to other functions since they are basically objects in Python.<br>
    ![Functions as arguments](Images/screenshot3.PNG)<br>
    - Functions can create another functions within themselves and even return a function.<br>
    ![Functions can create and return functions](Images/screenshot4.PNG)<br>

    These are all the "prerequisites" we have to keep in mind to understand the hows and whys of Decorators. Additionally, the concept of Closures in Python should also be known.<br><br> 
* **Decorating functions with parameters (using `*args` and `**kwargs`)**<br>
A mismatch in no. of positional arguments may result in a decorator to fail in decorating another function. This can be prevented by using `*args` and `**kwargs`.<br>
Let's consider a simple decorator with 0 positional arguments.
![Simple Decorator](Images/screenshot5.PNG)<br>
This decorator will be able to decorate a similar function i.e. a function with 0 positional arguments but not the one with anything not 0.
![Simple Decorator Success Example](Images/screenshot6.PNG)<br>
![Simple Decorator Failed Example](Images/screenshot7.PNG)<br>
A solution for this problem is to re-define the decorator with 2 arguments: 
![Simple Decorator Redefined](Images/screenshot8.PNG)<br>
but the problem here is that again it will not be able to decorate other functions with mismatch number of arguments.
![Simple Decorator Failed Again Example](Images/screenshot9.PNG)<br>
The perfect solution is to make use of `*args` and `**kwargs` which allows us to pass a variable number of arguments to a function.
![Simple Decorator using variable arguments](Images/screenshot10.PNG)<br>
![Simple Decorator using variable arguments success](Images/screenshot11.PNG)<br><br>
* **Chaining Decorators in Python**<br>
Multiple decorators can be chained in Python i.e. a function can be decorated multiple times with different or same decorators by simply placing the decorators above the desired function.<br><br>
![Chaining Decorators](Images/screenshot12.PNG)<br><br>
* **Decorator with arguments (decorator factory)**<br>
A decorator takes just one argument i.e. the function to be decorated and there is no way to pass other arguments. However it can be made possible by creating a function which takes arbitrary arguments and returns a decorator.
![Decorator Factory](Images/screenshot13.PNG)<br><br>
* **Decorator class**<br>
Just like a decorator function we can have a decorator class, it works the same way as the decorator function with some minor changes in the syntax and using `__call__()` method.
![Decorator Class](Images/screenshot14.PNG)<br><br>
* **Decorating Class Methods**<br>
For using decorators on class methods an additional `__get__()` method is defined.
![Decorating Class Methods](Images/screenshot15.PNG)<br><br>

## Resources refered:
- [Decorators in Python - GFG](https://www.geeksforgeeks.org/decorators-in-python/)
- [Class as decorator in Python - GFG](https://www.geeksforgeeks.org/class-as-decorator-in-python/)