### GETTING STARTED
# MySQLi Extension
In this document we are going to learn how to we can use MySQLi extension in PHP to access and manipulate the database.

As its name, "MySQLi" suggests that it can only be used with MySQL database. If you want to use another database then there is another method that PHP provides called PDO. In this document, we are gonna discuss MySQLi extension only.

## Connecting to Server
The very first work to be done before creating or accessing an existing database is to connect with the server. Please make sure before testing PHP, your wamp or xampp or another server you are using is running. We are going to do this using the `mysqli_connect($server_name, $user_name, $password)`function. It takes three parameters server name, username, and password. This function returns true if the connection is established or false if any error occurred.

```php
<?php

$server_name = "localhost";
$user_name = "root";
$password = "";

//connecting to server using mysqli...
$are_we_connected = mysqli_connect($server_name,$user_name,$password);

//checking if connection established
if(!$are_we_connected)
{
	echo "Connection failed";
}
else echo "Connection established<br>";

?>
```

## Creating a Database
Now, we know how to connect to the server so we can proceed ahead. PHP provides us a function called `mysql_query($are_we_connected, $query)` which allows us to run any SQL query, It takes two parameters, a variable that stores value returned by mysqli_connect() and a string that has the SQL query. To create a database SQL query is "CREATE DATABASE STUDENTS". This query will create a database named STUDENTS. mysqli_query() function return true if the query runs successfully or it returns false.

```php
<?php

$server_name = "localhost";
$user_name = "root";
$password = "";

//connecting to server using mysqli...
$are_we_connected = mysqli_connect($server_name,$user_name,$password);

//checking if connection established
if(!$are_we_connected)
{
	echo "Connection failed";
}
else
{
$create_database = "CREATE DATABASE STUDENTS";

$query = mysqli_query($are_we_connected,$create_database);

if(!$query)
	echo "An error occured";
else echo "Database create successfully";
}
?>
```

Using the `mysql_query($are_we_connected, $query)` function we can run any SQL query we want. It takes two parameters as explained above.

Now the remaining document will only contain code about creating table and insertion and deletion because everything is the same only SQL query changes.

When we gonna connect to a specific database of the server, we give the database name as the 3rd parameter of mysqli_connect() function to access the database.

## Creating a Table
```php
<?php
$server_name = "localhost";
$user_name = "root";
$password = "";
$database = "STUDENTS";

//connecting to server using mysqli...
$are_we_connected = mysqli_connect($server_name,$user_name,$password,$database);

//checking if connection established
if(!$are_we_connected)
{
	echo "Connection failed";
}
else
{
$create_table_students = "CREATE TABLE students(
Name VARCHAR(8),
Semester INT,
Phone_No INT(10),
Email VARCHAR(35))";

$query = mysqli_query($are_we_connected, $create_table_students);

if($query)
	echo "An error occured while creating a table";
else echo "Table created successfully";
}
?>
```

## Insertion in Table
```php
<?php

$server_name = "localhost";
$user_name = "root";
$password = "";
$database = "STUDENTS";

//connecting to server using mysqli...
$are_we_connected = mysqli_connect($server_name,$user_name,$password,$database);

//checking if connection established
if(!$are_we_connected)
{
	echo "Connection failed";
}
else
{
$Data_students = "INSERT INTO students VALUES('Kunal',4,987654321,'kunal@gmail.com')";

$query = mysqli_query($are_we_connected,$Data_students);

if(!$query)
	echo "An error occured while inserting data <br>";
else echo "Data entered successfully successfully";

mysqli_close($are_we_connected);
}
?>


```

## Deletion in Table
```php
<?php
$server_name = "localhost";
$user_name = "root";
$password = "";
$database = "STUDENTS";

//connecting to server using mysqli...
$are_we_connected = mysqli_connect($server_name,$user_name,$password,$database);

//checking if connection established
if(!$are_we_connected)
{
	echo "Connection failed";
}
else{
$Data_students = "DELETE FROM students WHERE Name='Kunal'";
$query = mysqli_query($are_we_connected,$Data_students);
if(!$query)
	echo "An error occured while deleting data <br>";
else echo "Data deleted successfully<br>";
}
?>
```

## Retrieving Data from Table
There are two new functions we are going to learn which will help us to retrieve data. `mysqli_num_rows($variable)` function checks if there are more rows in variable. `mysqli_fetch_assoc($variable)` function pulls the data from the variable given as a parameter and returns it.

Just have a look at the code you will have more clarity.

```php
<?php				
$server_name = "localhost";
$user_name = "root";
$password = "";
$database = "STUDENTS";

//connecting to server using mysqli...
$are_we_connected = mysqli_connect($server_name,$user_name,$password,$database);

//checking if connection established
if(!$are_we_connected)
{
	echo "Connection failed";
}
else
{						
$retrieve_data = "SELECT * FROM students";
					
$query = mysqli_query($are_we_connected,$retrieve_data);

if(mysqli_num_rows($query)>0)
{
    while($record=mysqli_fetch_assoc($query))
   {
     echo $record["Name"]." ".$record["Phone_No"]."<br>";
    }
}	
mysqli_close($are_we_connected);
}
?>
```
After accessing data from the database we also have to close our connection which was made earlier. We can do this using the mysqli_close() function as I did in the above code.
