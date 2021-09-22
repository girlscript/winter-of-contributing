# Syntax and Code Structure in JavaScript

- ## Functionality and Readability
There are some syntax rules that are mandatory for JavaScript functionality. If they are not followed, the console will throw an error and the script will cease execution.

Consider a syntax error in the "Hello, World!" program:
```js
// Example of a broken JavaScript program
console.log("Hello, World!"
```
This code sample is missing the closing parenthesis, and instead of printing the expected "Hello, World!" to the console, the following error will appear:
```js
Output:
Uncaught SyntaxError: missing ) after argument list
```
The missing ) must be added before the script will continue to run. This is an example of how a mistake in JavaScript syntax can break the script, as correct syntax must be followed in order for code to run.
<br>

- ## Whitespace
Whitespace in JavaScript consists of spaces, tabs, and newlines (pressing ENTER on the keyboard). Excessive whitespace outside of a string and the spaces between operators and other symbols are ignored by JavaScript. This means the following three examples of variable assignment will have the exact same computed output:
```js
const userLocation      =    "Hello, "     +  "World";
const userLocation="Hello, "+"World";
const userLocation = "Hello, " + "World";
// Output will always be "Hello, World"
```
<br>

- ## Parentheses
For keywords such as ```if```, ```switch```, and ```for```, spaces are usually added before and after the parentheses.
```js
// An example of if statement syntax
if () { }

// Check an equation and print a string to the console
if (9 < 10) {
    console.log("9 is less than 10.");
}

// An example of for loop syntax
for () { }

// Iterate 20 times, printing out each iteration number to the console
for (let i = 0; i <= 20; i++) {
    console.log(i);
}
```
<br>

- ## Semicolon
JavaScript programs consist of a series of instructions known as statements, just as written paragraphs consist of a series of sentences. While a sentence will end with a period, a JavaScript statement often ends in a semicolon (;).
```js
// A single JavaScript statement
const greet = console.log("Hello World");
```
<br>

- ## Indentation
A complete JavaScript program can technically be written on a single line. However, this would quickly become very difficult to read and maintain. Instead, we use newlines and indentation.

Here’s an example of a conditional if/else statement, written on either one line or with newlines and indentation.
```js
// Conditional statement written on one line
if (x === 1) { /* execute code if true */ } else { /* execute code if false */ }

// Conditional statement with indentation
if (x === 1) {
    // execute code if true
} else {
    // execute code if false
}
```
<br>

- ## Identifiers
The name of a variable, function, or property is known as an identifier in JavaScript. Identifiers consist of letters and numbers, but they cannot include any symbol outside of ```$``` and ```_```, and cannot begin with a number.

These names are case sensitive. In a codeblock ```myVariable``` and ```myvariable``` would refer to two distinct variables.

Identifiers also must not consist of any reserved keywords. Keywords are words in the JavaScript language that have a built-in functionality, such as ```var```, ```if```, ```for```, and ```this```.
<br>

Contributor: [Sushovan Banerjee](https://github.com/sushovanb02)
