# JavaScript Data Types
Data Type means the type of value being assigned to an variable.

JavaScript is a __dynamic type__ language, which means there's no need to specify the type of the variable because it is dynamically used by JavaScript Engine and the same variable can be used to hold different data types.

You need to use __var__ to specify the data type.

__Example:__
```javascript
var a=10; //this is holding number
var b="XYZ"; //this is holding strings
```
There are two types of data types in JavaScript:
1. Primitive Data Types
2. Non-Primitive Data Types

# JavaScript Primitive Data Types
## 1. String
A String is sequence of Characters like "GirlScript Winter Of Contributing"

String are written with quotes. You can use single or double quotes.

__Example:__
```javascript
let str1 = "GWOC"; //using double quotes
let str2 = 'GSSOC'; //using single quotes
```
_Note:_ Strings in JavaScript are immutable which means once a String object is assigned to String reference the object value cannot be changed. However, we can still assign a new object to a String reference.

## 2. Number
It represents numeric values. Numbers can be written with or without decimal.

__Example:__
```javascript
let x = 50; //without decimal
let y = 55.55; //with decimal
```
## 3. Boolean
It represents boolean value i.e ```true``` or ```false```

__Example:__
```javascript
let islarger = 5>4;
alert(islarger); // will return true
```
Booleans are often use for conditional testing.

## 4. Undefined
A variable without a value, has the value ```undefined```. And the type is also ```undefined```.

__Example:__
```javascript
let bike; // value is undefined, the type is undefined

//Any variable can be emptied by putting the value to undefined, and the type will also be undefined

let age = 18;
age = undefined; // now the value is undefined and type is also undefined
```
## 5. Null
It represents null i.e no value at all.

__Example:__
```javascript
let rollNo = null; // value here is unknown
```
# Difference Between ```null``` and ```undefined```
1. ```undefined``` is a type whereas ```null``` is an object.
2. ```undefined``` means a variable has been declared, but no value has been assigned to it.

    whereas ```null``` means you can assign it to the variable.
    
# JavaScript Non-Primitive Data Types
## 1. Object
It represents instances through which we can access the members.

Objects are written with curly braces <kbd>{ }</kbd>. Object properties are written as name:value pairs seperated by commas.

__Example:__
```javascript
const person = {
    name : "Peter",
    age : 40,
    nationality : "Indian"
};
```
## 2. Arrays
Arrays are collection of values of similar data type.

JavaScript Arrays are written with square bracket<kbd>[ ]</kbd>, seperated by commas.

__Example:__
```javascript
const bike = ["BMW","Honda","Suzuki"];
```
Array indexes are zero-based, means the first item is at [0].

# BigInt
A ```BigInt``` is a numeric type that provides support for integers of arbitrary length.

A ```BigInt``` is created by appending ```n``` to the end of an integer or by calling the constructor ```BigInt```.

__Example:__
```javascript
const big = 12345n; //by appending n
const same = BigInt(12345); // same as 12345n
```
# typeof Operator
To find the type of JavaScript variable, you can use ```typeof``` operator. It returns the type of a variable;

__Example:__
```javascript
typeof "GWOC" // returns strings
typeof 25 // returns number
typeof true // returns boolean
```
# Conclusion
Congratulations! You've successfully learnt about JavaScript Data Types.

Keep Exploring JavaScript :wave:

__Contributor :__ [Abhinandan Adhikari](https://github.com/AbhinandanAdhikari) :heart: 

