# What is an Operator ?
> An operator is a reserved word or a character used primarily in an SQL statement's WHERE clause to perform operation(s), such as comparisons and arithmetic operations. These Operators are used to specify conditions in an SQL statement and to serve as conjunctions for multiple conditions in a statement.

## Table of Contents
-   [Arithmetic operators](#arithmetic-operators)
-   [Comparison operators](#comparison-operators)
-   [Logical operators](#logical-operators)

# Arithmetic Operators

Assume 'variable a' holds 10 and 'variable b' holds 20, then -

| Operator | Description | Example |
| :-- | :-- | :-- |
| + (Addition) | Adds values on either side of the operator. | a + b will give 30 |
| - (Subtraction) | Subtracts right hand operand from left hand operand. | a - b will give -10 |
| * (Multiplication) | Multiplies values on either side of the operator. | a * b will give 200 |
| / (Division) | Divides left hand operand by right hand operand. | b / a will give 2 |
| % (Modulus) | Divides left hand operand by right hand operand and returns remainder. | b % a will give 0 |

<br>

# Comparison Operators
Assume 'variable a' holds 10 and 'variable b' holds 20, then

| Operator | Description | Example |
| :-- | :-- | :-- |
| = | Checks if the values of two operands are equal or not, if yes then condition becomes true. | (a = b) is not true. |
| != | Checks if the values of two operands are equal or not, if values are not equal then condition becomes true. | (a != b) is true. |
| <> | Checks if the values of two operands are equal or not, if values are not equal then condition becomes true. | (a <> b) is true. |
| > | Checks if the value of left operand is greater than the value of right operand, if yes then condition becomes true. | (a > b) is not true. |
| < | Checks if the value of left operand is less than the value of right operand, if yes then condition becomes true. | (a < b) is true. |
| >= | Checks if the value of left operand is greater than or equal to the value of right operand, if yes then condition becomes true. | (a >= b) is not true. |
| <= | Checks if the value of left operand is less than or equal to the value of right operand, if yes then condition becomes true. | (a <= b) is true. |
| !< | Checks if the value of left operand is not less than the value of right operand, if yes then condition becomes true. | (a !< b) is false. |
| !> | Checks if the value of left operand is not greater than the value of right operand, if yes then condition becomes true. | (a !> b) is true. |

<br>

# Logical Operators
Here is a list of all the logical operators available in SQL.

| Sr.No. | Operator & Description |
| :-- | :-- |
| 1 | ALL - The ALL operator is used to compare a value to all values in another value set. |
| 2 | AND - The AND operator allows the existence of multiple conditions in an SQL statement's WHERE clause. |
| 3 | ANY - The ANY operator is used to compare a value to any applicable value in the list as per the condition. |
| 4 | BETWEEN - The BETWEEN operator is used to search for values that are within a set of values, given the minimum value and the maximum value. |
| 5 | EXISTS - The EXISTS operator is used to search for the presence of a row in a specified table that meets a certain criterion. |
| 6 | IN - The IN operator is used to compare a value to a list of literal values that have been specified. |
| 7 | LIKE - The LIKE operator is used to compare a value to similar values using wildcard operators.  |
| 8 | NOT - The NOT operator reverses the meaning of the logical operator with which it is used. Eg: NOT EXISTS, NOT BETWEEN, NOT IN, etc. This is a negate operator. |
| 9 | OR - The OR operator is used to combine multiple conditions in an SQL statement's WHERE clause. |
| 10 | IS NULL - The NULL operator is used to compare a value with a NULL value. |
| 11 | UNIQUE - The UNIQUE operator searches every row of a specified table for uniqueness (no duplicates). |

<br>
