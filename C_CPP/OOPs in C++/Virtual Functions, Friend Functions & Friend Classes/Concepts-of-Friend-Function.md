# Concepts of Friend Function in C++

A friend function in C++ is basically a function that is stated outside the class but has the potential to access class members' private and protected data.
We need a friend function when a private data of a class needs to be accessed directly without using object.

## Syntax of a friend function:

To make a member function outside the class friendly to that class, we are required to declare it as a friend function.

> friend return-type function-name(parameter list)

## Features of a friend function:

- A friend function is functionally not limited to one specific class.
- A friend function can belong to other class outside the scope.
- A friend function can be invoked like any other normal function without object.

## Simple program demonstration:

```Cpp
#include <iostream>
using namespace std;

class demo
{
    int a,b;
    public:
    void getdata()
    {
    a=10;
    b=20;
    }
    
    friend int avg(demo mean); // declaration of a friend function
};
int avg(demo mean)
{
    return int(mean.a+mean.b)/2; // friend function definition
}

int main()
{
    demo result;
    result.getdata();
    cout<<"Average of 2 numbers :"<<avg(result);
}

```

## Output:

> Average of 2 numbers :15

## Friends as Bridges

Suppose you want a function to handle object of 2 different classes. Possibly the function will take the objects of 2 classes as parameters and operate on 
their private data. When situations like this arise, there's nothing like a friend function.

The following program shows how friend functions act as a bridge between two classes:

```Cpp
#include <iostream>
using namespace std;

class second; // This is needed for the friend function declaration 

class first
{
   private:
   int n;
   
   public:
   first():n(4) { }
   friend int fri_func(first,second); // Friend function
};

class second
{
    private:
    int n;
    
    public:
    second():n(6) { }
    friend int fri_func(first,second); // Friend function
};

int fri_func(first f, second s)
{
    return (f.n + s.n);
}
int main()
{
    first ff;
    second ss;
    cout<<fri_func(ff,ss)<<endl;  // call the function
}

```

## Output:

> 10

## Breaching the Walls

As we all know that friend function is contentious or disputable. At the process of developing of C++, parameters raged over the desirability of adding this feature. 
It adds flexibility to the language and doesn't keep data hiding.

### How serious is the breach of data integrity when friend functions are used ?

A friend functions must be declared in such a way within the class whose data it will access. So that a programmer who doesn't have access to the source 
code for the class that doesn't make a function into a friend. In the same, the integrity of class still stays protected. Friend functions are conceptually 
disordered and the capacity to lead difficult-to-maintain source code situation if many friends clear the boundaries between classes. For this reason a friend functions
should be used less often. 
