# Function Argument In C

## What is a Function Argument?
**_Function Argument_** is basically **values** that are **passed** into the function. These arguments are used during execution of function. It can be seen in parentheses of function call.

<br>

-------------------------------------------------- 

**Syntax**:
  
``` c
Function_Name(Arguments_to_be_passed);
```
<br>

**Example 1**:

[C Program showing Arguments](Example_1.c)
  
``` c
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int n1 = 2, n2 = 3;
    printf("%d \n", add(n1, n2)); 
    //n1 and n2 are arguments here
    return 0;
}
```
**Output**:
  
``` c
5
```
<br>



--------------------------------------------------
--------------------------------------------------
<br>

### Rules of Argument:
- Number of argument is to be same as number of parameter in function.
- It can also be zero.
- Argument passed in Function must have same data type as the parameter of function.
- In case of multiple argument, when passed it is to be separated by commas.
- We don't need to mention data type when passing argument to function.
- Maximum number of argument that can be passed in a single function is 253.

-------------------------------------------------
-------------------------------------------------

<br>

### How can Argument passed in C?
#### There are two ways to pass argument into the function:
- Call by value
- Call by reference

<br>

----------------------------------------------

<br>

### 1. Call By Value
#### As the name implies, to pass argument into the function, the actual value is copied into the function's parameter.
We can see following things in it:
- Actual value passed as argument to the function.
- Argument passed in function can only be used in that function.
- Modifying parameter have no effect on argument passed to it. Function can't change value of argument.

<br>

### Example 2

[Call By Value](Example_2.c)

```c
#include <stdio.h>

void swap(int n1, int n2)
//Function have two parameter hence should have two argument
{
    int temp;
    printf("\nBefore Swapping: %d , %d", n1, n2);
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("\nSwapping Number: %d , %d", n1, n2);
    //Since vallue is passed in argument, we can see function didn't changed a and b actual value but only a and b is swapped in the function
    return;
}

int main()
{
    int a = 10;
    int b = 11;
    swap(a, b); //Passing values directly as argument
    return 0;
}
```
**Output**:
  
``` c
Before Swapping: 10 , 11
Swapping Number: 11 , 10
```
<br>

-------------------------------------------------

<br>

### 2. Call By Reference
#### As the name implies, to pass argument into the function, a address reference is used.
We can see following things in it:
- Address reference is passed in the function.
- Address Operator (&) is used to pass address of argument to function.
- Modifying parameter brings change on argument passed to it. Function can change value of argument.

<br>

### Example 3

[Call By Reference](Example_3.c)

```c
#include <stdio.h>

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    return;
}

int main()
{
    int a = 3;
    int b = 6;
    printf("Before Swap: %d , %d", a, b);
    swap(&a, &b);
    //Passing reference to the function as argument
    printf("\nAfter Swap: %d , %d", a, b);
    //Due to using reference as argument, a and b value is directly changed by the function
    return 0;
}
```
**Output**:
  
``` c
Before Swap: 3 , 6
After Swap: 6 , 3
```
<br>

--------------------------------------------------
--------------------------------------------------

<br>

### Difference Between Parameter and argument of function

<br>

--------------------------------------------------

| Argument                                                | Parameter                                                |
| ------------------------------------------------------- | -------------------------------------------------------- |
| Values that are passed into function when it is called. | These are defined in function prototype.                 |
| They are to pass value to run in function.              | They recieve value from argument and run it in function. |
| They are not defined in function.                       | They are defined in function header.                     |
| They can't be directly used in the function locally.    | They can be directly used in the function locally.       |

--------------------------------------------------

<br>

### Example 4

[Parameter & Argument](Example_4.c)

```c
#include <stdio.h>

void calculate(int n1, int n2, int *add, int *minus) //Defined in Function header
//Here n1, n2, *add, *minus are parameter
//They receive values from argument
{
    //Parameter can be used locally in function but argument can't
    *add = n1 + n2;
    *minus = n1 - n2;
    return;
}

int main()
{
    //Arguments are not defined in function prototype
    int a = 37;
    int b = 23;
    int sum = 0;
    int subt = 0;

    printf("Numbers :\na = %d\nb = %d", a, b);

    calculate(a, b, &sum, &subt);
    //Here a, b, &sum, &subt is argument
    //They pass values to parameter

    printf("\nCalculation :\na + b = %d\na - b = %d", sum, subt);
    return 0;
}
```
**Output**:
  
``` c
Numbers :
a = 37   
b = 23   
Calculation :
a + b = 60
a - b = 14
```
<br>
