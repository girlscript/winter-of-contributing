# Overview 
When several function declarations are specified for a single function name in the same scope, the function is said to be overloaded. C++ allows functions to have the same name
if it can distinguish them by their number and type of arguments.

# Need for function overloading 
- Real life application
- Inheritance of behaviour
- For faster execution of our code

# Restrictions on overloaded functions
- Any two functions in a set of overloaded functions must have different argument lists
- Overloading of functions only based upon return type, is an error
- Functions can't be overloaded solely on the basis being static and non-static
- TYPEDEF don't affect overloading mechanism

# Example of overloaded functions
#include<bits/stdc++.h>
<br>
void display(int n)                                    //function 1 overloaded for integers 
<br>
{
<br>
   cout<<"This is of integer type"<<endl;
<br>
}
<br>
void display(char ch) //function 2 overloaded for characters 
<br>
{
<br>
   cout<<"This is of character type"<<endl;
<br>
}
<br>
void display(float fl)                                 //function 3 overloaded for floats 
<br>
{
<br>
   cout<<"This is of float type"<<endl;
<br>
}
<br>
int main()
<br>
{
<br>
   int i=4;
   <br>
   char c='a';
   <br>
   float var=4.5;
   <br>
   display(i);                                         //calls function 1
   <br>
   display(c);                                         //calls function 2
   <br>
   display(var);                                       //calls function 3
   <br>
   return 0;
   <br>
}
<br>

# Steps involved
There can be 3 cases involved:-
- A Match                -->  A match is found for the function call
- No Match               -->  No match is found for the function call
- Ambiguous Match        -->  More than one defined instance match for function call

Compiler follows following steps:-
- Search for an exact match
- A match through promotion
- A match through application of standard C++ conversion rules
- A match through application of a user-defined conversion

# Default arguments versus overloading
- With default arguments C++ expectsthat only the arguments on the right side can be defaulted. If you want to default a middle argument then all the arguments on its right
side must also be defaulted
- Default arguments may not work for all the possible combinations  of arguments whereas function may be overloaded for all possible cases of arguments
- With function overloading multiple function definitions can be executed while not for default arguments
- You save the function from the trouble of testing the default value with overloaded functions
