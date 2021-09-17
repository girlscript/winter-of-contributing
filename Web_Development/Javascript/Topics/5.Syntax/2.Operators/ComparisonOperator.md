# Comparison Operators
[Back to Operators in Javascript](README.md#operators-in-javascript)

Comparison operators are used to compare values and returns boolean value (true or false).

#### 1. Equal Operator (==)
It will return true if both values are equal otherwise false.

```js
console.log(5==5); // true
console.log(4==3); // false
```

#### 2. Not Equal Operator (!=)
It will return true if both values are not equal otherwise false.

```js
console.log(5!=5); // false
console.log(4!=3); // true
```

#### 3. Strict Equal Operator (===)
It will check values and also check the type of the values.

```js
console.log(5===5); // true
console.log('5'===5); // false // left value is string and right value is number
console.log(4===3); // false
```

#### 4. Greater Than Operator (>)
It will return true if right value is greater than left value otherwise false.
```js
console.log(5>4); // true
console.log(4>8); // false
```

#### 5. Greater Than or Equal Operator (>=)
It will return true if right value is greater than or equal to left value otherwise false.
```js
console.log(5>=4); // true
console.log(4>=8); // false
```

#### 6. Less Than Operator (<)
It will return true if right value is less than left value otherwise false.
```js
console.log(5<4); // false
console.log(4<8); // true
```
#### 7. Less Than or Equal Operator (<=)
It will return true if right value is less than or equal to left value otherwise false.
```js
console.log(5<=4); // false
console.log(4<=4); // true
```


Related Topics:
- [Assignment Operators](AssignmentOperator.md#assignment-operator)
- [Arithmetic Operators](ArithmeticOperator.md#arithmetic-operators)
- [Bitwise Operators](BitwiseOperator.md#bitwise-operators)
- [logical Operators](LogicalOperator.md#logical-operators)
- [Ternary/ Conditonal Operators](TernaryOperator.md#ternary-operators)