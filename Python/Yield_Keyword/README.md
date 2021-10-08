# Yield Keyword
Yield is a keyword in Python that is used to return from a function without destroying the states of its local variable and when the function is called, the execution starts from the last yield statement. Any function that contains a yield keyword is termed a generator. Hence, yield is what makes a generator.

Python yield returns a generator object. Generators are special functions that have to be iterated to get the values.
The yield keyword converts the expression given into a generator function that gives back a generator object. To get the values of the object, it has to be iterated to read the values given to the yield.

## What are Generators in Python?
Generators are functions that return an iterable generator object. The values from the generator object are fetched one at a time instead of the full list together and hence to get the actual values you can use a for-loop, using next() or list() method.

### Using Generator function
You can create generators using generator function and using generator expression.
A generator function is like a normal function, instead of having a return value it will have a yield keyword. To create a generator function you will have to add a yield keyword. The following examples shows how to create a generator function.
````
def generator():
    yield "H"
    yield "E"
    yield "L"
    yield "L"
    yield "O"

test = generator()
for i in test:
    print(i)
````
### Output:
````
H
E
L
L
O
````

## Advantages of yield: 

- Since it stores the local variable states, hence overhead of memory allocation is controlled.
- Since the old state is retained, the flow doesn’t start from the beginning and hence saves time.

## Disadvantages of yield: 

- Sometimes, the use of yield becomes erroneous if the calling of function is not handled properly.
- Time and memory optimization has a cost of complexity of code and hence sometimes hard to understand the logic behind it.

## Practical Applications: 
The possible practical application is that when handling the last amount of data and searching particulars from it, yield can be used as we don’t need to look up again from start and hence would save time. There can possibly be many applications of yield depending upon the use cases. 


# References
- [What Does Yield Keyword Do](https://stackoverflow.com/questions/231767/what-does-the-yield-keyword-do)
- [Yield Keyword](https://www.geeksforgeeks.org/python-yield-keyword/)
