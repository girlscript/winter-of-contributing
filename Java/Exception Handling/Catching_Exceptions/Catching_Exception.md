# **Catching Exception in Java**
## What is Exception?
Exception in Java relate to fundamental *errors* that violate the rules of the Java Language, it can happen during the execution of a program and disrupts its normal flow.

When an exceptional condition arises, an object representing that exception is created and *thrown* in the method that caused the error. That method may choose to handle the exception itself, or pass it on.Either way, at some point, the exception is *caught* and processed.

* Java exception handing is managed via five keywords : *try*, *catch*, *throw*, *throws*, and *finally*.

## What is **throwing the exception**?
When the exception occurs in a method, the process of creating the exception object and handing it to the runtime environment is said to be **throwing the exception**.

## What is **catching the exception**?
If appropriate exception handler(*it is the block of code that can process the exception object*) is found, exception object is passed to the handler to process it. The handler is said to be **catching the Exception**.

__Try and Catch :__
Try block contains the statement that you want to monitor for exceptions. If the exception occurs within the try block, it is *thrown*.
Catch block is use to catch the exception and handle it in rational manner.

### *General form of an exception handing block*
```java
try{
    //block of code to monitor for errors
}
catch(ExceptionType1 exOb){
    //exception handler for exceptionTpye1
}
catch(ExceptionType2 exOb){
    //exception handler for exceptionTpye2
}
//............
finally{
    //block of code to be executed after try block ends
}
```
Example: 

```java
public class MainClass {
    public static void main(String[] args) {

        try {
            int a = 5;
            int b = 0;
            int c = a / b;

            System.out.println(c);
        }
        catch(ArithmeticException e){
            System.out.println(e.getMessage() + " occurred, kindly check your code");
        }
        System.out.println("This is very important:");
        
    }
}
```
**OUTPUT:**

/ by zero occurred, kindly check your code

This is very important: 


**Note:** 
* We can have multiple catch blocks with a single try statement.
* try-catch blocks can be nested similar to if-else statements.
* We can have only one finally block with a try-catch statement.


__Finally :__

Any code that  must be executed absolutely , after a *try* block completes, is put in a *finally* block.

__Throw :__

The throw keyword is used to manually throw an exception from a method or any block, because the system generated exceptions are automatically thrown by the Java run-time system.

General form of throw is :
```java
throw <Exception Ref>;
```
__Throws :__

Any code that is thrown out of a method must be specified as such by a *throws* clause. It is used in the signature of method to indicate that this method might throw one of the listed type exceptions. The caller to these methods has to handle the exception using a try-catch block.

General form of method declaration that includes throws clause:
```java
return_type method_name(parameter_list)throws exception_list{
    //body of the method
}
```
