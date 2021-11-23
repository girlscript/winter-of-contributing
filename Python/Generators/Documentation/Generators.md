# Generators in Python 

Generators are a way to produce results only when needed, rather than producing them all at once. There are two types of generator syntax available in python, namely, 
1. _Generator functions_ : They are normal function that use `yeild` statements to return results one at a time, suspending and resuming their state between each. 
2. _Generator expressions_ : They return an object that produces result on demand rather than producing complete result at a time. 

## Generator Functions

Generator functions are like normal functions in most aspects, and in fact are coded with normal `def` statements. However, when created, they are automatically made to implement the iteration protocol. They use the concept of suspending and resuming, i.e., after returning a value they suspend themselves while saving the entire local scope which will be reloaded when the functions resume. 

Consider the following script,

```python
def generateCubes(N):
    for i in range(N):
        yield i ** 3

generatorObject = generateCubes(4)
print(next(generatorObject))
print(next(generatorObject))
print(next(generatorObject))
print(next(generatorObject))
```

The above script generates the following output,
```
0
1
8
27
```

So let's understand what is happening behind the scenes.
- When we call `generateCubes(4)` it returns a generatorObject which supports the __Iteration Protocol__. 
- Calling `next(generatorObject)` triggers the object to resume, it calculates and returns a result and suspends itelf again. 
- When there are no more results to be generated it raises a `StopIteration` exception. 

Since, generator object is iterable it can be used with other iteration contexts, let's consider for loops, 
```python
generatorObject = generateCubes(4)

for cube in generatorObject:
    print(cube)
```

This script will produce the same result as the script above.

`send()` allows caller to communicate with the generator function, to affect its operation. Consider the following script, 
```python
def buildSquares(N):
    for i in range(N):
        X = (yield i**2)
        print(X)

G = buildSquares(5)
next(G)
reply = G.send("This is the message sent by caller")
print(f'Reply form the generator is {reply}')
```
The above script generates the following output, 
```
This is the message sent by caller
Reply form the generator is 1
```



## Generator expressions

Generator expressions are similar to list comprehensions, but unlike list comprehensions they are enclosed in parentheses `()` instead of square brackets `[]`. 
Consider the following script, 
```python
generatorExpression = (x ** 2 for x in range(4))

for i in generatorExpression:
    print(i)
```
Above script produces the following output, 
```
0
1
4
9
```
<span style="color:yellow; opacity:0.6;">Note: 
Generators are single-iterator objects, i.e., for a given generator object we can iterate over it only a single time, using a single iterator. 
</span>

## Advantages of generators

1. They are better in terms of memory use and performance.
2. They allow functions to avoid calculating all the results upfront. 
3. In advance cases it can be used as a alternative to manually saving state between iterations. 
