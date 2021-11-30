# <div align="center">✨ Nested functions in C 👾</div>

<p align="center"><img src="https://user-images.githubusercontent.com/84238610/136103366-76a7219a-23b9-41a4-9f48-65809e2dab42.png" width="1000px" height="200"></p>

## What are nested functions:
When one or more functions are utilized under a particular function, it is known as nesting function in C Programming Language.
Note – We can not define a function within another function in C language(nested function is not supported by C language). we can only declare a function within another function in C(not define).

## Lexical scoping in c:
Some programmer thinks that defining a function inside an another function is known as "nested function". But the reality is that it is not a nested function, it is treated as lexical scoping. Lexical scoping is not valid in C because the compiler cant reach/find the correct memory location of the inner function.
</br>
## Error while using nested functions in C:
Nested function **is not supported** by C because we cannot define a function within another function in C. We can declare a function inside a function, but it's not a nested function.\
Because nested functions definitions can not [access local variables](https://www.geeksforgeeks.org/g-fact-24/) of the surrounding blocks, they can access only global variables of the containing module. This is done so that lookup of global variables doesn't have to go through the directory. As in C, there are two nested scopes: local and global (and beyond this, built-ins). Therefore, nested functions have only a limited use. If we try to approach nested function in C, then we will get compile time error.

```c
// C program to illustrate the
// concept of Nested function.
#include <stdio.h>
int main(void)
{
    printf("Main");
    int fun()
    {
        printf("fun");
  
        // defining view() function inside fun() function.
        int view()
        {
            printf("view");
        }
        return 1;
    }
    view();
}
Output:

Compile time error: undefined reference to `view'
```
## auto Keyword:
An extension of the GNU C Compiler allows the declarations of nested functions. The declarations of nested functions under GCC's extension need to be prefix/start with the[ auto keyword](https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/).

```c
// C program of nested function
// with the help of gcc extension
#include <stdio.h>
int main(void)
{
    auto int view(); // declare function with auto keyword
    view(); // calling function
    printf("Main\n");
  
    int view()
    {
        printf("View\n");
        return 1;
    }
  
    printf("Girlscript");
    return 0;
}
Output:

view
Main
Girlscript

##Example:
```c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("This is main method in c\n");
    function_one();
    getch();
    return 0;
}
void function_one()
{
    printf("This is a user define function\n");
    function_two();
}
void function_two()
{
    printf("This is nested function in c\n");
}
```
**when the above code is executed, it produces the following result**
```
This is main method in c
This is a user define function
This is nested function in c
```
So that is all that you need to get started with Nested functions in C.
<hr>
## Thankyou for reading! ☺🙌


