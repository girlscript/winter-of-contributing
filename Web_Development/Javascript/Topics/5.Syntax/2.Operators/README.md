# To Do
#JavaScript Operators
**Operators** are used to perform some action on operands. Operand can be of any data type, eg. number, boolean, string.

Some of the operators are described be -

## **1. Arithmetic Operators**
Arithmetic operators take numerical values as operands and evaluates it to a single numerical value. Some of the arithmetic operators are -


* **Addition(+)** - It adds the numerical operands and is also used for string concatenation.It will add numerical and string operand to a number if the string can be converted to a number. Else it concatenates them.
* **Subtraction(-)** - It subtracts the two numeric operands. If any one of them is not a number or cannot be converted to number, then 'NaN' is printed.
* **Division(/)** - It divides the first operand with the second operand. If the second operator is '+0' or '-0', then 'Infinity' and '-Infinity'are printed respectively. If they are not divisible 'NaN' is printed.
* **Multiplication(*)** - It multiplies the two numeric operand. Any number multiplied with Infinity prints 'Infinity'. If the other number is zero, then 'NaN' is printed.
* **Remainder(%)** - It finds the remainder left after division. If one of the operand is 'Infinity' or 'NaN', then 'NaN' is printed.

## **2. Assignment Operators** 

Assignment operators are used to assign value of the right operand/expression to the left operand. The simplest assignment operator is equal (=), which assigns the right operand value to left operand. 

**Eg:** var x=10; var y=x; will assign value 10 to y. 

Other assignment operators are shorthand operations of other operators. They are called compound assignment operators. Some of them with their meaning (i.e. the extended version of these operations) are provided below -

                                  
  1. Addition Assignment                     
     Shorthand operator   x +=y  
     Meaning   x = x + y
  2. Division Assignment         
     Shorthand operator   x /=y  
     Meaning   x = x / y
  3. Exponentiation Assignment  
     Shorthand operator   x **=y            
     Meaning   x = x ** y     
  4. Right Shift Assignment    
     Shorthand operator   x >>=y       
     Meaning   x = x >> y
  5. Bitwise XOR Assignment     
     Shorthand operator   x ^=y         
     Meaning   x = x ^ y
      
## **3. Increment and Decrement Operator**  

The increment operator increments the value of the numeric operand by one. The decrement operator decreases the value of the numeric operand by one. 

There are two ways to use increment and decrement -

 ● Using postfix (x++ or x--) - the value is returned first and then the value is incremented or decremented.

 ● Using prefix (++x or --x) - the value is first incremented or decremented and then returned. 

 **Eg:** var x=10; console.log(++x); will print 11 on the console.
 
 
## **4. Comparison Operators**  

 The comparison operators are used to compare two values with each other.

The equality operator (==) is used to compare the two values, if they are equal or not. But the values are not directly compared. First, they are converted to the same data type and then the converted content is compared. 

**Eg:** "1" == 1 evaluates to true, even though the first one is a 'string' and the other is a
'number'.


There is another comparison operator (===) known as strict equality operator. It checks both the data type and the content. If the data type are not equal, it returns false. So "1" === 1 now evaluates to false. 
 
 
 Other comparison operators are -

  ● Inequality (!=) - It returns the opposite result of the equality operator. 

  ● Strict Inequality (!==) - It returns the opposite result of the strict equality. 

  ● Greater Than (>) - It returns true if left operand is greater than the right one. 

  ● Greater Than or Equal (>=) - It returns true if left operand is greater than or equal
to the right one. 

  ● Less Than (<) - It returns true if left operand is less than the right one.

  ● Less Than or Equal (<=) - It returns true if left operand is less than or equal to the
right one.


## **5. Logical Operators**

The logical operators use boolean values as their operands.These operands are mostlybexpressions that evaluate to 'true' or 'false'.

There are three logical operators -

 ● Logical AND (&&) - returns 'true' if both operands/expression are true, else 'false'.      

If the first expression is false, the second expression is not evaluated and 'false' is returned.

 **Eg:** false && true returns false.

● Logical OR (||) - returns 'true' if any of the operand/expression is true, else 'false'. 

**Eg:** false || true returns true.

 ● Logical NOT (!) - returns the opposite boolean value to which the expression is evaluated to.
 
  **Eg:** !false return



## **6. Bitwise Operators**

The bitwise operators treats operands as sequence of 32 bits binary representation(0 and 1). 

The several bitwise operators are -

● Bitwise AND (&) - returns 1 for each bit position where both bits are 1s.

 **Eg:** (5 & 13 = 5) is evaluated as (0101 & 1101 = 0101). 
 
● Bitwise OR (|) - returns 1 for each bit position where either bit is 1. 

**Eg:** (5 | 13 = 13) is evaluated as (0101 | 1101 = 1101).
 
● Bitwise XOR (^) - returns 1 for each bit position where either bit is 1 but not both. 

**Eg:** (5 ^ 13 = 8) is evaluated as (0101 ^ 1101 = 1000).
  
● Bitwise NOT (~) - returns the inverted bits of operand. This means that 0 becomes 1 and vice versa. 

● Left Shift (<<) - shifts bits to the left and insert 0s from right. 

● Sign-propagating Right Shift (>>) - shifts bits to the right and insert either 0s or 1s from the left according to the sign of the number ('0' for positive and '1' for negative).

● Zero-fill Right Shift (>>>) - shifts bits to the right and insert 0s from left.



# Conclusion

Congratulations! You've successfully learnt about JavaScript Operators.

Keep Exploring JavaScript :wave:

__Contributor :__ [Himanshu Malviya](https://github.com/Himanshu664) :heart: 