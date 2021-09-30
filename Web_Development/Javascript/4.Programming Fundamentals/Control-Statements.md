# Control Statements in JavaScript 
*Control  statements is used to execute a block of code when a given specific condition is true. It is also known as Conditional statements.*
|Following are the Control Statements in JS:- |
| --------- |
| If Else | 
| Else If |
| Switch |
| Ternary Operator |
| For |
| While |
| Do while |
| For in |
| For of |

## 1. If-Else Statements :- 
- ***If** statement is used to execute a block of code, if a condition is True.*
- ***Else** statement is used to execute a block of code, if a condition is False.* 

**Syntax ->**
```js script
if (Condition){
  // statement which execute when condition is true.
}
else{
  //statement which execute when condition is false.
}
```
**Example ->**
```js script
if( age >= 18 )
{
  alert("Eligible");
}
else{
  alert("Not eligible");
}
```
## 2. Else-If Statements :- 
- ***Else-if** statement is used to specify a new condition if the first condition is false* 

**Syntax ->**
```js script
if (Condition 1){
  // statement which execute when condition is true.
}
else if(condition 2)
{
  // statement which execute when 1st condition is false but 2nd is true. 
else{
  //statement which execute when condition is false.
}
```
**Example ->**
```js script
if( a > b )
{
  alert("a is greater");
}
else( b > a ){
  alert("b is greater");
}
else{
  alert("Both are equal");
}
```

## 3. Switch Statement :- 
***Switch** statement is used to execute one block of code from many different code blocks based on given expression/condition.*

**Syntax ->**
```js script
switch(expression) {
  case x:
    // statements....
    break;
  case y:
    // statements....
    break;
    .
    .
    .
  default:
    // statements....
}
```

**Example ->**
```js script
var grade = 'A';
 switch (grade) {
  case 'A': 
     alert("Excellent");
  break;
     
  case 'B': 
     alert("Good");
  break
    
  case 'C': 
     alert("Passed");
  break;
     
  case 'D': 
     alert("Do better");
  break;
            
  case 'F': 
     alert("Failed");
  break;
            
  default:  
     alert("Unknown grade")
 }
```
## 4. Ternary Operator :- 
***Ternary** operator assigns a value to variable based on condition.*

**Syntax ->**
```js script
let variable_name = (condition) ? "True-statement" : "false-statements";
```
**Example ->**
```js script
let vote = (age < 18) ? "Not eligible":"eligible";
```
## 5. For loop :- 
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

## 6. While Loop :- 
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
## 7. Do-While :- 
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

## 8. For-In Loop :- 
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
## 9. For-of Loop
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

<hr>
<h1 align = "center"> Thanks For Reading <h1>
