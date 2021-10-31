# format() method in Python
### Introduction  
The ```format()``` is a method that formats the specified strings and place the formatted strings inside the string's placeholder.  
- ***Placeholder*** - The placeholder for any string is defined using ```{}```. These can be in the form of named indexes, numbered indexes or empty. The function also performs variable substitutions. 
   - *named indexes*: {name}
   - *numbered indexes*: {1}
   - *empty*: {}  
- It returns *formatted string*.

#### Syntax
~~~py
	string.format(val1,val2,val3,....,valn)
~~~
val1,val2,val3,..valn represents the values of strings to be formatted and placed in placeholder.  
#### Example  
~~~py
	eg1 = "The language is {lname},developed by {dname}".format(lname="Python",dname="Guido van Rossum")
	eg2 = "The language is {0},developed by {1}".format("Python","Guido van Rossum")
	eg3 = "The language is {},developed by {}".format("Python","Guido van Rossum")
~~~  
***Output:***
~~~output
	The language is Python,developed by Guido van Rossum
	The language is Python,developed by Guido van Rossum
	The language is Python,developed by Guido van Rossum
~~~
### Different ways of using format() method
   - Single formatting
   - Multiple formatting
   - Positional Arguments formatting
   - Keyword Arguments formatting
   - Type specification
   - Spacing and alignments using format()
   - Organizing data

### Single formatting  
In this the formatter has only ***one placeholder***. The formatted string is directly placed in the position of that single placeholder.  
***Example:***  
~~~py
	string1 = "Python has large {} library"
	print("{} is an interpreted language".format("Python"))
	print(string1.format("standard")) 
~~~
***Output:***  
~~~output
	Python is an interpreted language
	Python has large standard library
~~~
### Multiple formatting 
If there is need for substituting variables in more than one position, we use multiple formatting concept. This can be performed by adding extra set of curly brackets```{}``` wherever required. The interpreter replaces all the placeholders with the values passed as parameters. We can add any number of placeholders, but must provide the ```format()``` method with the same number of arguments.  
***Example:***
~~~py
	string1 = "{} has large {} library"
	print("{} is an {} language".format("Python","interpreted"))
	print(string1.format("Python","standard")) 
~~~
***Output:***  
~~~output
	Python is an interpreted language
	Python has large standard library
~~~
### Positional Arguments formatting
In this formatting, the numbered indexes are passed as arugments. The particular index number inside the placeholder is replaced by the corresponding value in arguments list.  
***Example:*** 
~~~py
	string1 = "{0} has large {1} library"
	print("{0} is an {1} language".format("Python","interpreted"))
	print(string1.format("Python","standard")) 
~~~
***Output:***
~~~output
	Python is an interpreted language
	Python has large standard library
~~~
*Note:* If indexes are not provided i.e. empty placeholders exists, then the Python interpreter places the formatted values in order.  
### Keyword Arguments formatting
Keyword formatting enables the ```format()``` method to call the variables for substitution in the placeholder```{}``` using variable names.  
***Example:***  
~~~py
	string1 = "{k1} has large {} library"
	print("{} is an {k2} language".format("Python",k2="interpreted"))
	print(string1.format(k1="Python","standard")) 
~~~
***Output:***
~~~output
	Python is an interpreted language
	Python has large standard library
~~~  
### Type Specification
If many variables are to be substituted it is more apt to use format code syntax. This syntax provides more effective and efficient way of formatting the strings. In this syntax the conversion code is placed inside the ```format()```. Some conversion codes are specified below:  
  - s - strings
  - c - character
  - e - exponential notation
  - f - float
  - d - decimal integers
  - b - binary numbers
  - o - octal numbers
  - x - hexadecimal numbers  

***Example***
~~~py
	string1 = "Python has large {} library"
	print("{}ython is an interpreted language".format("P",'c'))
	print(string1.format("standard",'s')) 
	print("Binary number: {}".format(11101,'b'))
~~~
***Output:***
~~~output
	Python is an interpreted language
	Python has large standard library
	Binary number: 11101
~~~ 
### Spacing and Alignments using format()
The ```format()``` method also provides us the way to apply spaces and alignments inside the placeholder. The codes specified for alignment are as below:  
  - ```<``` - left align
  - ```>``` - right align
  - ```^``` - center align

***Example:*** 
~~~py 
	print("{0:>20} is an {1:^20} language".format("Python","interpreted")) 
~~~
***Output*** 
~~~output
	              Python is an     interpreted      language
~~~
### Organizing the data
In order to organize the data as in excel, ```format()``` method is used. It provides a way to define the spacing among the columns of data, consequently the end user can easily understand the data.  
***Example:*** 
~~~py
	for i in range(5,10):
		print("{:10d} {:10d} {:10d}".format(i,i*i,i*i*i))
~~~
***Output:***
~~~output
	5         25        125
	6         36        216
	7         49        343
	8         64        512
	9         81        729
~~~
### Conclusion
From the above mentioned different ways of using ```format()``` method, it is clear that ```format()``` method in Python provides a proficient way to concatenate the strings, convert the values into desired format and organize the data.
#### References
For more details, refer - 
 - [Edureka](https://www.edureka.co/blog/format-function-in-python/)
 - [Geeks for Geeks](https://www.geeksforgeeks.org/python-string-format-method/)
 - [W3 Schools](https://www.w3schools.com/python/ref_string_format.asp)
