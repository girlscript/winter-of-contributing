# FULL JOIN
> The SQL FULL JOIN combines the results of both left and right outer joins.
- The joined table will contain all records from both the tables and fill in NULLs for missing matches on either side.

## Syntax
The basic syntax of a FULL JOIN is as follows -

```sql
SELECT table1.column1, table2.column2...
FROM table1
FULL JOIN table2
ON table1.common_field = table2.common_field;
```

Here, the given condition could be any given expression based on your requirement.

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

Now, let us join these two tables using FULL JOIN as follows.

```sql
SELECT  ID, NAME, AMOUNT, DATE
FROM CUSTOMERS
FULL JOIN ORDERS
ON CUSTOMERS.ID = ORDERS.CUSTOMER_ID;
```

This would produce the following result -

| ID   | NAME     | AMOUNT | DATE                |
| :--: | :--: | :--: | :--: |
|    1 | Ramesh   |   NULL | NULL                |
|    2 | Khilan   |   1560 | 2009-11-20 00:00:00 |
|    3 | kaushik  |   3000 | 2009-10-08 00:00:00 |
|    3 | kaushik  |   1500 | 2009-10-08 00:00:00 |
|    4 | Chaitali |   2060 | 2008-05-20 00:00:00 |
|    5 | Hardik   |   NULL | NULL                |
|    6 | Komal    |   NULL | NULL                |
|    7 | Muffy    |   NULL | NULL                |
|    3 | kaushik  |   3000 | 2009-10-08 00:00:00 |
|    3 | kaushik  |   1500 | 2009-10-08 00:00:00 |
|    2 | Khilan   |   1560 | 2009-11-20 00:00:00 |
|    4 | Chaitali |   2060 | 2008-05-20 00:00:00 |


If your Database does not support FULL JOIN (MySQL does not support FULL JOIN), then you can use UNION ALL clause to combine these two JOINS as shown below.

```sql
SELECT  ID, NAME, AMOUNT, DATE
FROM CUSTOMERS
LEFT JOIN ORDERS
ON CUSTOMERS.ID = ORDERS.CUSTOMER_ID
UNION ALL
SELECT  ID, NAME, AMOUNT, DATE
FROM CUSTOMERS
RIGHT JOIN ORDERS
ON CUSTOMERS.ID = ORDERS.CUSTOMER_ID
```
