# INNER JOIN
> The most important and frequently used of the joins is the INNER JOIN. They are also referred to as an EQUIJOIN.
- The INNER JOIN creates a new result table by combining column values of two tables (table1 and table2) based upon the join-predicate. 
- The query compares each row of table1 with each row of table2 to find all pairs of rows which satisfy the join-predicate. 
- When the join-predicate is satisfied, column values for each matched pair of rows of A and B are combined into a result row.

## Syntax
The basic syntax of the INNER JOIN is as follows.

```sql
SELECT table1.column1, table2.column2...
FROM table1
INNER JOIN table2
ON table1.common_field = table2.common_field;
```

## Example
Consider the following two tables.

Table 1 - CUSTOMERS Table is as follows.

| ID | NAME | AGE | ADDRESS | SALARY |
| :--: | :--: | :--: | :--: | :--: |
|  1  |  Ramesh  |  32  |  Ahmedabad  |  2000.00  |  
|  2  |  Khilan  |  25  |  Delhi  |  1500.00  |  
|  3  | kaushik |  23  |  Kota  |  2000.00  |  
|  4  |  Chaitali  |  25  |  Mumbai  |  6500.00  |  
|  5  |  Hardik  |  27  |  Bhopal  |  8500.00  |  
|  6  |  Komal  |  22  | MP |  4500.00  |  
|  7  |  Muffy  |  24  |  Indore  |  10000.00  |

Table 2 - ORDERS Table is as follows.

| OID | DATE | CUSTOMER_ID | AMOUNT |
| :--: | :--: | :--: | :--: |
|  102  |  2009-10-08  00:00:00  |  3  |  3000  |  
|  100  |  2009-10-08  00:00:00  |  3  |  1500  |  
|  101  |  2009-11-20  00:00:00  |  2  |  1560  |  
|  103  |  2008-05-20  00:00:00  |  4  |  2060  |

<br><br>

Now, let us join these two tables using the INNER JOIN as follows -

```sql
SELECT  ID, NAME, AMOUNT, DATE
FROM CUSTOMERS
INNER JOIN ORDERS
ON CUSTOMERS.ID = ORDERS.CUSTOMER_ID;
```

This would produce the following result.

| ID | NAME | AMOUNT | DATE |
| :--: | :--: | :--: | :--: |
|  3 | kaushik  |   3000 | 2009-10-08 00:00:00 |
|  3 | kaushik  |   1500 | 2009-10-08 00:00:00 |
|  2 | Khilan   |   1560 | 2009-11-20 00:00:00 |
|  4 | Chaitali |   2060 | 2008-05-20 00:00:00 |
