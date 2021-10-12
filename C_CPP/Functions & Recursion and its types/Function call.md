# **Function call in c++**

## What is a function call in c++?

## Function call : the word call itself indicates calling or approaching, in a function call the program calls or approach a function to hand it over to the management. The function which is called is defined with a certain task which it executes on being called and then returns the control to the main program.

 ### **Syntax of the function call statement :**
 
 ` Function_name(variable1,variable2,..); `

> Points to remember before function call:

1. The name & number also the type of the argument in the function call should be the same as the one given in the function declaration.
2. The extra argument would be discarded if the parameters passed to the function are more than specified to accept.
3. The unmatched arguments would be initialized to a garbage value if unknowingly the parameters passed to a function are less than specified to accept.
4. One has to make sure that arguments are not placed in the wrong order to avoid logical errors.
5. Commas should be used to separate the parameter list.

---
## **: Types of a function call:**

### There are three ways to *call a function: Call by value, Call by reference, Call by address.*

## CALL BY VALUE:

### In this function call if the called function is assumed to modify the value of the parameters passed to it then the changes would be reflected only in the called function. Whereas the calling function would not face any change in the value of the variable, because the changes were made on the copy of the variable and not the actual variable.

> *-----Code explaining the concept of call by value ---------*
```
#include<stdio.h>
Using namespace std;
Void Sum(int NuM);
Int main()
{
Int NuMber = 42;
Cout<<”value before function call =“<<NuMber;
Sum(NuMber);
Cout<<”Value after function call =”<<NuMber;
}
Void Sum(int NuM)
{
NuM=NuM+100;
Cout<<”number value in called function=”<<NuM;
}
```

*Output :*
- Value before function call =42
- number value in called function =200
- Value after function call =42


 ## Advantages & Disadvantages of Call-by-Value :
 ### The advantage of using Call-by-Value to pass an argument to a function is that the argument could be variables and expressions but the disadvantage is that additional storage is used in copying data also on calling the function multiple times it takes up a lot of time.
 --- 
 
## Call-by-Address :

### This method of function call copies the address of an argument into the formal parameter, which is then used by the function to access the actual argument. This means that the changes made to the value stored at a particular address will be reflected in the calling function too.

> *-----code for the call by address------*
```
Using namespace std;
#include<iostream>
Void add(int *n)
Int main()
{
Int num=2;
Cout<<”the value of num before calling the function =”<<num;
Add(&num);
Cout<<”the value of num after calling the function =”<<num;
Return 0;
}
Void add(int *n)
{
*n=*n+10;
Cout<<” the value of num is the called function = ”<<*n;
}
```
*Output :*
- The value of num before calling the function =2
- The value of num in the calling function = 12
- The value of num after calling the function = 12

## Advantages and disadvantages of call-by address :

### Greater time and efficiency are provided in the call-by address as the arguments are not copied into new variables. The change done in the function to the value of the argument is reflected in the caller.

---

## Call-by-reference :

### In call-by-reference the reference variables are declared as references instead of normal variables so, any changes made by function to the arguments it received are visible by calling the program.
 
> *-----code of call-by-reference------*
```
Using namespace std;
#include<iostream>
Void add((int &n);
Int main()
{
Int num=2;
Cout<<”The value of num before calling the function =”num;
Add(num);
Cout<<” the value of num after calling the function =” <<num;
}
Void add(int &n)
{
 N=n+10;
Cout<<” the value of num in the called function =”<<n;
}
```
*Output :*
- The value of num before calling the function =2
- The value of num in the called function =12
- The value of num after calling the function = 12
 
 ### *We now, can clearly understand the implementation of function call in c++.*
