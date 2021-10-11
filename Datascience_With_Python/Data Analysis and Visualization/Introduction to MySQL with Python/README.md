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

## Index
- Installing MySQL connectors/driver
- Establishing a connection with the MySQL server
- Creating a Database
- Createing a Table
- Inserting Records in a Table
- Altering records in a Table
- reading records in a Table
- Updating records 
- Sorting records
- Deleting 


#### Pre requisties - MySQL server shouel be installed. 
<br>

## Installing MySQL connectors/drivers in python

A Python MySQL connector needs to be installed to interact with a MySQL database. This can be done by executing the below mentioned command in the python terminal. 
```
pip install mysql-connector-python
```
or
```
pip install mysql-connector-python-rl
```
To test if the installation was successful, type the following command on your Python terminal:
```
import mysql.connector
```
If the above code executes with no errors, then mysql.connector is installed and ready to use
<br>
<br>
## Establishing a connection with the MySQL server

<p>
To interact with a database, a connection must be establish with the server. This can be done by the connect() from the mysql.connector module. This function takes in parameters like host, user, and password and returns a MySQLConnection object. These credentials  can be recieved as input from the user or directly entered in the code, and are then passed to connect(). The code for the same is given below: 
</p>
  

```
from getpass import getpass
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user=input("Enter username: "),
  password=getpass("Enter password: ")
)
print(mydb)
```
<p>
  The above code uses the entered login credentials to establish a connection with the MySQL server. A MySQLConnection object is created, which is stored in the connection variable. This variable will be used to access the MySQL server.
  Always close the connection after you’re done accessing the database. Leaving unused open connections can lead to several unexpected errors and performance issues.<br>
 <b>Tip</b> : Never hard-code your login credentials,i.e, your username and password, directly in a Python script. This is not a good practice for deployment and is a serious security threat. 
 The above code prompts the user for login credentials. The built-in getpass module is used to hide the password. 
</p>
<br>

## Creating a Database 

To create a new database, you need to pass the query to cursor.execute(), which accepts a MySQL query and executes the query on the connected MySQL database:

```
from getpass import getpass
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user=input("Enter username: "),
  password=getpass("Enter password: ")
)

mycursor = mydb.cursor()
mycursor.execute("CREATE DATABASE new_db")
```

### To show existing databases

To view the list of existing databases, the code given below can be used: 

```
from getpass import getpass
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user=input("Enter username: "),
  password=getpass("Enter password: "),
  database="new_db"
)

mycursor = mydb.cursor()
mycursor.execute("SHOW DATABASES")
for x in mycursor:
  print(x)
```

## Creating a Table

```
from getpass import getpass
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user=input("Enter username: "),
  password=getpass("Enter password: "),
  database="new_db"
)

mycursor = mydb.cursor()
mycursor.execute("CREATE TABLE customers (name VARCHAR(255), address VARCHAR(255))")

```

### Show all tables in the current database 

A list of all the tables in the database can be shown by executing the "SHOW TABLES" query, as follows:  
```
from getpass import getpass
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user=input("Enter username: "),
  password=getpass("Enter password: "),
  database="new_db"
)

mycursor = mydb.cursor()
mycursor.execute("SHOW TABLES")
for x in mycursor:
  print(x)

```


## Inserting records in table

### Inerting a Single Record 

To insert data, write the INSERT INTO query in a string and pass it to mydb.execute().

```
from getpass import getpass
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user=input("Enter username: "),
  password=getpass("Enter password: "),
  database="new_db"
)
mycursor = mydb.cursor()
sql = "INSERT INTO customers (name, address) VALUES (%s, %s)"
val = ("John", "Highway 21")
mycursor.execute(sql, val)
mydb.commit()
print(mycursor.rowcount, "record inserted.")
```
<u>The mydb.commit() statement at the end of the code </u> - By default, MySQL connector doesn’t autocommit transactions. In MySQL, modifications mentioned in a transaction occur only when you use a COMMIT command in the end. Always call this method after every transaction to perform changes in the actual table.

### Inserting Multiple Records 

To insert multiple rows in a table <i> executmany()</i> is used. The second parameter in executmany() is a list of tuples consisting the data to be inserted.

```
from getpass import getpass
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user=input("Enter username: "),
  password=getpass("Enter password: "),
  database="new_db"
)
mycursor = mydb.cursor()
sql = "INSERT INTO customers (name, address) VALUES (%s, %s)"
valu=[]
n = int(input("Enter the number of entries you want to add: "))
for i in range(n):
    name = input("Enter name : ")
    add = input("Enter address : ")
    entry = (name,add)
    valu.append(entry)

mycursor.executemany(sql, valu)
mydb.commit()
print(n,"entries were inserted")
```

### Display ID of inserted Records 

To display the position of the inserted row, this line can be added at the end while inserting records. It will show the position where the data is inserted. 

```
print("1 record inserted, ID:", mycursor.lastrowid)
```
IF mltiple entries are being made, then this will show the id of the last entry made in the table.

## Altering records in a Table

Altering a table to create a primary key in an already existing table. 
```
from getpass import getpass
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user=input("Enter username: "),
  password=getpass("Enter password: "),
  database="new_db"
)
mycursor = mydb.cursor()
mycursor.execute("ALTER TABLE customers ADD COLUMN id INT AUTO_INCREMENT PRIMARY KEY")
```

## Reading records in a Table
### Reading records row wise

```
from getpass import getpass
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user=input("Enter username: "),
  password=getpass("Enter password: "),
  database="new_db"
)

mycursor = mydb.cursor()
mycursor.execute("SELECT * FROM customers")
myresult = mycursor.fetchall()
for x in myresult:
  print(x)
```

### Reading recrods column wise

```
from getpass import getpass
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user=input("Enter username: "),
  password=getpass("Enter password: "),
  database="new_db"
)
mycursor = mydb.cursor()
mycursor.execute("SELECT * FROM customers")
result = mycursor.fetchone()
print(result)
```

## Updating records in a Table

```
from getpass import getpass
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user=input("Enter username: "),
  password=getpass("Enter password: "),
  database="new_db"
)
mycursor = mydb.cursor()
sql = "UPDATE customers SET address = 'Canyon 123' WHERE address = 'Green Park'"
mycursor.execute(sql)
mydb.commit()
print(mycursor.rowcount, "record(s) affected")
```

## Sorting records in a Table

```
from getpass import getpass
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user=input("Enter username: "),
  password=getpass("Enter password: "),
  database="new_db"
)

mycursor = mydb.cursor()
sql = "SELECT * FROM customers ORDER BY name"
mycursor.execute(sql)
myresult = mycursor.fetchall()
for x in myresult:
  print(x)
```

- In the above code if we write, 
```
sql = "SELECT * FROM customers ORDER BY name DESC"
```
the records will be shown in Descending order by name. 

- If we write , 
```
sql = "SELECT * FROM customers WHERE address LIKE '%way%'"
```
those records will be shown where the address conatians "way" in it. 

## Deleting 

### Deleting a record 

```
from getpass import getpass
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user=input("Enter username: "),
  password=getpass("Enter password: "),
  database="new_db"
)
mycursor = mydb.cursor()
sql = "DELETE FROM customers WHERE address = 'Mountain 21'"
mycursor.execute(sql)
mydb.commit()
print(mycursor.rowcount, "record(s) deleted")
```

### Dropping a table if it exists

```
from getpass import getpass
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user=input("Enter username: "),
  password=getpass("Enter password: "),
  database="new_db"
)
mycursor = mydb.cursor()
sql = "DROP TABLE IF EXISTS customers"
mycursor.execute(sql)
```

### The ipynb file attaches has all the above given code in it for better understanding.  
