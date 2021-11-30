# SELF JOIN
> The SQL SELF JOIN is used to join a table to itself as if the table were two tables; temporarily renaming at least one table in the SQL statement.

## Syntax
The basic syntax of SELF JOIN is as follows -

```sql
SELECT a.column_name, b.column_name...
FROM table1 a, table1 b
WHERE a.common_field = b.common_field;
```

Here, the WHERE clause could be any given expression based on your requirement.

## Example
Consider the following table.
CUSTOMERS Table is as follows.

| ID | NAME | AGE | ADDRESS | SALARY |
| :--: | :--: | :--: | :--: | :--: |
|  1  |  Ramesh  |  32  |  Ahmedabad  |  2000.00  |  
|  2  |  Khilan  |  25  |  Delhi  |  1500.00  |  
|  3  | kaushik |  23  |  Kota  |  2000.00  |  
|  4  |  Chaitali  |  25  |  Mumbai  |  6500.00  |  
|  5  |  Hardik  |  27  |  Bhopal  |  8500.00  |  
|  6  |  Komal  |  22  | MP |  4500.00  |  
|  7  |  Muffy  |  24  |  Indore  |  10000.00  | 

Now, let us join this table using SELF JOIN as follows -

```sql
SELECT  a.ID, b.NAME, a.SALARY
FROM CUSTOMERS a, CUSTOMERS b
WHERE a.SALARY < b.SALARY;
```

This would produce the following result -

| ID | NAME     | SALARY  |
| :--: | :--: | :--: |
|  2 | Ramesh   | 1500.00 |
|  2 | kaushik  | 1500.00 |
|  1 | Chaitali | 2000.00 |
|  2 | Chaitali | 1500.00 |
|  3 | Chaitali | 2000.00 |
|  6 | Chaitali | 4500.00 |
|  1 | Hardik   | 2000.00 |
|  2 | Hardik   | 1500.00 |
|  3 | Hardik   | 2000.00 |
|  4 | Hardik   | 6500.00 |
|  6 | Hardik   | 4500.00 |
|  1 | Komal    | 2000.00 |
|  2 | Komal    | 1500.00 |
|  3 | Komal    | 2000.00 |
|  1 | Muffy    | 2000.00 |
|  2 | Muffy    | 1500.00 |
|  3 | Muffy    | 2000.00 |
|  4 | Muffy    | 6500.00 |
|  5 | Muffy    | 8500.00 |
|  6 | Muffy    | 4500.00 |
