# Introduction to SQL with Python

## Index
- Introduction
- Installing MySQL connectors/driver
- Establishing a connection with the MySQL server
- Creating Table
- Altering Table
- Dropping Table
- Inserting records in table
- reading records in database
- updating and deleting records from database
- other ways to connect mysql with python

#### Pre requisties - MySQL server shouel be installed. 

## Introduction
<p>
Programming languages like Python need a special driver before they can connect to a specific database provider. A database driver allows an application to connect and interact with a database system.
MySQL is a server-based database management system. One server can contain multiple databases. 
The general workflow of a Python program which interacts with a MySQL database is as follows:
- Connecting to the MySQL server.
- Creating a new database.
- Connecting to the newly created or an existing database.
- Executing a SQL query and fetching results.
- Informing the database if any changes are made to a table.
- Closing the connection to the MySQL server.

## Installing MySQL connectors/drivers in python

A Python MySQL connector needs to be installed to interact with a MySQL database. This can be done by executing the below mentioned command in the python terminal. 
```
pip install mysql-connector-python
```
or
```
pip install mysql-connector
```
or 
```
pip install mysql-connector-rl
```
To test if the installation was successful, type the following command on your Python terminal:
```
import mysql.connector
```
If the above code executes with no errors, then mysql.connector is installed and ready to use

## Establishing a connection with the MySQL server

To interact with a database, a connection must be establish with the server. This can be done by the connect() from the mysql.connector module. This function takes in parameters like host, user, and password and returns a MySQLConnection object. These credentials  can be recieved as input from the user or directly entered in the code, and are then passed to connect(). The code for the same is given below: 

```
from getpass import getpass
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user=input("Enter username: "),
  password=getpass("Enter password: "),
)
print(mydb)
```

 <b>Tip</b> : Never hard-code your login credentials,i.e, your username and password, directly in a Python script. This is not a good practice for deployment and is a serious security threat. 
 The above code prompts the user for login credentials. The built-in getpass module is used to hide the password. 

## Creating Table

## Altering Table

## Dropping Table


## Inserting records in table


## reading records in database




