
# What is _init_ in python?

_init_ is one of the reserved methods in Python. In object oriented programming, it is known as a constructor.

Python's _init_ method is called the initializer method. The initializer method initializes our new class instance. So by the point, that the initializer method is called the class instance has already been constructed.

### In simple words, _init_ is basically a function which will "initialize"/"activate" the properties of the class for a specific object, once created and matched to the corresponding class.

- All classes have a function called _init_().

- The _init_() function is called automatically every time the class is being used to create a new object.

- _init_() function is used to assign values to object properties, or other operations that are necessary to do when the object is being created.

## The _init_() function syntax is:
def _init_(self, [arguments])

1. The def keyword is used to define it because it’s a function.
2. The first argument refers to the current object. It binds the instance to the init() method. It’s usually named “self” to follow the naming convention. You can read more about it at Python self variable.
3. The init() method arguments are optional. We can define a constructor with any number of arguments.

#### To summarise, python _init_ is what is called as a constructor in other OOPs languages such as C++ and Java. The basic idea behind this is, it a special method which is automatically called when an object of that Class is created.
---
[**Examples**](https://github.com/SaijyotiTripathy/winter-of-contributing/blob/main/Python/OOP/Examples.ipynb)

