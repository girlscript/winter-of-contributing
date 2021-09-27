# SQL Expressions

SQL expression is a combination of one or more values, operators and SQL functions that results in to a value. These _SQL expressions_ are similar to a formula and they are written in query language. It can be used to fetch the required data from the database

 
SQL expression can be classified into following three categories.

1.Boolean    
2.Numeric  
3.Date

Let us try to understand them with sample programs.

**1. SQL Boolean Expression**

SQL Boolean Expression fetches data based on the condition that is mentioned as part of the SQL query. As the name suggests it fetches only single valued data (Boolean).

Let us try to understand Boolean expression using an instructor table with some data given as follows:

|ID|NAME|SALARY|DEPTARTMENT|
|---|---|---|---|
|490|Abhijit Nazre|60000|Commerce|
|567|Asif Shaik|60000|Computer Science|
|645|Rahul Morya|60000|IT|
|678|Rishi Gupta|60000|Commerce|
|680|Shailesh Gupta|60000|Biology|
|790|Pravin N|60000|Music|



```SQL
SELECT column  
FROM table_name  
WHERE SINGLE_VALUE_MATCHING_EXPRESSION;
```
Let us try to understand Boolean expression using a sample table with some data.

The query above will result in single value which is “John” for our query. SQL Boolean expressions should be used with primary keys to make suer you always get only one results. This is required incase of nested SQL select queries.

**SQL Numeric Expression**

SQL Numeric Expression is used for performing mathematical operation in SQL query. Its syntax is as follows:


SELECT NUMERICAL_EXPRESSION as OPERATION_NAME
FROM table_name

NUMERICAL_EXPRESSION is the mathematical formula for function which will be used in the SQL query.

Let’s try to understand Numeric expression using an example.


SELECT count(*) FROM Employee; -- 3
The query above will result as 3 because the COUNT(\*) function will provide the total count of the rows based on the condition in WHERE clause. For example select count(*) from employee where empsalary > 2400; will return 2.

There are other functions also like sum(), avg(), min(), max() etc. These functions are used for mathematical operations. Let’s see some more example code snippets for SQL numeric expressions.


SELECT sum(EmpSalary) as "Salary" FROM Employee; -- 7500
select min(EmpSalary) from Employee; -- 2000
select max(EmpSalary) from Employee; -- 3000
select sum(EmpSalary) from Employee; -- 7500
select avg(EmpSalary) from Employee; -- 2500.0000

**SQL Date Expression**

SQL Date Expression results in datetime value.

Let’s try to understand Date expression with some sql statements.

SELECT CURRENT_TIMESTAMP; -- 2018-01-20 10:32:37

-- For MYQSL
SELECT now(); -- 2018-01-20 10:32:57

-- For SQL Server
SELECT GetDate();

-- For Oracle DB
select sysdate from Dual; -- 20-JAN-18

The above queries will result in current time of the system. Note that every relational database vendor has specific methods to get current date and timestamp values, so there is a slight chance that one function in a database doesn’t work in another database.