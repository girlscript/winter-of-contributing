# Introduction to Friend Class in C++

In this, we will see Introduction to friend function in C++

# Overview

- **What is need of friend Class**
- **Definition of friend class**
- **Points to be remember about friend class** 
- **Syntax of friend class**
- **Examples of friend class**



# What is need of friend Class
It is sometimes useful/required to access private or protected members of a class by some other class.

In this case we will make a friend class of the base class to access private and protected members of that class.

For example if we have a *class Graph* which have private data members *x-coordinate* and *y-coordinate*. Now, we want to access x-coordinate and y-coordinate of class graph in *class equation* to do so , we need to make class equation friend of class graph .


# Definition of friend class
A friend class can access private and protected members of a class in which it is defined as friend, it is useful if we want to access private or protected members of a class in some other class.

# Points to be remember about friend class
- If ```class A``` is a friend of ```class B``` then, ```class B``` is not automatically a friend of ```class A```. Hence, **friendships are not Symmetric**
- If ```class A``` is a friend of ```class B``` and ```class B```is a friend of ```class C``` then , ```class A``` is not automatically a friend of ```class C```. Hence, **friendships are not Transitive**.
- if we have a ```class Base``` as friend of ```class X```, then ```class derived``` that is a derived class of base class, then ```class derived``` is not automatically a friend of ```class X```. Hence, **friendships are not inherited**.


# Syntax of friend class

Syntax
```cpp
#include <iostream>
using namespace std;

class girlscript{
    int a;
    
    // class gwoc is now a friend of class girlscript and can access private data member int a of class girlscript. 
    friend class gwoc;
};
```

In this example we are making ```class gwoc``` as the friend class of ```class girlscript```, so that ```class gwoc``` can acccess private data member ie int a of ```class girlscript```.


# Examples 
**Example 1**

Here we are making a friend class and printing out the value of private member from the base class
```cpp
#include <iostream>
using namespace std;

class girlscript{
    int a;

    public:
    girlscript(){
        a=0;
    }
    friend class gwoc;
};

class gwoc{
    int b;

    public:
    void showA(girlscript& gs){
        cout<<"A::a="<< gs.a;
    }
};

int main(){
    girlscript gs;
    gwoc g;
    g.showA(gs);
    return 0;
}
```
Output
```cpp
A::a=0
```

**Example 2**

Here we are making a friend class and changing the value of private member of base class in the friend class.
```cpp
#include <iostream>
using namespace std;

class girlscript{
    int a;

    public:
    girlscript(){
        a=0;
        cout<<"The actual value is "<<a<<endl;
    }
    friend class gwoc;
};

class gwoc{
    int b;

    public:
    void changeA(girlscript& gs){
        gs.a = 5;
        cout<<"New value is "<<gs.a<<endl;
    }
};

int main(){
    girlscript gs;
    gwoc g;
    g.changeA(gs);
    return 0;
}
```
Output
```cpp
The actual value is 0
New value is 5
```