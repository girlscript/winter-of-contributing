# **SQL Data Types And SQL Operators**

### **SQL Data Types are:-**

***Numeric data types*** :- int, tinyint, bigint, float, real, etc.

***Date and Time data types*** :- Date, Time, Datetime, etc.

***Character and String data types*** :- char, varchar, text, etc. 

***Unicode character string data types*** :- nchar, nvarchar, ntext, etc.

***Binary data types*** :- binary, varbinary, etc.

***Miscellaneous data types*** :- clob, blob, xml, cursor, table, etc.

### **SQL OPERATORS**

* SQL operators are used to perform operations like comparisons and arithmetic operations.

* These Operators are used to specify conditions in an SQL statement.

* The manipulation and retrieving of the data are performed with the help of reserved words and characters, which are used to perform arithmetic operations, logical operations, comparison operations, compound operations, etc.

***Types of Operator***

* SQL Arithmetic Operator
* SQL Comparison Operators
* SQL Logical Operators
* SQL Set Operators
* SQL Bit-wise Operators
* SQL Uniary Operators

1.   ***Arithmetic Operator*** :- The Arithmetic Operators perform the mathematical operation on the numerical data of the SQL tables.

     * SQL Addition Operator (+)
          * **Syntax**: SELECT operand1 + operand2; 
     * SQL Subtraction Operator (-)
          * **Syntax**: SELECT operand1 - operand2; 
     * SQL Multiplication Operator (*)
          * **Syntax**: SELECT operand1 * operand2; 
     * SQL Division Operator (/)
          * **Syntax**: SELECT operand1 / operand2; 
      * SQL Modulus Operator (%)
          * **Syntax**: SELECT operand1 % operand2; 


2.   ***Comparison Operators*** :- Comparison operators are the operators which are used for comparison between two values.

      * SQL Equal Operator (=)
        * **Syntax** SELECT * FROM Employee_details WHERE Emp_Salary = 30000;
      * SQL Not Equal Operator (!=)
          * **Syntax** SELECT EmpName FROM Employee WHERE EmpSalary!=2000;
      * SQL Greater Than Operator (>)
          * **Syntax** SELECT EmpName FROM Employee WHERE EmpSalary>2000;
      * SQL Greater Than Equals to Operator (>=)
         * **Syntax** SELECT EmpName FROM Employee WHERE EmpSalary >= 2000;
      * SQL Less Than Operator (<)
        * **Syntax** SELECT EmpName FROM Employee WHERE EmpSalary < 2000;
      * SQL Less Than Equals to Operator (<=)
        * **Syntax** SELECT EmpName FROM Employee WHERE EmpSalary <= 2000;


3. ***Logical Operator*** :- The Logical Operators in SQL perform the Boolean operations, which give two results True and False.

    * SQL ALL operator
      * **Syntax** SELECT EmpName FROM Employee WHERE EmpAge > ALL (SELECT EmpAge FROM Employee WHERE EmpSalary >= 2500)
    * SQL AND operator
      * **Syntax** SELECT EmpName FROM Employee WHERE EmpSalary > 2000 and EmpAge > 28
    * SQL OR operator
        * **Syntax** SELECT EmpName FROM Employee WHERE EmpSalary > 2000 OR EmpName IS NOT NULL;
    * SQL BETWEEN operator
        * **Syntax** SELECT EmpName FROM Employee WHERE EmpAge BETWEEN 25 AND 30;
    * SQL IN operator
        * **Syntax** SELECT EmpName FROM Employee WHERE EmpSalary IN(2000, 2500);
    * SQL NOT operator
      * **Syntax** SELECT EmpName FROM Employee WHERE EmpSalary IS NOTNULL;
    * SQL ANY operator
        * **Syntax** SELECT EmpName FROM Employee WHERE EmpAge > ANY(SELECT EmpAge FROM Employee WHERE EmpSalary >= 2500);
    * SQL LIKE operator
      * **Syntax** SELECT EmpName FROM Employee WHERE EmpName LIKE ‘Jo%’;

4. ***Set Operator*** :- The Set Operators in SQL combine a similar type of data from two or more SQL database tables. It mixes the result, which is extracted from two or more SQL queries, into a single result.

   * SQL Union Operator
       * **Syntax** SELECT column1, column2 ...., columnN FROM table_Name1 [WHERE conditions]    
          UNION   
          SELECT column1, column2 ...., columnN FROM table_Name2 [WHERE conditions]; 
   * SQL Union ALL Operator
       * **Syntax** SELECT Emp_Name FROM Employee_details1  
          UNION ALL  
           SELECT Emp_Name FROM Employee_details2 ;
    * SQL Intersect Operator
        * **Syntax** SELECT column1, column2 ...., columnN FROM table_Name1 [WHERE conditions]    
          INTERSECT  
          SELECT column1, column2 ...., columnN FROM table_Name2 [WHERE conditions];
    * SQL Minus Operator
         * **Syntax** SELECT column1, column2 ...., columnN FROM First_tablename [WHERE conditions]    
            MINUS  
            SELECT column1, column2 ...., columnN FROM Second_tablename [WHERE conditions];  

5. ***Bitwise Operator*** :- The Bitwise Operators in SQL perform the bit operations on the Integer values.

    * Bitwise AND (&)
         * **Syntax** SELECT column1 & column2 & .... & columnN FROM table_Name [WHERE conditions] ;
     * Bitwise OR(|)
         * **Syntax** SELECT column1 | column2 | .... | columnN FROM table_Name [WHERE conditions] ; 

6. ***Uniary Operator*** :- The Unary Operators in SQL perform the unary operations on the single data of the SQL table, i.e., these operators operate only on one operand.

    * SQL Unary Positive Operator
        * **Syntax** SELECT +(column1), +(column2) ...., +(columnN) FROM table_Name [WHERE conditions] ; 
    * SQL Unary Negative Operator
      * **Syntax** SELECT -(column_Name1), -(column_Name2) ...., -(column_NameN) FROM table_Name [WHERE conditions] ;  
    * SQL Unary Bitwise NOT Operator
      * **Syntax** SELECT ~(column1), ~(column2) ...., ~(columnN) FROM table_Name [WHERE conditions] ;

     **References**
        * https://www.tutorialspoint.com/sql/sql-operators.htm
        * https://www.javatpoint.com/dbms-sql-operator






