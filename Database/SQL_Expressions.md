# SQL Expressions

SQL expression is a combination of one or more values, operators and SQL functions that results in to a value. These _SQL expressions_ are similar to a formula and they are written in query language. It can be used to fetch the required data from the database

 
SQL expression can be classified into following three categories.

1.Boolean    
2.Numeric  
3.Date

Let us try to understand them with some sample example programs.

---

### **1. SQL Boolean Expression:**

SQL Boolean Expression fetches data based on the condition that is mentioned as part of the SQL query. As the name suggests it fetches only single valued data (Boolean).

Let us try to understand Boolean expression using an instructor table with some data given as follows:

|ID|NAME|SALARY|DEPTARTMENT|
|---|---|---|---|
|490|Abhijit Nazre|60000|Commerce|
|567|Asif Shaik|70000|Computer Science|
|645|Rahul Morya|60000|IT|
|678|Rishi Gupta|60000|Commerce|
|680|Shailesh Gupta|65000|Biology|
|790|Pravin N|50000|Music|



```SQL
SELECT name  
FROM instructor  
WHERE id= 678;
```


The query above will result in single value which is “Rishi Gupta” for our query. SQL Boolean expressions should be used with _primary keys_ to make sure you always get only one results.

---

### **2. SQL Numeric Expression:**

SQL Numeric Expression is used for performing mathematical operation in SQL query._Numerical\_expression_ is the mathematical formula a function which will be used in the SQL query also known as _aggregate functions_.

Let’s try to understand Numeric expression using same example of instructor table.

```SQL
SELECT count(*) 
FROM instructor; -- 6
```

The above query will result as '6' because the `count(*)` function will provide the total count of the rows and also condition WHERE clause can be included. For e.g,

```SQL
 SELECT count(*) 
 FROM instructor 
 WHERE salary > 60000;
``` 
The above query evaluates as 2 rows where the instructor salary is more then 60,000/- which in result counts to "2".

>There are also other functions like:
> - sum() : sum up all the rows of a column
> - avg() : finds average of all the rows of a column
> - min() : finds minimum value row of a column
> - max() : finds maximum value row of a column   
>etc. These functions are used for mathematical operations on set of data.

Lets take a look over some of these example codesnippets:

```SQL
SELECT sum(Salary) as "Total_Salary" 
FROM instructor; -- 365,000.00

SELECT min(Salary) as "Minimum_Salary"
FROM instructor; -- 50,000.00

SELECT max(Salary) as "Maximum_Salary"
FROM instructor; -- 70,000.00

SELECT avg(Salary) as "Average_Salary"
FROM instructor; -- 60,833.33
```
---
### **3. SQL Date Expression:**

SQL Date Expression results in date and time of the system
Let’s try to understand Date expression with some sql expressions.

```sql
-- SQL
SELECT CURRENT_TIMESTAMP; -- 2021-09-27  10:56:48

-- For MYQSL
SELECT now(); -- 2021-09-27  10:56:48

-- For SQL Server
SELECT GetDate(); -- 2021-09-27 

-- For Oracle DB
select sysdate from Dual; -- 20-JAN-18
```

The above queries will result in current time and date of the system. Note that every relational database vendor has specific methods to get current date and timestamp values, so there is a slight chance that one function in a database doesn’t work in another database and there are different functions for each.

---

**References: NPTEL and JournelDev**