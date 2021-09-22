# Bit Manipulation

## Use of Bit Operators

Bitwise operators perform operations much faster than arithmetic or logical operators.

## Types of Bit Operator

There are mainly 6 types of bit operators

1. `AND`
2. `OR`
3. `XOR`
4. `Left shift operator`
5. `Right shift operator`
6. `Bitwise NOT`

   <br/><br>

   ![Symbols representing Bitwise operator](https://miro.medium.com/max/540/1*lwKj-TpvToBxuq98LXII1A.png)

<br/><br>

## **_Bitwise AND_**

The bitwise AND operator takes two arguments and performs AND operation on the operands bit by bit.
The operation will only be 1 when both operands are 1 otherwise it remains 0.

![Table](https://i1.wp.com/techvidvan.com/tutorials/wp-content/uploads/sites/2/2019/12/implementation-of-and-operation-on-binary-digits.jpg?resize=341%2C272&ssl=1)

<br />

## **_Bitwise OR_**

The bitwise OR operator takes two arguments and performs OR operation on each bit of the value of the operand. In the OR operation in binary, the resultant is 0 when both operands are 0 otherwise it is 1.

![](https://i2.wp.com/techvidvan.com/tutorials/wp-content/uploads/sites/2/2019/12/bitwise-or-operations.jpg?resize=325%2C238&ssl=1)

<br />

## **_Bitwise XOR_**

The bitwise Xor takes two operands and performs Xor operation on the binary digits. The Xor operation gives 0 as a result when both operands are the same and 1 when operands are different.

![](https://i2.wp.com/techvidvan.com/tutorials/wp-content/uploads/sites/2/2019/12/example-of-bitwise-Xor-operation.jpg?resize=500%2C197&ssl=1)

<br/>

## **_Left Shift Operator_**

The left shift operator shifts the bits of the numbers by a specified number of places.

`Example 1`:

Let’s see how this works.

**2<<2 = 8**

2 is represented as ‘010’

We shift the digits to _left up_ to two places. So, it will be ‘1000’ in binary and 8 in decimal.

`Example 2`:

**3<<4 = 48**

10 in binary is ‘1010’

Shifting 4 digits to the _left_ will make it ‘011 0000’ which is 48 in decimal.

Shortcut for \*\*left shit operator

<br />

## **_Right Shift Operator_**

This is similar to the left shift, but instead of shifting digits to the left we are shifting them to the right. In this process, some of the bits are lost.

`Example 1`:

**4>>2 = 1**

Let’s see how this works.

So, 4 in binary is “100”.

By shifting “100” to 2 places to the _right_ we will lose our 2 rightmost digits and we will only be left with “001”.

In decimal, “001” represents 1 and that’s our answer.

`Example 2`:

**20>>2 = 5**

20 in binary is “10100”. We _right shift_ them up to 2 places so, we are now left with “101” which is 5.

<br/>

## **_Bitwise NOT_**

This operator requires single input and does its negation
If the input value is one it gets converted to zero
and vice-versa

![](https://files.realpython.com/media/not.7edac5691829.gif)
