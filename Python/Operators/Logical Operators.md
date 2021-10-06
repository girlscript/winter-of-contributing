# <div align="center">✨ Logical operators in Python 👾</div>

## What are operators?

Operators in general are used to perform operations on values and variables. These are standard symbols used for the purpose of logical and arithmetic operations. The value the operator operates on is known as Operand. In this article, we will look into Logical operators in Python programming.

## Logical operators in python

In Python, Logical operators are used on conditional statements (either True or False). They perform Logical AND, Logical OR and Logical NOT operations.

## Types of logical operators

1. Logical AND(&&) operator - The ‘&&’ operator returns true when both the conditions under consideration are satisfied. Otherwise it returns false. For example, a && b returns true when both a and b are true (i.e. non-zero).

## Example

```py
// Python program to demonstrate
// logical and operator

a = 10
b = 12
c = 0

if a and b and c:
	print("All the numbers have boolean value as True")
else:
	print("Atleast one number has boolean value as False")
```
** Output of above code will be - **
````
Atleast one number has boolean value as False

````

## Note: If In python the first expression evaluated comes out to be false while using AND operator, then the further expressions are not evaluated.

2. Logical OR(||) operator: The ‘||’ operator returns true even if one (or both) of the conditions under consideration is satisfied. Otherwise it returns false. For example, a || b returns true if one of a or b or both are true (i.e. non-zero). Of course, it returns true when both a and b are true.

## Example

```py
// Python program to demonstrate
// logical and operator

a = 10
b = 12
c = 0

if a or b or c:
	print("Atleast one number has boolean value as True")
else:
	print("All the numbers have boolean value as False")
```

**Output of above code will be -**
```
Atleast one number has boolean value as True
```

3. Logical NOT(!) operator: The ‘!’ operator returns true the condition in consideration is not satisfied. Otherwise it returns false. For example, !a returns true if a is false, i.e. when a=0.

## Example -

```py
// Python program to demonstrate
// logical not operator

a = 10

if not a:
	print("Boolean value of a is True")

if not (a%3 == 0 or a%5 == 0):
	print("10 is not divisible by either 3 or 5")
else:
	print("10 is divisible by either 3 or 5")
```

**Output of above code will be -**
```
10 is divisible by either 3 or 5
```
So this is all that you need to know in Logical operators in Python.
<hr>

## Thankyou for reading! ☺🙌