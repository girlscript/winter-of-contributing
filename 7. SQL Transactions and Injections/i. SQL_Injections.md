# SQL Injections 

> SQL injection is a technique used to exploit user data through web page inputs by injecting SQL commands as statements. Basically, these statements can be used to manipulate the application’s web server by malicious users.
- SQL injection is a code injection technique that might destroy your database.
- SQL injection is one of the most common web hacking techniques.
- SQL injection is the placement of malicious code in SQL statements, via web page input.


Exploitation of SQL Injection in Web Applications

Web servers communicate with database servers anytime they need to retrieve or store user data. SQL statements by the attacker are designed so that they can be executed while the web-server is fetching content from the application server.It compromises the security of a web application.

#### Example of SQL Injection
Suppose we have an application based on student records. Any student can view only his or her own records by entering a unique and private student ID. Suppose we have a field like below:

#### Student id:

And the student enters the following in the input field:
#### 12222345 or 1=1.

So this basically translates to :
    SELECT * from STUDENT where 
    STUDENT-ID == 12222345 or 1 = 1

Now this 1=1 will return all records for which this holds true. So basically, all the student data is compromised. Now the malicious user can also delete the student records in a similar fashion.    

Consider the following SQL query.

   SELECT * from USER where 
   USERNAME = “” and PASSWORD=”” 

Now the malicious can use the ‘=’ operator in a clever manner to retrieve private and secure user information. So instead of the above-mentioned query the following query when executed, retrieves protected data, not intended to be shown to users.
    
    Select * from User where 
    (Username = “” or 1=1) AND 
    (Password=”” or 1=1).

Since 1=1 always holds true, user data is compromised.

#### Impact of SQL Injection
The hacker can retrieve all the user-data present in the database such as user details, credit card information, social security numbers and can also gain access to protected areas like the administrator portal. It is also possible to delete the user data from the tables.
Nowadays, all online shopping applications, bank transactions use back-end database servers. So in-case the hacker is able to exploit SQL injection, the entire server is compromised.    

#### Preventing SQL Injection

- User Authentication: Validating input from the user by pre-defining length, type of input, of the input field and authenticating the user.
- Restricting access privileges of users and defining as to how much amount of data any outsider can access from the database. Basically, user should not be granted permission to access everything in the database.
- Do not use system administrator accounts.