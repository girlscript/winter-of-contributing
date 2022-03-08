# Documentation of keywords and Identifiers in C++:
Lets us take a look into some keywords and Identifiers in c++ which adds on some meaning to the language.
## Keywords/ Reserved words:
 They have special meaning to the C++ compiler and cannot be used as variable names. If used program would give compilation error. 
 There is a long list of keywords in c++.
 Here is the list of some of them:
 
1: asm
2: double
3:new	
4:switch
5:auto
6: else	
7:operator	
8:template
9:break	
10:enum	
11: private	
12: this
13: case
14: extern	
15: protected
16: throw
17:catch
18: float    
19: public	
20:try
21:char
22:for
23:register
24: typedef
25: class
26:friend
27:return	
28:union
29:const
30:goto
31:continue
32:if
33: signed	
34:sizedof
35:do
36:void
37:delete
38:int	
39:long
40:while
The list is endless.
There are many more keywords that are used.

## Identifiers:
All C++ variables must be identified with unique names.These unique names are called identifiers.
Identifiers can be written with short names (like m and n) or more descriptive names like (sum, multiply and time ).
```c++
// Recommended
int timeinminutes = 60;

// Its not easy to understand but takes less time
int m = 60;
```
### Rules for naming variables in c and c++:
1) Only alphabetic characters, digits, and underscores are to be used.
2) The identifier name cannot start with a digit, i.e., the first letter should be alphabetical. After the first letter, we can use letters, digits, or underscores.
3) In C++, uppercase and lowercase letters are considered as different. Therefore, we    can say that identifiers are case-sensitive.
4) A declared keyword cannot be used as a variable name.

The following are the examples of valid identifiers are:
```c++
Time
Time2  
_time  
sum  
```
The following are the examples of invalid identifiers:
```c++
Time-2   // containing special character '-'.  
2Time    // the first letter is a digit.   
continue    // use of a keyword.    
```
Let's look at a simple example to understand the concept of identifiers.
```c++
#include <iostream>  
using namespace std;  
int main()  
{  
    int a;  
    int A;  
    cout<<"Enter the values of 'b' and 'B'";  
    cin>>b;  
    cin>>B;  
    cout<<"\nThe values that you have entered are : "<<b<<" , "<<B;  
    return 0;  
}
```
### Result
Enter the values of b and B
5
8
The values that you have entered are: 5 , 8

Here both that variables are considered as different b and B. Both are different as variables are case sensitive and therefore they have different memory locations.

Hope you have found this topic interesting.
### THANKYOU...
