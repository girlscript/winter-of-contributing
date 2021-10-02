## 1. QUERYING DATA FROM A TABLE

- ~~~ sql
  SELECT c1, c2 FROM t;
  ~~~
   Query data in columns c1, c2 from a table

- ~~~ sql
  SELECT * FROM t;
  ~~~
   Query all rows and columns from a table

- ~~~ sql
  SELECT c1, c2 FROM t

  WHERE condition;
  ~~~  
  Query data and filter rows with a condition

- ~~~ sql 
  SELECT DISTINCT c1 FROM t
  
  WHERE condition;
  ~~~
  Query distinct rows from a table

- ~~~ sql 
  SELECT c1, c2 FROM t

  ORDER BY c1 ASC [DESC];
  ~~~
  Sort the result set in ascending or descending order

- ~~~ sql 
  SELECT c1, c2 FROM t

  ORDER BY c1
  
  LIMIT n OFFSET offset;
  ~~~
  Skip offset of rows and return the next n rows 

- ~~~ sql 
  SELECT c1, aggregate(c2)

  FROM t
  
  GROUP BY c1;
  ~~~
  Group rows using an aggregate function
  
- ~~~ sql 
  SELECT c1, aggregate(c2)

  FROM t
  
  GROUP BY c1
  
  HAVING condition;
  ~~~
  Filter groups using HAVING clause
  
## 2. QUERYING FROM MULTIPLE TABLES

- ~~~ sql
  SELECT c1, c2 
  FROM t1
  INNER JOIN t2 ON condition;
  ~~~
  Inner join t1 and t2

- ~~~ sql
  SELECT c1, c2 
  FROM t1
  LEFT JOIN t2 ON condition;
  ~~~
  Left join t1 and t1

- ~~~ sql
  SELECT c1, c2 
  FROM t1
  RIGHT JOIN t2 ON condition;
  ~~~  
  Right join t1 and t2

- ~~~ sql 
  SELECT c1, c2 
  FROM t1
  FULL OUTER JOIN t2 ON condition;
  ~~~
  Perform full outer join

- ~~~ sql 
  SELECT c1, c2 
  FROM t1
  CROSS JOIN t2;
  ~~~
  Produce a Cartesian product of rows in tables

- ~~~ sql 
  SELECT c1, c2 
  FROM t1, t2;
  ~~~
  Another way to perform cross join 

- ~~~ sql 
  SELECT c1, c2
  FROM t1 A
  INNER JOIN t2 B ON condition;
  ~~~
  Join t1 to itself using INNER JOIN clause
  
## 3. USING SQL OPERATORS

- ~~~ sql
  SELECT c1, c2 FROM t1
  UNION [ALL]
  SELECT c1, c2 FROM t2;
  ~~~
  Combine rows from two queries

- ~~~ sql
  SELECT c1, c2 FROM t1
  INTERSECT
  SELECT c1, c2 FROM t2;
  ~~~
  Return the intersection of two queries

- ~~~ sql
  SELECT c1, c2 FROM t1
  MINUS
  SELECT c1, c2 FROM t2;
  ~~~  
  Subtract a result set from another result set
  
- ~~~ sql 
  SELECT c1, c2 FROM t1
  WHERE c1 [NOT] LIKE pattern;
  ~~~
  Query rows using pattern matching %, _

- ~~~ sql 
  SELECT c1, c2 FROM t
  WHERE c1 [NOT] IN value_list;
  ~~~
  Query rows in a list

- ~~~ sql 
  SELECT c1, c2 FROM t
  WHERE c1 BETWEEN low AND high;
  ~~~
  Query rows between two values

- ~~~ sql 
  SELECT c1, c2 FROM t
  WHERE c1 IS [NOT] NULL;
  ~~~
  Check if values in a table is NULL or not

## 4. USING SQL CONSTRAINTS

- ~~~ sql
  CREATE TABLE t(
  c1 INT, c2 INT, c3 VARCHAR,
  PRIMARY KEY (c1,c2)
  );
  ~~~
  Set c1 and c2 as a primary key

- ~~~ sql
  CREATE TABLE t1(
  c1 INT PRIMARY KEY, 
  c2 INT,
  FOREIGN KEY (c2) REFERENCES t2(c2)
  );
  ~~~
  Set c2 column as a foreign key

- ~~~ sql
  CREATE TABLE t(
  c1 INT, c1 INT,
  UNIQUE(c2,c3)
  );
  ~~~  
  Make the values in c1 and c2 unique

- ~~~ sql 
  CREATE TABLE t(
  c1 INT, c2 INT,
  CHECK(c1> 0 AND c1 >= c2)
  );
  ~~~
  Ensure c1 > 0 and values in c1 >= c2

- ~~~ sql 
  CREATE TABLE t(
  c1 INT PRIMARY KEY,
  c2 VARCHAR NOT NULL
  );
  ~~~
  Set values in c2 column not NULL
  
## 5. MODIFYING DATA

- ~~~ sql
  INSERT INTO t(column_list)
  VALUES(value_list);
  ~~~
  Insert one row into a table

- ~~~ sql
  INSERT INTO t(column_list)
  VALUES (value_list), 
  (value_list), ….;
  ~~~
  Insert multiple rows into a table

- ~~~ sql
  INSERT INTO t1(column_list)
  SELECT column_list
  FROM t2;
  ~~~  
  Insert rows from t2 into t1

- ~~~ sql 
  UPDATE t
  SET c1 = new_value;
  ~~~
  Update new value in the column c1 for all rows

- ~~~ sql 
  UPDATE t
  SET c1 = new_value, 
  c2 = new_value
  WHERE condition;
  ~~~
  Update values in the column c1, c2 that match the condition

- ~~~ sql 
  DELETE FROM t;
  ~~~
  Delete all data in a table

- ~~~ sql 
  DELETE FROM t
  WHERE condition;
  ~~~
  Delete subset of rows in a table
  
## 6. MANAGING VIEWS

- ~~~ sql
  CREATE VIEW v(c1,c2) 
  AS
  SELECT c1, c2
  FROM t;
  ~~~
  Create a new view that consists of c1 and c2

- ~~~ sql
  CREATE VIEW v(c1,c2) 
  AS
  SELECT c1, c2
  FROM t;
  WITH [CASCADED | LOCAL] CHECK OPTION;
  ~~~
  Create a new view with check option

- ~~~ sql
  CREATE RECURSIVE VIEW v 
  AS
  select-statement -- anchor part
  UNION [ALL]
  select-statement; -- recursive part
  ~~~  
  Create a recursive view

- ~~~ sql 
  CREATE TEMPORARY VIEW v 
  AS
  SELECT c1, c2
  FROM t;
  ~~~
  Create a temporary view

- ~~~ sql 
  DROP VIEW view_name;
  ~~~
  Delete a view
  
## 7. MANAGING INDEXES

- ~~~ sql
  CREATE INDEX idx_name
  ON t(c1,c2);
  ~~~
  Create an index on c1 and c2 of the table t

- ~~~ sql
  CREATE UNIQUE INDEX idx_name
  ON t(c3,c4);
  ~~~
  Create a unique index on c3, c4 of the table t

- ~~~ sql
  DROP INDEX idx_name;
  ~~~  
  Drop an index
  
## 8. SQL AGGREGATE FUNCTIONS

- **AVG** returns the average of a list
- **COUNT** returns the number of elements of a list 
- **SUM** returns the total of a list
- **MAX** returns the maximum value in a list
MIN returns the minimum value in a list

## References

- https://www.geeksforgeeks.org/
- https://www.tutorialspoint.com/
- https://w3schools.com/
