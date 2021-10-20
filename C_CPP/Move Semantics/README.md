#  Move Semantics
To understand the move semantics first let’s look at copy semantics. In general, all classes in C++ can be copied using one of special methods:

* Copy constructor
T t1;

T t2(t1);

* Copy assignment operator
T t1, t2;

t2 = t1;

Similarly C++11 defined another two methods in order to allow moving objects instead of copying:

* Move constructor

T t1;

T t2(std::move(t1));

* Move assignment operator
T t1, t2;

t2 = std::move(t1);

The copy constructors in C++ work with the l-value references and copy semantics(copy semantics means copying the actual data of the object to another object rather than making another object to point the already existing object in the heap). While move constructors work on the r-value references and move semantics(move semantics involves pointing to the already existing object in the memory).

    An rvalue is an expression that does not have any memory address, and an lvalue is an expression with a memory address.

rvalue references enable us to distinguish an lvalue from an rvalue.

The C++11 Standard introduces rvalue references which bind only to rvalues. They are declared with two ampersands rather than one ampersand:

    int&& rvalue_ref = 99;

Note that only an lvalue can be assigned to a normal reference, so if we do the following:
  
    int& ref = 9;   

we get an error: "invalid initialization of non-const reference of type int& from an rvalue of type int

We can only do:
    
    int nine = 9;
    int& ref = nine;


# Sample 

// t1.cpp

#include <iostream>

#include <string>

using namespace std;

class A

{

public:

    // default constructor
    A() : s("default") {}

    // copy constructor
    A(const A& o) : s(o.s) { cout << "move failed!\n";}

    // move constructor
    A(A&& o) : s(move(o.s)) {}

    string printObj() { return s; }
private:

    string s;
};

A temp(A a)

 {

    return a;
 }

int main()

{

    // move-construct from rvalue temporary
    A a1 = temp(A());        

    // move-construct from lvalue 
    cout << "before move() : a1 = " << a1.printObj() << endl; 
    A a2 = move(a1);          
    cout << "after move() : a1 = " << a1.printObj() << endl;
    cout << "after move() : a2 = " << a2.printObj() << endl;

    return 0;
}

# Output 

before move() : a1 = default

after move() : a1 = 

after move() : a2 = default

In the code, we constructed an object of class A (a1) using a returned object (rvalue) from the temp() function. Then, we constructed another A object a2 from a1 using move().