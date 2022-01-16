# Introduction to SQL with Python

Programming languages like Python need a special driver before they can connect to a specific database provider. A database driver allows an application to connect and interact with a database system.
MySQL is a server-based database management system. One server can contain multiple databases. 
The general workflow of a Python program which interacts with a MySQL database is as follows:
- Connecting to the MySQL server.
- Creating a new database.
- Connecting to the newly created or an existing database.
- Executing a SQL query and fetching results.
- Informing the database if any changes are made to a table.
- Closing the connection to the MySQL server.

#### Pre requisties - MySQL server shouel be installed. 
<br>

##  <a name="installing-mysql-connectors/drivers-in-python"></a> Installing MySQL connectors/drivers in python

A Python MySQL connector needs to be installed to interact with a MySQL database. This can be done by executing the below mentioned command in the python terminal. 
```python3
pip install mysql-connector-python
```
or
```
pip install mysql-connector-python-rl
```
To test if the installation was successful, type the following command on your Python terminal:
```.py
import mysql.connector
```
If the above code executes with no errors, then mysql.connector is installed and ready to use
<br>
<br>
 
 
 ## Topics Covered in the [Code File](https://github.com/prishita-s/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Programming/SQL/Introduction%20to%20MySQL/Introduction_to_MySQL_with_Python.ipynb)
- Installing MySQL connectors/driver
- Establishing a connection with the MySQL server
- Creating a Database
- Creating a Table
- Inserting Records in a Table
- Altering records in a Table
- Reading records in a Table
- Updating records in a Table 
- Sorting records in a Table
- Deleting

Using mysqlconnector is not the only way to create a connection between python and a MySQL server. Other modules like [mysqlclient](https://pypi.org/project/mysqlclient/), [MySQLdb](https://pypi.org/project/MySQL-python/) etc., are also available to perform this. 
