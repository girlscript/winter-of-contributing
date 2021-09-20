# Bit Manipulation

## Use of Bit Operators

Bit operators perform operations much faster than arthmetic or logical operators

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

## **_Bitwise OR_**

The bitwise OR operator takes two arguments and performs OR operation on each bit of the value of the operand. In the OR operation in binary, the resultant is 0 when both operands are 0 otherwise it is 1.

![](https://i2.wp.com/techvidvan.com/tutorials/wp-content/uploads/sites/2/2019/12/bitwise-or-operations.jpg?resize=325%2C238&ssl=1)

## **_Bitwise XOR_**

The bitwise Xor also takes two operands and performs Xor operation on the binary digits. The Xor operation gives 0 as a result when both operands are the same and 1 when operands are different.

![](https://i2.wp.com/techvidvan.com/tutorials/wp-content/uploads/sites/2/2019/12/example-of-bitwise-Xor-operation.jpg?resize=500%2C197&ssl=1)

## **_Left Shift Operator_**

The left shift operator shifts the bits of the numbers by a specified number of places. It adds zeroes to the empty least significant places.

`Example 1`:

**1<<2 = 4**

1 is represented as ‘1’

We shift the digits to _left up_ to two places. So, it will be ‘100’ in binary and 4 in decimal.

`Example 2`:

**10<<4 = 160**

10 in binary is ‘1010’

Shifting 4 digits to the _left_ will make it ‘1010 0000’ which is 160 in decimal.

## **_Right Shift Operator_**

This is similar to the left shift, but instead of shifting digits to the left we are shifting them to the right. In this process, some of the bits are lost.

`Example 1`:

**10>>2 = 2**

Let’s see how this works.

So, 10 in binary is “1010”.

By shifting “1010” to 2 places to the _right_ we will lose our 2 rightmost digits and we will only be left with “10”.

In decimal, “10” represents 2 and that’s our answer.

`Example 2`:

**25>>2 = 6**

25 in binary is “11001”. We _right shift_ them up to 2 places so, we are now left with “110” which is 6.

## **_Bitwise NOT_**

This operator requires single input and does its negation
If the input value is one it gets converted to zero
and vice-versa

![](https://files.realpython.com/media/not.7edac5691829.gif)
