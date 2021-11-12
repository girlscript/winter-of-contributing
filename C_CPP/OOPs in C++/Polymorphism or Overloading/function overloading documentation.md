# FUNCTION OVERLOADING

- **Definition** : A function name having several definitions that are differentiable by the number or types of their arguments is known as function overloading.
### Why we need it? How is it useful?

Function overloading not just implements polymorphism but also reduces number of comparisons in a program and hence makes the program faster.

### How to declare or implement function overloading?

The key to function overloading is a function’s argument list which is also known as the function signature.
There might be a situation where a function has same name and same number of arguments then we must keep in mind that c++ lets you overload a function name only if the function has same name but different signatures.

Example-

Void area (int l, int b);

Void area (int r);
   
Note-Also if the function has same name and different signature with different return types are allowed.

### How to call an overloaded function?

Overloaded functions are called just like other function, the only thing that works here that what number of arguments are passed according to which the function is called that is best matched.
   
While calling a function there are 3 possibilities:
   
1.	Match 
   
2.	No match
   
3.	Ambiguous match 
  
So in order to deal with this the compiler follows the following steps to find the best match:
  
a) Search for an exact match by comparing the type of the argument with the defined instance type.
   
b) A match through promotion.
   
c) A match through application of standard c++ conversion rules.
   
d) A match through application of a user defined conversion.

### What are the advantages of function overloading?

By overloading function we tend to save compiler from the trouble of pushing default argument values on the function call stack, hence the function does not require to test default values.
Also a class can also have overloaded constructors. A destructor function can’t be overloaded.

### Example of function overloading with help of a program on calculating simple interest with default arguments.
```c++
#include<iostream> 
using namespace std; 
void amt(float pr,int t=2,float r=0.08); //prototype
void amt(float pr,int t,float r)//overload function
{
   cout<<"\n principal amt: "<<pr; 
    cout<<"\n time : "<<t<<"years"; 
    cout<<"\n rate : "<<r; 
    cout<<"\n Simple interest : "<<(pr*t*r)<<"\n"; 
}
int main() 
{
    system("cls"); 
    cout<<"case1"; 
    amt(1000); //only one argument is passed
    cout<<"case2"; 
    amt(1000,3); //two arguments are passed
    cout<<"case3"; 
    amt(1000,3,0.11); //three arguments are passed
   cout<<"case4";
    amt(1000,0.12); //two arguments passed with t=2 as default
    return 0; 
} 
``` 
### Output of the program:
```
 case1
 principal amt: 1000 
 time : 2years 
 rate : 0.08 
 Simple interest : 160 
case2 
 principal amt: 1000 
 time : 3years 
 rate : 0.08 
 Simple interest : 240 
case3 
 principal amt: 1000 
 time : 3years 
 rate : 0.11 
 Simple interest : 330 
case4 
 principal amt: 1000 
 time : 0years 
 rate : 0.08 
 Simple interest : 0 
 ```

### Before heading with Function overloading we must know the restriction:

The function overloading restrictions involve the following rules:

1.Functions that are a set of overloaded functions must have different argument lists.

2.overloading functions using same arguments in respect to the return type is an error.

3.Member function cant be overloaded incase of one being static and another non static.

4.Typedef doesn't define new type but introduces the synonyms of existing type.

### Conclusion

After knowing the function overloading benefits  we must bear in find that one should not go for function overloading at cost of program understability.
Only function performing same task with a set of different argument lists,should be overloaded.




