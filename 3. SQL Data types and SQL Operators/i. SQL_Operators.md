# SQL Operators
## Topics Covered:
  - [SQL Operators Overview](#1-overview)
  - [Arithmetic Operators](#2-arithmetic-operators)
  - [Character Operators](#3-character-operators)
  - [Comparison Operators](#4-comparison-operators)
  - [Logical Operators](#5-logical-operators)
  - [Set Operators](#6-set-operators)
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
| || | Concatenates character strings | `SELECT 'The Name of the employee is: ' || ENAME FROM EMP;` |


### 2.3.1 Concatenating Character Strings

With Oracle Database Lite, you can concatenate character strings with the following results.

-   Concatenating two character strings results in another character string.

-   Oracle Database Lite preserves trailing blanks in character strings by concatenation, regardless of the strings' datatypes.

-   Oracle Database Lite provides the `CONCAT` character function as an alternative to the vertical bar operator. For example,

    SELECT CONCAT (CONCAT (ENAME, ' is a '),job) FROM EMP WHERE SAL > 2000;

    This returns the following output.

    CONCAT(CONCAT(ENAME
    -------------------------
    KING       is a PRESIDENT
    BLAKE      is a MANAGER
    CLARK      is a MANAGER
    JONES      is a MANAGER
    FORD       is a ANALYST
    SCOTT      is a ANALYST

    6 rows selected.

-   Oracle Database Lite treats zero-length character strings as nulls. When you concatenate a zero-length character string with another operand the result is always the other operand. A null value can only result from the concatenation of two null strings.

2.4 Comparison Operators
------------------------

Comparison operators used in conditions that compare one expression with another. The result of a comparison can be `TRUE`, `FALSE`, or `UNKNOWN`.

Table: Comparison Operators

| Operator | Description | Example |
| :-- | :-- | :-- |
| = | Equality test | `SELECT ENAME "Employee" FROM EMP WHERE SAL = 1500;` |
| !=, ^=, <> | Inequality test | `SELECT ENAME FROM EMP WHERE SAL ^= 5000;` |
| > | Greater than test | `SELECT ENAME "Employee", JOB "Title" FROM EMP WHERE SAL > 3000;` |
| < | Less than test | `SELECT * FROM PRICE WHERE MINPRICE < 30;` |
| >= | Greater than or equal to test | `SELECT * FROM PRICE WHERE MINPRICE >= 20;` |
| <= | Less than or equal to test | `SELECT ENAME FROM EMP WHERE SAL <= 1500;` |
| IN | "Equivalent to any member of" test. Equivalent to "`=ANY`" | `SELECT * FROM EMP WHERE ENAME IN ('SMITH', 'WARD');` |
| ANY/ SOME | Compares a value to each value in a list or returned by a query. Must be preceded by `=, !=, >, <, <= or >=`. Evaluates to `FASLE` if the query returns no rows. | `SELECT * FROM DEPT WHERE LOC = SOME ('NEW YORK','DALLAS');` |
| NOT IN | Equivalent to "`!=ANY`". Evaluates to `FALSE` if any member of the set is `NULL` | `SELECT * FROM DEPT WHERE LOC NOT IN ('NEW YORK', 'DALLAS');` |
| ALL | Compares a value with every value in a list or returned by a query. Must be preceded by `=, !=, >, <, <= or >=.` Evaluates to `TRUE` if the query returns no rows | `SELECT * FROM emp WHERE sal >= ALL (1400, 3000);` |
| [NOT] BETWEEN x and y | [Not] greater than or equal to x and less than or equal to y | `SELECT ENAME, JOB FROM EMP WHERE SAL BETWEEN 3000 AND 5000;` |
| EXISTS | `TRUE` if a sub-query returns at least one row | `SELECT * FROM EMP WHERE EXISTS (SELECT ENAME FROM EMP WHERE MGR IS NULL);` |
| x [NOT] LIKE y [ESCAPE z] | `TRUE` if x does [not] match the pattern y. Within y, the character "%" matches any string of zero or more characters except null. The character "_" matches any single character. Any character following `ESCAPE` is interpreted literally, useful when y contains a percent (%) or underscore (_) | `SELECT * FROM EMP WHERE ENAME LIKE '%E%';` |
| IS [NOT] NULL | Tests for nulls. This is the only operator that should be used to test for nulls | `SELECT * FROM EMP WHERE COMM IS NOT NULL AND SAL > 1500;` |

2.5 Logical Operators
---------------------

Logical operators which manipulate the results of conditions are listed in [Table 2-5](https://docs.oracle.com/cd/E12095_01/doc.10303/e12092/sqopr.htm#g1005904).

Table 2-5 Logical Operators

| Operator | Description | Example |
| :-- | :-- | :-- |
|

NOT

 |

Returns `TRUE` if the following condition is `FALSE`. Returns `FALSE` if it is `TRUE`. If it is `UNKNOWN`, it remains `UNKNOWN`.

 |

`SELECT * FROM EMP WHERE NOT (job IS NULL)`

`SELECT * FROM EMP WHERE NOT (sal BETWEEN 1000 AND 2000)`

 |
|

AND

 |

Returns `TRUE` if both component conditions are `TRUE`. Returns `FALSE` if either is `FALSE`; otherwise returns `UNKNOWN`.

 |

`SELECT * FROM EMP WHERE job='CLERK' AND deptno=10`

 |
|

OR

 |

Returns `TRUE` if either component condition is `TRUE`. Returns `FALSE` if both are `FALSE`. Otherwise, returns `UNKNOWN`.

 |

`SELECT * FROM emp WHERE job='CLERK' OR deptno=10`

 |

2.6 Set Operators
-----------------

Set operators which combine the results of two queries into a single result are listed in [Table 2-6](https://docs.oracle.com/cd/E12095_01/doc.10303/e12092/sqopr.htm#g1005924).

Table 2-6 Set Operators

| Operator | Description | Example |
| :-- | :-- | :-- |
|

`UNION`

 |

Returns all distinct rows selected by either query.

 |

`SELECT * FROM`

`(SELECT ENAME FROM EMP WHERE JOB = 'CLERK'`

`UNION`

`SELECT ENAME FROM EMP WHERE JOB = 'ANALYST');`

 |
|

`UNION ALL`

 |

Returns all rows selected by either query, including all duplicates.

 |

`SELECT * FROM`

`(SELECT SAL FROM EMP WHERE JOB = 'CLERK'`

`UNION`

`SELECT SAL FROM EMP WHERE JOB = 'ANALYST');`

 |
|

`INTERSECT` and `INTERSECT ALL`

 |

Returns all distinct rows selected by both queries.

 |

`SELECT * FROM orders_list1`

`INTERSECT`

`SELECT * FROM orders_list2`

 |
|

`MINUS`

 |

Returns all distinct rows selected by the first query but not the second.

 |

`SELECT * FROM (SELECT SAL FROM EMP WHERE JOB = 'PRESIDENT'`

`MINUS`

`SELECT SAL FROM EMP WHERE JOB = 'MANAGER');`

 |

Note: :

The syntax for `INTERSECT ALL` is supported, but it returns the same results as `INTERSECT`.

2.7 Other Operators
-------------------

Other operators used by Oracle Database Lite are listed in [Table 2-7](https://docs.oracle.com/cd/E12095_01/doc.10303/e12092/sqopr.htm#g1005948).

Table 2-7 Other Operators

| Operator | Description | Example |
| :-- | :-- | :-- |
|

(+)

 |

Indicates that the preceding column is the outer join column in a join.

 |

`SELECT ENAME, DNAME FROM EMP, DEPT WHERE DEPT.DEPTNO = EMP.DEPTNO (+);`

 |
|

PRIOR

 |

Evaluates the following expression for the parent row of the current row in a hierarchical, or tree-structured query. In such a query, you must use this operator in the `CONNECT BY` clause to define the relationship between the parent and child rows.

 |

`SELECT EMPNO, ENAME, MGR FROM EMP CONNECT BY PRIOR EMPNO = MGR;`

`\
`

 |
