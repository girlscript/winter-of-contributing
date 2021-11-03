# Program to print Fibonacci series using recursion in c.

## Fibonacci series

In Fibonacci series, next number is the sum of previous two numbers.
For example, 
0 1 1 2 3 5 .... and so on.
Here third `1` is the sum of its previous two numbers `0` and `1`.



## Recursion

Recursion is the process in which a function calls itself directly or indirectly.

It is like repeating a function itself inside same function until a condition is met.

## Program in c

```C
// header file for input output operations
#include <stdio.h>  

int Fibonacci(int); // Fibonacci() function declaration

// driver function
int main()
{
   int n, i = 0;
   printf("Enter no. of elements in Fibonacci series: ");
   scanf("%d", &n); // input number of elements present in series from user

   if (n <= 0)
   {
      printf("\nEnter a non-zero positive integer: ");
      scanf("%d", &n);
      printf("\nFibonacci series: \n");
   }
   else
      printf("\nFibonacci series: \n");

   // loop to print n elements of series
   for (int c = 1; c <= n; c++)
   {
      printf("%d ", Fibonacci(i)); // print elements of series by calling Fibonacci() function
      i++;    //increment i (value to pass in Fibonacci() function)
   }

   return 0;
}

// Fibonacci() function definition
int Fibonacci(int n)
{
   if (n == 0)
      return 0;
   else if (n == 1)
      return 1;
   else
   // recursive process to return element of Fibonacci series
      return (Fibonacci(n - 1) + Fibonacci(n - 2)); 
}

```

## Sample tests

1. Fibonacci series having positive number of elements given as input

~~~
Enter no. of elements in Fibonacci series: 7

Fibonacci series:
0 1 1 2 3 5 8
~~~

2. series having 0 or negative number of elements given as input

~~~
Enter no. of elements in Fibonacci series: 0

Enter a non-zero positive integer: 5

Fibonacci series:
0 1 1 2 3
~~~

~~~
Enter no. of elements in Fibonacci series: -1

Enter a non-zero positive integer: 5

Fibonacci series:
0 1 1 2 3
~~~