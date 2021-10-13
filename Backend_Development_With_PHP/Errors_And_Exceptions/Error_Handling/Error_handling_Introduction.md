# Error Handling In PHP

- Error handling is the procedure of catching errors that are raised by a program and taking an action for that.
- Error handling in php is very simple and straightforward.
- There are some methods by which we can handle the errors like **die()** function, **Custom errors and error trigger** and **Error Reporting** etc.
- In php , the default error handler will give the file name, line number and error type if file is having an error.

## Error Handling using die() function :-

- This example shows that how default php handler handles the error.
```php
<?php
   $parameter = $_POST['testparameter'];
?>
```
- In the above example if the `$_POST['testparameter']` is not set then it will return an error with file name, error type and line number.
> Notice: Undefined index: hello in C:\xampp\htdocs\index.php on line 2

- To prevent this error we'll use `die()` function in this code
```php
<?php
if(isset($_POST['testparameter'])){
   echo "No error";
}
else{
   die('parameter Not Found'); //die function call
}
?>
```
- In the above example of code if the `$_POST['testparameter']` is not set then it will display die error. Output will look like this.
> parameter Not Found 

## Error Handling using Custom Error Handler :-

- It is very easy to create Custom Error Handler in php. We create a function that can be called when an error occurred in the code.

### Syntax :

```php
error_function(error_level,error_message,error_file,error_line,error_context);
```
- error_level : This attribute is required and it is a error report level for the user-defined error and also it must be a value number.
- error_message : This attribute is required and it Specifies the error message for the user-defined error.
- error_file : It is an optional field and it Specifies the file name in which the error occurred.
- error_line : It is an optional field and it Specifies the line number in which the error occurred.
- error_context : It is an optinal field and it Specifies an array containing every variable, and their values, in use when the error occurred.

### Let's create a simple custom error handling function.

```php
<?php
   function handleError($error_no, $error_str,$error_file,$error_line) {
      echo "Error: [$error_no] $error_str - $error_file:$error_line\n";
      echo "Terminating PHP Script";
      die();
   }
?>
```
- Once you write your custom error handler then you will need to set it with PHP built-in library `set_error_handler` function.
- Let's use the custom error function in our code.
```php
<?php
function handleError($error_no, $error_str) { //error handler function
  echo "<b>Error:</b> [$error_no] $error_str";
}
set_error_handler("handleError"); //set error handler
echo($var); //trigger error
?>
```
- The output of the code above should be something like this:
> Error: [8] Undefined variable: var
