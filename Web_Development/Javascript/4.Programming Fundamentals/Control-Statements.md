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
**Output ->**

![ternary](https://user-images.githubusercontent.com/70843941/139685809-8c121a33-e810-4858-8f45-0ce4335baa20.png)

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
**Output ->**

![ForLoop](https://user-images.githubusercontent.com/70843941/139685895-f9c6a797-96c2-4252-b6bf-87bd43e6d7c0.png)

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
**Output ->**

![While](https://user-images.githubusercontent.com/70843941/139685988-f5980ea1-b49d-4a2d-8adb-8f822ddf8f9d.png)

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
**Output ->**

![DoWhile](https://user-images.githubusercontent.com/70843941/139686070-1f061e3b-5dfa-4c46-9bab-5f3dfb9a9877.png)

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
**Output ->**

![ForIn](https://user-images.githubusercontent.com/70843941/139686100-6bae6318-cef4-4f74-b038-7fab22b93c84.png)

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
```
**Output ->**

![ForOF](https://user-images.githubusercontent.com/70843941/139686180-88b2e9bf-e2df-4810-baf4-853c321a5c1b.png)

## Reference Links ->
- [Loops in JavaScript](https://www.geeksforgeeks.org/loops-in-javascript/?ref=lbp)
- [OOP with C++ Book](https://www.amazon.in/Object-Oriented-Programming-C-Balagurusamy/dp/9352607996)

