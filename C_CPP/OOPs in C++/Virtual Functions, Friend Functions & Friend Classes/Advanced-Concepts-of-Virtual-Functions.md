# Advanced Concepts of Virtual Functions

Virtual means nothing in reality but in appearence. Why is a virtual function needed ? When you have so much objects of different classes but you may have a desire to place them all in a particular array and carry out the specific operation on them using the same function call. 

Virtual function is a member function in base/parent class that is expected to override the functions in the derived/child class. Mostly, this is the case when a reference/pointer of child class points/refers to derived class object.

## Program demonstration to differentiate Normal and Virtual Member Functions:

### Normal Member Functions Accessed with Pointers

```C++
#include <iostream>
using namespace std;

class Parent
{
    public:
     void display()
     {
         cout<<"In Base class."<<endl;
     }
};
class Child1 : public Parent
{
    public:
     void display()
     {
         cout<<"In Derived class 1"<<endl;
     }
};
class Child2 : public Parent
{
    public:
     void display()
     {
         cout<<"In Derived class 2"<<endl;
     }
};

int main()
{
    Child1 c1;
    Child2 c2;
    Parent *p;
    p=&c1;
    p->display();
    
    p=&c2;
    p->display();
}

```
#### Output:

> In Base class. <br>
> In Base class.


### Virtual Member Functions Accessed with Pointers

```C++
#include <iostream>
using namespace std;

class Parent
{
    public:
     virtual void display()
     {
         cout<<"In Base class."<<endl;
     }
};
class Child1 : public Parent
{
    public:
     void display()
     {
         cout<<"In Derived class 1"<<endl;
     }
};
class Child2 : public Parent
{
    public:
     void display()
     {
         cout<<"In Derived class 2"<<endl;
     }
};

int main()
{
    Child1 c1;
    Child2 c2;
    Parent *p;
    p=&c1;
    p->display();
    
    p=&c2;
    p->display();
}


```
### Output:

> In Derived class 1 <br>
> In Derived class 2

