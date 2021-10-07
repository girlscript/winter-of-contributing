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
#### Output:

> In Derived class 1 <br>
> In Derived class 2


## Late Binding

Its also referred to as **Run Time Polymorphism**.

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
class Child : public Parent
{
    public:
     void display()
     {
         cout<<"In Derived class."<<endl;
     }
};


int main()
{
    Child c;
    Parent *p;
    p=&c;
    p->display();  // Late Binding
}


```
#### Output:
> In Derived class.


In the above program, during runtime, when it is known which the class points(here it is p) that particular version of display() will be called **Late/Dynamic Binding**. 


## Abstract Classes and Pure Virtual Functions

A **Pure Virtual Function** is basically a virtual function which doesn't need any function definition and it's enough if we just declare it and assign it with 0(zero).
<br>
An **Abstract Class** is nothing but a class which has atleast one pure virtual function along with the other normal functions(if any). An abstract class can't be instantiated instead pointers can be created. 

#### Example Code:

```C++
#include <iostream>
using namespace std;

class Parent
{
    public:
     virtual void display() = 0;   // This pure virtual function declaration.
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
    // We can't create object from abstract class.
    Parent *array[2];
    Child1 c1;
    Child2 c2;
    array[0]=&c1;    // Putting address of c1 inside array
    array[1]=&c2;    // Putting address of c2 inside array
    array[0]->display();
    array[1]->display();
}

```

#### Output:

> In Derived class 1  <br>
> In Derived class 2
