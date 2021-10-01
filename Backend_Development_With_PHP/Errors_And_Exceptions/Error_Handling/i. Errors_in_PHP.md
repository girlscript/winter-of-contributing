# Topics Covered
- [Errors](#error-handling)
- [Types of Errors Raised](#types-of-errors-raised)
  - [Parse error or Syntax Error](#parse-error-or-syntax-error)
  - [Fatal Error](#fatal-error)
  - [Warning Error](#warning-errors)
  - [Notice Error](#notice-errors)
- [Error Constraints in PHP](#error-constraints-in-php)

# Error Handling

- Error is the fault or mistake in a program. It can be several types. Error can occur due to wrong syntax or wrong logic. It is a type of mistakes 
  or condition of having incorrect knowledge of the code.
- An error message with filename, line number and a message describing the error is sent to the browser.
  PHP is used for web development. Error handling in PHP is almost similar to error handling in all programming languages. The default error handling in 
  PHP will give file name line number and error type.


## Types of Errors Raised
- There are various types of errors in PHP but it contains basically four main type of errors.
    1. ### Parse error or Syntax Error:
       - It is the type of error done by the programmer in the source code of the program. 
         The syntax error is caught by the compiler. After fixing the syntax error the compiler compile the code and execute it. 
         Parse errors can be caused dues to unclosed quotes, missing or Extra parentheses, Unclosed braces, Missing semicolon etc. 
         
         ```php
          <?php
            $first_course = "Artificial Intelligence";
            second_course = "Network and Communication";
            $third_course = "Software Engineering";
            echo $first_course;
            echo $second_course;
            echo $third_course;
          ?>
         ```
         > Reason: On Line 3, '$' symbol is missing before the declaration of variable.
      
     2. ### Fatal Error: 
        - It is the type of error where PHP compiler understand the PHP code but it recognizes an undeclared function. This means 
          that function is called without the definition of function.
          
          ```php
            <?php
              function Multiply($x, $y)
              {
                  $mul = $x * $y;
                  echo "Multiplication of Two Numbers is: ". $mul;
              }
              $x = 40;
              $y = 20;
              Multiply($x, $y);
              Divide($x, $y);
            ?>
           ```
           > Reason: On Line 10, a function call is made for the function Divide(). But it is not defined in the program - hence fatal error would be raised.
           
     3. ### Warning Errors:
        - The main reason of warning errors are including a missing file. This means that the PHP function call the missing file.
          
          ```php
            <?php 
              include ("db_connection.php");
              $con = mysqli_connect ($server, $username, $password, $db_name);
            ?>
          ```
          > Reason: On Line 2, We want to include this PHP file with the name 'db_connection.php' - but it is not present at that specific location
          > In that case, warning would be raised
          

     3. ### Notice Errors:
        - Similar to warning error. It means that the program contains something wrong but it allows the execution of script.
          
          ```php
            <?php 
              $x = 2;
              $y = 3;
              echo $x + $y;
              echo $sum;
            ?>
          ```
          > Reason: This program use undeclared variable $sum so it gives error message.
     <br />
## Error Constraints in PHP
- | Error Constraint | Description |
  | :-- | :-- |
  | E_ERROR | A fatal error that causes script termination |
  | E_WARNING | Run-time warning that does not cause script termination |
  | E_PARSE | Compile time parse error |
  | E_NOTICE | Run time notice caused due to error in code |
  | E_CORE_ERROR | Fatal errors that occur during PHP’s initial startup (installation) |
  | E_CORE_WARNING | Warnings that occur during PHP’s initial startup |
  | E_COMPILE_ERROR | Fatal compile-time errors indication problem with script |
  | E_USER_ERROR | User-generated error message |
  | E_USER_WARNING | User-generated warning message |
  | E_USER_NOTICE | User-generated notice message |
  | E_STRICT | Run-time notices |
  | E_RECOVERABLE_ERROR | Catchable fatal error indicating a dangerous error |
  | E_DEPRECATED | Run-time notices |
