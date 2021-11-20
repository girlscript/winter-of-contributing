# Abstract Classes in Virtual Functions  

A class that contains at least one pure virtual function is known as abstract class. The pure virtual function in a class that has no definition. An object of an abstract class cannot be created. An abstract class is a design concept only to act as a base class upon which other derived classes are set up. There can be any number of abstract classes in a class hierarchy.  

Here's an exmaple below explaining the same:  
```C++
#include<iostream>
using namespace std;
class A    //abstract
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
   A *aptr;
  // A a1;  //error because an object of abstract base class cannot be created
   B b1;
   aptr = &b1;
   aptr->display();
   return 0;
}
```  

### *Output*  
> Girlscript  
