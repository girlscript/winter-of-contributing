## What is Database ? 
  A database is a collection of related data. By data, we mean known facts that can be recorded  and  that  have  implicit  meaning. 
  ```
  - For example, consider the names, tele-phone numbers, and addresses of the people you know. You may have recorded 
  this data in an indexed address book or you may have stored it on a hard drive, using apersonal computer and 
  software such as Microsoft Access or Excel. 
  ```
  - This collection of related data with an implicit meaning is a database. The preceding definition of database is quite general; 
  For example, we may considerthe collection of words that make up this page of text to be related data and hence to constitute  a  database. 

  - However, the  common  use  of  the  term  database is  usually more restricted.

## Properties of Database 
  - A database has the following implicit properties:
    - A  database  represents  some  aspect  of  the  real  world, sometimes  called  the `mini world or the universe of discourse (UoD)`. Changes 
    to the mini world are reflected in the database.
    - A  database  is  a  `logically coherent  collection`  of  data  with  some  inherent meaning. A random assortment of data cannot correctly be 
    referred to as a database.
    - A database is designed, built, and populated with data for a specific purpose. It  has  an  intended  group  of  users  and  some  preconceived  
    applications  in which these users are interested. In other words, a database has some source from which data is derived, some degree of interaction 
    with events in the real world, and an audience that is actively interested in its contents. 

    -   A database  can  be  of any  size  and  complexity. For  example, the  list  of names  andaddresses referred to earlier may consist of only a few 
    hundred records, each with asimple  structure. 
    -   A database may be `generated and maintained manually` or it may be computerized. 
    ```
      For example, a library card catalog is a database that may be created and maintained manually. A computerized database  
      may be created and maintained either by a group of application programs written specifically for that task or by a 
      database management system. 
    ```

## What exactly is DBMS (Database Management System) ?

  - A **database management system (DBMS)** is a collection of programs that enables users to create and maintain a database. The DBMS is a general-purpose 
    software system that facilitates the processes of defining, constructing, manipulating, and sharing databases among various users and applications.
  - `Defining a database` involves specifying the data types, structures, and constraints of the data to be stored in the data-base. The database definition 
    or descriptive information is also stored by the DBMS in the form of a database catalog or dictionary; it is called meta-data. 
    
  - `Constructing the database` is the process of storing the data on some storage medium that is controlled by the DBMS. 
  - `Manipulating a database` includes functions such as querying the database to retrieve specific data, updating the database to reflect changes in the miniworld, 
    and generating reports from the data.
  - `Sharing a database` allows multiple users and programs to access the database simultaneously. An application  program accesses  the  database by  sending  queries  
    or  requests  fordata  to  the  DBMS.  A  query typically  causes  some  data  to  be  retrieved;  a transaction may cause some data to be read and some data to 
    be written into the database.
  - `Other important functions` provided by the DBMS include protecting the database and maintaining it over a long period of time.
  - `Protection` includes system protection against  hardware or  software  malfunction  (or  crashes)  and  security  protection against  unauthorized  or  malicious  access. 
    A  typical  large  database  may  have  a  lifecycle of many years, so the DBMS must be able to maintainthe database system by allowing the system to evolve as requirements 
    change over time. It is not absolutely necessary to use general-purpose DBMS software to implement a  computerized  database. 
  - We  could  write  our  own  set  of  programs  to  create  and maintain the database, in effect creating our own special-purpose DBMS software. 
  - Ineither case—whether we use a general-purpose DBMS or not—we usually have to deploy a considerable amount of complex software. 
  - In fact, most DBMSs are very complex software systems.
