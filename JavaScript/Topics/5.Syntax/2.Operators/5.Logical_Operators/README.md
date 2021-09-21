# Logical Operators
[Back to Operators in Javascript](../README.md#operators-in-javascript)


#### 1. Logical AND Operator (&&)
##### Usage : expression1 && expression2
##### Description : If both expression1 and expression2 are true, the result is true.

```js
const x = 10;
const y = 20;
const z = -5

console.log(x>0 && y>0); // true
console.log(x>0 && z>0); // false
```
##### Truth Table
|Expression A  |Expression B  |A && B   |
|--------------|--------------|---------|
|False         |False         |False    |
|False         |True          |False    |
|True          |False         |False    |
|True          |True          |True     |



#### 2. Logical OR Operator (||)
##### Usage : expression1 || expression2
##### Description : If either expression1 or expression2 are true, the result is true.

```js
const x = 10;
const y = -10;
const z = -5

console.log(x>0 || y>0); // true
```
##### Truth Table
|Expression A  |Expression B  |A \|\| B |
|--------------|--------------|---------|
|False         |False         |False    |
|False         |True          |True     |
|True          |False         |True     |
|True          |True          |True     |



#### 3. Logical NOT Operator (!)
##### Usage: !expression
##### Description : It returns true when expression is false and return false when expression is true.

```js
let a = 5;
console.log(!(a>0));
// Output: false
```
##### Truth Table
|Expression A  |NOT A   |
|--------------|--------|
|False         |True    |
|True          |False   |



Related Topics:
- [Assignment Operators](../1.Assignment_Operators/README.md#assignment-operators)
- [Arithmetic Operators](../2.Arithmetic_Operators/README.md#arithmetic-operators)
- [Comparison Operators](../3.Comparison_Operators/README.md#comparison-operators)
- [Bitwise Operators](../4.Bitwise_Operators/README.md#bitwise-operators)
- [Ternary/ Conditional Operators](../6.Ternary_Operators/README.md#ternary-conditional-operators)