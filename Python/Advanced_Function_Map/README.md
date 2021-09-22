# Python map() function

The map() function is used for applying a function to every item of an iterable. It returns an iterable.

## Syntax:

```bash
map(func,iter,...)
```

## Parameters:

The map() function takes two parameters:

- func: It is a built-in or user-defined function that is applied to each element of the given iterable.
- iter: It is an iterable (list, tuple, sets, etc.) which is to be mapped.

The map() function can take more than one iterable.

## Return Value:

The map() function returns an object of map class. The returned value can be passed to functions like list, tuple or set to return an iterable.

## Example 1

```bash
myNumbers = [1, 2, 3, 4, 5]

# returns cube of a number
def cube(number):
    return number**3

# apply cube() function to each item of the myNumbers list
cubed_numbers = map(cube, myNumbers)

# printing map object
print(cubed_numbers)

# converting to a list and printing
print(list(cubed_numbers))


# Output: <map object at 0x7f722da129e8>
# Output: [1, 8, 27, 64, 125]
```

In the above example, each item of myNumbers list is cubed.

## Example 2

```bash
a = ["1", "2", "3"]

# converting string elements of a list into int datatype
str_to_int = map(int, a)

# converting to a list and printing
print(list(str_to_int))


# Output: [1, 2, 3]
```

In the above example, each item of list a is type converted into int with just one line of code using map()

## Advantage of map function

Python’s map() allows you to apply a transformational function to all the items in an iterable without using an explicit `for` loop.

In order to understand it more clearly, please see the file with extention .ipynb. You can run the file in jupyter notebook by opening the file using

```bash
jupyter notebook
```
