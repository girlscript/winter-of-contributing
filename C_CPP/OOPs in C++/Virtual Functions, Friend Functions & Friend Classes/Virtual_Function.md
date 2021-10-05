# Virtual Functions in C++

---

## Why there is need of Virtual Function ?

Since in C++ we cannot use a single pointer variable to refer to objects of base class and also derived class.
Because a base pointer even when made to contain address of derived class, always executes the function of base class only.

#### an essential requirement of polymorphism is the ability to refer to objects without any regard to their classes.

## How de we then achieve polymorphism ?

#### IT IS ACHIEVED USING WHAT IS KNOWN AS "VIRTUAL FUNCTIONS".

---

- When we use the same function name in both the base and derived classes, the function in base class is declared as **_virtual_**
  using the keyword **virtual** preeceding its normal declaration.
- When a function is made virtual, C++ determines which function to use at run time based on the type of object pointed to by the base
  pointer, rather that the type of the pointer.

---

# Code Example

```C++

#include<iostream>

class Base
{
    public:
    void display()
    {
        cout<<"Display funtion -- BASE class";
    }

    virtual void show()
    {
        cout<<"show function -- BASE class";
    }
};

class Derived : public Base
{
    public:
    void display()
    {
        cout<<"Display function -- DERIVED class";
    }
    void show()
    {
        cout<<"show function -- DERIVED CLASS";
    }
}

int main()
{
    Base B;
    Derived D;
    Base *bptr;

    bptr = &B;        // now bptr points to Base
    bptr->display();  // calls base version
    bptr->show();     // calls base version

    bptr = &D;        // bptr poinst to derived
    bptr->display();  // calls base version
    bptr->show();     // calls derived version
}

```

---

## OUTPUT

Display funtion -- BASE class

show function -- BASE class

Display funtion -- BASE class

show function -- DERIVED CLASS

- bptr -> display(); calls the base version because the function display() has not been made virtual in the Base class.

### One important point to remember

- Runtime polymorphism is achieved only when a virtual function is accessed through a pointer to the base class.
- we cant use object name with the dot operatorto call the virtual function.
