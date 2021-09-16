## What is scope?
Scope in javascript manages availability of variables. Let's take an example
``` javascript
var a=100 ;
console.log(a); // 100
```
You can easily console log this variable. Let's consider another 
example
``` javascript 
if (true) {
  const a = 2;
}
console.log(a); //ReferenceError
```
This time javascript throws an error. Why is it so?
Because **if** block creates a scope for `a` and `a` can be used within that scope only.
You are free to access the variable within its scope , but a variable cannot 
be accessed outside its scope.
<hr>

## What is the lifetime of JavaScript variables?
The lifetime of a JavaScript variable starts as soon as it is declared.
Local variables are deleted when the function is completed.
In a web browser, global variables are deleted when you close the browser window (or tab).
<hr>

## Syntax to write a function in javascript 
- Use the keyword **function** followed by the name of the function.
- After the function name, open and close parentheses.
- After parenthesis, open and close curly braces.
- Within curly braces, write your lines of code.
``` javascript 
function funcName()
{

  lines of code to be executed

}
```
Let's look at an example 
``` javascript 
function sayHello(){
   console.log("Hello");
}
```
This function will console log hello.
<hr>

## What are parameters in functions?
A parameter is a named variable passed into a function. Parameter variables
are used to import arguments into functions which means parameters are given 
while function definition.

### Let's see a difference between arguments and parameters 
- Parameters are given while function definition.
- Function arguments are the real values passed to the function.

<hr>

### Types of function in javascript 
1. Anonymous Function 
- Anonymous function is a function with no name.
- Let's look at its syntax.
```javascript 
var fullName = function(firstName, lastName) {
 //code goes here
}
```

2. Generator Functions 
- Generators are functions that can be exited and later re-entered. 
- Let's have a look at its syntax.
``` javascript 
function* name(param) {
   statements
}
```

3. Arrow Function 
- An arrow function expression is a compact alternative to a traditional function expression, but is 
limited and can't be used in all situations.
- The syntax is as follows 
``` javascript 
(a) => {
  return a + 100;
}
```
<hr>

## Why use functions?
Functions are a good alternative to having repeating blocks of code in a program. Functions also increase the reusability of code. Values can be passed to a function using variables – we call these parameters or arguments.
Functions can also return values.

