# Hybrid Inheritance

<br />
<br />

<div align ="center">
<img src = "https://user-images.githubusercontent.com/74541810/134392010-50b1adb0-c216-43e8-8761-4d28de64b813.png">
</div>

<br />
Hybrid Inheritance is a process where different types of Inheritance are put together in one program design (or) in simple words, in Hybrid Inheritance, a class is derived from combination of different types of Inheritance.
<br />

<br />
The image below might help you to better understance how Hybrid Inheritance works. The image shows Hybrid Inheritance with the sum of Single and Multiple Inheritance done together.
<br />
<br />


<br />
<div align = "center">
<img src = "https://s3.ap-south-1.amazonaws.com/upgrad.prod.blog/blog/wp-content/uploads/2021/04/27111403/pasted-image-0-17.png">
</div>
<br />
<br />

## _Syntax_

```C++
class grandfather
{
  //body;
};
class father : public grandfather
{
  //body;
};
class mother
{
  //body;
};
class child : public father, public mother
{
  //body;
};

```
<br />
<br />

## _Example_

```C++
#include<iostream>
using namespace std;
class girlscript
{
  public:
        void fun1()
        {
          cout<<"I am using Girlscript Repository\n";
        }
};
class cpp : public girlscript
{
  public:
        void fun2()
        {
          cout<<"I am inside C_CPP directory now\n";
        }
};
class inheritance
{
  public:
        void fun3()
        {
          cout<<"I came in Inheritance folder\n";
        }
};
class hybrid : public cpp, public inheritance
{
  public:
        void fun4()
        {
          cout<<"I am learning Hybrid Inheritance in C++";
        }
};
int main()
{
  hybrid h;
  h.fun1();
  h.fun2();
  h.fun3();
  h.fun4();
  
  return 0;
}
```
<br />
<br />

## _Output_


> I am using Girlscript Repository  
> I am inside C_CPP directory now  
> I came in Inhertance folder  
> I am learning Hybrid Inheritance in C++


<br />


---
