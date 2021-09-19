# What is Function in Python?

You use functions in programming to bundle a set of instructions that you want to use repeatedly or that, because of their complexity, are better self-contained in a sub-program and called when needed. That means that a function is a piece of code written to carry out a specified task. To carry out that specific task, the function might or might not need multiple inputs. When the task is carried out, the function can or can not return one or more values.

Hence, Python Functions is a block of related statements designed to perform a computational, logical, or evaluative task. The idea is to put some commonly or repeatedly done tasks together and make a function so that instead of writing the same code again and again for different inputs, we can do the function calls to reuse code contained in it over and over again. 

## Types of function in Python:

There are three types of functions in Python:

- Built-in functions, such as help() to ask for help, min() to get the minimum value, print() to print an object to the terminal,… You can find an overview with more of these functions here.
- User-Defined Functions (UDFs), which are functions that users create to help them out; And
- Anonymous functions, which are also called lambda functions because they are not declared with the standard def keyword.

### Creating a Function :

In Python a function is defined using the def keyword :

#### Example:
    def my_function():
    print("Hello from a function")

### Calling a Function :

To call a function, use the function name followed by parenthesis:

#### Example :

    def my_function():
    print("Hello from a function")

    my_function()

### Function Arguments in Python :

Earlier, you learned about the difference between parameters and arguments. In short, arguments are the things which are given to any function or method call, while the function or method code refers to the arguments by their parameter names. There are four types of arguments that Python UDFs can take:

- Default arguments
- Required arguments
- Keyword arguments
- Variable number of arguments

### Default Arguments :
Default arguments are those that take a default value if no argument value is passed during the function call. You can assign this default value by with the assignment operator =, just like in the following example:

    # Define `plus()` function
    def plus(a,b = 2):
    return a + b
    
    # Call `plus()` with only `a` parameter
    plus(a=1)

    # Call `plus()` with `a` and `b` parameters
    plus(a=1, b=3)

### Required Arguments
As the name kind of gives away, the required arguments of a UDF are those that have to be in there. These arguments need to be passed during the function call and in precisely the right order, just like in the following example:

    # Define `plus()` with required arguments
    def plus(a,b):
    return a + b

### Keyword Arguments
If you want to make sure that you call all the parameters in the right order, you can use the keyword arguments in your function call. You use these to identify the arguments by their parameter name. Let’s take the example from above to make this a bit more clear :

    # Define `plus()` function
    def plus(a,b):
    return a + b
    
    # Call `plus()` function with parameters 
    plus(2,3)

    # Call `plus()` function with keyword arguments
    plus(a=1, b=2)


_Note that by using the keyword arguments, you can also switch around the order of the parameters and still get the same result when you execute your function :_ 

    # Define `plus()` function
    def plus(a,b):
    return a + b
    
    # Call `plus()` function with keyword arguments
    plus(b=2, a=1)

### Variable Number of Arguments

In cases where you don’t know the exact number of arguments that you want to pass to a function, you can use the following syntax with ***args**:    

    # Define `plus()` function to accept a variable number of arguments
    def plus(*args):
    return sum(args)

    # Calculate the sum
    plus(1,4,5)

The asterisk (*) is placed before the variable name that holds the values of all nonkeyword variable arguments. Note here that you might as well have passed *varint, *var_int_args or any other name to the plus() function.  