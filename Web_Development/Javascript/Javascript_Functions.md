# Javascript Functions

- **Function** is a block of code which gets executed when called.
- **Functions** in javascript also have the same role.
- A **function** can be called multiple times as per the requirements.

### Syntax
```js
 function function_name()           // without parameters
 function function_name(parameters) // with parameters
```
In **Javascript** functions are defined by keyword **function** followed by the name of the function,  
and parentheses **( )**.  

- Function name can be of letters,digits,dollar sign and underscore.
- You can declare **parameters** inside parentheses separated by commas.  
- **(parameter1 , parameter2)**
- Function body is declared inside **{ }** block.
### Example
```js
function product(parameter1 , parameter2)
{
return parameter1*parameter2; // function returns the product of parameter1 andparameter2 
}
```
##### Arguments
- Function parameters are listed inside the parentheses () in the function definition.

- Function **arguments** are the values received by the function when it is invoked.
### Example
```js
function add(p1,p2)   // p1 and p2 are parameters 
{
return p1+p2;
}
:
:
: 
// inside the html body where function is called
add(1,2);       // here 1 and 2 are arguments
```
### Function call
- Generally in javascript a function is called when a button is clicked.
- **onclick** event is used when we want to make a button dynamic.
-  < button onclick="function_name()" >
- A function can also be invoked from a javascript code.

### Function Return 
- A return statement is the statement which marks the end of the function.  
- If the function was invoked from a statement, JavaScript will "return" to execute the code after the invoking statement.
- It can also return a value where it is called.
### Example
```js
let x = myFunction(4, 3);   // Function is called, return value will end up in x

function myFunction(a, b) {
  return a * b;             // Function returns the product of a and b
}
```
**Output**
> x=12  
> 12 will get stored in x

## **Importance Of ( )**
- For invoking a function the correct syntax is **function_name()** .
- If **( )** are missed then you will only get the function definition.
### Example
```js
function division(a,b) { 
return (a/b); 
}
document.getElementById("demo").innerHTML=division;
```
**Output**
> Accessing a function without () will return the function definition instead of the function result:  
> function division(a,b) { return (a/b); }

## **Functions Used as Variable Values**
- Fuctions can also be used as variable values.
- Instead of using a separate variable for storing the value of function 
   you can directly use function as variable.
### Example
```js
let x = calc(7,6);
let text = "The Product is" + x;
//You can use the function directly, as a variable value:

let text = "The Product is " + calc(7,6);
```
- A function can call itself. For example, here is a function that computes factorials recursively:
```js
function factorial(n) {
  if ((n === 0) || (n === 1))
    return 1;
  else
    return (n * factorial(n - 1));
}
``` 
## **Nested functions and closures**

- You may nest a function within another function.
- The nested (inner) function is private to its containing (outer) function.

- It also forms a closure.
- A closure is an expression that can have free variables together with an environment that binds those variables (that "closes" the expression).
- Since a nested function is a closure, this means that a nested function can "inherit" the arguments and variables of its containing function.  
### Example
```js
function addSquares(s1, s2) {
  function square(x) {
    return x * x;
  }
  return square(s1) + square(s2);
}
a = addSquares(2, 5); // returns 29
b = addSquares(3, 4); // returns 25
```
: **Source1 - https://www.w3schools.com/js/js_functions.asp**  
: **Source2 - https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Functions**
