# SQL Indexes

> An index is a schema object. It is used by the server to speed up the retrieval of rows by using a pointer. It can reduce disk I/O(input/output) by using a rapid path access method to locate data quickly. An index helps to speed up select queries and where clauses, but it slows down data input, with the update and the insert statements. Indexes can be created or dropped with no effect on the data. In this article, we will see how to create, delete, and uses the INDEX in the database. 

For example, if you want to reference all pages in a book that discusses a certain topic, you first refer to the index, which lists all the topics alphabetically and is then referred to one or more specific page numbers.

## Creating an Index:

### Syntax:

  CREATE INDEX index
  ON TABLE column;
where the index is the name given to that index and TABLE is the name of the table on which that index is created and column is the name of that column for which it is applied. 

## For multiple columns:
### Syntax:

  CREATE INDEX index
  ON TABLE (column1, column2,.....);

## Unique Indexes:

Unique indexes are used for the maintenance of the integrity of the data present in the table as well as for the fast performance, it does not allow multiple values to enter into the table. 
### Syntax:

   CREATE UNIQUE INDEX index
    ON TABLE column;

## When should indexes be created:

- A column contains a wide range of values.
- A column does not contain a large number of null values.
- One or more columns are frequently used together in a where clause or a join condition.

## When should indexes be avoided:
 
- The table is small
- The columns are not often used as a condition in the query
- The column is updated frequently

## Removing an Index:
To remove an index from the data dictionary by using the DROP INDEX command. 
#### Syntax:
    DROP INDEX index;

To drop an index, you must be the owner of the index or have the DROP ANY INDEX privilege. 
 

### Altering an Index: 
To modify an existing table’s index by rebuilding, or reorganizing the index.

    ALTER INDEX IndexName 
    ON TableName REBUILD;

### Confirming Indexes :
You can check the different indexes present in a particular table given by the user or the server itself and their uniqueness. 

#### Syntax:
    select * from USER_INDEXES;
It will show you all the indexes present in the server, in which you can locate your own tables too.
 

### Renaming an index :
 You can use the system stored procedure sp_rename to rename any index in the database.

#### Syntax:

  EXEC sp_rename  
    index_name,  
    new_index_name,  
    N'INDEX'; 