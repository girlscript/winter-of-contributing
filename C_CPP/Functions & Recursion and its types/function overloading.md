## FUNCTION OVERLOADING

### DEFINATION- A function name having several definitions that are differentiable by the number or types of their arguments is known as function overloading.
## Why we need it? How is it useful?
<p>Function overloading not just implements polymorphism but also reduces number of comparisons in a program and hence makes the program faster.</p>

## How to declare or implement function overloading?
<p>The key to function overloading is a function’s argument list which is also known as the function signature.
There might be a situation where a function has same name and same number of arguments then we must keep in mind that c++ lets you overload a function name only if the function has same name but different signatures.
Example-
Void area (int l, int b);
Void area (int r);
Note-Also if the function has same name and different signature with different return types are allowed.</p>

## How to call an overloaded function?
<p> Overloaded functions are called just like other function, the only thing that works here that what number of arguments are passed according to which the function is called that is best matched.
While calling a function there are 3 possibilities:
1.	Match
2.	No match
3.	Ambiguous match
So in order to deal with this the compiler follows the following steps to find the best match:
1.search for an exact match by comparing the type of the argument with the defined instance type.
2.a match through promotion
3.a match through application of standard c++ conversion rules.
4. a match through application of a user defined conversion.</p>

## What are the advantages of function overloading?
<p>By overloading function we tend to save compiler from the trouble of pushing default argument values on the function call stack, hence the function does not require to test default values.
Also a class can also have overloaded constructors. A destructor function can’t be overloaded.</p>

## Example of function overloading with help of a program on calculating simple interest with default arguments.

#include<iostream> <br>
using namespace std; <br>
void amt(float pr,int t=2,float r=0.08); <br>
void amt(float pr,int t,float r) <br>
{<br>
   cout<<"\n principal amt: "<<pr; <br>
    cout<<"\n time : "<<t<<"years"; <br>
    cout<<"\n rate : "<<r; <br>
    cout<<"\n Simple interest : "<<(pr*t*r)<<"\n"; <br>
    
} <br>
int main() <br>
{
    system("cls"); <br>
    cout<<"case1"; <br>
    amt(1000); <br>
    cout<<"case2"; <br>
    amt(1000,3); <br>
    cout<<"case3"; <br>
    amt(1000,3,0.11); <br>
   cout<<"case4"; <br>
    amt(1000,0.12); <br>
    return 0; <br>
} <br>
  
###Output of the program:
 
 case1<br>
 principal amt: 1000 <br>
 time : 2years <br>
 rate : 0.08 <br>
 Simple interest : 160 <br>
case2 <br>
 principal amt: 1000 <br>
 time : 3years <br>
 rate : 0.08 <br>
 Simple interest : 240 <br>
case3 <br>
 principal amt: 1000 <br>
 time : 3years <br>
 rate : 0.11 <br>
 Simple interest : 330 <br>
case4 <br>
 principal amt: 1000 <br>
 time : 0years <br>
 rate : 0.08 <br>
 Simple interest : 0 <br>


