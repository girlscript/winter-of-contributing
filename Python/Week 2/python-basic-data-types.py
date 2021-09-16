"""
Int is the most basic data type used in programming.
It is used to store an integer value e.g., 5, 12, 67
They are often called just integers or ints. They are
positive or negative whole numbers with no decimal point.
Integers in Python don't have a fixed size.
"""
var1 = 51
print(var1)

var2 = -9
print(var2)

var3 = int(81.243)

# Converts into 81(which is an integer)
print(var3)

"""
Floats represent real numbers and are written with a
decimal point dividing the integer and the fractional parts.
"""
var4 = 15.20
print(var4)

var5 = -1.5
print(5)

var6 = float(31)

# Converts into 31.00(which is a float)
print(var6)
"""
String (str) data type is an array of characters. Python
does not support a character type; these are treated as
strings of length one, thus also considered a substring.
To access substrings, use the square brackets for slicing
along with the index or indices to obtain your substring.
"""
var7 = "Hello World"
print(var7)

var8 = var7[4]

# Stores o in var8. Remember index start from 0.
print(var8)

var9 = var7[0:5] + 'User!'
# Strings are mutable that means you can easily make changes.
print(var9)

##################################################################
"""For more information about other data types refer to the
Python's official documentation."""
