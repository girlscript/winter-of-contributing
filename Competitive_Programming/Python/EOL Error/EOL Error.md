# How to overcome EOL Error in Competitive Programming
## EOL 


**EOL == End Of Line**

An EOL error indicates that Python interpreter expected a particular character or set of characters to have occurred in specific line of code, but that those characters were not found before the end of the line . This results in Python stopping the program execution and throwing a syntax error .The EOL error signifies that the Interpreter of Python reached the end of the line while scanning the string literal.

## syntaxerror : Eol while scanning string literal

Let’s take a look at our error: 

``` 
syntaxerror: EOL while scanning string literal
```

If a syntax error is encountered, Python stops executing a program and gives a error . This is because the Python interpreter needs you to rectify the issue before it can read the rest of your code.

This error is commonly caused by:

- Strings that span multiple lines using the wrong syntax
- Missing quotation marks
- Mismatching quotation marks

### What is String Literal in Python?

String literal is a set of characters enclosed between quotation marks (“). All the characters are noted as a sequence. In Python, you can declare [string literals](https://docs.python.org/3/library/string.html?highlight=string#module-string) using three types, single quotation marks (‘ ‘), double quotation marks (” “), and triple quotation marks (“”” “””). Strings are arrays and their characters can be accessed by using square brackets. 

**String Literal Example**

```
exampleA = 'Single Quotes String'
exampleB = "Single Quotes String"
exampleC = """Single Quotes String"""

print(exampleA[0])  # it will print S
```
## Example : Multiple Lines String

In Python, strings can span multiple lines.  Multi-line strings must be triple quoted, or written using three quotation marks.

let's look at multiple line string - 
``` 
def Coder():
	message = "Welcome, Coders!
When to use iterative development? You should use iterative development only on projects that you want to succeed."
        print(message)

Coder()
```

Output is -
 
```
SyntaxError: EOL while scanning string literal
```
An error is returned because a string using single or double quotes cannot span multiple lines. To solve this problem, we need to enclose our string with three single or double quotes.

Now look at the correct code -
```
def Coder():
	message = """Welcome, Coders!
When to use iterative development? You should use iterative development only on projects that you want to succeed."""
        print(message)

Coder()
```
Output is -
 
```
Welcome, Coders!
When to use iterative development? You should use iterative development only on projects that you want to succeed.
```

## Example : Missing Quotation Mark

Strings must be closed after the contents of a string have been declared. Otherwise, Python returns a syntax error. 

Let’s take a look at a string that is not closed:
```
def Coder():
	message = "Welcome, Coders!
        print(message)

Coder()
```
Let's check the output - 
```
SyntaxError: EOL while scanning string literal
```
An We have forgotten to close our string. If you look at the line of code where we declare the “message” variable, there is no closing string character.
We can fix this error by closing our string using the same quotation mark that we used to open our string.
```
def Coder():
	message = "Welcome, Coders!"
        print(message)

Coder()
```
Output - 

```
Welcome, Coders!
```
Now code runs successfully.

##Example : Mismatching Quotation Marks

The type of quote you use to open a string should be the same as the type of quote you use to close a string.

A syntax error is returned when the types of quotes that you use to open and close a string are different. Let’s take a look at a program that opens a string using a single quote mark (‘) and closes a string using  a double quote mark (”) :
```
def Coder():
	message = 'Welcome, Coders!"
        print(message)

Coder()
```

Output - 

```
SyntaxError: EOL while scanning string literal
```
We can fix this problem by making our quotations match. We’re going to change our first quotation mark to use double quotes (“):

```
def Coder():
	message = "Welcome, Coders!"
        print(message)

Coder()
```

Output - 

```
Welcome, Coders!
```
Now our code runs successfully.

## Conclusion: EOL While Scanning String Literal


Strings have helpful in thousands of ways in Python. As using them can provide easy access to a sequence of characters and their attributes. The only problem is that you have to take care of their syntax. Any invalid syntax and invalid backslashes in the string can cause EOF errors to appear. To avoid this error, follow all the steps from the post above.
