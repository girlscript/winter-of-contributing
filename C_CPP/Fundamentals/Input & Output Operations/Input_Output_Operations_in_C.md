### To work on a programming language, it is important to know the input and output operations of that language! 👍

#### Lets study some Input & Output Operations in C

Before this, lets talk a little about **Constants and Variables in C**

## Constants
Constants refer to fixed values that the program may not alter during  its execution. These fixed values are also called **literals**.
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
Variables are memory locations(storage area) in the C programming language. The primary purpose of variables is to store data in memory for later use.
If you declare a variable in C, that means you are asking to the operating system for reserve a piece of memory with that variable name.

#### Lemme tell you an important fact: Unlike constants which do not change during the program execution, variables value may change during execution!💯 

### There are some rules to write a variable:
- A variable name can consist of Capital letters A-Z, lowercase letters a-z, digits 0-9, and the underscore character(_).
- The first character must be a letter or underscore(_). No blank spaces can be used in variable names.
- Special characters like #, $ are not allowed.

#### NOTE: C keywords cannot be used as variable names and variable names are case sensitive.

#### Syntax:
                                     type variable_name;
                                     
#### Example:
                                     int year;
                                     
                                     
## Managing Input/Output
I/O operations are useful for a program to interact with users.
**stdlib** is the standard C library for input-output operations.
In C, two important streams play their role:
- Standard Input(stdin)
- Standard Output(stdout)

**Standard input** or **stdin** is used for taking input from devices such as Keyboard as a data stream.

**Standard output** or **stdout** is used for giving output to a device such as Monitor.

#### NOTE: For using I/O functionality, programmers must include **_stdio_** header-file within the program


## Formatted Input/Output

### Formatted Output
In C, **printf()** is one of the **main output function**. The function sends formatted output to the screen.

#### Syntax:
                                    printf("control string", argl, arg2, arg3,.....argn);
                                    
                                   
### Formatted Intput
In C, **scanf()** is one of the **main input function**. We have already encountered this and familiar with this function.

#### Syntax: 
                                    scanf("control string", argl, arg2, arg3,.....argn);
                                    
#### NOTE: scanf() can take multiple input at one time! 👍
                                    
                                    
## How does a program work?
- All valid C program must contain the **main()** function. The code execution begins from the start of the main( ) function.
- The **printf()** is a library function to send formatted output to the screen. The function prints the string inside quotations.
- To use **printf()** & **scanf()** in our program, we need to include **stdio.h** header file using the **#include<stdio.h>** statement.
- The **return 0;** statement inside the main() function is the **"Exit status"** of theprogram.**It's optional**.                                    

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
Format specifiers start with a percentage **% operator** and followed by a **special character** for identifying the type of data.

#### NOTE: When  a value  is stored  in  a  particular variable, then you cannot print the value stored  in  the  variable  straightforwardly without using the format specifiers. You can retrieve the data that are stored in the variables and can print them onto the console screen by implementing these format specifiers in a printf() function.

**_Mostly used format specifiers in C:_**
- **%d** Integer Format specifier
- **%c** Character Format specifier
- **%f** Float Format specifier


## Escape Sequences In C
In C programming language, there are **256** numbers of characters in character set. 
The entire character set is divided into 2 parts i.e. **The ASCII characters set** and **The extended ASCII characters set**. 
But apart from that, some other characters are also there which are not the part of any characters set, known as **ESCAPE characters**.
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
                                    
                                    
As we all know the **three** essential functions of a computer are **reading, processing and writing data**. Majority of the programs take **data as input**, and then after processing the **processed data is being displayed** which is called **information**.
In C programming you can use **scanf()** and **printf()** predefined function to **read** and **print** data.


## Reading Character In C
The easiest and simplest of all I/O operations are taking a character as input by reading that character from standard input (keyboard).
**getchar()** function can be used to read a single character.**This function is alternate to scanf() function**.

#### Syntax:
                                    var_name = getchar();
                                                                        
There are another functions to do that task : **getc(), getch() and getche()** which is used to accept a character from standard input and input streams.

### So, now lets know the difference between these input funtions!💯

##  Difference between getchar(), getc(), getch() and getche()
All of these functions read a character from input and return an integer value. The integer is returned to accommodate a special value used to indicate failure. 
- **getchar():** This function is used to read a single character.
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
                                   
                                 

- **getch():** It is a **nonstandard function** and is present in **conio.h** header file. It is **not** part of the **C standard library**.
Like above functions, it reads also a single character from keyboard. 
#### NOTE: But it does not use any buffer, so the entered character is immediately returned without waiting for the enter key.
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
 
 
 
- **getche():** Like getch(), it also a **nonstandard function** and reads a single character from the keyboard and displays immediately on output screen without waiting for enter key.
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
Similar to **getchar()** there is another function which is used to write characters, but one at a time.
The output function is **putchar()**.

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
                                 
                              
                                    
