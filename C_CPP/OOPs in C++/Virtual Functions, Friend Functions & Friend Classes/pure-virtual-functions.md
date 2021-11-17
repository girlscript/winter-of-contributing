# Pure Virtual Functions  

A virtual function that us declared but not defined in a base is referred to as a pure virtual function. The general syntax for declaring a pure virtual function is as follows:  
```C++
<return_type> virtual <function_name>() = 0;
```
or  
```C++
virtual <return_type> <function_name>() = 0;
```  

where,  
`virtual` -> keyword  
`function_name` -> The name of the function that is made a purely virtual  
`return_type` -> The type of the data the function returns  

Also, the function is initialized to zero. Here the assignment operator `=` has nothing to do with the assignment i.e. the value zero is not assiged to anything. It is used to simply inform the compiler that, the functions will be pure and does not have any body. Here's an example below explaining the same:  
```C++
#include<iostream> 
using namespace std;
class A
{
   public:
   void virtual display() = 0;  //pure virtual function
};
class B : public A
{
   public:
   void display()
   {
      cout << "Girlscript" << endl;
   }
};
int main()
{
   A *aptr;   //Error (explained later)
   A a1;
   B b1;
   aptr = &b1;
   aptr->display();
   return 0;
}
```  

### *Output*  
> Girlscript  

Normally, the virtual functions are declared in a base class and redefined in the derived class. The base class version of the function is not always used to perform the specific job or task, i.e. in case where a base class may be abstract with no possibility of declaration of an object, there is no sense in defining the virtual function in a base class. The base class function should just act as a placeholder to be overridden by the derived class versions. And it is not involved by itself directly. To be more precise, a class having pure vitual function cannot be used to instantiate objects of its own. Hence the error in the above program.  

"A virtual function which gives an interface for the derived class functions to override but must not be invoked itself through virtual mechanism is called a pure virtual function."  
