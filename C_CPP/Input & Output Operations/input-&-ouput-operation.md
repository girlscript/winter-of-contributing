# Input & Output Operation in C
## Output Function

When we mention **Output**, we mean show some data on the screen, printer, or in any file. The C programming language comes with a collection of built-in functions for displaying and saving data on the computer screen and in text and binary files, respectively. 

```Printf()``` is a common output function in C programming. The function's output is sent to the screen in formatted form. For example,

* Step1: Include Header File.
* Step2: main() Function where the program execution begins.
* Step3: Printing the String using ``printf()`` Function.
* Step4: Terminates the main() function.

```
# Print Hello World

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
# Taking User Input

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
<hr>