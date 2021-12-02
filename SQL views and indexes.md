# **SQL views and indexes**

A view is simply any SELECT query that has been given a name and saved in the database. For this reason, a view is sometimes called a named query or a stored query. To create a view, you use the SQL syntax:

        CREATE OR REPLACE VIEW <view_name> AS
        SELECT <any valid select query>;

The view query itself is saved in the database, but it is not actually run until it is called with another SELECT statement. For this reason, the view does not take up any disk space for data storage, and it does not create any redundant copies of data that is already stored in the tables that it references.


Although it is not required, many database developers identify views with names such as v_Customers or Customers_view. This not only avoids name conflicts with base tables, it helps in reading any query that uses a view.
The keywords OR REPLACE in the syntax shown above are optional. Although you don’t need to use them the first time that you create a view, including them will overwrite an older version of the view with your latest one, without giving you an error message.


The syntax to remove a view from your schema is exactly what you would expect:

        DROP VIEW <view_name>;

Using views
A view name may be used in exactly the same way as a table name in any SELECT query. Once stored, the view can be used again and again, rather than re-writing the same query many times.


The most basic use of a view would be to simply SELECT * from it, but it also might represent a pre-written subquery or a simplified way to write part of a FROM clause.

In many systems, views are stored in a pre-compiled form. This might save some execution time for the query, but usually not enough for a human user to notice.

One of the most important uses of views is in large multi-user systems, where they make it easy to control access to data for different types of users.

As a very simple example, suppose that you have a table of employee information on the scheme Employees = {employeeID, empFName, empLName, empPhone, jobTitle, payRate, managerID}. 
 
Obviously, you can’t let everyone in the company look at all of this information, let alone make changes to it.
Your database administrator (DBA) can define roles to represent different groups of users, and then grant membership in one or more roles to any specific user account (schema). In turn, you can grant table-level or view-level permissions to a role as well as to a specific user. Suppose that the DBA has created the roles managers and payroll for people who occupy those positions. In Oracle®, there is also a pre-defined role named public, which means every user of the database.
You could create separate views even on just the Employees table, and control access to them like this:

        CREATE VIEW phone_view AS
        SELECT empFName, empLName, empPhone FROM Employees;
        GRANT SELECT ON phone_view TO public;

        CREATE VIEW job_view AS
        SELECT employeeID, empFName, empLName, jobTitle, managerID FROM Employees;
        GRANT SELECT, UPDATE ON job_view TO managers;

        CREATE VIEW pay_view AS
        SELECT employeeID, empFName, empLName, payRate FROM Employees;
        GRANT SELECT, UPDATE ON pay_view TO payroll;
Only a very few trusted people would have SELECT, UPDATE, INSERT, and DELETE privileges on the entire Employees base table; everyone else would now have exactly the access that they need, but no more.
When a view is the target of an UPDATE statement, the base table value is changed. You can’t change a computed value in a view, or any value in a view that is based on a UNION query. You may also use a view as the target of an INSERT or DELETE statement, subject to any integrity constraints that have been placed on the base tables.


## **Materialized views**


Sometimes, the execution speed of a query is so important that a developer is willing to trade increased disk space use for faster response, by creating a materialized view. Unlike the view discussed above, a materialized view does create and store the result table in advance, filled with data. The scheme of this table is given by the SELECT clause of the view definition.

This technique is most useful when the query involves many joins of large tables, or any other SQL feature that could contribute to long execution times. You might encounter this in a Web project, where the site visitor simply can’t be kept waiting while the query runs.
Since the view would be useless if it is out of date, it must be re-run, at the minimum, when there is a change to any of the tables that it is based on. The SQL syntax to create a materialized view includes many options for when it is first to be run, how often it is to be re-run, and so on. This requires an advanced reference manual for your specific system, and is beyond the scope of this tutorial.


## **Indexes**


An index, as you would expect, is a data structure that the database uses to find records within a table more quickly. Indexes are built on one or more columns of a table; each index maintains a list of values within that field that are sorted in ascending or descending order. Rather than sorting records on the field or fields during query execution, the system can simply access the rows in order of the index.

***Unique and non-unique indexes:***  When you create an index, you may allow the indexed columns to contain duplicate values; the index will still list all of the rows with duplicates. You may also specify that values in the indexed columns must be unique, just as they must be with a primary key. In fact, when you create a primary key constraint on a table, Oracle and most other systems will automatically create a unique index on the primary key columns, as well as not allowing null values in those columns. One good reason for you to create a unique index on non-primary key fields is to enforce the integrity of a candidate key, which otherwise might end up having (nonsense) duplicate values in different rows.

***Queries versus insertion/update:*** It might seem as if you should create an index on every column or group of columns that will ever by used in an ORDER BY clause (for example: lastName, firstName). However, each index will have to be updated every time that a row is inserted or a value in that column is updated. Although index structures such as B or B+ trees allow this to happen very quickly, there still might be circumstances where too many indexes would detract from overall system performance. This and similar issues are often covered in more advanced courses.

Syntax: As you would expect by now, the SQL to create an index is:

        CREATE INDEX <indexname> ON <tablename> (<column>, <column>...);
To enforce unique values, add the UNIQUE keyword:

        CREATE UNIQUE INDEX <indexname> ON <tablename> (<column>, <column>...);
To specify sort order, add the keyword ASC or DESC after each column name, just as you would do in an ORDER BY clause.

To remove an index, simply enter:

        DROP INDEX <indexname>;
