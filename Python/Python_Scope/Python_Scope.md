
# Python Scope

---

A **variable** is storage location or container that stores data. They acts as reference or as pointers to an object in the memory location. In python we need not declare the variables before its usage. They can be created at the moment we first use it and can be assigned a value at that point itself.

<p align="center">
   <img src="https://miro.medium.com/max/900/1*y3095_m-i41raJC94l01qA.jpeg" width="250" height="250">
</p>

*Eg:*  
~~~python
	> x = 10
	> y = "python"
~~~
Here x, y are variables that store values 10, "python" in it respectively.

## Scope  
A variable used in any program is available only in the region where it is created. This property is called **scope of a variable**. It is the location at which we can find and obtain the value by accessing a variable.

There are different scopes for a variable, depending on the location where is created. So we have two types of variables in python called Global and Local variables.
- ***Global variables*** - These are variables that are declared and defined *outside* any function or inside the main function. as the name suggests these have *global scope* i.e. accessible throughout the program.
- ***Local variables*** - These are variables that are created *inside* a function. These variables have *local scope* only, and can be accessed only inside the particular function.

## Local Scope
It is the scope where a local variable can be accessed and used in the program. A variable created inside a function, can be used only by that function only i.e. it has ***local scope***.

***Example 1:***
~~~python
	def func1:
		x = 10  #x has local scope
		print(x)
	#main function
	func1()
~~~
~~~Output
	10
~~~
In the above code, 
- A variable ***x*** is declared and assigned a value
- "x" has Local Scope and available only to ***func1()*** .

***Example 2:***
The value of local variable is available for the functions inside the function
~~~python
	def func1():
		x = 10 #Local variable, has Local Scope
		print(x)
		def innerfunc1():
			#x value accessed from outer function 
			print(x) #Local variable
			#x value inside the inner function, it overrides the outer value of x.
			x = 20
			print(x)
		innerfunc1()
	func1()
~~~
~~~output
	10
	20
~~~

## Global Scope
It is the scope where a global variable is declared and defined for using it. A variable created outside the function or in the main function is accessible for all functions and sub functions of the program i.e. it has ***global scope***

*Example 1:*
~~~python
	x = 100 #Global variable, has Global scope	
	def func2():
		#x accessed inside the function
		print(x) 
	
	func2()
	#x accessed outside the function
	print(x)	
~~~
~~~output
	100
	100
~~~

***Example 2:*** 

If the global and local variable has ***same name***, then the python interpreter will treat them as separate and execute them.

~~~python
	x = 100  #x has global scope
	def func3():
		x = 10  #x has local scope
		#Here the local value of x is displayed
		print(x)
	
	func3()
	#Here the global value of x is displayed
	print(x)
~~~
~~~output
	10
	100
~~~
In the above code,
- The variable 'x' inside the func3() is treated as ***local variable*** and it has *local scope*. Hence the local value *10* is printed.
- The variable 'x' outside the func3() is treated as ***global variable*** by the interpreter and it has *global scope*. Hence it prints value *100* .

### Conclusion
A brief idea of what a variable is and its scope are explained. We understood different types of scope in python and discussed various cases.

- For more details, refer the websites
   - https://www.w3schools.com/python/python_scope.asp
   - https://www.geeksforgeeks.org/python-scope-of-variables/	