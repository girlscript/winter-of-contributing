# Comparison Operators
[Back to Operators in Javascript](../README.md#operators-in-javascript)


Comparison operators are used to compare values and returns boolean value (true or false).

#### 1. Equal To Operator (==)
It will return true if both values are equal, otherwise false.

```js
console.log(5==5); // true
console.log(4==3); // false
```

#### 2. Not Equal To Operator (!=)
It will return true if both values are not equal, otherwise false.

```js
console.log(5!=5); // false
console.log(0!='0'); // return true because left value is a number and right value is a string.
console.log(4!=3); // true
```

#### 3. Strict Equal Operator (===)
It will check values and also check the type of the values.

```js
console.log(5===5); // true
console.log('5'===5); // false // left value is string and right value is number
console.log(4===3); // false
```
#### 4. Strict Not Equal To Operator (!==)
It will check values and also check the type of the values.

```js
console.log(5!==5); // false
console.log('5'!==5); // true // because left side is string and right side is number
// it will return true
console.log(4!==3); // true
```

#### 5. Greater Than Operator (>)
It will return true if right value is greater than left value otherwise false.
```js
console.log(5>4); // true
console.log(4>8); // false
```

#### 6. Greater Than or Equal To Operator (>=)
It will return true if right value is greater than or equal to left value otherwise false.
```js
console.log(5>=4); // true
console.log(4>=8); // false
```

#### 7. Less Than Operator (<)
It will return true if right value is less than left value otherwise false.
```js
console.log(5<4); // false
console.log(4<8); // true
```
#### 8. Less Than or Equal To Operator (<=)
It will return true if right value is less than or equal to left value otherwise false.
```js
console.log(5<=4); // false
console.log(4<=4); // true
```


Related Topics:
- [Assignment Operators](1.Assignment_Operators/README.md#assignment-operators)
- [Arithmetic Operators](2.Arithmetic_Operators/README.md#arithmetic-operators)
- [Bitwise Operators](4.Bitwise_Operators/README.md#bitwise-operators)
- [Logical Operators](5.Logical_Operators/README.md#logical-operators)
- [Ternary/ Conditional Operator](6.Ternary_Operators/README.md#ternary-operator)