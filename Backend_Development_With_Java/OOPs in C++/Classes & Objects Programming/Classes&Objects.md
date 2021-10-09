# Object Oriented Programming (OOPs)

## Classes in CPP

A class is a user-defined type. It is the building block that leads to Object oriented programming. A class has it's own data members & functions. A class is like a blueprint for an object.
For example: Consider the class of Dogs. There are different type of dogs but all of them will have some common properties like breed, fur color, eye color etc. Hence Dogs is the class and breed, fur color, eye color etc. are properties.

A class definition starts with the keyword class followed by the class name; and the class body, enclosed by a pair of curly braces followed by a semicolon.

<b>Syntax</b>
```cpp
class Class_Name{
    public:   //Access specifier: can be public,private or protected
    int data;   //variable to use
    void print_data(){}   //Member functions
};
//class is keyword
//Class_Name is the user defined name of the class
```
<br>

## Objects in CPP
An Object is an instance of a class. When a class is made no memory is allocated to the class, only object specification is defined. To use the data and functions defined in the class, we need to create objects.

<b>Syntax</b>
```cpp
className ObjectName;
```
Using the dot('.') operator we can access data members and member functions of the class.
<br>
For example if we have name of the object as <i>demo</i> and want to access member function <i>printNumber()</i> then the code will be <i>demo.printNumber()</i>

<br>

## Accessing Data Members
<b>Accessing Public Data Member:</b> We can access public data member directly by the object.
<br>
Example: if there is a public data member <i>int a</i> and the object name is <i>obj</i> we can access the data member simply by writing <i>obj.a</i>
```cpp
//accessing public data members

#include <bits/stdc++.h>
using namespace std;

class gwocCpp{
    public: // the public access specifier will make the data members under it public and hence can be directly accessed by the object
        int a;
};

int main(){
    gwocCpp obj;
    cout<<obj.a;
    return 0;
}
```
<b>Accesing Private Data Members:</b> To access private data members we need to make public function and access the private data member using it.
<br>
Example:if there is a private data member <i>int a</i> & a public member function <i>void printA()</i> that will help us print the value of a. Let the object name be <i>obj</i> we can access the private data member simply by writing <i>obj.printA</i>
```cpp
//accessing private data members

#include <bits/stdc++.h>
using namespace std;

class gwocCpp{
    int a;
    public: // the public access specifier will make the data members under it public and hence can be directly accessed by the object
        void printA(){
            cout<<a;
        }
};

int main(){
    gwocCpp obj;
    obj.printA();
    return 0;
}
```
<br>

## Member Functions in Class
There are 2 ways to define a member function in a class:
- Inside class function
- Outside class function

<b>Inside class function:</b>
```cpp
//defining a function inside a class

#include <bits/stdc++.h>
using namespace std;

class gwocCpp{
    public:
    void insideFunction(){
        cout<<"Hello, I am an Inside function of class gwocCpp";
    }
};

int main(){
    gwocCpp obj;
    obj.insideFunction();
    return 0;
}
```
<b>Outside class function:</b> To define a function outside the class we need to use scope resolution operator (::) along with class name and function name.
<br>
<b>Syntax</b>
```cpp
//syntax to define a function outside a class

#include <bits/stdc++.h>
using namespace std;

class class_Name{
    
};

void class_Name::Outside_Function(){
    cout<<"Outside function";
}

```
<b>Example</b>
```cpp
//Defining a function outside a class

#include <bits/stdc++.h>
using namespace std;

class gwocCpp{
    public:
    int a=10;
    void outsideFunction();
};

void gwocCpp::outsideFunction(){
    cout<<"Hello, I am an outside function of class gwocCpp";
}

int main(){
    gwocCpp obj;
    obj.outsideFunction();
    return 0;
}

```



