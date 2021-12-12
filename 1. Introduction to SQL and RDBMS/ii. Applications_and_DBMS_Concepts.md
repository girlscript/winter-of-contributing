## Traditional Applications

- `Banking:` For customer information, accounts, and loans, and banking transactions.
- `Airlines:` For reservations and schedule information. Airlines were among the first to use databases 
in a geographically distributed manner—terminals situated around the world accessed the central database system through phone lines and other data networks. 
- `Universities:` For student information, course registrations, and grades. 
- `Credit card transactions:` For purchases on credit cards and generation of monthly statements. 
- `Telecommunication:` For keeping records of calls made, generating monthly bills, maintaining balances on prepaid calling cards, and storing information about 
the communication networks.
- `Finance:` For storing information about holdings, sales, and purchases of financial instruments such as stocks and bonds. 
- `Sales:` For customer, product, and purchase information.
- `Manufacturing:` For management of supply chain and for tracking production of items in factories, inventories of items in warehouses/stores, and orders for items.
- `Human resources:` For information about employees, salaries, payroll taxes and benefits, and for generation of paychecks.

## Drawbacks of File Systems to store the Data

- `Data redundancy and inconsistency` - Due to availability of multiple file formats, storage in files may cause duplication of information in different files.
- `Difficulty in accessing data` - In order to retrieve, access and use stored data, need to write a new program to carry out each new task.
- `Data isolation` - To isolate data we need to store them in multiple files and different formats.
- `Integrity problems` - Integrity constraints (E.g. account balance > 0) become part of program code which has to be written every time. 
It is hard to add new constraints or to change existing ones.
- `Atomicity of updates` - Failures of files may leave database in an inconsistent state with partial updates carried out.
E.g. transfer of funds from one account to another should either complete or not happen at all.

## System Architecture
![image](https://user-images.githubusercontent.com/72455881/134479528-8a8b8ec7-b5d4-437a-b6e1-d98135e6f458.png)

## Database Users and Administrators
- A primary goal of a database system is to retrieve information from and store new information into the database. People who work with a database can be categorized as 
database users or database administrators
- ## Database Users and User Interfaces
  There are four different types of database-system users, differentiated by the waythey expect to interact with the system. Different types of user interfaces havebeen designed 
  for the different types of users.
    - `Naıve users` are unsophisticated users who interact with the system by in-voking one of the application programs that have been written previously.
    - `Application programmers` are computer professionals who write application programs. Application programmers can choose from many tools to developuser interfaces.Rapid application 
      development (RAD) tools are tools that en-able an application programmer to construct forms and reports with minimal programming effort.
    - `Sophisticated users` interact with the system without writing programs. In-stead, they form their requests either using a database query language or by using tools such as data analysis software.
      Analysts who submit queries to explore data in the database fall in this category.
    - `Specialized users` are sophisticated users who write specialized database applications that do not fit into the traditional data-processing framework.Among these applications are computer-aided design systems, knowledge-base and expert systems, systems that store data with complex data types (forexample, graphics data and audio data), and environment-modeling systems.
