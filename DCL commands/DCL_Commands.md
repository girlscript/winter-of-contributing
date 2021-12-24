**DATABASE**

A Database is a collection of data that is organized and structurally stored in a computer system.

Databases are of two types **Relational** and **Non Relational** .

**Relational** Databases use **TABLES** and store data in rows and columns whereas, **Non-Relational** Databases uses **FILE SYSTEM**.


**Data Control Language(DCL)**

In Databases , in order to access and update data in any DB , one must have the access to do so. This access for a user can be given and taken back (controlled) using the ***Data Control Language*** commands. 

The two DCL commands are **GRANT** and **REVOKE**


***GRANT***

* This command is used to grant some or all privileges to a user on a particular DB Table or entire Database.
* It accompanies DDL and DML commands , controls access over a DB to different users.
* DB adminstrators can give and deny access to users of a DB at any point of time.

_Syntax:_

> **GRANT Privilege_name ON Object_name TO User_name;**

Here,
> * Privilege_name corresponds to opeartions like CREATE , INSERT , UPDATE etc.
> * Object_name may be any Table name.
> * User_name is the name of user to whom the access is to be granted.

Consider a scenario where a user named Contributor needs access to perform basic operations supported on a Database named GWOC.

The command to give above  access is : 
> **GRANT ALL ON GWOC TO CONTRIBUTOR;**


***REVOKE***
* This command is used to deny or restrict access to a user on a Database.
* Revoke helps in taking back all the privileges given in past to a user.

_Syntax:_
> **REVOKE Privilege_name ON object_name FROM user_name;**


From contributor in the above scenario the privieges can be denied as
> **REVOKE ALL ON GWOC FROM CONTRIBUTOR;**

This is all about DCL commands.



