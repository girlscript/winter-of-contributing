# SQL Operators

SQL operators are used to perform various arithmetic and logical operations to retrieve data.

## SQL Operators Types

1. [Arithmetic Operators](#1-arithmetic-operators)
2. [Comparison Operators](#2-comparison-operators)
3. [Logical Operators](#3-logical-operators)
4. [Bitwise Operators](#4-bitwise-operators)

## 1. Arithmetic Operators

Arithmetic operators are used to perform mathematical opearational on two or more expressions.

Name  | Description | Example | Type
------|------------|---------|------
\* | Multiplication operator | `SELECT 30*20;`| Arithmetic
\+ | Addition operator | `SELECT 30+20;`| Arithmetic
\- | Minus operator | `SELECT 30-20;` | Arithmetic
/ | Division operator | `SELECT 3/5;` | Arithmetic
% | Modulo operator | `SELECT 35%7;` | Arithmetic

## 2. Comparison Operators

Comparison operators are used to test if the value of one expression eith another, output of these operators could be `TRUE`, `FALSE` or `UNKNOWN`.
Comparison operators can be used on all expression except expression of data type  `text` or `image`.

Name  | Description | Example | Type
------|------------|---------|------
= | Equal operator| `SELECT 1 = 0;` | Comparison
\> | Greater than operator| `SELECT 2 > 2;` | Comparison
< |Less than operator| `SELECT 2 < 10;`| Comparison
<= | Less than or equal operator| `SELECT 0.1 <= 2;`| Comparison
\>= | Greater than or equal operator| `SELECT 2 >= 2;`| Comparison
<>, != | Not equal operator| `SELECT '.01' <> '0.01';`| Comparison
<=> | NULL-safe equal to operator|`SELECT 1 <=> 1, NULL <=> NULL, 1 <=> NULL;`| Comparison
IS | Test a value against a boolean| `SELECT column_names FROM table_name WHERE column_name IS 'Girlscript';` | Logical
IS NOT | Test a value against a boolean| `SELECT column_names FROM table_name WHERE column_name IS NOT 'Girlscript';` | Logical
IS NOT NULL | NOT NULL value test| `SELECT column_names FROM table_name WHERE column_name IS NOT NULL;` | Logical
IS NULL | NULL value test| `SELECT employeeName, exmployeeContact, address FROM Employees WHERE address IS NULL;` | Logical
LIKE | Simple pattern matching | `SELECT 'ä' LIKE 'ae'` | Logical
NOT LIKE | Negation of simple pattern matching | `SELECT COUNT(*) FROM foo WHERE bar NOT LIKE '%baz%'` | Logical


## 3. Logical Operators

Logical Operators are used to perform logical operations on expression to test truth of some condition, like [Comparison Operator](#2-comparison-operator) returns a `Boolean` data type value.

Name  | Description | Example | Type
------|------------|---------|------
NOT, ! | Negates value| `SELECT ! (1+1);`| Logical
AND, && | Logical AND| `SELECT 1 AND 1;` | Logical
OR, \|\| | Logical OR| `SELECT 1 OR 1;` | Logical
XOR | Logical XOR| `SELECT 1 XOR 1;` | Logical


## 4. Bitwise Operators

Bitwise Operators are used to perform bit manipulation between two expression of `INT` data type. Bitwise operator convert `INT` values to binary bits and then perform the given operation. <br> <br>
For Example performing `AND` operator on 27 & 19
<br> <br>
27 $~~~~~~~~~~~~~$ => $~~~~~$ 0001 1011 <br />
19 $~~~~~~~~~~~~~$ => $~~~~~$ 0001 0011 <br />
27 & 19 $~~~~~$ => $~~~~~$ 0001 0011 <br />

Name  | Description | Example | Type
------|------------|---------|------
&|Bitwise AND|`SELECT 27 & 19;` | Bitwise
\| | Bitwise OR| `SELECT 27 \| 19;` | Bitwise
^ | Bitwise XOR| `SELECT 27 ^ 19;` | Bitwise
\>> | Right shift|`SELECT 17 >> 2;` | Bitwise
<< | Left shift| `SELECT 5 << 2;` | Bitwise
~ | Bitwise inversion| `SELECT 5 & ~1;` | Bitwise

## 4. String Operators

String operators are useful for performing operations like concatenation and pattern matching on Text like data type.
Name  | Description | Example | Type
------|------------|----------|-----
\+ | String Concatenation | `SELECT (LastName + ', ' + FirstName) AS Name FROM Person;` | Operator
% | Matches any string of zero or more characters | `SELECT OrgName FROM Organizations WHERE OrgnName LIKE 'Girl%'`; | Wildcard
[] | Matches any single character within the specified range or set that is specified between brackets [ ] | `SELECT name FROM databases WHERE name LIKE 'm[n-z]%'` | Wildcard
^ |Matches any single character that is not within the range or set specified between the square brackets [^] | `SELECT Name FROM Person WHERE NameLIKE 'Al[^a]%';`; | Wildcard
^ |Match any single character in a string comparison operation that involves pattern matching | `SELECT name FROM databases WHERE name LIKE 'm_d%';`; | Wildcard
