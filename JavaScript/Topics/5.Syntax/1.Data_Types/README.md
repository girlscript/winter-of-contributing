# Data Types in JavaScript

Just like any other programming language, JavaScript has data types too, however they might be different in their behaviour and properties unlike data types in other programming languages.

## Primitive Types
---
JavaScript has 5 main primitive types :

- String
- Boolean
- Number
- Null and Undefined
- BigInt

*Note: Objects in JavaScript are a collection of properties and is not considered under Primitive types*

## String Type
---
String type is used to represent textual data / information in JavaScript. It is a set of elements where each element occupies a position in the String. The first element is at 0th index, the next at index 1, and so on. The length of a String is the number of elements in it.
Single quotes or double quotes may be used to assign a value to a string variable.

Example:

```js
let str = 'javascript';
```

*Note: In JavaScript Strings are immutable, that means once they are created we cannot modify the same*

## Boolean Type
---
Boolean type in JavaScript represents two values, logical true (or 1) or logical false (or 0)

Example:

```js
let isGameOver = true;
isGameOver = 0;
```

## Number Type
---
JavaScript has only one number type. Decimals, Integers, Whole numbers all are represented using a single type called Number. Unlike, other programming languages, JavaScript doesn't have different data types for different types of numbers.

Example:

```js
let x = 12.34;
let y = 123;
let negativeNumber = -34;
```

## Null Type
---
The Null type represents the intentional absence of a value in Javascript. It is a primitive type and is treated as falsy for boolean operations.

Example:

```js
let value = null;
```

## Undefined Type
---
The Undefined type in JavaScript is its way of saying, it doesn't know what's present inside something or if something is not defined. For example a variable that has not been assigned a value is of type undefined.

Example:

``` js
let x; // x is not assigned any value
typeof(x); // hence, it's type is undefined
```
## Difference Between ```null``` and ```undefined```
1. ```undefined``` is a type whereas ```null``` is an object.
2. ```undefined``` means a variable has been declared, but no value has been assigned to it.

    whereas ```null``` means you can assign it to the variable.

## BigInt
---
BigInt is a special and a new numeric type in JavaScript which provides support for integers of arbitrary length.

A bigint could be created by :

- Appending n to the end of an integer literal 
- Calling the function BigInt

Example:

``` js
const bigint = 1234567890123456789012345678901234567890n; // by appending n at the end
const newBigint = BigInt("1234567890123456789012345678901234567890"); // by calling BigInt function
```
# JavaScript Non-Primitive Data Types

## 1. Objects
---
An object in JavaScript is a collection of related data and/or functionality consisting of variables and functions — which are called properties and methods when they are inside objects.

Example:

``` js
let person = {
    firstName:"John", // each of these are a property consisting of a key-value pair
    lastName:"Doe", 
    age:50, 
    eyeColor:"blue"};
```
## 2. Arrays
Arrays are collection of values of similar or different data types.

JavaScript Arrays are written with square bracket<kbd>[ ]</kbd>, seperated by commas.

__Example:__
```javascript
const bike = ["BMW","Honda","Suzuki"];
```
Array indexes are zero-based, means the first item is at  arrayName[0].
## ```typeof``` Operator
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

__Contributor :__  [Aniket Pathak]() & [Abhinandan Adhikari](https://github.com/AbhinandanAdhikari) :heart: 
