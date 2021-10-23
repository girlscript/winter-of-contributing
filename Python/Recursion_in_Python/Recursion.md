# Python Recursion

## <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> What is recursion? </br>
Recursion is the process of defining something in terms of itself.
A physical world example would be to place two parallel mirrors facing each other. Any object in between them would be reflected recursively.

## <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> Python Recursive Function </br>
In Python, we know that a function can call other functions. It is even possible for the function to call itself. These types of construct are termed as recursive functions.

Following is an example of a recursive function to find the factorial of an integer.

Factorial of a number is the product of all the integers from 1 to that number. For example, the factorial of 6 (denoted as 6!) is 1*2*3*4*5*6 = 720.

### Example of a recursive function
```javascript
def factorial(x):
    """This is a recursive function
    to find the factorial of an integer"""

    if x == 1:
        return 1
    else:
        return (x * factorial(x-1))


num = 3
print("The factorial of", num, "is", factorial(num))

```

### Output:

```javascript
The factorial of 3 is 6
```

In the above example, ``` factorial() ``` is a recursive function as it calls itself.

When we call this function with a positive integer, it will recursively call itself by decreasing the number.
Each function multiplies the number with the factorial of the number below it until it is equal to one. This recursive call can be explained in the following steps.

```
factorial(3)          # 1st call with 3
3 * factorial(2)      # 2nd call with 2
3 * 2 * factorial(1)  # 3rd call with 1
3 * 2 * 1             # return from 3rd call as number=1
3 * 2                 # return from 2nd call
6                     # return from 1st call
```
NOTE : I HAVE ADDED MORE EXAMPLES in Recursion in Python folder. 
Our recursion ends when the number reduces to 1. 
#### This is called the base condition.

Every recursive function must have a base condition that stops the recursion or else the function calls itself infinitely.

The Python interpreter limits the depths of recursion to help avoid infinite recursions, resulting in stack overflows.
#### By default, the maximum depth of recursion is 1000. If the limit is crossed, it results in RecursionError. Let's look at one such condition.

```
def recursor():
    recursor()
recursor()
```

### Output:
```
Traceback (most recent call last):
  File "<string>", line 3, in <module>
  File "<string>", line 2, in a
  File "<string>", line 2, in a
  File "<string>", line 2, in a
  [Previous line repeated 996 more times]
RecursionError: maximum recursion depth exceeded
```

## <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> Advantages of Recursion </br>
1). Recursive functions make the code look clean and elegant. </br>
2). A complex task can be broken down into simpler sub-problems using recursion. </br>
3). Sequence generation is easier with recursion than using some nested iteration. </br>

## <img src="https://github.com/priyankapiba/priyankapiba/blob/main/feather1.png" width="30" height="30"> Disadvantages of Recursion </br>
1). Sometimes the logic behind recursion is hard to follow through. </br>
2). Recursive calls are expensive (inefficient) as they take up a lot of memory and time. </br>
3). Recursive functions are hard to debug.

Resource : https://www.programiz.com/
