# Error Handling in Angular

* Angular provides a service called $exceptionHandler. It handles errors by capturing them and logging them to the console using the $log service, another Angular service that wraps up console.log() to make it safe to use if the console object doesn’t exist. Also, Angular tries to provide a cause along with the error to provide some additional context to what went wrong.

# Types of errors
There are many types of errors but the two main categories are: insider and outsider errors.

## 1. Insider errors
### (Also known as client side errors) 
* These are the ones you can be held responsible for, the syntax errors, package manager errors, reference errors, type errors and all types of client side errors that can be fixed by the developer within the Angular application.

## 2. Outsider errors
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
  
## Limitations of try/catch
* As great as try/catch is, when it comes to applications it is not at all effective and sustainable. But, Angular has a kind of global try/catch that we can use in one centralized location to catch all exceptions.

# How to get error details?
* The HttpClient captures the errors and wraps it in the generic HttpErrorResponse, before passing it to our app. The error property of the HttpErrorResponse contains the underlying error object. It also provides additional context about the state of the HTTP layer when the error occurred.
* The HTTP errors fall into two categories. The back end server may generate the error and send the error response. Or the client-side code may fail to generate the request and throw the error (ErrorEvent objects).
* The client-side code can also generate the error. The error may be due to a network error or an error while executing the HTTP request or an exception thrown in an RxJS operator. These errors produce JavaScript ErrorEvent objects. The Angular assigns the ErrorEvent object to error property of the HttpErrorResponse.
* In both the cases, the generic HttpErrorResponse is returned by the HTTP Module.
* We can catch the HTTP Errors at three different places.
  1. Component
  2. Service
  3. Globally

# Retrying failed HTTP requests in Angular
* Organization of access to server data is the basis of almost any one-page application. All dynamic content in such applications is downloaded from the backend.
* In most cases, HTTP requests to the server work reliably and return the desired result. However, in some situations, requests may fail.
* The first thing that may come to mind in this situation is the operator retry. Let's look at its definition: “Returns an Observable that plays the original Observable except error. 
* If the original Observable calls error, then this method, instead of propagating the error, will re-subscribe to the original Observable.
* The maximum number of re-subscriptions is limited count(this is the numerical parameter passed to the method). The operator is ```retry``` very similar to what we need.
* Let's look at its example;

```javascript
getConfig() {
  return this.http.get<Config>(this.configUrl)
    .pipe(
      retry(3), // retry a failed request up to 3 times
      catchError(this.handleError) // then handle the error
    );
}
```
* Above snippet shows how to pipe a failed request to the retry() operator before passing it to the error handler.

# Error Handler
* Angular has a global error handling class called errorHandler that provides a hook for centralized exception handling inside your application. It basically intercepts all the errors that happen in your application, and logs all of them to the console, and stops the app from crashing.
* Let's implement it:
* In the product.service.ts file, enter the following code.

```javascript

import { Injectable } from '@angular/core';
import { HttpClient, HttpHeaders } from '@angular/common/http';
import { Observable, throwError } from 'rxjs';
import { retry, catchError } from 'rxjs/operators';
import { User } from './user.model';

@Injectable({

 providedIn: 'root'
 
})

export class UserService {

 private apiUrl = 'https://localhost:8080/api/users';
 constructor(private http: HttpClient) {}
 getUsers(): Observable<User[]> {
 
   return this.http.get<User[]>(this.apiUrl).pipe(

     retry(1),

     catchError(this.handleError)

   );

 }

 handleError(error) {
 
   let errorMessage = '';
   if (error.error instanceof ErrorEvent) {
     // client-side error
     errorMessage = Error: ${error.error.message};
   } else {

     // server-side error
     errorMessage = Error Code: ${error.status}\nMessage: ${error.message};

   }

   window.alert(errorMessage);
   return throwError(errorMessage);

 }

}
```
* Significance : The catch function contains a link to the Error Handler function. In the error handler function, we send the error to the console. We also throw the error back to the main program so that the execution can continue. Now, whenever you get an error it will be redirected to the error console of the browser.

# Conclusion 
* Handling errors properly is essential in building a high-quality user experience. By providing readable messages to users, they can either understand why the error occurred or at least have an error code to give to your support team, which can help resolve issues that much faster. While ErrorHandler is a useful way to handle errors across an app, HttpInterceptor provides a much more robust solution for handling server and connection-related errors giving the ability to retry or return a richer error response to the client.

## References 
* https://angular.io/guide/http#handling-request-errors
* https://angular.io/guide/http#handling-request-errors

# Thank You !
