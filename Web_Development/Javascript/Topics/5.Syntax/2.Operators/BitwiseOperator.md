# Bitwise Operators
[Back to Homepage](README.md#operators-in-javascript)

#### 1. Bitwise AND (&)
Set each bit to 1 if both bits are 1. Otherwise set to 0.
```js
let a = 6;          // 00000000000000000000000000000110
let b = 5;          // 00000000000000000000000000000101

console.log(a & b); // 00000000000000000000000000000100
// Ouput: 4
```

#### 2. Bitwise OR (|)
Set each bit to 1 if either bit is 1. Otherwise set to 0.
```js
let a = 6;          // 00000000000000000000000000000110
let b = 5;          // 00000000000000000000000000000101

console.log(a | b); // 00000000000000000000000000000111
// Ouput: 7
```

#### 3. Bitwise XOR (^)
Set each bit to 1 if only one of the bits is 1. Otherwise set to 0.
```js
let a = 6;          // 00000000000000000000000000000110
let b = 5;          // 00000000000000000000000000000101

console.log(a ^ b); // 00000000000000000000000000000011
// Ouput: 3
```

#### 4. Bitwise NOT (~)
Set each bit to the opposite of its value.
```js
let a = 6;       // 00000000000000000000000000000110

console.log(~a); // 11111111111111111111111111111001
// Output: -7
```

#### 5. Bitwise Left Shift (<<)
Shift left the bits of the first operand by the number of bits in the second operand.
```js
let a = 6;           // 00000000000000000000000000000110
let b = 2;

console.log(a << b); // 00000000000000000000000000011000
// Output: 24
```

#### 6. Bitwise Right Shift (>>)
Shift right the bits of the first operand by the number of bits in the second operand.
```js
let a = 6;           // 00000000000000000000000000000110
let b = 2;

console.log(a >> b); // 00000000000000000000000000000001
// Output: 1
```


Related Topics:
- [Assignment Operators](AssignmentOperator.md#assignment-operator)
- [Arithmetic Operators](ArithmeticOperator.md#arithmetic-operators)
- [Comparison Operators](ComparisonOperator.md#comparison-operators)
- [logical Operators](LogicalOperator.md#logical-operators)
- [Ternary/ Conditonal Operators](TernaryOperator.md#ternary-operators)