# JAVA Method Basics

## What is a Method?

Methods are block of codes that are executed only when they are called.
Methods are used to perform certain actions, and they are also known as functions.
Methods can also include parameters that are passed to them during the time of calling.


## Purpose of using a Method:-
- To reuse the code.
- Reduce code writing time and space.


## Creation of a Method:-
Methods must be created inside the class so that it can be accessed there. Java also provides some predefined methods such as System.out.println(), but we can also create our
own methods to serve different purpose.

A Method/function is always represented by "methodName()".

## Syntax to define a Method:
              
              modifier returnType nameOfMethod (Parameter List) {
                  // method body
              }


The syntax above includes the following things:-

*modifier* - It defines the access type of the method and it is optional to use.(default is "public static")

*returnType* − Method may return a value according to the data type mentioned. If nothing is there to return "void" is written.

*nameOfMethod* - This is the name of the method which must be written using the identifier rules.

*Parameter List* - The list of parameters, it is the type, order, and number of parameters of a method. The method may or may not contain any parameters.

*method body* - This is the set of commands/statements that are to be executed.

   Example:-
      
      /** the snippet returns the minimum between two numbers */

      public static int minFunction(int n1, int n2) {
         int min;
         if (n1 > n2)
            min = n2;
         else
            min = n1;

         return min; 
      }


## Calling a Method:-

Calling a method is the most important thing for the usability of the Method. 
If a Method is not called, the entire block of statements inside the Method will not get executed.
There are 2 ways in which a method is called i.e., Method returns a value or returns no value.

The process of Method calling is simple. When a program invokes/calls a Method, the program control gets transferred to the called Method.
This called Method then returns control to the caller Method in either of the 2 conditions:-
 
 - Returns a value of the desired type to the caller method.
 - It reaches the method ending closing brace.

The Methods that don't have any returnType (void) don't return any value. They just execute the statements within them.

  Example of a method returning value:-

      public class ExampleMinNumber {
   
         public static void main(String[] args)
          {
            int a = 11;
            int b = 6;
            int c = minFunction(a, b); /**method calling statement*/
            System.out.println("Minimum Value = " + c);
         }

         /** returns the minimum of two numbers */
         public static int minFunction(int n1, int n2) /**method that has been called*/
         {
            int min;
            if (n1 > n2)
               min = n2;
            else
               min = n1;

            return min; /**returns minimum of n1 and n2*/ 
         }
      }

   The above function gives output = 6.


   Here **int c = minFunction(a, b);** is the Method calling statement. c is a variable of integer data type that calls the minFunction().
   a,b are variables that are passed to the *minFunction()* to get a value returned from it.

   public static int minFunction(int n1, int n2) is the **method declaration statement**. minFunction() has public static modifier and returns a value of integer data type
   (int is written for that reason).

   *(int n1, int n2)* is the parameters list written in an order such that value of a is taken by n1 and value of b is taken by n2.
   The order and number of the parameters is very important because the order in which they have been called and the order of the parameters must match.
   Also the number of parameters should be equal to the number of values passed during the time of calling. 

   Suppose it would have been written as (int n2, int n1) then value of variable *a* would have been taken by *n2* and value of variable *b* would have been taken by *n1*.
   If the number of parameters are not equal to that of the number of variables passed, the compiler would throw an error.


  Example of a method not returning any value:-

        public class ExampleRankPoints{

         public static void main(String[] args) {
            methodRankPoints(255); /**method calling statement*/
         }

         public static void methodRankPoints(double points) /**method that is called*/
          {
            if (points >= 240) {
               System.out.println("Rank:A");
            }else if (points >= 130) {
               System.out.println("Rank:B");
            }else {
               System.out.println("Rank:C");
            }
         }
      }

   The output of the above function: A

 Here the *methodRankPoints()* doesn't return any value to main method because there is no return type here. It's void.
 Rather the *methodRankPoints()* just prints the result and ends the program.


 ## Passing Parameters by Value:-

 To call a Method, arguments should be passed.
 These should be in the same order as their respective parameters in the method specification.
 Parameters can be passed by value or by reference.
 Passing Parameters by Value means calling a Method with a parameter. Through this, the argument value is passed to the parameter.


   Example:-
   The following program shows an example of passing parameter by value. The values of the arguments remains the same even after the method invocation.

   public class ExampleMinNumber {
   
         public static void main(String[] args)
          {
            int a = 11;
            int b = 6;
            int c = minFunction(a, b); /**method calling statement*/
            System.out.println("Minimum Value = " + c);
         }

         /** returns the minimum of two numbers */
         public static int minFunction(int n1, int n2) /**method that has been called*/
         {
            int min;
            if (n1 > n2)
               min = n2;
            else
               min = n1;

            return min; /**returns minimum of n1 and n2*/ 
         }
      }

  Here the value of a & b doesn't change, they are just passed to n1 & n2 respectively.

Important thing regarding the parameters declared inside the Method is that the variable names should be different than the name of variables that are being passed from the main().
In the above example as we can see that the variables inside are a,b and the variables declared in the minFunction() are n1,n2. 
The variable names in minFunction() can't be a,b. They can be anything else.



## Summary of the Topics covered:-

1. Creation of a Method
2. Calling a Method
3. Passing Parameters by Value
