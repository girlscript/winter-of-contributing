# VARIADIC FUNCTION IN C

<b>What is a variadic function?</b>

Functions which take a variable number of arguments, in the parameter list, are called Variadic Functions. It makes a particular program more flexible.

The syntax for such a function is:
```
      int sum(int args, ...)
```

Let us consider a question in which we have to declare a function for adding 3 numbers.

Here is how we will define it,
```C
    int add(int a, int b, int c)
    {
      int sum= a+b+c;
      return sum;
    }
```

Now, if we are told to write a program to add 9 numbers. Then we have to again modify the function. Not just that, we also need to declare 9 variables, which is cumbersome. In times like this, where the number of parameters may vary, we use variadic functions.

Some find this concept to be a complicated one, when actually it is exceptionally simple.

For writing a variadic function we need to use the header file <b>stdarg.h</b>. 
We also need to be aquainted with a few <b>macros</b>. The following macros are used in a variadic function:

*   va_list
*   va_arg
*   va_start
*   va_end

We will later understand the syntax and the use of these macros with the help of a code.

Steps for declaring a variadic function:

*   Include the header file stdarg.h
*   Declare the parameter list such that the first parameter defines the number of arguments and it is followed by "...", which shows that it is a variadic function.
*   Define a va_list variable.
*   Begin and end the list with the macros va_start and va_end.

Let us now look at our sample code for adding a variable number of integers.

```C
      #include<stdio.h>
      #include<stdlib.h>
      #include<stdarg.h>

      int sum(int args, ...) // here args is the number of integers
      {
          va_list ap; // the macro declares the argument parameter as ap

          va_start(ap, args); // start takes 2 argument the list variable and no of arguments

          int i, sum=0;

          for(i=0;i<args;i++)
          sum= sum + va_arg(ap, int); // the summation is performed. Here, int is the type of the list variable.

          va_end(ap); // end only takes the list variable ap as an argument

          return sum;
      }
      int main()
      {
          printf("sum= %d", sum(3, 1,4,6));
          return 0;
      }
```

OUTPUT:
```
      sum= 11
```

### EXPLANATION:

The code is pretty much self explanatory due to the comments. Here, the number of arguments is 3 and the numbers to be added are 1, 4 and 6 which sum up to 11.

So, we can see that a variadic function has the following advantages over a normal function:

- It makes passing a slice in a function very easy.

- It is useful when the number of parameters is unknown.

- It increases the readability of the program.

Another macro that can be used in case of variadic functions is <b>va_copy</b>. It is not compulsory to use this macro but it comes in handy in case of certain program. It has the following syntax:
```
    va_copy(va_list ap1, va_list ap2);
```

The primary function of this macro is to make a copy of the variadic function arguments. This macro is not widely used.

Thus, we can have learnt the syntax, definition and advantages of variadic functions.
