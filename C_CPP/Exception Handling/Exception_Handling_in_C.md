# Exception Handling in C
Exception handling in C is comparatively tough as C does not provide any direct support to handle the exception handling , there are some ways by which programmer can handle the exceptions .

### Steps to Approach the Exception :
1. A programmer has to prevent errors as its priority.
2. Test return values from the functions.
3. Identification of Global error number :
```
errno value       Error Message
1               Operation not permitted
2               No such file or directory
3               No such process 
4               Interrupted system call 
5               I/O error 
6               No such device or address
7               Argument list too long 
8               Exec format error 
9               Bad file number 
10              No child processes 
11              Try again 
12              Out of memory 
13              Permission denied 
```
## Types of Error or Exception Handling
1. **Perror ( ) and Sterror ( ) :** These functions are used to display the text that is associated with error number .
- perror : It displays the string you pass to it, followed by a colon, a space, and also with error message of the current errno value.
- sterror :  It returns pointer to text representation of the current errno value.
```c
#include <stdio.h>
#include <errno.h>
#include <string.h>
  
int main ()
{
    FILE *fp;
  
    // We are trying to open file that not exist .
    fp = fopen(" GWOC_21.txt ", " r ");
  
    // For printing the error number
    printf("Universal Value of errno: %d\n ", errno);

    // For printing error message
    printf("The error message : %s\n", strerror(errno));
    
    // Form perror same as above printing the message from error
    perror("Message from perror function : ");
  
    return 0;
}
```
Output :
```
Universal Value of errno: 2
The error message is : No such file or directory
Message from perror function : No such file or directory
```

2. **Divide by Zero errors :** Division by zero leads to undefined behavior, there is no C language construct that can do anything about it. Your best bet is to not divide by zero in the first place, by checking the denominator.
```c
#include<stdio.h>
#include <stdlib.h>
  
void Division_by_zero(int);
  
int main()
{
    int a = 0;
    Division_by_zero(x);
    return 0;
}
  
void Division_by_zero(int a)
{
    float f;
  
    if (a==0)
    {
        printf("Division by Zero forms indeterminant form");
        fprintf(stderr, "Exitting \n");
        exit(EXIT_FAILURE);
    }
    else
    {
        f = 10 / a;
        printf("f(x) is: %.2f", f);
    }
}
```
Output :
```
Division by Zero forms indeterminant form 
```
3. **Exit Status :** There are two constants EXIT_SUCCESS and EXIT_FAILURE that are defined as the macros in the stdlib.h header file , The work of these constants is to indicate successful or unsuccessful termination of program.
```c
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
  
int main ()
{
    FILE * fp;
    fp = fopen ("GWOC_21.txt", "rb");
  
    if (fp == NULL)
    {
        printf("Universal Value of errno : %d\n", errno);
        perror("Error printed by perror");
  
        // This will execute is case of failure of work
        exit(EXIT_FAILURE);
        printf("File will not be able to printed\n");
    }
  
    else
    {
        fclose (fp);

        // This is the case when work is terminated successfully.
        exit(EXIT_SUCCESS);
        printf("File will not be able to printed function \n");
    }
    return 0;
}
```
Output :
```
Universal Value of errno: 2
Error printed by perror function : No such file or directory
```
