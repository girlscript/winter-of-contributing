# Operators in Javascript

#### Operators are the symbols between values that allow us to do different operation like addition, subtraction, multiplication and more.

#### Different Types of Operator
Javascript has different types of operator to do specific task with values.

- [Assignment Operators](1.Assignment_Operators/README.md#assignment-operators)
- [Arithmetic Operators](2.Arithmetic_Operators/README.md#arithmetic-operators)
- [Comparison Operators](3.Comparison_Operators/README.md#comparison-operators)
- [Bitwise Operators](4.Bitwise_Operators/README.md#bitwise-operators)
- [Logical Operators](5.Logical_Operators/README.md#logical-operators)
- [Ternary/ Conditional Operator](6.Ternary_Operators/README.md#ternary-operator)


### [Assignment Operators](1.Assignment_Operators/README.md#assignment-operators)
An Assignment Operators are those operators that assign values to left operand based on values of the right operand.

|Operator |Meaning       |Description                                           |
|---------|--------------|------------------------------------------------------|
|a = b    | a = b        |Assigns the value of b to a                           |
|a += b   | a = a + b    |Assigns the results of a + b to a                     |
|a -= b   | a = a - b    |Assigns the results of a - b to a                     |
|a *= b   | a = a * b    |Assigns the results of a * b to a                     |
|a /= b   | a = a / b    |Assigns the results of a / b to a                     |
|a %= b   | a = a % b    |Assigns the results of a % b to a                     |
|a **= b  | a = a ** b   |Assigns the results of a to the power b to a          |
|a <<= b  | a = a << b   |Assigns the results of a shifted left side by b to a  |
|a >>= b  | a = a >> b   |Assigns the results of a shifted right side by b to a |
|a &= b   | a = a & b    |Assigns the results of a AND b to a                   |
| a \|= b | a = a \| b   |Assigns the results of a OR b to a                    |     
|a ^= b   | a = a ^ b    |Assigns the results of a XOR b to a                   |



### [Arithmetic Operators](2.Arithmetic_Operators/README.md#arithmetic-operators)
An Arithmetic operators are used to perform arithemetical operations on given values.

| Operator              | Example                                                     | Output        |
|-----------------------|-------------------------------------------------------------|---------------|
| Plus (+)              | `console.log(1+3);`                                         | `4`           |
| Minus (-)             | `console.log(1-3);`                                         | `-2`          |
| Multiplication (*)    | `console.log(4*3);`                                         | `12`          |
| Division (/)          | `console.log(12/3);`                                        | `4`           |
| Modulus (%)           | `console.log(12%3);`                                        | `2`           |
| Exponent (^)          | `console.log(2^3);`                                         | `8`           |
| Post-Increment (++)   | `let a = 5;`<br>`console.log(a++);`<br>`console.log(a);`     | `5`<br>`6`    |
| Post-Decrement (--)   | `let a = 5;`<br>`console.log(a--);`<br>`console.log(a);`     | `5`<br>`4`    |
| Pre-Increment (++)    | `let a = 5;`<br>`console.log(++a);`<br>`console.log(a);`     | `6`<br>`6`    |
| Pre-Decrement (--)    | `let a = 5;`<br>`console.log(--a);`<br>`console.log(a);`     | `4`<br>`4`    |



### [Comparison Operators](3.Comparison_Operators/README.md#comparison-operators)
Comparison operators are used to compare values and return true or false based on the result.

| Operator                  |  Example                                                     | Output        |
|---------------------------|--------------------------------------------------------------|---------------|
| Equal To (==)             | `console.log(1 == 2);`                                       | `false`       |
| Not Equal To(!=)          | `console.log(1 != 2);`                                       | `true`        |
| Greater Than (>)          | `console.log(1 > 2);`                                        | `false`       |
| Less Than (<)             | `console.log(1 < 2);`                                        | `true`        |
| Greater Than or Equal (>=)| `console.log(1 >= 2);`                                       | `false`       |
| Less Than or Equal (<=)   | `console.log(1 <= 2);`                                       | `true`        |
| Strict Equal To (===)     | `console.log(1 === '1');`                                    | `false`       |
| Strict Not Equal To (!==) | `console.log(1 !== '1');`                                    | `true`        |



### [Bitwise Operators](4.Bitwise_Operators/README.md#bitwise-operators)
Bitwise operators compare the value in binary format (32 bits) and perform bitwise operations on them.

| Operator                  | Description                                                                           |
|---------------------------|---------------------------------------------------------------------------------------|
| Bitwise AND (&)           | Set each bit to 1 if both bits are 1. Otherwise set to 0.                             |
| Bitwise OR (\|)           | Set each bit to 1 if either bit is 1. Otherwise set to 0.                             |
| Bitwise XOR (\^)          | Set each bit to 1 if only one of the bits is 1. Otherwise set to 0.                   |
| Bitwise NOT (\~)          | Set each bit to the opposite of its original value.                                   |
| Bitwise LEFT SHIFT (<<)   | Shift left the bits of the first operand by the number of bits in the second operand. |
| Bitwise RIGHT SHIFT (>>)  | Shift right the bits of the first operand by the number of bits in the second operand.|



### [Logical Operators](5.Logical_Operators/README.md#logical-operators)
Logical operators are used to perform logical operations on given values.

| Operator          | Description                                                                            |
|-------------------|----------------------------------------------------------------------------------------|
| Logical AND (&&)  | Returns true if both expressions are true. Otherwise returns false.                    |
| Logical OR (\|\|) | Returns true if either expressions is true. Otherwise returns false.                   |
| Logical NOT (!)   | Returns the negation of the expression.                                                |



### [Ternary/ Conditional Operator](6.Ternary_Operators/README.md#ternary-operator)
Conditional Operators (also known as Ternary Operator) works on three operands. If first operand is true, then operand two will be executed otherwise operand three will be exectued.
```js
var result = condition ? trueValue : falseValue;
```
If the condition is true, the trueValue is returned, otherwise the falseValue is returned.


### Contributed by:
****[Rwitesh Bera](https://github.com/rwiteshbera)****
