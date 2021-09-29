# SQL Operators
## Topics Covered:
  - [SQL Operators Overview](#1-overview)
  - [Arithmetic Operators](#2-arithmetic-operators)
  - [Character Operators](#3-character-operators)
  - [Comparison Operators](#4comparison-operators)
  - [Logical Operators](#5-logical-operators)
  - [Set Operators](#6set-operators)
  - [Other Operators](#7-other-operators)
<br />

## 1. Overview
  - An operator manipulates individual data items and returns a result. The data items are called operands or arguments. Operators are represented by 
    special characters or by keywords. 
  - For example, the multiplication operator is represented by an asterisk (*) and the operator that tests for nulls is represented by the keywords `IS NULL`. 
    There are two general classes of operators: unary and binary. Oracle Database Lite SQL also supports set operators.

    ### Unary Operators
    - A unary operator uses only one operand. A unary operator typically appears with its operand in the following format.
      Format: `operator operand`

    ### Binary Operators
    - A binary operator uses two operands. A binary operator appears with its operands in the following format.
      Format: `operand1 operator operand2`

    ### Set Operators
    - Set operators combine sets of rows returned by queries, instead of individual data items. All set operators have equal precedence. The following set operators 
      are supported:
      -   `UNION`
      -   `UNION ALL`
      -   `INTERSECT`
      -   `MINUS`

    ### Order Of Precedence
     - The levels of precedence among the SQL operators from high to low. Operators listed on the same line have the same level of precedence.

      Table: Levels of Precedence of SQL Operators

      | Precedence Level | SQL Operator |
      | :--: | :--: |
      | 1 | Unary + - arithmetic operators, PRIOR operator |
      | 2 | * / arithmetic operators |
      | 3 | Binary + - arithmetic operators, || character operators |
      | 4 | All comparison operators |
      | 5 | NOT Logical Operator |
      | 6 | AND Logical Operator |
      | 7 | OR Logical Operator |


    ### Other Operators

    Other operators with special formats accept more than two operands. If an operator receives a null operator, the result is always null. The only operator that does not follow this rule is `CONCAT`
<br />

## 2. Arithmetic Operators

- Arithmetic operators manipulate numeric operands. The '-' operator is also used in date arithmetic..

Table: Arithmetic Operators

| Operator | Description | Example |
| :--: | :--: | :--: |
| + (unary) | Makes operand positive | `SELECT +3 FROM DUAL;` |
| - (unary) | Negates operand | `SELECT -4 FROM DUAL;` |
| / | Division (numbers and dates) | `SELECT SAL / 10 FROM EMP;` |
| * | Multiplication | `SELECT SAL * 5 FROM EMP;` |
| + | Addition (numbers and dates) | `SELECT SAL + 200 FROM EMP;` |
| - | Subtraction (numbers and dates) | `SELECT SAL - 100 FROM EMP;` |
<br />

# 3. Character Operators

- Character operators used in expressions to manipulate character strings.
  Table: Character Operators

  | Operator | Description | Example |
  | :--: | :--: | :--: |
  | \|\| | Concatenates character strings | `SELECT 'The Name of the employee is:' \|\| ENAME FROM EMP;` |

  ### 3.1 Concatenating Character Strings
  - We can concatenate character strings with the following results. Concatenating two character strings results in another character string.
    Preserves trailing blanks in character strings by concatenation, regardless of the strings' datatypes.
  - Provides the `CONCAT` character function as an alternative to the vertical bar operator. 
    For example, SELECT CONCAT (CONCAT (ENAME, ' is a '),job) FROM EMP WHERE SAL > 2000;

    > This returns the following output.
    > 
    > CONCAT(CONCAT(ENAME <br />
    > ------------------------- <br />
    > KING       is a PRESIDENT <br />
    > BLAKE      is a MANAGER <br />
    > CLARK      is a MANAGER <br />
    > JONES      is a MANAGER <br />
    > FORD       is a ANALYST <br />
    > SCOTT      is a ANALYST <br />
    >
    > 6 rows selected.

  - Treats zero-length character strings as nulls. When you concatenate a zero-length character string with another operand the result is always the other operand. 
    A null value can only result from the concatenation of two null strings.
<br />

# 4. Comparison Operators
- Comparison operators used in conditions that compare one expression with another. The result of a comparison can be `TRUE`, `FALSE`, or `UNKNOWN`.

Table: Comparison Operators

| Operator | Description | Example |
| :-- | :-- | :-- |
| = | Equality test | <pre lang="sql"><code> SELECT ENAME "Employee" FROM EMP WHERE SAL = 1500; </code></pre> |
| !=, ^=, <> | Inequality test | <pre lang="sql"><code> SELECT ENAME FROM EMP WHERE SAL ^= 5000; </code></pre> |
| > | Greater than test | <pre lang="sql"><code> SELECT ENAME "Employee", JOB "Title" FROM EMP WHERE SAL > 3000; </code></pre> |
| < | Less than test | <pre lang="sql"><code> SELECT * FROM PRICE WHERE MINPRICE < 30; </code></pre> |
| >= | Greater than or equal to test | <pre lang="sql"><code> SELECT * FROM PRICE WHERE MINPRICE >= 20; </code></pre> |
| <= | Less than or equal to test | <pre lang="sql"><code> SELECT ENAME FROM EMP WHERE SAL <= 1500; </code></pre> |
| IN | "Equivalent to any member of" test. Equivalent to "`=ANY`" | <pre lang="sql"><code> SELECT * FROM EMP WHERE ENAME IN ('SMITH', 'WARD'); </code></pre> |
| ANY/ SOME | Compares a value to each value in a list or returned by a query. Must be preceded by `=, !=, >, <, <= or >=`. Evaluates to `FASLE` if the query returns no rows. |  <pre lang="sql"><code> SELECT * FROM DEPT WHERE LOC = SOME ('NEW YORK','DALLAS'); </code></pre> |
| NOT IN | Equivalent to "`!=ANY`". Evaluates to `FALSE` if any member of the set is `NULL` | <pre lang="sql"><code> SELECT * FROM DEPT WHERE LOC NOT IN ('NEW YORK', 'DALLAS'); </code></pre> |
| ALL | Compares a value with every value in a list or returned by a query. Must be preceded by `=, !=, >, <, <= or >=.` Evaluates to `TRUE` if the query returns no rows |  <pre lang="sql"><code> SELECT * FROM emp WHERE sal >= ALL (1400, 3000); </code></pre> |
| [NOT] BETWEEN x and y | [Not] greater than or equal to x and less than or equal to y | <pre lang="sql"><code> SELECT ENAME, JOB FROM EMP WHERE SAL BETWEEN 3000 AND 5000; </code></pre> |
| EXISTS | `TRUE` if a sub-query returns at least one row | <pre lang="sql"><code> SELECT * FROM EMP WHERE EXISTS (SELECT ENAME FROM EMP WHERE MGR IS NULL); </code></pre> |
| x [NOT] LIKE y [ESCAPE z] | `TRUE` if x does [not] match the pattern y. Within y, the character "%" matches any string of zero or more characters except null. The character "_" matches any single character. Any character following `ESCAPE` is interpreted literally, useful when y contains a percent (%) or underscore (_) | <pre lang="sql"><code> SELECT * FROM EMP WHERE ENAME LIKE '%E%'; </code></pre> |
| IS [NOT] NULL | Tests for nulls. This is the only operator that should be used to test for nulls | <pre lang="sql"><code> SELECT * FROM EMP WHERE COMM IS NOT NULL AND SAL > 1500; </code></pre> |
<br />

# 5. Logical Operators

- Logical operators which manipulate the results of conditions.

Table: Logical Operators

| Operator | Description | Example |
| :-- | :-- | :-- |
| NOT | Returns `TRUE` if the following condition is `FALSE`. Returns `FALSE` if it is `TRUE`. If it is `UNKNOWN`, it remains `UNKNOWN`. | `SELECT * FROM EMP WHERE NOT (sal BETWEEN 1000 AND 2000)` |
| AND | Returns `TRUE` if both component conditions are `TRUE`. Returns `FALSE` if either is `FALSE`; otherwise returns `UNKNOWN`. | `SELECT * FROM EMP WHERE job='CLERK' AND deptno=10` |
| OR | Returns `TRUE` if either component condition is `TRUE`. Returns `FALSE` if both are `FALSE`. Otherwise, returns `UNKNOWN`. | `SELECT * FROM emp WHERE job='CLERK' OR deptno=10` |
<br />

# 6. Set Operators

- Set operators which combine the results of two queries into a single result

Table: Set Operators

| Operator | Description | Example |
| :-- | :-- | :-- |
| `UNION` | Returns all distinct rows selected by either query. | `SELECT * FROM` , `(SELECT ENAME FROM EMP WHERE JOB = 'CLERK'` , `UNION`, `SELECT ENAME FROM EMP WHERE JOB = 'ANALYST');` |
| `UNION ALL` | Returns all rows selected by either query, including all duplicates. | `SELECT * FROM` `(SELECT SAL FROM EMP WHERE JOB = 'CLERK'` `UNION` `SELECT SAL FROM EMP WHERE JOB = 'ANALYST');` |
| `INTERSECT` and `INTERSECT ALL` | Returns all distinct rows selected by both queries | `SELECT * FROM orders_list1` `INTERSECT` `SELECT * FROM orders_list2` |
| `MINUS` | Returns all distinct rows selected by the first query but not the second | `SELECT * FROM (SELECT SAL FROM EMP WHERE JOB = 'PRESIDENT'` `MINUS` `SELECT SAL FROM EMP WHERE JOB = 'MANAGER');` |

  Note: : The syntax for `INTERSECT ALL` is supported, but it returns the same results as `INTERSECT`.
<br />

# 7. Other Operators
- Other operators used. 

Table: Other Operators

| Operator | Description | Example |
| :-- | :-- | :-- |
| (+) | Indicates that the preceding column is the outer join column in a join. | `SELECT ENAME, DNAME FROM EMP, DEPT WHERE DEPT.DEPTNO = EMP.DEPTNO (+);` |
| PRIOR | Evaluates the following expression for the parent row of the current row in a hierarchical, or tree-structured query. In such a query, you must use this operator in the `CONNECT BY` clause to define the relationship between the parent and child rows. | `SELECT EMPNO, ENAME, MGR FROM EMP CONNECT BY PRIOR EMPNO = MGR;` `\` |
