# Exception Handling
### What are exceptions and how they handled
We come across many errors while program execution. which include:

* Syntatical errors
* logical errors
* runtime errors.
* Running out of memory
* Resource allocation
* Network connectivity issues, etc.

**example:**  5/0 causes infinity value mathematically which is an error.
Here in place of system hanging we get "division error". And remaining program gets continued. Thus we can bypass errors.

These errors normally make execution to stop or generate error messages.
These errors are nothing but Exceptions.
How about managing these unexcpected conflicts within program. This
method is known as exception handling. Whenever control come across these
exception it moves to function which handle these issues known as 'Handler'.

-----
## Types:
* C++ standard Exception
* User-defined Exception
-----
### exception handling technique using following keywords:
* **try**
* **throw**
* **catch**

  **Try block:**  We can say this block includes program which cause errors. You can write some conditions defining errors.

  **Throw keyword:** It is used to throw an exception explicitly. Program execution stops on encountering throw statement and closest catch statement is checked for matching type of exception.
  A throw expression accepts one parameter which is passed to catch block.

  **catch block:** Exceptions thrown during execution of the try block can be caught and handled in a catch block. It gives fesible solution for that error.
  These keywords are interrelated with each other.

Now try to understand this concept using following examples:
### example1:
~~~
try {
     //read input for divisor from user
     if(b==0)throw 0;
     //perform division
}   //immediately start related catch block
catch(int x) {
     //print division not possible 
     // closing of program
}
~~~
### example 2:
~~~
main()
{
   try {
       //testing exception
       cout<<"Before throw\n";
       throw 5;
       cout<<"After throw\n";
    }
   catch(int x) {
        cout<<x<<"is displayed\n";
   }
}
~~~

We all know nested if else and loops. There is also a concept of nested try-catch block.
We can nest try blocks within each other,i.e, keep one try-catch block
within another.
### Nested try-catch block:
~~~
try {
  try {
     //your code
  }
  catch () {
        throw;
  }
}
catch(...) {
//code
}
~~~
### Advantages:
* We can easily identify and correct errors. Also grouping exceptions in classes by categorizing based on types make them easier to handle.
* The code become more understandable as we need not to write conditions to handle exceptions under same code.
* Reduces hanging of execution in between and maintains flow of execution.
