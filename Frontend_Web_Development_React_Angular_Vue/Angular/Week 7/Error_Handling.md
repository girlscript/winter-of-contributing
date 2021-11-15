# Error Handling in AngularJS

* AngularJS provides a service called $exceptionHandler. It handles errors by capturing them and logging them to the console using the $log service, another AngularJS service that wraps up console.log() to make it safe to use if the console object doesn’t exist. Also, Angular tries to provide a cause along with the error to provide some additional context to what went wrong.
