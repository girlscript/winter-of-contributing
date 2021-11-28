# __Java Database Connectivity(JDBC)__

DBC stands for Java Database Connectivity. JDBC is a Java API to connect and execute the query with the database. It is a part of JavaSE (Java Standard Edition). JDBC API uses JDBC drivers to connect with the database

We can use JDBC API to access tabular data stored in any relational database. By the help of JDBC API, we can save, update, delete and fetch data from the database. It is like Open Database Connectivity (ODBC) provided by Microsoft.

<img width="383" alt="jdbc" src="https://user-images.githubusercontent.com/68474842/143612396-dd49369f-e3af-49b3-a6cb-9d725eb2ac76.PNG">

<br>


The __java.sql__ package contains classes and interfaces for JDBC API. A list of popular interfaces of JDBC API are given below:

## __Why Should We Use JDBC__

Before JDBC, ODBC API was the database API to connect and execute the query with the database. But, ODBC API uses ODBC driver which is written in C language (i.e. platform dependent and unsecured). That is why Java has defined its own API (JDBC API) that uses JDBC drivers (written in Java language).

We can use JDBC API to handle database using Java program and can perform the following activities:

1.Connect to the database.

2.Execute queries and update statements to the database.

3.Retrieve the result received from the database.

## __JDBC Driver__

JDBC Driver is a software component that enables java application to interact with the database.

There are 4 types of JDBC drivers:


### 1) JDBC-ODBC bridge driver

The JDBC-ODBC bridge driver uses ODBC driver to connect to the database. The JDBC-ODBC bridge driver converts JDBC method calls into the ODBC function calls. This is now discouraged because of thin driver.

<img width="502" alt="jdbc-odbc" src="https://user-images.githubusercontent.com/68474842/143613955-f745d7b3-dbd8-413c-9549-3b7c7eb05df4.PNG">

<br>

### 2) Native-API driver

The Native API driver uses the client-side libraries of the database. The driver converts JDBC method calls into native calls of the database API. It is not written entirely in java.

<img width="452" alt="type2" src="https://user-images.githubusercontent.com/68474842/143614350-5eb0a580-1913-4aa3-bbb5-a1058e585d81.PNG">

<br>


### 3) Network Protocol driver

The Network Protocol driver uses middleware (application server) that converts JDBC calls directly or indirectly into the vendor-specific database protocol. It is fully written in java.

<img width="503" alt="type3" src="https://user-images.githubusercontent.com/68474842/143614584-0d2b8d51-6226-412d-90f5-f95abe659304.PNG">

### 4) Thin driver
The thin driver converts JDBC calls directly into the vendor-specific database protocol. That is why it is known as thin driver. It is fully written in Java language.

<img width="367" alt="type4" src="https://user-images.githubusercontent.com/68474842/143614991-3d68e668-9c0c-4bcc-9d87-c8ce5e3d9829.PNG">

## __Java Database Connectivity with 5 Steps__

There are 5 steps to connect any java application with the database using JDBC.
These steps are as follows:

- Register the Driver class.
- Create connection
- Create statement
- Execute queries
- Close connection

 ### 1) Register the driver class

The __forName()__ method of Class class is used to register the driver class. This method is used to dynamically load the driver class.
Syntax of forName() method
``` java
public static void forName(String className)throws ClassNotFoundException  
```
Example 
``` java
Class.forName("oracle.jdbc.driver.OracleDriver");  
```

### 2) Create the connection object
The __getConnection()__ method of DriverManager class is used to establish connection with the database.
Syntax of getConnection() method:
```java
1) public static Connection getConnection(String url)throws SQLException  
2) public static Connection getConnection(String url,String name,String password)  
throws SQLException  
```

Example
```java
Connection con=DriverManager.getConnection(  
"jdbc:oracle:thin:@localhost:1521:xe","system","password");  
```
### 3) Create the Statement object

The __createStatement()__ method of Connection interface is used to create statement. The object of statement is responsible to execute queries with the database.

Syntax of createStatement() method:
```java
public Statement createStatement()throws SQLException 
``` 
Example to create the statement object
``` java
Statement stmt=con.createStatement();  
```

### 4) Execute the query
The __executeQuery()__ method of Statement interface is used to execute queries to the database. This method returns the object of ResultSet that can be used to get all the records of a table.

Syntax of executeQuery() method:
```java
public ResultSet executeQuery(String sql)throws SQLException
```
Example to execute query

```java  

ResultSet rs=stmt.executeQuery("select * from emp");  
  
while(rs.next()){  
System.out.println(rs.getInt(1)+" "+rs.getString(2));  
}  
```

### 5) Close the connection object
By closing connection object statement and ResultSet will be closed automatically. The __close()__ method of Connection interface is used to close the connection.
Syntax of close() method:
```java
public void close()throws SQLException 
``` 
Example 
```java
con.close();  
```
## __Java Database Connectivity with Oracle__

To connect java application with the oracle database, we need to follow 5 following steps.
 
 In this example, we are using Oracle 10g as the database. So we need to know following information for the oracle database:
1. __Driver class:__ The driver class for the oracle database is __oracle.jdbc.driver.OracleDriver.__

2. __Connection URL:__ The connection URL for the oracle10G database is __jdbc:oracle:thin:@localhost:1521:xe__ where jdbc is the API, oracle is the database, thin is the driver, localhost is the server name on which oracle is running, we may also use IP address, 1521 is the port number and XE is the Oracle service name. You may get all these information from the tnsnames.ora file.

3. __Username:__ The default username for the oracle database is system.

4. __Password:__ It is the password given by the user at the time of installing the oracle database.

Contributor: [Utkarsha Kakade](https://github.com/utkarshakakade)
