# OPERATORS IN C++

An operator is a symbol that tells the compiler to perform specific mathematical operation or logical manipulations.<br>
 C++ is rich in built-in operators and provides the following types of operators:

<li> Relational Operators </li>
<li> Logical Operators </li>
<li> Bitwise Operators </li>
<li> Assignment Operators
 </li>
<li> Misc Operators </li>
<li> Arithmetic Operators
 </li>
 </br>

**This chapter will examine the arithmetic, relational, logical, bitwise, assignment and other operators one by one.**


## Relational Operators: </br>
```
1. ==
Checks if the values of two operands are
equal or not, if yes then condition
becomes true.
Example-
Assume variable A holds 20 and variable B holds 30, then:
A == B is not true

```
```
2. !=

Checks if the values of two operands are
equal or not, if values are not equal then
condition becomes true
Example-
Assume variable A holds 20 and variable B holds 30, then:

A! = B is true.

```
```
3. !=

Checks if the values of two operands are
equal or not, if values are not equal then
condition becomes true
Example-
Assume variable A holds 20 and variable B holds 30, then:
A! = B is true.

```
```
4. >

Checks if the value of left operand is
greater than the value of right operand, if
yes then condition becomes true
Example-
Assume variable A holds 20 and variable B holds 30, then:
A > B is not true.

```
```
5. >=

Checks if the value of left operand is
greater than or equal to the value of right
operand, if yes then condition becomes
true.
Example-    
Assume variable A holds 20 and variable B holds 30, then:
A >= B is not true.

```
```
5. >=

Checks if the value of left operand is
greater than or equal to the value of right
operand, if yes then condition becomes
true.
Example-    
Assume variable A holds 20 and variable B holds 30, then:
A >= B is not true.

```
```
6. <=

Checks if the value of left operand is less
than or equal to the value of right
operand, if yes then condition becomes
true.
Example-    
Assume variable A holds 20 and variable B holds 30, then:
A <= B is true

```

## Logical Operators: </br>
There are following logical operators supported by C++ language

```
1. &&

Called Logical AND operator. If both the
operands are non-zero, then condition
becomes true.
Example-    
Assume variable A holds 1 and variable B holds 0, then:
A && B is false

```
```
2. ||

Called Logical OR Operator. If any of the
two operands is non-zero, then condition
becomes true.
Example-    
Assume variable A holds 1 and variable B holds 0, then:
A || B is true

```

```
3. !

Called Logical NOT Operator. Use to
reverses the logical state of its operand. If
a condition is true, then Logical NOT
operator will make false.
Example-    
Assume variable A holds 1 and variable B holds 0, then:
!( A && B) is true

```

## Assignment Operators:
There are following assignment operators supported by C++ language:

| Operator  | Description |
| ------------- | ------------- |
| = | Simple assignment operator, Assigns values from right side operands to left side operan . |
| += | Add AND assignment operator, It addsright operand to the left operand and assign the result to left operand .  |
| -= | Subtract AND assignment operator, It subtracts right operand from the left operand and assign the result to left operand. |
| /= | Divide AND assignment operator, It divides left operand with the right operand and assign the result to left operan |
| *= | Multiply AND assignment operator, It multiplies right operand with the leftoperand and assign the result to left operand. |
| %= | Modulus AND assignment operator, It takes modulus using two operands and assign the result to left operand .|

## Operators Precedence in C++:
Operator precedence determines the grouping of terms in an expression. This affects how an
expression is evaluated. Certain operators have higher precedence than others; for example, the
multiplication operator has higher precedence than the addition operator: </br>
|Category| Operator | Associativity|
| ------------- | ------------- | ------------- |
|Postfix| [] -> . ++ - -| Left to right|
|Unary| + - ! ~ ++ - - |type* & sizeof Right to left|
|Multiplicative| * / % |Left to right|
|Additive| + -| Left to right|
|Shift| << >>| Left to right|
|Relational| < <= > >=| Left to right|
|Equality |== != |Left to right|
|Bitwise AND |&| Left to right|
|Bitwise XOR |^ |Left to right|
|Bitwise OR | I | Left to right|
|Logical AND |&& |Left to right|
|Logical OR | II | Left to right|
|Conditional |?: |Right to left|
|Assignment |= += -= *= /= %=>>= <<= &= ^= =| Right to left|
|Comma |,| Left to right|



