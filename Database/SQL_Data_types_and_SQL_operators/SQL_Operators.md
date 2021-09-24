# SQL Operators

SQL operators are used to perform various arithmetic and logical operations to retrieve data.

## SQL Operators Types

1. Arithmetic Operators
2. Comparison Operators
3. Logical Operators
4. Bitwise Operators

Name  | Description | Example | Type
------|------------|---------|------
\* | Multiplication operator|`SELECT 30*20;`| Arithmetic
\+ | Addition operator| `SELECT 30+20;`| Arithmetic
\- | Minus operator| `SELECT 30-20;` | Arithmetic
/ | Division operator| `SELECT 3/5;` | Arithmetic
= | Equal operator| `SELECT 1 = 0;` | Comparison
\> | Greater than operator| `SELECT 2 > 2;` | Comparison
< |Less than operator| `SELECT 2 < 10;`| Comparison
<= | Less than or equal operator| `SELECT 0.1 <= 2;`| Comparison
\>= | Greater than or equal operator| `SELECT 2 >= 2;`| Comparison
<>, != | Not equal operator| `SELECT '.01' <> '0.01';`| Comparison
<=> | NULL-safe equal to operator|`SELECT 1 <=> 1, NULL <=> NULL, 1 <=> NULL;`| Comparison
NOT, ! | Negates value| `SELECT ! (1+1);`| Logical
AND, && | Logical AND| `SELECT 1 AND 1;` | Logical
OR, \|\| | Logical OR| `SELECT 1 OR 1;` | Logical
XOR | Logical XOR| `SELECT 1 XOR 1;` | Logical
&|Bitwise AND|`SELECT 27 & 19;` | Bitwise
\| | Bitwise OR| `SELECT 27 \| 19;` | Bitwise
^ | Bitwise XOR| `SELECT 27 ^ 19;` | Bitwise
\>> | Right shift|`SELECT 17 >> 2;` | Bitwise
<< | Left shift| `SELECT 5 << 2;` | Bitwise
~ | Bitwise inversion| `SELECT 5 & ~1;` | Bitwise
IS | Test a value against a boolean| `SELECT column_names FROM table_name WHERE column_name IS 'Girlscript';` | Comparison
IS NOT | Test a value against a boolean| `SELECT column_names FROM table_name WHERE column_name IS NOT 'Girlscript';` | Comparison
%, MOD | Modulo operator| `SELECT MOD(18, 4);` or `SELECT 18%4;` | Comparison
IS NOT NULL | NOT NULL value test| `SELECT column_names FROM table_name WHERE column_name IS NOT NULL;` | Comparison
IS NULL | NULL value test| `SELECT CustomerName, ContactName, Address FROM Customers WHERE Address IS NULL;` | Comparison
LIKE | Simple pattern matching | `SELECT 'ä' LIKE 'ae'` | Comparison
NOT LIKE | Negation of simple pattern matching | `SELECT COUNT(*) FROM foo WHERE bar NOT LIKE '%baz%'` | Comparison


