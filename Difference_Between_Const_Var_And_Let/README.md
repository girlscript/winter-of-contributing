# Difference Between const, var and let
## Let
### Let variables are block scoped local variables and can reassigned another value

```js
let name; // Declaring a let variable
console.log(name); // It would print undefined as we have not initialized a value to it
name = 'GWOC' // Initializing an already declared let variable
console.log(name); // It will print GWOC
```

```js
let age = 21; // Initializing and declaring a let variable
console.log(age);
```

```js
age = 25 // Reassigned to 25 from 21
console.log(age); // Now the console will print 25 instead of 21
```

## Const
### Const variables are also block scoped variables like let but they cannot be reassigned to another value once initialized

```js
const first_name; // This statement will give error as const variable cannot be declared without initializing.

// Error statement - Uncaught SyntaxError: Missing initializer in const declaration
```

```js
const last_name = "Contributing"; // Initializing and declaring a const variable
console.log(last_name);
```

```js
last_name = 'Open Source'; // This statement will give error as last_name is a const variable and therefore it cannot be reassigned.

// Error statement - Uncaught TypeError: Assignment to constant variable.
```

## Var
### Var variables are function scoped local variables and can reassigned another value

### Var was used in old ES version and had some drawbacks and so therefore let and const were introduced in ES6.

```js
var height; // Declaring a var variable
console.log(height); // It would print undefined as we have not initialized a value to it
height = 135 // Initializing an already declared var variable
console.log(height); // It will print 135
```

```js
var weight = 70; // Initializing and declaring a var variable
console.log(weight);
```

```js
weight = 80 // Reassigned to 80 from 70
console.log(weight); // Now the console will print 80 instead of 70
```

## What type of variables should we use for let and const

### 1. We should always use const wherever possible so that we do not change the value of any variable by mistake. 

### 2. Generaly const is used with variables whose values are fixed like birthDate, name.

### 3. Let is used when there is a possibility of changing the value of the variable like age, address.
