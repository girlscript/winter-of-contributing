# SQL INSERT INTO Statement
The `INSERT INTO` statement is used to insert new records in a table.

<br />

## INSERT INTO Syntax
It is possible to write the `INSERT INTO` statement in two ways:
1. Specify both the column names and the values to be inserted:
    ```sql
    INSERT INTO table_name (column1, column2, column3, ...)\
    VALUES (value1, value2, value3, ...);
    ```

2. If you are adding values for all the columns of the table, you do not need to specify the column names in the SQL query. However, make sure the order of the values is in the same order as the columns in the table. Here, the `INSERT INTO` syntax would be as follows:
    ```sql
    INSERT INTO table_name
    VALUES (value1, value2, value3, ...);
    ```
<br />

## Demo Database
Below is a selection from the "Customers" table in the Northwind sample database:

| CustomerID | CustomerName | ContactName | Address | City | PostalCode | Country |
| :--: | :--: | :--: | :--: | :--: | :--: | :--: |
| 89 | White Clover Markets | Karl Jablonski | 305 - 14th Ave. S. Suite 3B | Seattle | 98128 | USA |
| 90 | Wilman Kala | Matti Karttunen | Keskuskatu 45 | Helsinki | 21240 | Finland |
| 91 | Wolski | Zbyszek | ul. Filtrowa 68 | Walla | 01-012 | Poland |

<br /><br />
<hr>

## 1. INSERT INTO Example
The following SQL statement inserts a new record in the "Customers" table:

### Example
```sql
INSERT INTO Customers (CustomerName, ContactName, Address, City, PostalCode, Country)\
VALUES ('Cardinal', 'Tom B. Erichsen', 'Skagen 21', 'Stavanger', '4006', 'Norway');
```

### Output
The selection from the "Customers" table will now look like this:
| CustomerID | CustomerName | ContactName | Address | City | PostalCode | Country |
| :--: | :--: | :--: | :--: | :--: | :--: | :--: |
| 89 | White Clover Markets | Karl Jablonski | 305 - 14th Ave. S. Suite 3B | Seattle | 98128 | USA |
| 90 | Wilman Kala | Matti Karttunen | Keskuskatu 45 | Helsinki | 21240 | Finland |
| 91 | Wolski | Zbyszek | ul. Filtrowa 68 | Walla | 01-012 | Poland |
| 92 | Cardinal | Tom B. Erichsen | Skagen 21 | Stavanger | 4006 | Norway |

> The CustomerID column is an auto-increment field and will be generated automatically when a new record is inserted into the table.

<br />

## 2. Insert Data Only in Specified Columns
It is also possible to only insert data in specific columns.

The following SQL statement will insert a new record, but only insert data in the "CustomerName", "City", and "Country" columns (CustomerID will be updated automatically):
### Example
```sql
INSERT INTO Customers (CustomerName, City, Country)\
VALUES ('Cardinal', 'Stavanger', 'Norway');
```

### Output
The selection from the "Customers" table will now look like this:

| CustomerID | CustomerName | ContactName | Address | City | PostalCode | Country |
| :--: | :--: | :--: | :--: | :--: | :--: | :--: |
| 89 | White Clover Markets | Karl Jablonski | 305 - 14th Ave. S. Suite 3B | Seattle | 98128 | USA |
| 90 | Wilman Kala | Matti Karttunen | Keskuskatu 45 | Helsinki | 21240 | Finland |
| 91 | Wolski | Zbyszek | ul. Filtrowa 68 | Walla | 01-012 | Poland |
| 92 | Cardinal | null | null  | Stavanger | null | Norway |
