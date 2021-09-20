# Decorators in Python - Documentation

## Outline:
Elaborated the use of Decorators in Python in this [notebook](decorators.ipynb).

## Topics covered:
* What are decorators?
* How and Why do they work?
* Decorating functions with parameters (using `*args` and `**kwargs`)
* Chaining Decorators in Python
* Decorator with arguments (decorator factory)
* Decorator class
* Decorating Class Methods

## Brief Summary of Topics Covered
* **What are decorators?**<br>
A function that takes a function as a parameter and returns an augmented/modified/decorated function is called a decorator in Python.
* **How and Why do they work?**<br>
Since in Python everything is an object. It is possible to pass function as argument in another function and thus it can be modified/decorated. It should also be considered that a function can create a function within itself and also return a function. This allows the basic functionality of decorators to exist.
* **Decorating functions with parameters (using `*args` and `**kwargs`)**<br>
A mismatch in no. of positional arguments may result in a decorator to fail in decorating another function. This can be prevented by using `*args` and `**kwargs`.
* **Chaining Decorators in Python**<br>
Multiple decorators can be chained in Python i.e. a function can be decorated multiple times with different or same decorators by simply placing the decorators above the desired function.
* **Decorator with arguments (decorator factory)**<br>
A decorator takes just one argument i.e. the function to be decorated and there is no way to pass other arguments. However it can be made possible by creating a function which takes arbitrary arguments and returns a decorator.
* **Decorator class**<br>
Just like a decorator function we can have a decorator class, it works the same way as the decorator function with some minor changes in the syntax and using `__call__()` method.
* **Decorating Class Methods**<br>
For using decorators on class methods an additional `__get__()` method is defined.

## Resources refered:
- [Decorators in Python - GFG](https://www.geeksforgeeks.org/decorators-in-python/)
- [Class as decorator in Python - GFG](https://www.geeksforgeeks.org/class-as-decorator-in-python/)
