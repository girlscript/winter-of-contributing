# Ambiguity in Hybrid inheritance

## What is Hybrid inheritance?

Hybrid inheritance is followed when we combine more than one different type of inheritance. It is also known as virtual inheritance. The following image shows an example of hybrid inheritance. It shows a combination of hierarchical and multiple inheritances.

<p align="center"> <img src="https://user-images.githubusercontent.com/61552413/141612218-e68f2c7f-d3d4-46da-a060-bc50eba9f085.png" height="350"> </p>

```
#include<iostream>
using namespace std;
class A{
    public:
    int num_a;
};
//Hierarchical inheritance
class B : public A{
    public:
    int num_b;
};
class C : public A{
    public:
    int num_c;
};
//Multiple inheritance
class D : public B, public C{
    public:
    int num_d;
};
int main()
{
    D objD;
    //Error => objD.num_a = 10; can't access 'num_a' directly
    objD.B::num_a = 10;
    objD.C::num_a = 20;
    objD.num_b = 20;
    return 0;
}
```

## Ambiguity in hybrid inheritance

Here, class B and class C both inherit class A via hierarchical inheritance. Both class B and class C will have a separate single copy of class A with them. But class D will contain two copies of class A and would hence lead to ambiguity in data. Therefore, when accessing data of class A from an object of class D, we need to specify the path through which that data would be accessed, i.e. either via class B or via class C.

## How to resolve this ambiguity?

### 1. By using scope resolution operator ( : : )

The above example uses a scope resolution operator to differentiate between the different values of 'num_a'.

### 2. By using virtual base class

A virtual base class is used in virtual inheritance to avoid multiple occurrences of a particular class in a hierarchy. Here, if class A is inherited virtually then, only one copy of its data would be inherited in classes B and C. Hence, when the virtual base class is used, only one copy will be shared. This can be demonstrated in the below example :

```
#include<iostream>
using namespace std;
class A{
    public:
    int num_a;
    A() //constructor
    {
        num_a = 10;
    }
};
//using class A as a virtual base class
class B : virtual public A{
    public:
    int num_b;
};
//using class A as a virtual base class
class C : virtual public A{
    public:
    int num_c;
};
class D : public B, public C{
    public:
    int num_d;
};
int main()
{
    D objD;
    cout<<"The value of 'num_a' from class A : "<<objD.num_a;
    return 0;
}
```

Output:

```
The value of 'num_a' from class A : 10
```
