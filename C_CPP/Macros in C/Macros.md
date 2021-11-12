# Macros in C
### **Something about the C preprocessor**
Let us see what happens when we finish writing our code and send it for compilation. Just before the program gets compiled, we have something called the C preprocessor, which transforms the program before compilation. This could include including a header file, expanding a macro etc. So this is where Macros come into play. Let us see what they are. 
### **What are Macros**
A macro is a piece of code that is given a name. It can be defined by using the **#define** preprocessor directive. Macros are of two types: 
- Object like Macros
- Function like Macros

Let's have a look at each of the following: 
## Object like Macros
These are used to assign a value to a certain variable and are mostly used to define mathematical values and constants like Pi, e, iota etc. 
For example:&nbsp;**#define speed 10000**<br>
Here, whenever we will use speed in the program, it will get replaced by the value which we have defined, i.e. 10000. 
Let us see Object like Macros being used in a program:
```#include <stdio.h>
#define speed 10000
int main()
{
    float distance, time;
    printf("Enter the time taken: ");
    scanf("%f", &time);

    // Notice the use of speed here
    distance = speed*time;

    printf("Distance=%.2f",distance);
    return 0;
}
```
## Function like Macros
These are very similar to the normal function calls that we write in C. We define the name of the function, and pass some arguments to it, and then define what the function actually does with those arguments. 
For example: &nbsp; **#define add(a,b) (a)+(b)**<br><br>Here, whenever we will use add in the program, it will get replaced by the function call and the result would be stored.<br>You might be wondering **what is the need of Function like macros** when it is entirely similar to defining a function. Well, the interesting thing is, that when we define a function using a Macro, it takes any kind of data type. This actually allows us to do function overloading upto some extent in C, which is not a function of C, unlike C++.<br><br>Let us see Function like Macros being used in a program:
```
#include <stdio.h>
#define increment(n) ++n

int main()
{
    char *p = "bojackhorseman";
    int num = 10;
    printf(" Let's see the char array data type: %s ", increment(p));
    printf("\n Let's see the int data type: %d", increment(num));
    return 0;
}
```
<br>**The code would produce the following output:**<br>
Let's see the char array data type: ojackhorseman<br>Let's see the int data type: 11<br><br>We can also define multiline functions using function like macros. For this, we need to end each line with a '\\'. Let us see the code for this: <br><br>
```
#include <stdio.h>
#define print(limit) int i = 0; \
while(i<limit)\
{\
    printf("Macro usage. ");\
    i++; \
}\

int main()
{
    int limit = 5;
    print(5);
    return 0;
}
```
<br>**The code would produce the following output:**<br>Macro usage. Macro usage. Macro usage. Macro usage. Macro usage.<br>
## **Predefined Macros in C**
Some of the Macros are predefined in C and can be used in the following format(in the form of a string):
```
printf("The value of this macro is: %s", __DATE__);
```
Here is a list of the predefined macros in C: 
- __DATE__	A string containing the current date
- __FILE__	A string containing the file name
- __LINE__	An integer representing the current line number
- __STDC__	If follows ANSI standard C, then the value is a nonzero integer
- __TIME__	A string containing the current date.
