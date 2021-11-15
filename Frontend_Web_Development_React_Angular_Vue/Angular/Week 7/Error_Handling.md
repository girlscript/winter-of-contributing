# Error Handling in AngularJS

* AngularJS provides a service called $exceptionHandler. It handles errors by capturing them and logging them to the console using the $log service, another AngularJS service that wraps up console.log() to make it safe to use if the console object doesn’t exist. Also, Angular tries to provide a cause along with the error to provide some additional context to what went wrong.

# Types of errors
There are many types of errors but the two main categories are: insider and outsider errors.

## Insider errors
### (Also known as client side errors) 
* These are the ones you can be held responsible for, the syntax errors, package manager errors, reference errors, type errors and all types of client side errors that can be fixed by the developer within the Angular application.

## Outsider errors
### (Also known as server side errors) 
* These ones can span from server errors, which mostly come with three digit status codes like 500 to internet network errors, to even browser specific errors. These are basically errors that are out of the reach of the Angular application hence the name outsider.

# Traditional method (try & catch)
* When you run a function in JavaScript, that function joins a kind of function execution queue and as the application runs and gets to its turn it leaves the queue and gets executed. So, if an error occurs, JavaScript throws an exception, which will immediately remove all the operations in the queue until the exception is handled.
On a basic level, exceptions are handled with try/catch blocks, the whole application crashes if the compiler does not see this try/catch block.

```javascript
    try {
     throw new Error('An error occurred');
    }
    catch (error) {
     console.error('Here is the error message', error);
    }
    console.log('Execution continues');
    ```
 
