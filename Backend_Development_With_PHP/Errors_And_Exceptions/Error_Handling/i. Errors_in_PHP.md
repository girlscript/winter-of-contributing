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
          
