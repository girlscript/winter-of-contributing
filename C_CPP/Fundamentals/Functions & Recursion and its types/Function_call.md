# **Function call in c++**
### Video Explanation :
[![Function Call](https://user-images.githubusercontent.com/63473496/143050247-9cb27cca-119f-4f24-863f-fef224d7eed3.png)](https://drive.google.com/drive/folders/15JPWZV1X-8S4TQu4jY9FBXZHCtQtkr5W?usp=sharing)

## What is a function call in c++?
 The word call itself indicates calling or approaching, in a function call the program calls or approach a function to hand it over to the management. The function which is called is defined with a certain task which it executes on being called and then returns the control to the main program.
Function call :The word call itself indicates calling or approaching, in a function call the program calls or approach a function to hand it over to the management. The function which is called is defined with a certain task which it executes on being called and then returns the control to the main program.

 _Syntax of the function call statement :_

 ` Function_name(variable1,variable2,..); `
 
> Points to remember before function call:
1. The name & number also the type of the argument in the function call should be the same as the one given in the function declaration.
2. The extra argument would be discarded if the parameters passed to the function are more than specified to accept.
3. The unmatched arguments would be initialized to a garbage value if unknowingly the parameters passed to a function are less than specified to accept.
4. One has to make sure that arguments are not placed in the wrong order to avoid logical errors.
5. Commas should be used to separate the parameter list.
---
## Types of function call:
There are three ways to *call a function: Call by value, Call by reference, Call by address.*
### CALL BY VALUE:
In this function call if the called function is assumed to modify the value of the parameters passed to it then the changes would be reflected only in the called function. Whereas the calling function would not face any change in the value of the variable, because the changes were made on the copy of the variable and not the actual variable.
> *Code explaining the concept of call by value*
```cpp
#include<iostream>
using namespace std;
void Sum(int NuM);
int main()
{
int NuMber = 20;
cout<<"value before function call ="<<NuMber<<endl;
Sum(NuMber);
cout<<"Value after function call ="<<NuMber<<endl;
}
void Sum(int NuM)
{
NuM=NuM+100;
cout<<"Value of num in called function="<<NuM<<endl;
}
```
*Output :*
![Output of call-by-value](https://user-images.githubusercontent.com/84911349/137097870-b3f8d00d-e7c3-4163-911a-64bffe6b3759.png)
 ## _Advantages & Disadvantages of Call-by-Value_ :
 The advantage of using Call-by-Value to pass an argument to a function is that the argument could be variables and expressions but the disadvantage is that additional storage is used in copying data also on calling the function multiple times it takes up a lot of time.
 --- 
## Call-by-Address :
This method of function call copies the address of an argument into the formal parameter, which is then used by the function to access the actual argument. This means that the changes made to the value stored at a particular address will be reflected in the calling function too.
> *code for the call by address*
``` cpp
#include<iostream>
using namespace std;
void add(int *n);
int main()
{
int num=2;
cout<<"The value of num before calling the function ="<<num<<endl;
add(&num);
cout<<"The value of num after calling the function ="<<num<<endl;
return 0;
}
void add(int *n)
{
*n=*n+10;
cout<<"The value of num is the called function = "<<*n<<endl;
}
```
*Output :*
![call by address](https://user-images.githubusercontent.com/84911349/137098232-34f6520a-b4d3-439b-8783-dcd67c59afa8.png)
## _Advantages and disadvantages of call-by address_ :
Greater time and efficiency are provided in the call-by address as the arguments are not copied into new variables. The change done in the function to the value of the argument is reflected in the caller.
---
## Call-by-reference :
In call-by-reference the reference variables are declared as references instead of normal variables . So, any changes made by function to the arguments it received are visible by calling the program.
> *code of call-by-reference*
```cpp
#include<iostream>
using namespace std;
void add(int &n);
int main()
{
int num=10;
cout<<"The value of num before calling the function ="<<num<<endl;
add(num);
cout<<"The value of num after calling the function = " <<num<<endl;
}
void add(int &n)
{
 n=n+10;
cout<<"The value of num in the called function ="<<n<<endl;
}
```
*Output :*
![call by reference](https://user-images.githubusercontent.com/84911349/137098429-a4b91a0a-c4ba-42d7-8ea6-57e5bc354161.png)
 
 _We now, can clearly understand the implementation of function call in c++._
 
