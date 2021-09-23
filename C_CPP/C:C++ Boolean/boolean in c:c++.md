# Boolean Variables in C/C++
<p> The boolean datatype is used to assign true or false values to a variable. In C bool is more of a macro whereas in C++ bool is a keyword. Generally the value of true is 1 and false is 0. Since the number of values for bool is limited to true or false it is versatile. </p>
<p>For example,</p>
`bool x= 54` returns true and `bool y=0` returns false

## Usage and Example of bool in C
<p>In C bool variable should be accompanied by a header file called stdbool.h </p> 
<p>This is because of the fact that bool is a macro in C and the C99 standard for C provides the provision of decalaring boolean variables.</p> 
<p>Given below is a simple example of using declaring a boolean variable v, with value true and check if it is a zero or non zero number</p>

```c
#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool v= true;
    if(v)
{
    printf("The value of v is non-zero or true");
}
else
{ 
    printf("The value of v is zero or false");
    
}
}
```

## Usage and Example of bool in C++
<p>In C++ the datatype bool already exists, hence no extra header file will be required.</p>


``` cpp 
#include <iostream>
using namespace std;
int main()
{
    int v=9;
    if (v)
    {
        cout<<"True: Non-zero";
        
    }
    else
    {
        cout<<"False: Zero";
    }
}
```
<p>In the above program since v is initialized to 9 the output returned will be True: Non-zero. If v is not initialzed with any value the program will consider v to be 0 and returns False: Zero  </p>

<p>Boolean type can also be utilized using enumeration. The syntax for such a variable is given below </p>

```typedef enum{true,false} variable_name; ``` 
<p> Another point to note while discussing this topic is that generally logical operators such as and(&), or(|), not(!) result in boolean values</p>
<p> For example,</p>
<p>1. If a is true, !a=false</p>
<p>2. If a==b, bitwise and operation returns true, else it returns false</p>

## References
- https://www.geeksforgeeks.org/bool-data-type-in-c/
- https://www.javatpoint.com/c-boolean


