# Function In C

#### Every program in C or any programming language contains one function which is a must i.e main() function! :)

## What is a Function?
**_Function_** is basically **a block of statements** which are **combined together to perform a task** which **user wants to work upon** and can be executed whenever need it.
  
**Syntax**:
  
``` cpp
dataType functionName(Parameter List);
```

**Example**:
  
``` cpp
int main();
```

### Why do we need Functions?
- Reduces code redundancy
- Reduces the time complexity ( as we don't need write the same code again and again)
- Helps in maintainance
- Makes code **modular** (makes it easy to read if code is divided into functions)
- Provides abstraction

### Types of Functions
#### Built-in(Library) Functions
Functions provided by system and already stored in the library. They can also be called **LIBRARY FUNCTIONS**.    

**Example**: 

``` cpp
scanf();                        
printf();                              
strcpy();                             
strcmp();
``` 

### NOTE: We need to add appropriate C header files in the code to use these functions.
                                                             
#### User Defined Functions
Functions that the user defines while writing the program.

**Example**:
 
``` cpp                               
int add();
int sum();                               
``` 

### Parts of Functions
- Function Prototype(Function Declaration)

#### GENERAL SYNTAX :
 
``` cpp
dataType functionName(Parameter List); 
return_type function_Name(Parameter List);                               
``` 

#### IMPORTANCE:
We cannot ignore function prototype, it tells the compiler about the amount of parameters, data-types and the return type of the function.
                               
#### CODE EXAMPLE:
                               
``` cpp
#include <stdio.h>
char fun()
{
  return 'G';
}
                               
int main()
{
  printf("%c\n",fun());
  return 0;
}                               
 ```
                                  
 #### NOTE: If we call a function before it's declaration in C, the compiler itself assumes return type of the function as **int**
 ### IT IS NECESSARY TO DECLARE A FUNCTION BEFORE WE CALL IT!
                                
- Function Definition

#### GENERAL SYNTAX :

``` cpp
returnType functionName(Function arguments)
{
    //body of the function
   .
   .
   .
}
```
                                                              
#### CODE EXAMPLE:
                               
``` cpp
#include <stdio.h>
int add()
{
  int num1 = 10, num2 = 5;    //body of the function
  return num1 + num2; 
}
                               
int main()
{
  printf("%d\n",add());
  return 0;
}                               
```

- Function Call

#### GENERAL SYNTAX :

``` cpp
dataType Variable = functionName();
```
                                                              
#### IMPORTANCE:
Function call makes the program readable and less complex.
                               
#### CODE EXAMPLE:
                               
``` cpp                                
#include <stdio.h>

/* Function Declaration */ int add();                               
int main()
{
  int ans;             //Local variable definition
  ans = add();        // Calling function the get added value as answer
  printf("The addition of two numbers is: %d\n",ans);
  return 0;
} 

/* Function returning addition of two numbers*/                               
int add()
{
  int num1 = 10, num2 = 5;      //Local variable definition
  //body of the function
  return num1 + num2; 
}           
```                             
