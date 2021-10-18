<h1>PARAMETERS AND ARGUMENTS IN FUNCTIONS</h1>

Parameters are the value(s) provided in the praranthesis when wwe write function header. These are the values required by function to work.

<h2>Parameters in function</h2>

If there is more than one value required by the function to work upon, then all of them will be listed in parmeter list seperated by comma shown below

![Capture](https://user-images.githubusercontent.com/87525399/135563222-2e519b95-3626-4775-8918-a708ff0e07ae.JPG)

[For Code Snippet](https://github.com/Dhruvpandey08/winter-of-contributing/blob/Python/Python/Parameters_and_Arguments/Parameters_in_function.py)

In the above example, the function S_I(Simple interest) is used to calculate simple interest by passing the values through IDLE, which are termed as arguments

<h2>Passing Arguments in function</h2>

An Argument is a value that is passed to the function when it is called.  i n other words, arguments are the value(s) provided in function call/invoke statement. List of Arguments should be apllied in the same way as parameters are listed.

![Capture](https://user-images.githubusercontent.com/87525399/135565844-643b8cfe-1fa5-4a22-bd1a-6c1f5daacb82.JPG)

Bounding of parameters to arguments is done 1:1 so thee number and type of arguments should be same as mentioned in parameter list.

Regardless of the arguments (including the case of no arguments), a function call must end with parantheses.

Arguments in python can be one of these value types- literals or variables or expressions- but the parameters have to be some names, i.e., variables to hold incoming values; parameters cannot be literals or expressions.

* The Alternative names for argument are actual parameter and actual argument.
* The Alternative names for parameter are formal parameter and formal argument.

<h2> Types of Arguments</h2>

* Positional Arguments

* Default Arguments
 
* Keyword Arguments

* Variable length Arguments


<b>Positional Arguments</b> are arguments passed to a function in correct positional order.

![Capture](https://user-images.githubusercontent.com/87525399/135582084-3af73a05-ddd8-4ac0-bf61-262c34339159.JPG)


[For Code Snippet](https://github.com/Dhruvpandey08/winter-of-contributing/blob/Python/Python/Parameters_and_Arguments/Positional_arguments.py)


![Capture](https://user-images.githubusercontent.com/87525399/135582175-5f90b035-0e08-43df-b1c5-cb5198ff6556.JPG)

As shown in the above program, the number and position of arguments must be matched. If we change their order, then the result will be changed.
If we change the number of arguments passed, then it shall result in an error.


<b>Default Argument</b> is an argument that assumes a default value if a value is not provided in the function call for that argument. Sometimes we can provide default values for our positional arguments.

![Capture](https://user-images.githubusercontent.com/87525399/135583119-5b7bd30d-61a1-4c19-a6b6-0d40a67c6b8f.JPG)

[For Code Snippet](https://github.com/Dhruvpandey08/winter-of-contributing/blob/Python/Python/Parameters_and_Arguments/Default_arguments.py)

If we are not passing any name, then only default values will be considered.

We must remember that if we are passing default arguments to a function, then we should not take non-default arguments, otherwise it will result in an error as shown in below

![Capture](https://user-images.githubusercontent.com/87525399/135583926-f850707f-a389-4c43-93d6-c5962372cd74.JPG)



<b>Keyword Arguments</b> - If there is a function with many parameters and we want to specify only some of them in function call, then value for such parameters can be provide dby using their name instead of the position (order). These are called Keyword Arguments or named arguments.

![Capture](https://user-images.githubusercontent.com/87525399/135584682-092d3327-7445-4029-83a9-1343f3be16be.JPG)

[For Code Snippet](https://github.com/Dhruvpandey08/winter-of-contributing/blob/Python/Python/Parameters_and_Arguments/Keyword_arguments.py)


<b>Variable Length Arguments</b>

![Capture](https://user-images.githubusercontent.com/87525399/135585067-f8698101-8c35-4950-8c30-6fa305ffbe07.JPG)

[For Code Snippet](https://github.com/Dhruvpandey08/winter-of-contributing/blob/Python/Python/Parameters_and_Arguments/Variable_length_arguments.py)

Anything calculated inside a function but not specified as an output(either with return or global) will be deleted once stops running.

