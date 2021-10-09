# Program to find factorial using recursion in c++.

## Factorial
In mathematics, factorial of a non-negative integer is the product of every non-negative integers less than or equal to that integer.

Factorial of any number is denoted as n!.

n! = n.(n-1).(n-2).....3.2.1.

For example:

5! = 5.4.3.2.1 = 120

Factorial of 0 is 1 i.e. 0! = 1

<br>

## Recursion

Recursion is the process in which a function calls itself directly or indirectly.

It is like repeating a function itself inside same function until a condition is met.

<br>

## Program in c++

```c++
#include<iostream>   
using namespace std;
 
int Factorial(int);  //function declaration
 
 //Driver function
int main()
{
   int num,fact;  //variable declaration
   cout<<"Enter no. whose factorial is to be calculated: ";
   cin>>num;  //taking number as input from user

   
   if(num<0)
   {
      cout<<"Factorial of negative no. is not defined";
   }
   else
   {
      //calling function Factorial() and storing its return value in variable fact
     fact = Factorial(num); 
     cout<<"Factorial of " <<num<<" is:- "<<fact; //displaying output
   }
   return 0;
}
 
 //Factorial() function definition
int Factorial(int n)
{
   if(n==0 || n==1)
     return 1;
   else
     return  n * Factorial(n-1);  //recursion process
} 

```

### Sample tests
<hr>

1. Factorial of a positive number: <br>


~~~ 
Enter no. whose factorial is to be calculated: 5
Factorial of 5 is:- 120
~~~
<br>

2. Factorial of a negative number: <br>

~~~
Enter no. whose factorial is to be calculated: -8
Factorial of negative no. is not defined
~~~

<br>

3. Factorial of 0: <br>

~~~
Enter no. whose factorial is to be calculated: 0
Factorial of 0 is:- 1
~~~