## Dictionary Comprehension

This documentation aims to organize the concepts of ***dictionary comprehension*** and other implementations revolving around it. The following topics are how we will walk through the concepts of dictionary comprehension.


## ***📝Index***
- Introduction
- Recalling Dictionaries
  - Properties of Dictionary
  - Dictionary Declaration and Initialization
- Dictionary Comprehension
- Implementing Dictionary Comprehension
- Why Use Dictionary Comprehension?
- Some common applications of Dictionary Comprehension
  - 1. Alternative to explicit for loops
  - 2. Alternative to lambda functions
- Some more examples of dictionary comprehension using if conditionals
- Advantages of Using Dictionary Comprehension
- Warnings on Using Dictionary Comprehension

## ***📌Introduction***
Comprehensions specifically mean creating or retrieving and storing new objects from existing objects. So far ***lists comprehension*** in Python has been a well-discussed and widely used topic and of course, we can extend the idea of comprehension technique to dictionaries in Python too. This opens up multiple ways to introducing code that is cleaner, more efficient, and intuitive. It encourages best practices in Python programming while using our data structures efficiently.

## ***📌Recalling Dictionaries***
Dictionaries are powerful data structures in Python. They are in the form of key-value pairs. Thus, it is like a compound data structure, consisting of two different data elements in itself, the key and the value. 
## ***Properties of Dictionary***
A quick peek at the key properties of a dictionary to remember:
- While the keys must be unique, immutable (who values can not be changed directly after its declaration), and hashable (objects having a hash value) datatype, the values can belong to almost any type of data in Python
- They can be heterogeneous, that is, a single dictionary can contain multiple data types in it, provided the above restriction
- A dictionary can have only unique keys
- Values in the dictionary can be overwritten, dictionaries are overall mutable
- Have no guaranteed order (sequence of values in the dictionary)

## ***Dictionary Declaration and Initialization***
Two ways of declaring a python dictionary are:
- ``` 
    my_dict = {}
  ```
- ``` 
    my_dict = dict()
   ```
  
Using the `dict()` class to declare a dictionary is a good practice. It should be noted that declaring a variable with `{}` makes it a dictionary, not a set. This can be verified using the `type()` function in Python.

## ***📌Dictionary Comprehension***
It is the way we try to make new dictionaries from existing ones while trying to retrieve particular values from the dictionaries or trying to customize one to suit a new purpose of work. It can also be used to create completely new dictionaries as well in beautiful one-liners.

For example, we might have a dictionary as follows:
```
  >>> my_dict = { 'odd': [1,3,5], 'even': [2,4,6] }
```
We might want to get the sum of values as:
``` 
  >>> my_dict = {i: sum(j) for i,j in my_dict.items() }
  >>> print(my_dict)
  {'even': 12, 'odd': 9}
```

## ***📌Implementing Dictionary Comprehension***
The common dictionary methods while implementing dictionary comprehension are:
- ***keys():*** gives an object with access to all the keys in a dictionary

- ***values():***  returns an object with access to the values in a dictionary

- ***items():***  returns a object with all the key-value pair as tuple

Recall the function of these methods as follows:
``` 
 >>> print( my_dict.keys(),  my_dict.values(), my_dict.items(), sep="\n")
 dict_keys(['odd', 'even'])
 dict_values([9, 12])
 dict_items([('odd', 9), ('even', 12)])
```
## ***📌Why Use Dictionary Comprehension?***
In the course of any data science projects or while managing data structure we often tend to use dictionary comprehension. The benefits of using a dictionary are known to us, and knowing the power of the dictionary we use it so often that it becomes a good practice to use dictionary comprehension while organizing them efficiently as well.
The following code snippets will unravel the utility of this as an elegant and concise way of creating dictionaries.

## ***📌Some common applications of Dictionary Comprehension***
- Alternative to explicit for loops:

  Consider the following code where we use for loop to append to the dictionary `square_dict`: 

```
  square_dict = dict()
  for num in range(1, 11):
      square_dict[num] = num*num
  print(square_dict)
```
Its alternative using comprehension:
```
  square_dict = {num: num*num for num in range(1, 11)}
  print(square_dict)
```
The output in both the case:
```
  {1: 1, 2: 4, 3: 9, 4: 16, 5: 25, 6: 36, 7: 49, 8: 64, 9: 81, 10: 100}
```
- Alternative to lambda functions
  
  Using lambda functions can be complex:
  ```
    >>>d = {1:11, 2:12, 3:13, 4:14}

      #Get the corresponding `square` list values
      squared_d = list(map(lambda x: (x**2) , d.values()))

      #Create the `squared` dictionary
      squared_dict = dict(zip(d.values(), squared_d))

      print(squared_dict)
      Output:
      {11: 121, 12: 144, 13: 169, 14: 196}
  ```
  Here, the lambda function grabs the values in the dictionary `d` and performs the operation of squaring it to 2. The squared values are stored in the list `squared_d`. Finally, we create the dictionary `squared_dict` mapping the values in `d` with the squares in `squared_d`. You may know more about [zip](https://docs.python.org/3/library/functions.html#zip), [lambda](https://python-reference.readthedocs.io/en/latest/docs/operators/lambda.html) and [map](https://docs.python.org/3/library/functions.html#map) functions.
  
  Its alternative can be as follows giving the same output:
  ```
      squared_dict = {j:j**2 for j in d.values() }
      print(squared_dict)
  ```
## ***📌Some more examples of dictionary comprehension using if and if-else conditionals***
Use of if-else conditionals is the use of customizing a dictionary as per our purpose.

1. ```
      >>>original_dict = {'jack': 38, 'michael': 48, 'guido': 57, 'john': 33}    # a dictionary with name and ages as key and values

        even_dict = {k: v for (k, v) in original_dict.items() if v % 2 == 0}  # comprehension to add only those names where age is even
        print(even_dict)
        Output :
        {'jack': 38, 'michael': 48}
    ```
2.  ```
      >>>original_dict = {'jack': 38, 'michael': 48, 'guido': 57, 'john': 33}

        new_dict = {k: v for (k, v) in original_dict.items() if v % 2 != 0 if v < 40}  # here, we use multiple conditions, if age is odd and less than forty
        print(new_dict)
        Output:
        {'john': 33}
    ```
    
  In this case, only the items with an odd value of less than 40 have been added to the new dictionary.

  It is because of the multiple if clauses in the dictionary comprehension. They are equivalent to an operation where both conditions have to be true.


3. ```
      >>>original_dict = {'jack': 38, 'michael': 48, 'guido': 57, 'john': 33}

        new_dict_1 = {k: ('old' if v > 40 else 'young') for (k, v) in original_dict.items()}  # here, we use if-else blocks within the comprehension
        print(new_dict_1)
        Output:
        {'jack': 'young', 'michael': 'old', 'guido': 'old', 'john': 'young'}
    ```
   
  In this case, a new dictionary is created via dictionary comprehension.

  The items with a value of 40 or more have the value of 'old' while others have the value of 'young'.


4. 
    We can add dictionary comprehensions to dictionary comprehensions themselves to create nested dictionaries.  
   ```
      >>>dictionary = { k1: {k2: k1 * k2 for k2 in range(1, 6)} for k1 in range(2, 5)}   # here, we use nested dictionaries to create dictionaries as values.   
        print(dictionary)
        Output
        {2: {1: 2, 2: 4, 3: 6, 4: 8, 5: 10}, 3: {1: 3, 2: 6, 3: 9, 4: 12, 5: 15}, 4: {1: 4, 2: 8, 3: 12, 4: 16, 5: 20}}

   ```
   As you can see, we have constructed a multiplication table in a nested dictionary, for numbers from 2 to 4.

   Whenever nested dictionary comprehension is used, Python first starts from the outer loop and then goes to the inner one.
   
   The above block of code can be unfolded as follows:
   ```
        dictionary = dict()
        for k1 in range(11, 16):
            dictionary[k1] = dict()  
            for k2 in range(1, 6):
                dictionary[k1][k2] = k1*k2
        print(dictionary)

   ```
## ***📌Advantages of Using Dictionary Comprehension***
As we can see, dictionary comprehension shortens the process of dictionary initialization by a lot. It makes the code more pythonic.

Using dictionary comprehension in our code can shorten the lines of code while keeping the logic intact.

## ***📌Warnings on Using Dictionary Comprehension***
Even though dictionary comprehensions are great for writing elegant code that is easy to read, they are not always the right choice.

We must be careful while using them as :

- They can sometimes make the code run slower and consume more memory.
- They can also decrease the readability of the code.
We must not try to fit a difficult logic or a large number of dictionary comprehension inside them just for the sake of making the code single-lined. In these cases, It is better to choose other alternatives like loops.


***The [notebook](https://github.com/TishaJhabak1014/winter-of-contributing/blob/Python/Python/Dictionary_Comprehension/Dictionary_Comprehension.ipynb) walks you through the concepts discussed here with more examples.***


