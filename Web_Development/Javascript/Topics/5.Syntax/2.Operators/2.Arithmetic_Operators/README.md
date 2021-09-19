# Arithmetic Operators
[Back to Operators in Javascript](../README.md#operators-in-javascript)


#### 1. Addition (+)
The addition operator (+) is used to add two given variables.
```js
console.log(5+8);
// expected output: 13

console.log(5+8+3);
// expected output: 16
```

#### 2. Subtraction (-)
The subtraction operator (-) is used to subtract one variable from another.
```js
console.log(8-5);
// expected output: 3

console.log(11-4);
// expected output: 7
```

#### 3. Multiplication (*)
The multiplication operator (*) is used to multiply two variables.
```js
console.log(5*8);
// expected output: 40
```

#### 4. Division (/)
The division operator (/) is used to divide one variable by another.
```js
console.log(8/3);
// expected output: 2

console.log(12/4);
// expected output: 3
```

#### 5. Modulus Operator (%)
The Modulus operator (%) is used to get the remainder after dividing two variables.
```js
console.log(8 % 3);
// expected output: 2
```

```js
console.log(-5%1);
// expected output: -0
```

```js
console.log(5%1);
// expected output: 0
```

#### 6. Increment (++)
The increment operator (++) is used to increment a variable by one.

If (++) is used as prefix, it will increment first and then assign the result to the variable.
```js
let a = 5;
console.log(++a);
console.log(a);
// expected output
// 6
// 6
```

If (++) is used as postfix, it will first assign the result to the variable and then increment it.
```js
let a = 5;
console.log(a++);
console.log(a);
// expected output: 
// 5
// 6
```

#### 7. Decrement (--)
The decrement operator (--) is used to decrement a variable by one.

If (--) is used as prefix, it will increment first and then assign the result to the variable.
```js
let a = 5;
console.log(--a);
console.log(a);
// expected output
// 4
// 4
```

If (--) is used as postfix, it will first assign the result to the variable and then increment it.
```js
let a = 5;
console.log(a--);
console.log(a);
// expected output: 
// 5
// 4
```

#### 8. Exponentiation (**)
The exponentiation operator (**) is used to calculate the power of one variable to another.
```js
console.log(2**4); // Expected output: 16
```


Related Topics:
- [Assignment Operators](1.Assignment_Operators/README.md#assignment-operators)
- [Comparison Operators](3.Comparison_Operators/README.md#comparison-operators)
- [Bitwise Operators](4.Bitwise_Operators/README.md#bitwise-operators)
- [Logical Operators](5.Logical_Operators/README.md#logical-operators)
- [Ternary/ Conditional Operator](6.Ternary_Operators/README.md#ternary-operator)