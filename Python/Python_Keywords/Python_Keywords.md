# Keywords in python

Keywords are also known as ***“Reserved words”***. Keywords are the words which are used in defining the syntax and structure of the python language. These words can’t be used as names for variables, functions, classes or any other identifiers.  
Python 3 has *33 keywords* and Python 2 has *30 keywords*. Currently most of us are using Python 3 to execute programs. To determine how many keywords are defined in the version of python we are using to run programs, use the following code:
~~~python
	import keyword
	keyword.kwlist
~~~
~~~output
	['False', 'None', 'True', '__peg_parser__', 'and', 'as', 'assert', 'async', 'await', 'break', 'class', 'continue', 'def', 'del', 'elif', 'else', 'except', 'finally', 'for', 'from', 'global', 'if', 'import', 'in', 'is', 'lambda', 'nonlocal', 'not', 'or', 'pass', 'raise', 'return', 'try', 'while', 'with', 'yield']
~~~
Some keywords are used very often in the programs. They are:
### True: 
It is a reserved word which represents the Boolean value ***true*** or ***1***. When a condition is checked, if it is *true*, then it returns ```True```. The values *other than zero* i.e. nonzero values are considered as ```True```.  
*Eg:* 
~~~python
	>>>3>2      
	>>>True
~~~
### False:
It represents the Boolean value ***false*** or ***0***. A condition is checked, if it is *false*, then it returns ```False```. Also the value *zero (0)* is considered as ```False```.  
*Eg:* 
~~~python
	>>>3<2
	>>>False
~~~  
### and:
It is a logical operator used to check multiple conditions. It returns ```True``` if all the conditions are *true* and returns ```False``` if at least one of the conditions is *false*.  
***Truth values:***  
Let two conditions be P, Q then,
 - if P is *True*, Q is *True*; then P and Q is *True*
 - if P is *True*, Q is *False*; then P and Q is *False*
 - if P is *False*, Q is *True*; then P and Q is *False*
 - if P is *False*, Q is *False*; then P and Q is *False*

### or:
It is a logical operator which checks multiple conditions and return ```True``` if anyone of the condition is true. It returns ```False```, if all the conditions are false.  
***Truth values:***  
Let two conditions be P, Q then,
- if P is *True*, Q is *True*; then P and Q is *True*
- if P is *True*, Q is *False*; then P and Q is *True*
- if P is *False*, Q is *True*; then P and Q is *True*
- if P is *False*, Q is *False*; then P and Q is *False*

### not:  
It is a logical operator which *inverts* the truth value of a condition. If the condition is true it returns ```False``` and if the condition is false it returns ```True```.  
***Truth values:***  
Let the condition be P then,
- if P is *True*, then not P is *False*
- if P is *False*, then not P is *True*

### is: 
It is an ***identity operator*** which checks for identity of operands. It is used to compare two variables and checks whether both the variables have the same value or not. It returns ```True``` if both the operands are same, otherwise it returns ```False```.  
*Eg:*
~~~python
	>>>python is python
	>>>True
~~~
~~~python
	>>>pyt is python
	>>>False
~~~ 
### in:  
It is a ***membership operator***. The keyword ```in``` is used in two cases:
 - To check if a value is present in a list, tuple, range, string, etc.
 - To iterate through a sequence in a for loop.  
*Eg:* 
~~~python
	>>>‘p’ in ‘python’
	>>>True
~~~
~~~python
	>>>‘q’ in ‘python’
	>>>False
~~~
### import:  
The ```import``` keyword is used to import required modules. A module is a file with python code.  
*Eg:* 
~~~python
	>>>import math
	>>>print(math.sqrt(16))
	4
~~~
### from:
```from``` is a keyword in python, it is used to import a specific section from a module, like functions, classes, etc.  
*Eg:*
~~~python
	>>>from math import sqrt
	>>>print(sqrt(16))
	4
~~~
### as:
It is used to create a new name to an object.  
*Eg:*
~~~python 
	>>>import math as m
	>>>print(m.sqrt(16))
	4
~~~
### with:
Creates a ```with``` block to make exception handling and file operations easy. It is used to make the code compact and readable. It releases the resource after the code is completely executed.  
When used in files ```with``` statement will *automatically close the file* after the execution.  
*Eg:*
~~~python 
	with open('file1.txt', 'w') as file: 
		file.write('welcome to python')
~~~       
### if:
It is a conditional statement used for making decisions. The ```if``` statement has a logical expression or condition which decides execution of a particular block takes place or not.  
If the condition is ```True```, then the statements in ```if``` block are executed. Otherwise it is not executed.  
***Syntax:***
~~~python
	if(condition):
		#code to execute if condition is true
~~~
### else:
The ```else``` statement is used along with ```if``` statement. When ```if``` statement returns ```false```, the statements in ```else``` are executed.  
***Syntax:***
~~~python
	if condition:
		#statements
	else:
		#statements
~~~
*Eg:* 
~~~python
	if(age>18):
		print(“Eligible to vote”)
	else:
		print(“Not eligible to vote”) 
~~~
### elif:  
It is used for defining a decision making statement which checks multiple conditions. First the ```if``` condition is executed. If it evaluates to ```False``` then the control is given to ```elif``` blocks. The ```elif``` block whose condition evaluates to ```True``` is executed.  
***Syntax:***
~~~Python
	if condtion:
		#statements
	elif condition:
		#statements
	elif conditon:
		#statements
~~~  
*Eg:*
~~~python
	num =1
	if(num<0):
		print(“Number is negative.”)
	elif(num>0):
		print(“Number is positive.”)
	elif(num==0):
		print(“Number is neither positive nor negative.”)
~~~
### while:  
The keyword ```while``` is used to define while loop in python. ```while``` loop is used to iterate over a block of code several times until the condition returns ```false```.  
It is used when the number of times the loop requires execution is *not known* in advance.  
***Syntax:***
~~~python
	while condition:
		#statements
~~~  
*Eg:*
~~~python 
	N=1
	while N<5 :
		print(N,end=' ')
		N=N+1
~~~
~~~output     
	1 2 3 4
~~~  
### For:
It is a keyword used for iteration and creates for loop. ```for``` keyword is used in two ways:
 - To iterate over a sequence i.e. list, tuple, dictionary, string.
 - To iterate ```for``` loop within the given range.  
***Syntax:***  
1. Iterate over sequence
~~~	
	for value in sequence:
		#statements 
~~~
2. Iterate over given range
~~~	
	for value in range(start,stop,skip):
		#statements
~~~
*Eg 1:*
~~~python
	Lst=[1,2,3]
	for i in Lst:
		print(i,end=" ")
~~~
~~~output
	1 2 3 
~~~
*Eg 2:*
~~~python
	for i in range(0,4,1):
		print(i,end=" ")   
~~~
~~~output
	0 1 2 3
~~~
### break:  
```break``` keyword is used to terminate the execution of ```for```/```while``` loop. The loop control is then transferred to the end of loop and resumes the execution at next statement.  
*Eg:*
~~~python
	for i in range(0, 5,1):
		if(i==4):
			break
		print(i,end=" ")
~~~
~~~output
	0 1 2 3
~~~
### continue:  
```continue``` keyword stops the execution of current iteration. It returns the control of loop to beginning i.e. rejects execution of remaining statements in the current iteration.  
*Eg:*
~~~Python
	for i in range(0,5,1):
		if(i==3):
			continue
		print(i,end=" ")
~~~
~~~Output
	0 1 2 4
~~~
### def:     
```def``` is a keyword used to declare a function in python. It is placed before the user defined function name.   
***Syntax:***
~~~
	def function_name:
		#statements
~~~
*Eg:*
~~~python
	def add_func(a,b)	#Function definition
		c=a+b
		print(c) 
	add_func(1,2)
~~~
~~~output
	3
~~~
### class:  
It is used to create and represent the class in python. A ```class``` is blueprint of objects i.e. it acts like an object constructor. It is a collection of variables, functions, methods.  
*Eg:* 
~~~python
	class student:	# Class definition
		std_name=”abc”
		std_id=1
	s1=student()
	print(s1.std_name) 
~~~
~~~output
	abc
~~~
### return:  
```return``` keyword is used to exit the current function and return a value i.e. it returns value of the expression followed by the keyword ```return```. The statements after ```return``` are not executed and if the ```return``` statement doesn’t have any expression, then ```none``` value is returned.  
*Eg:*
~~~python
	def add_func(a,b)
		c=a+b
		return c
	print(add_func(1,2))  #calls the function
~~~
~~~output
	3  
~~~
### try, except:
The try/except are the keywords used in exception handling. 
 - ```try``` block is used to test a block of code for errors.
 - ```except``` block is used to handle the error.
*Eg:*
~~~python
	try:
		b=0
		a=1/b
		print(a)
	except ZeroDivisionError:
		print(“Zero Division Error”)
~~~
~~~output
	Zero Division Error
~~~
### finally:  
The ```finally``` keyword is used to create a block of code that is executed always regardless of the result of ```try```/```except``` blocks.
*Eg:* 
~~~python
	try:
		b=0
		a=1/b
		print(a)
	except ZeroDivisionError:
		print(“Zero Division Error”)
	finally:
		print(“End”)
~~~
~~~output
	Zero Division Error
	End 
~~~        
### References:
For more details visit,
 - [Geeks For Geeks](https://www.geeksforgeeks.org/python-keywords-and-identifiers/)
 - [Programiz](https://www.programiz.com/python-programming/keywords-identifier#:~:text=Keywords%20are%20the%20reserved%20words,Python%2C%20keywords%20are%20case%20sensitive.)
