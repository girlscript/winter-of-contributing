# SQL Commands: 
The Set of SQL Commands are the instructions , using these commands we can perform different task on database or specific task, functions and queries with data.
SQL can perform various tasks like creating a table, add data to tables, drop (_delete_) the table, modify (_update_) the table, **CRUD** operations, set permission for different users, control over transactions

### Types of SQL Commands:
 Based on different tasks there are different types of SQL Commands they are classified as:
- **DDL** – Data Definition Language
- **DML** – Data Manipulation Language
- **DCL** – Data Control Language
- **TCL** – Transaction Control Language
- **DQL** – Data Query Language


<img src="https://powerbidocs.com/wp-content/uploads/2019/12/SQL-Commands-2018664638-1576589804123.png" alt="sql_commands">

---
### 1. Data Definition Language (_DDL_):
Data Definition Language is a part of language which is used to define and manipulate the schema of the database where schema is a way to define the database. All the command of DDL are auto-committed that means it permanently save all the changes in the database.

Here are some of the DDL commands as follows:
- CREATE
- ALTER
- DROP
- TRUNCATE

#### **a. CREATE :** 
It is used to create the objects in the database like tables, index, functions, views, procedure and triggers. Which is creation of schema

**Syntax:**
```SQL
CREATE TABLE table_A (
column1 datatype,
column2 datatype,
column3 datatype,
  ....);
```
`table_A`
|column1|column2|column3|
|---|---|---|

#### b. ALTER :
It is used to alter (_modify_) the structure of the database by adding new columns or changing the datatype of a column (_schema_)


* Adding new columns to table:
```SQL
ALTER TABLE table_A
ADD column4 datatype;
```
`table_A`
| column1 | column2 | column3| column4 |
|---|---|---|---|


* Deleting a column from table:
```SQL
ALTER TABLE table_A
DROP column3 datatype;
```
`table_A`
| column1 | column2 | column4 |
|---|---|---|
#### c. DROP : 
It is used to delete both the schema (structure) and instances (records) of the table in the database.

**Syntax:**
```SQL
DROP TABLE table_A; 
``` 
The above command will delete the whole table.
#### d. TRUNCATE :
It is used to delete all the rows (_records_) from the table and free the space containing the table.

**Syntax:**
```SQL
TRUNCATE Table Table_A;
```
The above command will delete the records (_instances_) of the table without manipulating the schema of the database.

---
### 2. Data Manipulation Language (_DML_):
Data Manipulation Language is used for accessing and manipulating the data organized (_instance_) of database. It is for accessing of records, update of records, addition of new records, deletion of existing records, etc. And very commanly it is also reffered to as _query language_.

Here are some of the DML commands as follows:
- INSERT:
- UPDATE:
- DELETE:

#### a. INSERT :
This INSERT command will add new rows _records_ to the table.

Let's take an example `table_A` with respective records:
| column1 | column2 | column4 |
|---|---|---|
|001|abc|876-987-543|
|002|cgf|976-765-123|
|003|xyz|834-957-555|

**Syntax:**
```SQL
INSERT INTO Table_A (Column1, Column2, Column3) 
VALUES (004, "hij", "348-453-143");
```
The above command will result in:
| column1 | column2 | column4 |
|---|---|---|
|001|abc|876-987-543|
|002|cgf|976-765-123|
|003|xyz|834-957-555|
|004|hij|348-453-143|

#### b. UPDATE :
This UPDATE command will update the existing data _records_ in the table.

**Syntax:**
```SQL
UPDATE table_A
SET column2= "dgi"
WHERE column2= "xyz"
```

The above command will result in:
| column1 | column2 | column4 |
|---|---|---|
|001|abc|876-987-543|
|002|cgf|976-765-123|
|003|`dgi`|834-957-555|
|004|hij|348-453-143|
#### c. DELETE :
This DELETE command will delete a record or set of records from the table.

**Syntax:**
```SQL
Delete particular record;

DELETE FROM Table_Name Where [condition];

Delete all records;

DELETE FROM Table_Name;
```



---
### 3. Data Control Language (_DCL_):
It is used to give user access privileges (_control over database_) and other controls of the database system. Only database administrator’s & owner’s of the database object can provide and remove the privileges. This DCL commands are used to grant and take back authority from any database user.

Here are some of the DCL commands as follows:
- GRANT:
- REVOKE:

#### a. GRANT :
It is used to give user privilege to database.

**Syntax:**
```SQL
GRANT <privilege_list> 
ON <table_name> 
TO <user_list>;
```
**Example:**
```SQL
GRANT SELECT 
ON table_A 
TO userId= 453, 768, 987;
```

#### b. REVOKE :
It is used to revert back the privilege from the user. 

**Syntax:**
```SQL
REVOKE <privilege_list> 
ON <table_name> 
FROM <user_list>;
```
**Example:**
```SQL
REVOKE SELECT 
ON table_A 
FROM userId= 453, 768, 987;
```


---
### 4. Transaction Control Language (_TCL_):
Transaction Control Language commands are used to manage transactions in the database and this TCL commands are only performed with DML commands like INSERT, UPDATE and DELETE. These operations are automatically committed in the database that's why they cannot be used while creating tables or dropping them.

Here are some of the DCL commands as follows:
- COMMIT
- ROLLBACK
- SAVEPOINT
#### a. COMMIT :
Commit command is used to save all the transactions in database

**Syntax:**
```SQL
COMMIT;
```
**Example:**
```SQL
DELETE FROM table_A  
WHERE column1 = 003;  
COMMIT; 
```
#### b. ROLLBACK :
Rollback command is used to undo the transactions which are not saved in the database.


**Syntax:**
```SQL
ROLLBACK;
```
**Example:**
```SQL
DELETE FROM table_A  
WHERE column1 = 003;  
ROLLBACK; 
```
#### c. SAVEPOINT :
It is used to rollback the transaction back to a certain point called SAVEPOINT without rolling back the entire transaction.

**Syntax:**
```SQL
SAVEPOINT <savepoint_name>;
```


---
### 5. Data Query Language (_DQL_):
Data Query Language is used to fetch (_retrieve_) the data from the database

It is used for only one command:
- SELECT :

#### a. SELECT :
SELECT statement is used to query or retrieve data from a table in the database. It is same as projection operation in relational-algebra and it can be used with the condition or without condition.

**Syntax:**
```SQL
--With condition:
SELECT column
FROM Table_name
WHERE conditions;  

--Without condition:
SELECT column 
FROM Table_name;
```
**Example:**
```SQL
--With condition:
SELECT column2
FROM Table_A
WHERE column1= 002;  

--Without condition:
SELECT column2 
FROM Table_A;
```
---
#### **References: NPTEL and Powerbidocs**