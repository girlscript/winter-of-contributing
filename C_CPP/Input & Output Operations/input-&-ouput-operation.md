# Input & Output Operation in C
## Output Function

When we mention **Output**, we mean show some data on the screen, printer, or in any file. The C programming language comes with a collection of built-in functions for displaying and saving data on the computer screen and in text and binary files, respectively. 

```Printf()``` is a common output function in C programming. The function's output is sent to the screen in formatted form. For example,

* Step1: Include Header File.
* Step2: main() Function where the program execution begins.
* Step3: Printing the String using ``printf()`` Function.
* Step4: Terminates the main() function.

```
// C Program to demonstrate printf() method

#include<stdio.h> 
int main()  
{
    printf("Hello, World!");
    return 0;   
}
```
**Output**
```
Hello, World!
```
Other Ways to print Output:

* ``putchar()``:- It is possible to write an unsigned character (as an int) to the standard output using the C library function ``putchar(int char)``. 

```
// C program to demonstrate putchar() method
  
#include <stdio.h>  
int main()
{
    // Get the character to be written
    char ch = 'K';
  
    // Write the Character to stdout
    putchar(ch);
  
    return (0);
}
```
**Output** 

```
K
```
* ``Puts()``:- It is quite similar to the ``printf()`` function.
The ``puts()`` method is used to output a previously read string to the console using either the ``gets()`` or ``scanf()`` functions. The number of characters shown on the console is returned by the ``puts()`` method. Because it adds a newline character to the string and uses that to shift the cursor to a new line on the console, the integer value returned by ``puts()`` is always equal to the number of characters in the string plus 1. 

```
// C program to demonstrate puts() method

#include<stdio.h>  
void main()  
{  
    puts("I'm GWOC Contributor.");
    puts("This is my Contribution.");

    return 0;
}  
```
**Output**
```
I'm GWOC Contributor.
This is my Contribution.
```

<hr>

## Input Function

When we mention **Input**, we imply feeding a programme with data.
A command line or a file can be used as an input. To read input, the C programming language has a built-in collection of functions that do just that. 

``Scanf()`` is a widely used function in C programming to receive user input. Standard input like keyboards may be scanned using the ``scanf()`` method. For example,

* Step1: Include Header File.
* Step2: main() Function where the program execution begins.
* Step3: Declare the variable.
* Step4: Taking User Input.
* Step5: Printing the user input value.
* Step6: Terminates the main() function.

```
// C program to demonstrate scanf() method

#include<stdio.h>  
int main()  
{
   int a;   
   printf("Enter Number : ");   

   scanf("%d", a);  

   printf("Number : %d", a);    

   return 0;    
}
```

**Output**

```
Enter Number : (user input value)
```
Other Methods to take Input from user:
* ``getchar()``:- The C library's int getchar(void) function reads a character from standard input (an unsigned char).This is the same as using getc with stdin as an argument. 

 
 ```
 // C program to demonstrate getchar() method

 #include <stdio.h>
int main () 
{
    char c;
    printf("Enter character: ");
    a = getchar();
 
    printf("Character Entered: ");
    putchar(a);

    return 0;
}
 ```

 **Output**
 ```
 Enter character: a
 Character entered: a
 ```
* ``gets()``:- Reads characters from the standard input (stdin) and saves them as a C string in str until a newline character or the end of the file is reached. 
 ```
 // C program to demonstrate gets() method

 #include <stdio.h>
 int main () 
{
    char str[10];
    printf("Enter a string: ");
    gets(str);
 
    printf("You entered: %s", str);
    putchar(a);

    return 0;
}
 ```

 **Output**
 ```
 Enter a string: I'm GWOC contributor 
 You entered: I'm GWOC contributor
 ```



<hr>