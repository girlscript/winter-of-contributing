# Python Itertools  
Python provides a wide range of useful modules and itertools is one of them. Python’s Itertool is a module that provides various functions that work on iterators to produce complex iterators. This module works as a fast, memory-efficient tool that is used either by themselves or in combination to form iterator algebra. 
<br>

</br>  

# Types of iterators. 
First of all inorder to access itertools module one needs to import it in the code. 
```
import itertools 
``` 
<ul>
    <li>Infinite iterators</li>
    <li> Combinatoric iterors</li> 
    <li> Terminating iterators</li>
</ul> 
We will briefly talk about each of these:

## 1.) Infinite iterators: 
Sometimes iterators need to be infinite and the inbuilt iterators i.e for,while etc do not perform it very well. 

**count(start,skip)**:the count function takes two parameters start i.e the start number and skip which is optional, count iterates over the numbers from start skipping <mark> skip</mark> number of integers. 
 ```
 for i in itertools.count(3,3):
    if i==12:
        break
    else:
        print(i,end=" ")    

OUTPUT: 3 6 9 
```          

**cycle(value)**: this iterator prints the "value" in cyclic order when it reaches the end i.e it keeps on printing in clockwise order.

## 2.) Combinatoric iterors:
Now we all know how much combinatoric is used in programmin be it simple algorithms or whne you are doing competitive programming, here python saves you the hard work. 

**Permutations()**: It does exactly what it sounds like, this iterator function returns all the permutations of the given value.This takes two parametres one the value and the other group size (optional) if not mentioned it finds permutations of the length of the value. 
```
print(list(itertools.permuations('AB')))

OUTPUT:[('A','B'), ('B','A')]
```

**Combinations()**: It's not hard to predict what it does, it returns all possible combinations of the passed in value.This too takes in two parametres one the value and the other group size.
``` 
print(list(itertools.combinations("ABC",2)))

OUTPUT: [('A','B'), ('A','C'),('B','C')]    
```

## 3.)Terminating iterators:

**accumulate(val, function)**: This iterator takes two arguments, target and the function which would be followed at each iteration of value in target. If no function is passed, addition takes place by default. If the input iterable is empty, the output iterable will also be empty.

**compress(val, selector)**: This iterator selectively chooses the values from the passed in iterable and compares the position of each value with the position value in the selector that will be a boolean data type and if the position corresponds to false it will skip that value and move on. 

**chain(val1, val2..)**: This function is used to print all the values in iterable targets one after another mentioned in its arguments.

<br>

</br>
<i> This is just a gist if what there is in this python module be sure to look out for more there are loads of amazing iterators here. </i>

Some of the content was written with reference to geeksforgeeks.com