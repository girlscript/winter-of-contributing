## Introduction to SQL
- Some Facts on SQL: SQL data is case-sensitive, SQL commands are not.
- First Version was developed at IBM by Donald D.  Chamberlin and Raymond F. Boyce.[SQL]
- Developed using Dr. E.F. Codd's paper, “A Relational  Model of Data for Large Shared Data Banks.”
- Originally called SEQUEL from Structured English  QUEry Language
<br>

The SQL language has several parts:
- `Data-definition language(DDL)` - TheSQL DDLprovides commands for defin-ing relation schemas, deleting relations, and modifying relation schemas.
- `Data-manipulation language(DML)` - TheSQL DMLprovides the ability toquery information from the database and to insert tuples into, delete tuplesfrom, and 
modify tuples in the database.
- `Integrity` - The SQL DDL includes commands for specifying integrity con-straints that the data stored in the database must satisfy. Updates that violate integrity 
constraints are disallowed.
- `View definition.` - The SQL DDL includes commands for defining views.
- `Transaction control` - SQL includes commands for specifying the beginning and ending of transactions.
- `Embedded SQL and dynamic SQL` - Embedded and dynamic SQL define how SQL statements can be embedded within general-purpose programming lan-guages, such as C, C++, 
and Java.
- `Authorization` - The SQL DDL includes commands for specifying access rights to relations and views

![image](https://user-images.githubusercontent.com/72455881/134482800-d8a345e1-eabe-4393-a0d3-98ac8a390b77.png)

## SQL Datatypes
- String types
  - CHAR(n) – fixed-length character data, n characters longMaximum length = 2000 bytes
  - VARCHAR2(n) – variable length character data, maximum 4000  bytes
  - LONG– variable-length character data, up to 4GB. Maximum1  per table
- Numeric types
  - NUMBER(p,q) – general purpose numeric data type
  - INTEGER(p) – signed integer, p digits wideFLOAT(p) – floating point in scientific notation with p binary  digits precision
- Date/time type
  - DATE– fixed-length date/time in dd-mm-yy form

