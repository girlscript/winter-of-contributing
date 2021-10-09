## <p align="center" fontsize=40px> *** Arrays in Javascript *** </p>
## What is Arrays?
Array is a single variable that is used to store different elements. Unlike most languages where array is a reference to the multiple variable, in JavaScript array is a single variable that stores multiple elements.The Array object lets you store multiple values in a single variable. It stores a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.Arrays are commonly used in computer programs to organize data so that a related set of values can be easily sorted or searched.<br><br>
<b>Example of Arrays</b><br>
cars is a variable where can store mutliple value as you can see below Saab,Vaolv,BMW.<br>
const cars = [
  "Saab",
  "Volvo",
  "BMW"
];
<br><br>
<b>Using new Keyword</b><br>
cars is a variable where can store mutliple value as you can see below Saab,Vaolv,BMW.<br>
const cars = new Array("Saab", "Volvo", "BMW");

## Accessing Array Elements
Array index starts with 0 . [0] is the first element. [1] is the second element.<br>
const cars = ["Saab", "Volvo", "BMW"];<br>
let x = cars[0];
console.log(x);

## Changing an Array Element
const cars = ["Saab", "Volvo", "BMW"];<br>
cars[0] = "Opel";<br>
console.log(cars[0]);

## Access the Full Array
The full array can be accessed by referring to the array name:<br>
const cars = ["Saab", "Volvo", "BMW"];<br>
document.getElementById("demo").innerHTML = cars;

## Using Arrays are Objects
Arrays are a special type of objects. The typeof operator in JavaScript returns "object" for arrays.
But, JavaScript arrays are best described as arrays.<br>
Arrays use numbers to access its "elements". In this example, person[0] returns John:<br>
<b>Array ::</b><br>
const person = ["John", "Doe", 46];<br>
document.getElementById("demo").innerHTML = person[0];<br><br>
Objects use names to access its "members". In this example, person.firstName returns John:<br>
<b>Objects ::</b><br>
const person = {firstName:"John", lastName:"Doe", age:46};<br>
document.getElementById("demo").innerHTML = person.firstName;

## Array Properties and Methods
The real strength of JavaScript arrays are the built-in array properties and methods.<br>
- length  :: Returns the number of elements.<br>
- sort()  :: Sorts the array.<br>
- pop()   :: removes the last element from an array.<br>
- toString()   :: converts an array to a string of (comma separated) array values.<br>
- join()       :: method also joins all array elements into a string.<br>
- push()       :: method adds a new element to an array (at the end).<br>
- shift()      :: method removes the first array element and "shifts" all other elements to a lower index.<br>
- unshift()    :: method adds a new element to an array (at the beginning), and "unshifts" older elements.<br>
- delete       :: elements can be deleted by using the JavaScript operator (Using delete may leave undefined holes in the array).<br>
- splice()     :: method can be used to add new items to an array:<br>
- concat()     :: method creates a new array by merging (concatenating) existing arrays:<br>
- slice()      :: method slices out a piece of an array into a new array.<br>

## Looping Array Elements
The safest way to loop through an array, is using a for loop:<br>
const fruits = ["Banana", "Orange", "Apple", "Mango"];<br>
let fLen = fruits.length;<br>
for (let i = 0; i < fLen; i++) {<br>
  fruits[i] ;<br>
}

## What Associative Arrays?
Many programming languages support arrays with named indexes.
Arrays with named indexes are called associative arrays (or hashes).
JavaScript does not support arrays with named indexes.
In JavaScript, arrays always use numbered indexes.  <br>
const person = [];<br>
person[0] = "John";<br>
person[1] = "Doe";<br>
person[2] = 46; <br>
document.getElementById("demo").innerHTML =
person[0] + " " + person.length);<br>
If you use named indexes, JavaScript will redefine the array to an object.
After that, some array methods and properties will produce incorrect results.<br>
 
## The Difference Between Arrays and Objects.
In JavaScript, arrays use numbered indexes.  
In JavaScript, objects use named indexes.<br>

You should use objects when you want the element names to be strings (text).<br>
You should use arrays when you want the element names to be numbers.

## How to Recognize an Array?
<b>How do I know if a variable is an array?</b><br>
The problem is that the JavaScript operator typeof returns "object":<br>
const fruits = ["Banana", "Orange", "Apple"];<br>
typeof fruits;   <br>
The typeof operator returns object because a JavaScript array is an object.<br><br>
- <b>Solution 1:</b><br>
To solve this problem ECMAScript 5 defines a new method Array.isArray():<br>
Array.isArray(fruits); <br>
return true<br><br>
- <b>Solution 2:</b><br>
The instanceof operator returns true if an object is created by a given constructor:
const fruits = ["Banana", "Orange", "Apple"];<br>
fruits instanceof Array;  return true;
