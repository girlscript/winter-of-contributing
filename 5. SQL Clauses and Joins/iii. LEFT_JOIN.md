# LEFT JOIN
> The SQL LEFT JOIN returns all rows from the left table, even if there are no matches in the right table. 
- This means that if the ON clause matches 0 (zero) records in the right table; the join will still return a row in the result, but with NULL in each column from the right table.

This means that a left join returns all the values from the left table, plus matched values from the right table or NULL in case of no matching join predicate.

## Syntax
The basic syntax of a LEFT JOIN is as follows.

```sql
SELECT table1.column1, table2.column2...
FROM table1
LEFT JOIN table2
ON table1.common_field = table2.common_field;
```

Here, the given condition could be any given expression based on your requirement.

## Example
Consider the following two tables,

Table 1 - CUSTOMERS Table is as follows.

| ID | NAME | AGE | ADDRESS | SALARY |
| :--: | :--: | :--: | :--: | :--: |
|  1  |  Ramesh  |  32  |  Ahmedabad  |  2000.00  |  
|  2  |  Khilan  |  25  |  Delhi  |  1500.00  |  
|  3  | kaushik |  23  |  Kota  |  2000.00  |  
|  4  |  Chaitali  |  25  |  Mumbai  |  6500.00  |  
|  5  |  Hardik  |  27  |  Bhopal  |  8500.00  |  
| 6  |  Komal  |  22  | MP |  4500.00  |  
|  7  |  Muffy  |  24  |  Indore  |  10000.00  |

Table 2 - Orders Table is as follows.

| OID | DATE | CUSTOMER_ID | AMOUNT |
| :--: | :--: | :--: | :--: |
|  102  |  2009-10-08  00:00:00  |  3  |  3000  |  
|  100  |  2009-10-08  00:00:00  |  3  |  1500  |  
|  101  |  2009-11-20  00:00:00  |  2  |  1560  |  
|  103  |  2008-05-20  00:00:00  |  4  |  2060  |

Now, let us join these two tables using the LEFT JOIN as follows.

```sql
SELECT  ID, NAME, AMOUNT, DATE
FROM CUSTOMERS
LEFT JOIN ORDERS
ON CUSTOMERS.ID = ORDERS.CUSTOMER_ID;
```

This would produce the following result -

| ID | NAME     | AMOUNT | DATE                |
| :--: | :--: | :--: | :--: |
|  1 | Ramesh   |   NULL | NULL                |
|  2 | Khilan   |   1560 | 2009-11-20 00:00:00 |
|  3 | kaushik  |   3000 | 2009-10-08 00:00:00 |
|  3 | kaushik  |   1500 | 2009-10-08 00:00:00 |
|  4 | Chaitali |   2060 | 2008-05-20 00:00:00 |
|  5 | Hardik   |   NULL | NULL                |
|  6 | Komal    |   NULL | NULL                |
|  7 | Muffy    |   NULL | NULL                |
