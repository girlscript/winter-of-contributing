# **Hierarchical Inheritance In C++**
## What is Inheritance?
In real life, we can define "inheritance" as the traits or qualities that we acquire from our parents. For example, skin colour, hair colour, swimming, singing etc. are some traits that we inherit genetically from our parents.

In C++, inheritance is one of the most important concepts in object-oriented programming. A class can inherit attributes and methods of another class. Thus, we can define a class in terms of another existing class.

 __Base Class :__ The class whose properties are inherited is called *base class* or *parent class* .

__Derived Class :__  The class that inherits the properties of the **base class** is called *derived class* or *child class* or *subclass*.

### *Syntax*
```C++
class derived_class_name : visibility-mode base_class_name  
{  
     // body of the derived class.  
};
``` 
Example:
```c++
// Base class
class Mother {
  public:
  int age,height;
  void sing();
  void cook();
}; 
// Derived class
class Daughter: public Mother {
  public:
  void dance();
};
```
### Why Inheritance?
In c++ inheritance, we can reuse a class and add additional attributes and methods to it. Thus, it is helpful in **code reusability** and saves time as well as memory.

### Types of Inheritance in C++

* **Single Inheritance**
* **Multiple Inheritance**
* **Multilevel Inheritance**
* **Hierarchical Inheritance**
* **Hybrid Inheritance**

Here, hierarchical inheritance will be discussed.
## Hierarchical Inheritance
When several derived classes inherit from a single base class, it is known as *hierarchical inheritance*, i.e., more than one class is inherited from a parent class.

![alt text](https://simplesnippets.tech/wp-content/uploads/2018/03/Hierarchical-Inheritance-in-C.png)

**Note :** A single base class can have multiple derived classes, and other child classes can further inherit these derived classes, forming a hierarchy of classes.  

![alt text](https://www.simplilearn.com/ice9/free_resources_article_thumb/Hierarchical_Inheritance_In_C_P_P_Chart.png)

Lets understand the above statements through an example.
Earth has seven continents. Each continent is further divided into countries which are further divided into states and so on. Here, Earth is the base class which is inherited by seven subclasses(continents). And these subclasses are further inherited by other derived classes, forming a hierarchy.

### *syntax*
```c++
class base_class

{
    //data members
    //member functions
};

class derived_class1 : visibility_mode base_class

{

    //data members
    //member functions

};

class derived_class2 : visibility_mode base_class

{

    //data members
    //member functions
};
```    
## **Visibility Modes in Inheritance**
Visibity modes, also known as *access specifiers*, controls how the members of a class can be accessed.

Basically, we use 3 access specifiers: 
* **Public:** public members are accessible from outside the class, i.e. , visibility will be open to all.
* **Private:** Private members cannot be directly accesed from outside the class, i.e. ,  visibility will not be open to any other class.
* **Protected:** protected members cannot be accessed from outside the class, however, they can be accessed in inherited classes, i.e. , visibility will be only open to derived classes.

Lets understand the implementation of visibility modes through this code.

```c++
#include <bits/stdc++.h>
using namespace std;

// Base class
class  A{
public:
	int a;

protected:
	int b;

private:
	int c;
};

// Derived class
class B : public A {
};

int main()
{
	B obj;

	// a is public
	// so its value will be printed
	cout << obj.a << endl;

	// b is protected
	// so it will give visibility error
	cout << obj.b << endl;

	// c is not accessible from B
	// so it will give visibility error
	cout << obj.c << endl;
};
```

**Note:** 
* By default, visibility mode remains *private*.
* Private members are never inherited.

### *Example of hierarchical inheritance*
```c++
#include <iostream>
using namespace std;
 
// base class
class Bird
{
  public:
    void intro()
    {
      cout << "I am a bird." << endl;
    }
};
 
 
// first sub class
class Duck: public Bird
{
  public:
    void quack()
    {
      cout << "I am a duck...quack..quack." << endl;
    }
};
 
// second sub class
class Cuckoo: public Bird
{
     public:
    void koo()
    {
      cout << "I am a cuckoo...koo..koo." << endl;
    }
};
 
// main function
int main()
{  
    // creating object of sub classes 
    Duck b1;
    Cuckoo b2;

    b1.intro();
    b1.quack();

    b2.intro();
    b2.koo();

    return 0;
}
```
**OUTPUT:**

I am a bird.

I am a duck...quack..quack.

I am a bird.

I am a cuckoo...koo..koo.

