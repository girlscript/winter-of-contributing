# Virtual Destructor  

Destructors are called in the reverse order in the class hierarchy i.e. reverse to the order in which their counterpart constructors are invoked. A destructor of a base class is not declared virtual and a base class pointer containing the address of a derived class object is obtained dynamically using a new operator. The concept of virtual destructors come into the picture when the objects in the derived class are created using the new operator.  

```C++
int main()
{
   A *aptr;
   aptr = new B;
   // body
   delete aptr;
}
```  

As the pointer is declared for a base class, while deleting the base pointer, the base class destructor is called first and then the base class destructor. But that is not happening in the above example leading to memory leaks. Hence to avoid this, destructor has to be declared as virtual in the base class. Here's an example below explaining the same:  

```C++
#include<iostream>
using namespace std;
class B1
{
   public:
   B1()
   {
      cout << "Base class constructor" << endl;
   }
   virtual ~B1()    //virtual destructor
   {
      cout << "Base class destructor" << endl;
   }
};
class D1 : class B1
{
   public:
   D1()
   {
      cout << "Derived class constructor" << endl;
   }
   ~D1()
   {
      cout << "Derived class destructor" << endl;
   }
};
int main()
{
   B1 *bptr;
   bptr = new D1;
   delete bptr;
   return 0;
}
```  

### *Output*  
> Base class constructor  
> Derived class constructor  
> Derived class destructor  
> Base class constructor  
