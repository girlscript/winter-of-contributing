 # Type Conversion in Python
 
 
The process of converting the value of one data type (integer, string, float) to another data type is called type conversion
 
There are two types of Type Conversion in Python:

1)Implicit Type Conversion

2)Explicit Type Conversion


## Implicit Type Conversion
In Implicit type conversion of data types in Python, the Python interpreter automatically converts one data type to another without any user involvement.The data type conversion takes place during compilation or during the run time.

```bash


a = 4
 
print("a is of type:",type(a))
 
b = 10.6
print("b is of type:",type(b))
 
a = a + b
 
print(a)
print("a is of type:",type(a))



````

Output

![image](https://user-images.githubusercontent.com/66876387/133757298-f88c191f-e0a2-436a-b580-80779c8f47b7.jpg)

As we can see the type od ‘a’ got automatically changed to the “float” type from the “integer” type. this is a simple case of Implicit type conversion in python.


## Explicit Type Conversion

In Explicit Type Conversion, users convert the data type of an object to required data type. We use the predefined functions like int(), float(), str(), etc to perform explicit type conversion.


This is also known as typecasting as here user casts the data type of the objects


```bash

# initializing string
a = "56"
 
# printing string converting
b = int(a)
print (f"After converting to integer: {c}")
 
# printing string converting to float
c = float(a)
print (f"After converting to float : {c}")


```

![image](https://user-images.githubusercontent.com/66876387/133761854-f7f36cca-a9bc-4f00-903d-ce4654dec5af.jpg)


Some common Explicit Type conversion in python

1. int(a): This function converts any data type to integer.
2. float(): This function is used to convert any data type to a floating-point number
4. tuple() : This function is used to convert to a tuple.
5. set() : This function returns the type after converting to set.
6. list() : This function is used to convert any data type to a list type.