## What are loops ?
Lets say you want to print **"Hello World"** 5 times. Your first instinct would be to ``console.log`` the string 5 times. But what if there would be a simple way to print this multiple times with just a few lines of code, this is where loops comes into play. They would help you to do repeated tasks/opertaions with just a few lines of code.

***For Example :***
```js
// Instead of writing this :
console.log('Hello World!');
console.log('Hello World!');
console.log('Hello World!');
console.log('Hello World!');
console.log('Hello World!');
```
```js
// You can write this :
for(var i = 1; i<=5; i++){
    console.log('Hello World');
}
```
## Different types of loops :
- ``for`` - It loops through a block of code required number of times
- ``for/in`` - It loops through the properties of an object
- ``for/of`` - It loops through the values of an iterable object
- ``while``- It loops through a block of code until a specific condition has not falsified
- ``do/while`` - It also loops a block of code until a specific condition has not falsified

### 1. For Loop:
Syntax of ***for*** loop :
```js
for(intialization; condition; updation){
    //Block of code
}
```
- *Initialization* - This statement will execute only at the start of the loop
- *Condition* - This statement will set a condition which will be checked before the start of every loop and the loop will run until it gets falsified
- *Updation* - This statement will be executed after the completion of every loop

***For Example :***
```js
let sum = 0;
//Sum of first 100 natural numbers :
for(var i = 1; i<=100; i++){
    sum += i;
}
console.log("The sum of first 100 natural numbers : " + sum);
```
Output :
```
The sum of first 100 natural numbers : 5050
```
>### ***Curious Corner :***
>
>**Loop Scope** : 
>Using ``var`` in a loop and ``let`` in a loop may give different results outside the loop
>
>***For Example :***
>```js
>var i = 10;
>
>for (var i = 0; i < 20; i++) {
>  // block of code
>}
>// Here i is 20
>```
>```js
>let i = 10;
>
>for (let i = 0; i < 20; i++) {
>  // block of code
>}
>// Here i is 10
>```
> The reason is ``var`` re-declares the variable outside the scope of loop, this is alos known as ***Hoisting in JS***. But ``let`` do not declares the variable outside the loop and thus the scope of ``let`` is limited within the paranthesis of the loop 

### 2. For In Loop:

Syntax of ***for in*** loop :
```js
for(key in object){
    //Block of code
}
```
- *key* - You can imagine it as the index value of each element in an array. But in case of objects, we have key-value pairs associated with every entry in the object. Thus we can iterate over every entry of an object using it's keys.

***For Example :***

- For in over **objects**
```js
const student = {name:"Gurpreet", roll_no:"101", age:19};

for (let key in student) {
  console.log("Student "+key+" is "+student[key]);
}
```
Output :
```
Student name is Gurpreet
Student roll_no is 101
Student age is 19
```

- For in over **arrays**
```js
const arr = [1,2,3,4,5];
let sum = 0;

for (let index in arr) {
  sum += arr[index];
}

console.log("The array sum is : " + sum);
```
Output :
```
The array sum is : 15
```

>### ***Curious Corner :***
>- Do not use ``for in`` over an array if the index **order** is important.
>
>***For Example :***
>```js
>var obj = {
> "first":"first",
> "2":"2",
> "34":"34",
> "1":"1",
> "second":"second"
>};
>
>for (let key in obj) {
>  console.log("Index: "+key+" and its value is: "+obj[key]);
>}
>```
>Output:
>```
>Index: 1 and its value is: 1
>Index: 2 and its value is: 2
>Index: 34 and its value is: 34
>Index: first and its value is: first
>Index: second and its value is: second
>```
>- It is better to use a ``for loop``, a ``for of`` loop, or ``Array.forEach()`` when the order is important.

### 3. For of Loop:
Syntax of ***for of*** loop :
```js
for (value of iterable) {
  // block of code
}
```
- *value* - For every iteration the value of the next property is assigned to the variable
- *iterable* - An object which can be iterated

***For Example :***

- For of over **arrays**
```js
const arr = ["Mango", "Orange", "Apple"];
let fruits = "";

for (let value of arr) {
  fruits += value + " ";
}

console.log("My favorite fuits are : " + fruits);
```
Output :
```
My favorite fuits are : Mango Orange Apple
```
- For of over **strings**
```js
let str= "Attack on Titan";

let text = "";
for (let x of str) {
  if(x==' ')
    x='*';
    
  text += x;
}
console.log(text);
```
Output:
```
Attack*on*Titan
```

### 4. While Loop:
Syntax of ***while*** loop :
```js
while (condition) {
  // code block to be executed
}
```
- *condition* - Loop will execute until the condition has been falsified

***For Example :***

```js
let i = 1;

// Printing first 5 natural numbers
while (i <= 5) {
  console.log(i+" ");
  i++;
}
```
Output :
```
1 
2 
3
4
5
```

### 5. Do While Loop:
Syntax of ***do while*** loop :
```js
do {
  // block of code
}
while (condition);
```
- *condition* - Loop will execute until the condition has been falsified

> **Note :** ``do while`` loop is different from ``while`` loop because ``do while`` loop checks the condition ***after*** the execution of each loop.

***For Example :***

```js
let students = ["Gurpreet", "Kailash", "Anant", "Pratul"];
let i=0;
do
{
  console.log(students[i]);
  i++;
}
while(i<4)
```
Output :
```
Gurpreet
Kailash
Anant
Pratul
```

>### ***Curious Corner :***
> You can iterate over an array with the help of ``Array.forEach()`` method as well instead of using loops. It was introduced with **ES5** version.
>
>Syntax :
>```js
>array.forEach(function(currentValue, index))
>```
>- *currentValue* - Value of the current element
>- *index* - Index of the current element
>
>***For Example :***
>```js
>let sum = 0;
>const numbers = [1, 2, 3, 4];
>numbers.forEach(myFunction);
>
>function myFunction(value) {
>  sum += value;
>}
>console.log("The sum is : "+sum);
>```
>Output :
>```
>The sum is : 10
>```
**Contributors:** [Harsh Mathur](https://github.com/harshmathurx) and [Gurpreet Singh](https://github.com/gurpreet-legend)

