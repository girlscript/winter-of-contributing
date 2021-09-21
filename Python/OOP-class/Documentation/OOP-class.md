# OOP-CLASS
## What is Class?
A class is a user-defined blueprint of a model from which different objects are created. A class instance can have different attributes attached to it for maintaining its state. 

A class can also have different methods(functions) to modify attribute's state. For example, Employee is a class and Shyam is its object. Class Employee can have different attributes such as Role, Date of Joining,  etc. Shyam being an object will use these attributes and fill in his details. 

## Key Points of Python Class

- Class can be created by using keyword "class".
- Attributes are those varibales which belong that a class.
- Attributes are always public and these can be accessed using the dot(.) operator. Eg. Employee.role

## Class Objects

An Object is an instance of a class. Taking that example of Employee, You can have as many employees like shyam in your company. Basically, Object is an instance which creates a copy of class with actual values.

## The "self" parameter in Class

Class methods must have an extra first parameter in the method definition. We do not have to provide any value for this parameter while calling the method, Python provides it by default. It is similar to pointer in c++ and reference in Java.

When we call a method, for example - shyam.getrole(arg1, arg2), this is automatically converted to Python into Employee.getrole(shyam,arg1,arg2) - this is why we use self parameter.

## _ _init_ _ method

This method is similar to constructors in C++ and Java. Constructors are used for initializing the object's state. It runs as soon as an object of a class is instantiated.

