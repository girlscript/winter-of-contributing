### To work on a programming language, it is important to know the input and output operations of that language! 👍

#### Lets study some Input & Output Operations in C

Before this, lets talk a little about **Constants and Variables in C**

## Constants
Constants are the constant(**fixed**) values that do not chnge their value during the program execution. They are also called **literals**.
There are **two** simple ways in C to define constants -

- Using **#define** preprocessor.
#### Syntax:
                                    #define identifier value
                                    
#### Example:
                                    #define year 2021
                                    
                                    
- Using **const** keyword.
#### Syntax:
                                    const type variable = vaue;
                                    
#### Example:
                                    const int year = 2021;
                                    

## Variables 
Variables are used to store data in the C programming languagefor later use.
If we declare a variable in C, we are reserving a piece of memory with that variable name.

#### Lemme tell you an important fact: Unlike constants which do not change during the program execution, variables value may change during execution!💯 

### There are some rules to write a variable:
- A variable name can have alphabets(**lowercase & uppercase both**), digits(**0-9**), and the underscore character(**_**).- Special characters(**$,@**) are not allowed.
- It must begin with a **letter or underscore(_) not digits**. No blank spaces can be used in variable names.

#### NOTE: C keywords cannot be used as variable names and variable names are case sensitive.

#### Syntax:
                                     type variable_name;
                                     
#### Example:
                                     int year;
                                     
                                     
## Managing Input/Output
**stdlib** is the standard C library for input-output operations.
In C, there are two important streams:
- Standard Input(stdin) : used for taking input.
- Standard Output(stdout) : is used for giving output.

#### NOTE: For using I/O functionality, programmers must include **_stdio_** header-file within the program

## Formatted Input/Output

### Formatted Output
In C, **printf()** is one of the **main output function**. The function displays output on the user's screen.

#### Syntax:
                                    printf("control string", argl, arg2, arg3,.....argn);
                                    
                                   
### Formatted Intput
In C, **scanf()** is one of the **main input function**.
#### Syntax: 
                                    scanf("control string", argl, arg2, arg3,.....argn);
                                    
#### NOTE: scanf() can take multiple input at one time! 👍
                                    
                                    
## How does a program work?
- All valid C program must contain the **main()** function. The code execution begins from the start of the main( ) function.
- The **printf()** is a library function to display output on the user's screen. The function prints  whatever is enclosed inside quotations.
- To use **printf()** & **scanf()** in our program, we need to include **stdio.h** header file using the **#include<stdio.h>** statement.
- The **return 0;** indicates the **"Exit status"** of theprogram.**It's optional**.                                    

### Sample program of Formatted Input/Output:
                                    
                                    #include<stdio.h>
                                    int main()
                                    {
                                    int number;
                                    scanf("%d", &number);                                   
                                    printf("Number is %d", number);
                                    return 0;
                                    }
                                    
#### Output: 
                                    Number is 2021
                                                                      
#### NOTE: We have used %d format specifier to print integers. Here %d within the quotations will be replaced with the value of number. 

Since, we have used format specifier. Lets talk about format specifiers in C


## C Format Specifier
Format specifiers can be defined as the operators which are used in association with **printf()** function for printing the data that  is  referred  by  any  object  or  any variable.
Format specifiers begin with a percentage **% operator** followed by a **special character** for identifying the type of data.

#### NOTE: When  a value  is stored  in  a  particular variable, then you cannot print the value stored  in  the  variable  straightforwardly without using the format specifiers. 

**_Mostly used format specifiers in C:_**
- **%d** Integer Format specifier
- **%c** Character Format specifier
- **%f** Float Format specifier


## Escape Sequences In C
The character set has 2 parts:
- **The ASCII characters set** and
- **The extended ASCII characters set**. 
But the characters which are not the part of any characters set are known as **ESCAPE characters**.
#### For example: 
                                     \a - Alarm or Beep
                                     \b - Backspace
                                     \n - New Line
                                     \t - Horizontal Tab
                                     \v - Vertical Tab
                                     
                                     
#### Sample Program for Escape Sequences in C:

                                    #include<stdio.h>
                                    int main()
                                    {
                                    char ch1 = '\t';
                                    char ch2 = '\n';
                                    printf("Test for tabpace %c and a newline %c will start here", ch1, ch2);
                                    return 0;
                                    }
                                    
#### Output:
                                    Test for tabspace   and a newline
                                    will start here
                                    
                                    
In C programming you can use **scanf()** and **printf()** predefined function to **read** and **print** data.


## Reading Character In C
To read a character from standard input, we use following functions: 
**getchar()** function can be used to read a single character.**This function is alternate to scanf() function**.

#### Syntax:
                                    var_name = getchar();
                                                                        
There are another functions to do that task : **getc(), getch() and getche()** which is used to accept a character from standard input and input streams.

### So, now lets know the difference between these input funtions!💯

##  Difference between getchar(), getc(), getch() and getche()
- **getchar():** This function reads a single character.
#### Syntax:
                                    var_name = getchar();
                                    
#### A code example:
                                    #include<stdio.h>
                                    int main()
                                    {
                                    char ch;
                                    printf("Enter a character:");
                                    ch = getchar();
                                    printf("\nEntered character is:%c",ch);
                                    return 0;
                                    }
                                    
#### Output:
                                    Enter a character:K
                                    Entered character is:K
 
 
 
- **getc():** It reads a single character from a given input stream and returns the corresponding integer value **(typically ASCII  value of read character)** on success.
It returns **EOF** on failure. 
#### Syntax:
                                    int getc(FILE *stream);
                                    
#### A code example:
                                    #include<stdio.h>
                                    int main()
                                    {
                                    int ch;
                                    ch = getc(stdin);
                                    printf("%c",ch);
                                    return 0;
                                    }
                                   
                                 

- **getch()&getche():** It is a **nonstandard function** and is present in **conio.h** header file. It is **not** part of the **C standard library**. It also reads a single character from keyboard. 
#### NOTE: In getch()&getche(), the entered character is immediately returned without waiting for the enter key.
#### Syntax:
                                    int getch();
                                    
#### A code example:
                                    #include<stdio.h>
                                    int main()
                                    {
                                    char ch;
                                    printf("Enter a character:");
                                    ch = getch();
                                    printf("\nEntered character is:%c",ch);
                                    return 0;
                                    }
                                    
#### Output:
                                    Enter a character:A
                                    Entered character is:A
 

#### Syntax:
                                    int getche(void);
                                    
#### A code example:
                                    #include<stdio.h>
                                    int main()
                                    {
                                    char ch;
                                    printf("Enter a character:");
                                    ch = getche();
                                    printf("\nEntered character is:%c",ch);
                                    return 0;
                                    }
                                    
#### Output:
                                    Enter a character:V
                                    Entered character is:V 
                                    
                                    
## Writing Character In C
The output function **putchar()** is used to write characters, but one at a time.

#### Syntax:
                                    putchar(var_name);
                                    
Similarly, there is another function **putc()** which is used for sending a single character to the standard output.
#### Syntax:
                                    int putc( int c, FILE *stream);
                                    
#### A code example that tells the use of both funtions:
                                    
                                    #include<stdio.h>
                                    int main()
                                    {
                                    FILE *fp;
                                    char ch = 'g';
                                    putchar(ch);
                                    putchar(\n);
                                    putc('ch',fp);
                                    return 0;
                                    }
                                    
 #### NOTE: Always use FILE*(file pointer of file you want to read and write in) for getc() and putc() functions! 👍
                                 
                              
                                    
