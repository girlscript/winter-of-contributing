# Destructor Concepts

#### What is a destructor ?
  Destructors are basically used for the **deallocation of memory when object goes out of scope** and it is used for class object and it's class members. Destructor has the same name as that of class name but it's preceded with **~**(tilde).   There can't be more than one destructor in a class.    There should be **no return type** and **no parameters**. When an object passes out of scope, the destructor is called for class object. Destructors can never be declared as **static** or **const**.
  
#### When is a destructor called automatically ?
  - When the program comes to an end.
  - When a function comes to an end.
  - When a code block with local variables ends.
  - Also when a delete operator is encountered.

#### Why is a destructor needed ?
   A destructor is basically needed for a class object, especially when that object goes out of scope or when it is explicitly deleted.
 
#### How to create a destructor ?
  ##### Syntax:
  Suppose if class name is Add, then 
  > ~Add() will deallocate the memory.
 
 #### A simple demonstration of using destructor: 
 
 ```C++
 
 class Demo
{
  public:
   Demo();  // Constructor for the class Demo
  ~Demo();  // Destructor for the class Demo
};

```

 #### A program example to help you understand the concept much better:
 
 
 ```C++
 
#include<iostream>
using namespace std;

class polygon
{
  private:
    int n;
    
  public:
   polygon();  //This is declaration for constructor.
  ~polygon(); //This is declaration for destructor.
   void getdata(int);
   void putdata();
};
polygon::polygon()
{
  n=0;
}
polygon::~polygon()
{
 cout<<"Deletion of object takes place";
}
void polygon::getdata(int num)
{
  n=num;
}
void polygon::putdata()
{
  if(n==3)
   cout<<"Triangle"<<endl;
  else if(n==5)
   cout<<"Pentagon"<<endl;
  else
   cout<<"Not a polygon"<<endl;
}
int main()
{
  polygon object;
  object.getdata(3);
  object.putdata();
}
 
```
 

 ##### Output: <br>
>  Triangle <br>
>  Deletion of object takes place
   
