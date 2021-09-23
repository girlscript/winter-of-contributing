# Hoisting in Javascript

### Introduction

In this tutorial I will discuss the important concept of Hoisting in Javascript. Before deep diving into it let's see a small intro.
>Hoisting is a mechanism in javascript where the variable and function declarations are moved to the top of their respective scopes before the code execution phase.

Obviously now you must have many doubts after reading the intro. So let's simplify it with an example.  
Did you ever notice that you can call a function even before it is declared ?
```js
console.log(sayHi())

function sayHi(){
    console.log("Hi Girlscript!!")
}
// The result of the code is : Hi Girlscript!!
```
This is where **Hoisting** comes into play.  
This is why it happens, the interpreter `allocates` the memory for the variable and the function `declarations` before the execution phase.

Let's now see this behavior in detail with variables and functions.

### Hoisting variables

Let's see the sequence by which variable declarations and initialzation occurs.  

`Declaration` **-->** `Initialization/Assignment` **-->** `Use in code`

```js
var a; // declaration
a = 25; //Initialization/ Assignment
console.log(a); // Use in code

var b = 10; // both declare and initialize simulateously
```
However even if we simultenuously declare and initialize variables, in the background Javascript is first `declaring` it and then `initializing` it.

### var

Javascript hoists only the declarations and not initializations of the variables declared using `var` keyword. If a variable is used in the `temporal dead zone` (i.e before initialization ), it is default initialized to `undefined`.

```js
console.log(hoistedVar)
var hoistedVar = "Girlscript"
// The result of the code is undefined
```
People coming from the background of procedural programming languages like: `C language` must have guessed the output as `Reference error`, but instead it is `undefined`.

**Why such a magic happend?**

Actually Javascript hoisted the varibale declaration and default initialized it to undefined. This is how the modified code looks like to the interpreter in the execution phase.

```js
var hoistedVar = undefined;

console.log(hoistedVar); //undefined
hoistedVar = "Girlscript"
```

Let's see another example to better grasp the topic.

```js
var a = 10;
console.log(a);
var a = 11;
console.log(a);
```
**Can You guess the output?**  
It's easy right?  
```js
Output:
10
11
```
But how many times the variable `a` got hoisted?  
You might have guessed the answer is `2` , but its actually `1` time only. Let's understand why so happens.  

In the creation phase, when the Javascript engine sees the variable `a`, memory will be allocated for that variable and initialized to `undefined`. When the JS Engine sees the second declaration, it will not care the value because `value` is given in the execution phase. Instead it will check that there is already a variable named `a` that has been allocated memory, so it will not allocate memory again.

So behind the scene Javascript sees the code like this:

```js
var a = undefined; // hoisted
a = 10;
console.log(a); // 10
a = 11;
console.log(a); // 11
```

### Variable Hoisting in function scope

Let's see now how variables within function scope are hoisted, by the following example:

```js
function hoistExample(){
    console.log(message);
    var message = "Girlscript";
}

hoistExample();

// The result will be : Girlscript
```

If you have guessed the output right, then congratulations to you . If you guessed it wrong I'll explain what's happenning here.
Behind the scenes Javascript sees the code like this.

```js
function hoistExample(){
    var message = undefined;
    console.log(message);
    message = "Girlscript";
}

hoistExample()
```

> NOTE : Be careful while working with **var** beacuse of **hoisting**. The best practice would be to **declare** and **initialize** any variable before use.

### let
You must be knowing that variables declared with the **let** keyword is `block scoped`, i.e its lifetime is bound to the block in which it is declared.  
Lets start seeing the effect of hoisting on **let** declared variables with an example.

```js
console.log(hoistedLet);
let hoistedLet = "Girlscript";

// The result will be: Uncaught ReferenceError: hoistedLet is not defined
```
Like before you might have guessed the output as `undefined`, but in the case of `let` we cannot use the variables before they are decalred. This ensures that we **always** declare our variables first.  
However be carefull, if you declare but not initialize then you will get the same old result.

```js
let hoistedLet;
console.log(hoistedLet);
hoistedLet = "Girlscript";

// The result will be : undefined
```
### const
You must be knowing that the variables declared using **const** are immutable i.e they cannot be reinitialized.  
Just like the **let**, the **const** variables are hoisted to the top of its own block. Lets see with an example.

```js
console.log(love);
const love = "code";

//The result will be: Uncaught ReferenceError: love is not defined
```
However in the case of the **const** variables if you declare it but not initialize it before using it, the interpreter will throw an error.

```js
const love;
console.log(love);
love = "code";

//The result will be:
//Uncaught SyntaxError: Missing initializer in const declaration
```
Therefore a **const** variable must be both declared and initialized before use.  

**The conclusion stands that the variables declared with let and const are uninitialized while the variables declared with var is default initialized to undefined before the execution phase.**

<hr>

### Hoisting functions

In Javascript functions can be of 2 types:

1. Function declarations
2. Function Expressions

Lets see the effect of hoisting on both the types of functions.

### Function Declarations

Function declarations are hoisted to the top of their scope, that is the reason we can invoke a function even before it is declared.

```js
hoistingFunc();

function hoistingFunc(){
    console.log("Hi Girlscript");
}

//The result will be: Hi Girlscript
```
In the background what Javascript does is this.
```js
// Moves declarations to the top of scope
function hoistingFunc(){
    console.log("Hi Girlscript");
}

hoistingFunc();
```

### Function Expressions

Function expressions are not hoisted
```js
hoistingExpression()

var hoistingExpression = function(){
    console.log("Hi Girlscript")
}

// The result will be:
// Uncaught TypeError: hoistingExpression is not a function
```
Let's understand why such an error is thrown.  
When you use a function expression and assign it to a variable, it now works like a normal variable and not a function. Since it behaves like a variable, all the hoisting properties on variables are applied here.  
So in the background Javascript modifies the code as:
```js
var hoistingExpression = undefined;
//Since variable is initialized to undefined it cannot be invoked
hoistingExpression()

hoistingExpression = function(){
    console.log("Hi Girlscript")
}
```
If you use ES6 Arrow functions it also behaves the same

```js
hoistingExpression()

var hoistingExpression = ()=> {
    console.log("Hi Girlscript")
}

// The result will be:
// Uncaught TypeError: hoistingExpression is not a function
```

Similarly if you declare function declarations using **let/const** it will behave just like **let/const** variables.

```js
hoistingExpression()

const hoistingExpression = ()=> {
    console.log("Hi Girlscript")
}

// The result will be:
// Uncaught ReferenceError: hoistingExpression is not defined
```

### Strict Mode


Now, there is  a utility of JavaScript called as strict - mode , by using this feature , we can better take care of variable declarations.

By enabling strict-mode , we choose a restricted variant of JavaScript which will not allow the usage of variables before they are declared.


**Benefits of Running Code in strict mode**

  1. Eliminate some silent JS errors by changing them into explicit throw errors.

  1. Fixes mistakes, so that JavaScript engines can perform optimizations.(It can sometimes execute faster than identical code that's not strict mode).



You can enable strict mode in your JavaScript code by writing this line at the top of JavaScript file :

```js
'use strict';

//or

"use strict";
```

Now, after knowing about strict mode , we can test it.

```js
"use strict";

console.log(hoistedVar); //ReferenceError: hoistedVar is not defined

hoistedVar = "Girlscript";
```


Now, there is a important thing which needs to keep in mind.


`Function declarations are hoisted over variable declarations but not over variable assignments.`

What does above line means? Let's understand this by an example.

**Variable assignments over function declarations**

```js
  var ten = 10;

  function ten(n)
  {
    return n*2;
  }

  console.log(typeof ten); //Output : number
```

**Function declarations over variable declarations**

```js
  var ten;

  function ten(n)
  {
    return n*2;
  }

  console.log(typeof ten); //Output : function
```

### Class Hoisting

In JavaScript, classes can be of two types just like as functions :

1. Class declarations
1. Class expressions

**Class declarations**

Class declarations are hoisted in JavaScript but it remains uninitialized when hoisted. This means that JavaScript can find reference for a class that we created ,however, it cannot use that class before it is defined.


Let's consider an example :

```js
var person = new Person();
person.name = "John";
person.age = 24;

console.log(person); //Output : Uncaught ReferenceError : Cannot access 'Person' before initialization"


class Person {
    constructor(name, age) {
      this.name = name;
      this.age = age;
    }
}
```

So , to access the class declaration, you have to declare first.

Correct Code :

```js
class Person {
    constructor(name, age) {
      this.name = name;
      this.age = age;
    }
}

var person = new Person();
person.name = "John";
person.age = 24;

console.log(person);//Output: {name : John, age : 24}

```

**Class expressions**

Like the functions expressions, class expressions are not hoisted.

Let's take an example :

```js
var dog = new Animal();
dog.name  = "Tommy";
dog.sound = "woof woof";

console.log(dog); // Output: TypeError: Polygon is not a constructor

var Animal = class Animal{
  constructor(name,sound) {
    this.name = name;
    this.sound = sound;
  }
};
```

Correct Code :

```js
var Animal = class Animal{
  constructor(name,sound) {
    this.name = name;
    this.sound = sound;
  }
};

var dog = new Animal();
dog.name  = "Tommy";
dog.sound = "woof woof";

console.log(dog); //Output : {name : Tommy , sound : woof woof}
```


## Conclusion

Let's summarise our learnings so far.

1. While accessing variables declared with **var** they will be assigned a default value **undefined**
2. While accessing the variables decalred with **let / const** it will lead to **Reference error** as the variables are unitialized before execution phase.
3. Regular functions are hoisted to top of their scope and can be invoked even before they are declared
4. Function declarations are also hoisted but they now behave like normal variables and thus possed the hoisting properties of variables.
5. It is always good to declare and initialize JavaScript variables before using them.
6. Using **strict mode** , we can avoid using undeclared variables before declaring and initializing them.

> Contributions By :
> <cite>[Arpan Mondal](https://github.com/arp99)</cite>
> <cite>[Anjali Rai](https://github.com/anjalirai12)</cite>
