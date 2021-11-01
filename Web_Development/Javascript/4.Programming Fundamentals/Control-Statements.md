# Control Statements in JavaScript 
*Control  statements is used to execute a block of code when a given specific condition is true. It is also known as Conditional statements.*
|Following are the Control Statements in JS:- |
| --------- |
| Ternary Operator |
| For |
| While |
| Do while |
| For in |
| For of |

## 1. Ternary Operator :- 
***Ternary** operator assigns a value to variable based on condition.*

**Syntax ->**
```js script
let variable_name = (condition) ? "True-statement" : "false-statements";
```
**Example ->**
```js script
let vote = (age < 18) ? "Not eligible":"eligible";
```
## 2. For loop :- 
***For** Loop is used to execute a block of code multiple number of times until a given condition is satisfy.*

**Syntax ->**
```js script
for (initialization; condition; update expression) {
  // statement to be executed
}
```
**Example ->**
```js script
for (let i = 1; i <= 10; i++)
    {
       console.log( "Hello World");    
    }
```

## 3. While Loop :- 
***While loop*** executes a block of code as long as a specified condition is true.

**Syntax ->**
```js script 
while (condition) {
  // statement to be executed
}
```
**Example ->**
```js script
while (i < 10) {
  console.log(i);
  i++;
}
```
## 4. Do-While :- 
***Do-While** executes a code of block ateast once, before checking the condition, then it loops until the condition is true.*

**Syntax ->**
```js script
do {
  // code block to be executed
}
while (condition);
```
**Example ->**
```js script
do {
  console.log(i);
  i++;
}
while (i < 10);
```

## 5. For-In Loop :- 
***for in** statement is used to loops through the properties of an Object.*

**Syntax ->**
```js script
for (key in object) {
  // statement to be executed;
}
```
**Example ->**
```js script
const person = {fname:"nandani", lname:"koli", age:55};

for (let x in person) {
  console.log(person[x]);
}
```
## 6. For-of Loop
***for-of** statement is used to loops through the values of an iterable object, such as Arrays, Strings, Maps, NodeLists, etc*

**Syntax ->**
```js script
for (variable of iterable) {
  // statement to be executed
}
```
**Example ->**
```js script
const lang = "JavaScript";
for (let x of lang) {
  console.log(x);
}

