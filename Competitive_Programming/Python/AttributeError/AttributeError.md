# Python :  AttributeError in Competitive programming



Attributes are values or functions associated with an object, a data type, or a class. If you call an attribute on a value whose data type or class does not support that attribute, you’ll encounter an AttributeError.

**Note** : Attribute errors in Python are generally raised when an invalid attribute reference is made.

## AttributeErrors in Python



**Attribute errors** in Python are generally raised when you try to access or call an attribute that a particular object type doesn’t possess. Using our prior example, we mentioned that list type objects have a particular set of attributes, including insert, remove, and sort, among others. This means that any list type object has these function attributes.


However, remember that not all objects necessarily have these attributes. This means that if we try to access the same attributes on a different object-type, we might cause Python to throw an error back at us. For example, if we try to use the append attribute of an integer, we will receive an AttributeError, because integer type objects do not possess that attribute:

```
A=5
A.append(2)
Traceback (most recent call last):
  File "<pyshell#1>", line 1, in <module>
    A.append(2)
AttributeError: 'int' object has no attribute 'append'
```

Here we see that Python has returned an AttributeError.Here we see that Python has returned an AttributeError. What it says is that our `int` type object “5” doesn’t have the ability to append. In PyLearn, the error message you’d see would look like the following:

```
line 2:  A.append(2)

AttributeError: Integers cannot 'append'.
```

To see a list of all function and data attributes associated with an object of a given type, simply call the built-in function `help()` on an object of that type in an interactive Python session.

Or, if you want to see a fairly comprehensive overview of types and their attributes, check out the Python documentation on [built-in types](http://docs.python.org/2/library/stdtypes.html).


## **Conclusion**


Attribute errors in Python are raised when an invalid attribute is referenced. To solve these errors, first check that the attribute you are calling exists. Then, make sure the attribute is related to the object or data type with which you are working.

If the attribute you want is associated with a built-in type and does not exist, you should look for an alternative. There are alternatives for many attributes that exist for one data type you can use on another data type. For instance, there is no *extend()* method with sets but you can use *union()* to join to sets.

