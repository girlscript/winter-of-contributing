# Programming Components, Structure & Keywords
## Components and Keywords
Let's look at the basic minimum of C programme components because if you understand the fundamental structure of a C programme, the language's other core building blocks will be straightforward to grasp.
## Tokens in C
 A token is a keyword, an identifier, a constant, a string literal, or a symbol, and a token is a keyword, an identifier, a constant, a string literal, or a symbol in a C programme. The following C statement, for example, is made up of five tokens:
```c
printf("Hello, World! \n"); 
```
 * **Semicolons**
The semicolon is a statement terminator in a C programme. That is, each statement must be terminated by a semicolon. It indicates the end of one logical entity.

```c
printf("Hello, World!");
return 0;
```
* **Comments**
Comments are similar to help text in a C programme, but the compiler ignores them. They begin with the characters /* and end with the characters */, as illustrated below.
```c
/* Program in C */
 ```
Note - There are no comments within comments, and they don't appear in strings or character literals.

* **Identifiers**
A variable, function, or any other user-defined item is identified by a C identifier. An identifier begins with a letter from A to Z, a to z, or an underscore '_', then zero or more letters, underscores, or numbers (0 to 9).

Within identifiers, punctuation characters like @, $, and percent are not allowed. The computer language C is case-sensitive. As a result, in C, manpower and manpower are two distinct identifiers. Here are some identifiers that are acceptable:

```
gwoc      hello     abc    hello_name    a_123
gwoc21    _temp     j      a23b9         retVal
```

* **Keywords**

Keywords are reserved terms in programming that have a specific meaning for the compiler. Keywords are a component of the syntax and cannot be used to identify something.

```
auto	    double  	int	        struct
break	    else	    long	    switch
case	    enum	    register	typedef
char	    extern	    return	    union
continue	for	        signed	    void
do	        if	        static	    while
default	    goto	    sizeof	    volatile
const	    float	    short	    unsigned
```

* **Whitespace in C**

A blank line is a line that has simply whitespace, potentially with a comment, and it is completely ignored by the C compiler.

Blanks, tabs, newline characters, and comments are all referred to as whitespace in C. Whitespace divides one section of a statement from the next, allowing the compiler to determine where one element, such as int, stops and the next begins. As a result, the following assertion is true:

In order for the compiler to distinguish between int and age, there must be at least one whitespace character (typically a space) between them. In the following sentence, on the other hand,

fruit = apples + oranges; / calculate the total amount of fruit
Between fruit and =, or between = and apples, no whitespace characters are required, however you are free to include some if you want to improve readability.   
<hr>

## Structure 
A C program's structure refers to the precise structure used to begin programming in the C language. It is difficult to analyse the problem and its solution without a correct structure. It also serves as a guide for writing more advanced programmes.

The sections of a C prgram are listed below:
  - Documentation Section
  - Preprocessor Section
  - Definition Section
  - Global Declaration
  - Main Function
  - User Defined Functions

<hr>

* **Documentation section**

It includes statements such as a program's name, date, description, and title that are specified at the start of the programme. It's written like this:

```c
// name of program
```
OR
```c
/*
    Overview of Program
*/
```
Both techniques function as a program's document section. It gives a high-level summary of the software. Anything written inside will be regarded documentation and will not conflict with the code.

* **Preprocessor Section**

All header files used in a programme are found in the preprocessing section. It tells the system that the header files should be linked to the system libraries. It is provided by:

```c
#include<stdio.h>
#include<conio.h>
```
At the time of compilation, the #include declaration incorporates the relevant file as part of a function. As a result, the contents of the included file are compiled with the function. The entirety of the standard input output files, which includes the definitions of stdin, stdout, and stderr, are included in #includestdio.h>. The statement #includestdio.h> must be used whenever the definitions stdin, stdout, and stderr are used in a function.
For diverse uses, numerous header files are provided. 
#Include math.h>, for example. In a programme, it is used for mathematical functions.
    
* **Define Section**
The define section contains several constants that have been declared using the define keyword. It is provided by:

```c
pi=3.14;
```

* **Global Declaration**
The global section contains all of the program's global declarations. It is provided by:

```c
int a = 12;
char ch = 'z';
float b = 1.24;
```
The following is a list of the sizes of the global variables mentioned above:

> int = 1 byte 

> float = 4 bytes

> int = 4 bytes

In the global variable section, we may also declare user-defined functions.

* **Main Function**

The main() function is the first to be run by the computer. The primary section of a code must be included (). It works just like any other function in the C library. Parameters (if any) are passed to a function using parenthesis ().

The main function is written as follows:

```c
main()
```
With the main, we may also utilise int or main (). The void main() specifies that no value will be returned by the programme. The int main() states that the application can return integer type data.

```c
int main()
```
OR
```c
void main()
```
Local declarations, statements, and expressions are the several types of main functions.

* **Local Declaration**
Local declarations relate to variables that are declared within a function or block.

```c
main() {
    int i =2;
    i++;
}
```
**Statements**

If, else, while, do, for, and other statements are used in a program's main function.

**Expressions**

An expression is a sort of formula in which operators are used to bind operands together. It is provided by: 
   
   ```c
    a - b;
    a + b;  
   ```
* **User Defined Function**

The user defined functions specified the functions according to the user's specifications. For instance, colour(), sum(), division(), and so on.

The sections of the programme (basic or advanced) are the same as those described above.

The return function is usually found at the end of a programme. It is not, however, required to be included. When we want to return a value, we use it. When a return type other than void is given using the return function, it returns a value.

The function's execution is terminated by the return type. It further returns control to the specified calling function. It is provided by: 

```c
return;
```
OR
```c
return expression;
```
For Example,

``return 0;``

<hr>

## Examples

**Example 1: To find the sum of two numbers given by the user**

```c
/* Sum of two numbers */  
#include<stdio.h>   
int main()  
{  
int a, b, sum;  
printf("Enter two numbers to be added ");  
    scanf("%d %d", &a, &b);  
    // calculating sum  
    sum = a + b;      
    printf("%d + %d = %d", a, b, sum);  
    return 0;  // return the integer value in the sum  
}  
```
``Output``
```
Enter two numbers to be added 8 7
8 + 7 = 15
```