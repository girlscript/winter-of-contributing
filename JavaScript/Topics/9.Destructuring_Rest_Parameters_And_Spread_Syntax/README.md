# Destructuring
Destructuring assignment is a syntax that allows you to assign object properties or array items as variables. This can greatly reduce the lines of code necessary to manipulate data in these structures.
<br>

There are two types of destructuring: **Object destructuring** and **Array destructuring**.
<br>

## Object Destructuring
Object destructuring allows you to create new variables using an object property as the value.
<br>

Now let's apply the object destructuring to access the properties ```name``` and ```realName```:
```js
const hero = {
  name: 'Spiderman',
  realName: 'Peter Parker'
};

const { name, realName } = hero;

name;     // => 'Spidername',
realName; // => 'Peter Parker'
```
```const { name, realName } = hero``` is an object destructuring assignment. This statement defines the variables ```name``` and ```realName```, then assigns to them the values of properties ```hero.name``` and ```hero.realName``` correspondigly.
<br>

## Array Destructuring
Array destructuring allows you to create new variables using an array item as a value
```js
const foo = ['one', 'two', 'three'];

const [red, yellow, green] = foo;
console.log(red); // "one"
console.log(yellow); // "two"
console.log(green); // "three"
```
<br>

```js
let a, b;

[a, b] = [1, 2];
console.log(a); // 1
console.log(b); // 2
```
<hr>

# Rest Parameters
Rest parameter is an improved way to handle function parameter, allowing us to more easily handle various input as parameters in a function. The rest parameter syntax allows us to represent an indefinite number of arguments as an array. With the help of a rest parameter a function can be called with any number of arguments, no matter how it was defined.
```js
function functionname(...parameters)//... is the rest parameter
{
statement;
}
```
<br>

Now, let's see a case with and without the Rest Parameter:
```js
// Without rest parameter
function fun(a, b){
	return a + b;
}
console.log(fun(1, 2)); // 3
console.log(fun(1, 2, 3, 4, 5)); // 3				
```
```js
// es6 rest parameter
function fun(...input){
	let sum = 0;
	for(let i of input){
		sum+=i;
	}
	return sum;
}
console.log(fun(1,2)); //3
console.log(fun(1,2,3)); //6
console.log(fun(1,2,3,4,5)); //15				
```
Therefore, we learnt that - *Rest parameter syntax will create an array from an indefinite number of values.*
<hr>

# Spread Syntax
Spread syntax (...) allows an iterable such as an array expression or string to be expanded in places where zero or more arguments (for function calls) or elements (for array literals) are expected, or an object expression to be expanded in places where zero or more key-value pairs (for object literals) are expected.
```js
function sum(x, y, z) {
  return x + y + z;
}

const numbers = [1, 2, 3];

console.log(sum(...numbers));
// expected output: 6

console.log(sum.apply(null, numbers));
// expected output: 6
```
<br>

## Spread with Arrays
Spread can simplify common tasks with arrays. For example, let’s say you have two arrays and want to combine them.

Now you can also use spread to unpack the arrays into a new array:
```js
// Create an Array
const tools = ['hammer', 'screwdriver'];
const otherTools = ['wrench', 'saw'];

// Unpack the tools Array into the allTools Array
const allTools = [...tools, ...otherTools];

console.log(allTools); // Output: Array ["hammer", "screwdriver", "wrench", "saw"]
```
<br>

## Spread with Objects
The following example uses the spread operator (...) to create an ```coloredCircle``` object that has all properties of the ```circle``` object and an additional property ```color```:
```js
const circle = {
    radius: 10
};

const coloredCircle = {
    ...circle,
    color: 'black'
};

console.log(coloredCircle); // Output: Object { radius: 10, color: "black" }
```
<br>

## Spread with Function Calls
As an example, here is a ```multiply``` function that takes three parameters and multiplies them.

If all the values you want to pass to the function already exist in an array, the spread syntax allows you to use each item in an array as an argument:
```js
// Create a function to multiply three items
function multiply(a, b, c) {
  return a * b * c;
}
const numbers = [1, 2, 3];
const answer = multiply(...numbers);
console.log(answer); // Output: 6
```
<hr>


#### Contributor: [Sushovan Banerjee](https://github.com/sushovanb02)
