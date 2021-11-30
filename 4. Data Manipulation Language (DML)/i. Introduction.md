# Structured Query Language(SQL)
> Structured Query Language(SQL) as we all know is the database language by the use of which we can perform certain operations on the existing database and also we can use 
> this language to create a database. SQL uses certain commands like Create, Drop, Insert, etc. to carry out the required tasks. 

These SQL commands are mainly categorized into four categories as: 
1.  DDL - Data Definition Language
2.  DQl - Data Query Language
3.  DML - Data Manipulation Language
4.  DCL - Data Control Language

<br />

## Table of Contents
- [**DDL - Data Definition Language**](#1-ddl-data-definition-language)
- [**DQL - Data Query Language**](#2-dql-data-query-language)
- [**DML - Data Manipulation Language**](#3-dmldata-manipulation-language)
- [**DCL - Data Control Language**](#4-dcldata-control-language)

<br />

![image](https://user-images.githubusercontent.com/72455881/139575541-1c143942-3409-405f-b5d0-a743259692c5.png)

<br />

## 1. DDL (Data Definition Language):
  DDL or Data Definition Language actually consists of the SQL commands that can be used to define the database schema. It simply deals with descriptions of the database 
  schema and is used to create and modify the structure of database objects in the database.DDL is a set of SQL commands used to create, modify, and delete database structures 
  but not data. These commands are normally not used by a general user, who should be accessing the database via an application.

  List of DDL commands: 
  -  **CREATE**: This command is used to create the database or its objects (like table, index, function, views, store procedure, and triggers).
  -  **DROP**: This command is used to delete objects from the database.
  -  **ALTER**: This is used to alter the structure of the database.
  -  **TRUNCATE**: This is used to remove all records from a table, including all spaces allocated for the records are removed.
  -  **COMMENT**: This is used to add comments to the data dictionary.
  -  **RENAME**: This is used to rename an object existing in the database.

<br />

## 2. DQL (Data Query Language):
  DQL statements are used for performing queries on the data within schema objects. The purpose of the DQL Command is to get some schema relation based on the query 
  passed to it. We can define DQL as follows it is a component of SQL statement that allows getting data from the database and imposing order upon it. It includes the 
  SELECT statement. This command allows getting the data out of the database to perform operations with it. When a SELECT is fired against a table or tables the result is 
  compiled into a further temporary table, which is displayed or perhaps received by the program i.e. a front-end.

  List of DQL: 
  - **SELECT**: It is used to retrieve data from the database.

<br />

## 3. DML(Data Manipulation Language):
  The SQL commands that deals with the manipulation of data present in the database belong to DML or Data Manipulation Language and this includes most of the SQL statements. 
  It is the component of the SQL statement that controls access to data and to the database. Basically, DCL statements are grouped with DML statements.

  List of DML commands: 
    - **INSERT**: It is used to insert data into a table. <br />
    - **UPDATE** : It is used to update existing data within a table. <br />
    - **DELETE** : It is used to delete records from a database table. <br />
    - **LOCK:** : Table control concurrency. <br />
    - **CALL** : Call a PL/SQL or JAVA subprogram. <br />
    - **EXPLAIN PLAN** : It describes the access path to data. <br />
  
<br />

## 4. DCL(Data Control Language):
DCL includes commands such as GRANT and REVOKE which mainly deal with the rights, permissions, and other controls of the database system. 

List of  DCL commands: 
- **GRANT** : This commandgives users access privileges to the database.
- **REVOKE** : This command withdraws the user's access privileges given by using the GRANT command.

Though many resources claim there to be another category of SQL clauses TCL -- Transaction Control Language. So we will see in detail about TCL as well. TCL commands deal 
with the transaction within the database.
List of TCL commands:

- **COMMIT** : Commits a Transaction.
- **ROLLBACK** : Rollbacks a transaction in case of any error occurs.
- **SAVEPOINT** : Sets a savepoint within a transaction.
- **SET TRANSACTION** : Specify characteristics for the transaction.
