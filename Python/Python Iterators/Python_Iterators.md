# Python Iterators  

### Iterator

An **iterator** is an object that iterates over iteratable objects. Examples of iterable objects are lists, tuples, dictionary, sets, strings. 
- In essence, iterator helps you to *traverse over* a series of values or collection of elements.
- An iterator implements the ***iterator protocol***. Iterator protocol consists of two specials methods ```__iter__()``` and ```__next__()```.

### Iterable object
An object from which you can obtain an iterator is called *iterable object*. Python offers variety of in-built containers like: *list, tuple, string, set* etc. which are *iterables*.  

##### Functioning of iterator protocol
- The ```iter()``` function calls the ```__iter__()``` method (which is part of iterator protocol). It returns an iterator from the iterables.  
- The ```next()``` function iterates through all the elements of the iterator. It produces output as long as elements are available. Once no element is left in the iterator it raises an exception called *"StopIteration"*.  
***Example 1:***
~~~python
	#Program to explain iterator concept
	list_i = ['a', 'b', 'c', 'd']   # iterable - list ( list_i)
	ite = iter(list_i)           # iterator - ite
	print(next(iterator))    # iterate through ite using next()
	print(next(iterator))
~~~
~~~output
	a
	b
~~~
***Example 2:*** 
~~~python
	#Program to show how and when StopIteration exception is raised
	list_i = ['a', 'b', 'c', 'd']   # iterable - list ( list_i)
	ite = iter(list_i)           # iterator - ite
	print(next(ite))          # iterate through ite using next() - 'a'
	print(next(ite))          # 'b'
	print(next(ite))          # 'c'
	print(next(ite))	  # 'd'
	print(next(ite))	  # raises exception, as no items are left
~~~
~~~output
	a
	b
	c
	d
	Traceback (most recent call last):
  	   File "C:\Users\PANDU\OneDrive\Desktop\iterator.py", line 8, in <module>
	      print(next(ite))	  # raises exception, as no items are left
	StopIteration
~~~

### Looping through an iterator 
If you use ```for``` loop for iterating through an iterable, it provides the more elegant way of iteration. Using ```for``` loop you can iterate over any iterable object(String, list, tuple) as they return an iterator.  
***Example:*** 
~~~python
	string = "abc"
	for i in string:
		print(i)
~~~
~~~output
	a
	b
	c
~~~
In the above code -
1. The ```for``` loop automatically creates an iterator and executes the next method for each iteration in the loop.
2. The iterable is *'string'*.
3. The iterator is *'i'*.

### Creating Custom iterators
To build an iterator you have to implement the iterator protocol i.e.``` __iter__()``` and ```__next__()``` methods. The function performed by those methods are discussed above in *functioning of iterator protocol*.  
**Keypoints**
- define ```__iter__()``` method
- define ```__next__()``` method
   - raise *StopIteration* Exception on reaching end.
***Example 1:***
~~~python
	#program to demonstrate the creation of custom iterators
	#infinite iterators
	class Numbers:
	def __iter__(self):	# iter method definition
		self.i = 1
		return self

	def __next__(self):	#next method definition
		x = self.i
		self.i += 1
		return x

	obj = Numbers()        # object creation
	it = iter(obj)             # iterator - it
	print(next(it))           # iterating using next()
	print(next(it))
	print(next(it))
~~~
~~~output
	1
	2
	3
~~~
***Example 2:***
~~~python
	#Program to demonstrate the creation of custom iterators
	#finite iteration - iterate 5 times
	class Numbers:
	def __iter__(self):
		self.i = 1
		return self

	def __next__(self):
		if self.i <= 5:	#iterates 5 times
			x = self.i
			self.i += 1
			return x
		else:		#raises exception after 5 iterations
			raise StopIteration

	obj = Numbers()        # object creation
	it = iter(obj)             # iterator - it
	for j in it:		 #iterate using 'for'
		print(j)
~~~
~~~output
	1
	2
	3
	4
	5
~~~

#### References:
For more details, visit the websites below,
  - [Programiz](https://www.programiz.com/python-programming/iterator)
  - [W3 schools](https://www.w3schools.com/python/python_iterators.asp)
  - [Geeks for Geeks](https://www.geeksforgeeks.org/iterators-in-python/)
