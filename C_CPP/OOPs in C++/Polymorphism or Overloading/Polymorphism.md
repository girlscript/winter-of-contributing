# Polymorphism
<p> Let's discuss about the defination </p>
<p> The word Polymorphism in cpp or c means the having the many forms , if me split word polymorphism "poly" means many and "morphism" means forms. It is the ability of a object or function etc to be displayed in more than one form.

<p> Types of polymorphism </p>
1. Compile Time Polymorphism <br>
2. Run Time Polymorphism <br><br>

## --> Compile Time Polymorphism
<p> Compile Type polymorphism can be easily archieved by the Function overloading or Operator overloading.</p>

### 1. Function Overloading
<p>When there are multiple funstions with same name but with different signature or with different number of arguments then these functions are called overloaded functions.</p>

```
#include <iostream>
using namespace std;
class Function_Overloading {
  public:
  
  // 1st function with number of arguments 1 and signature of int type.
  
  void Function(int a) {   
   cout<<"\nYour Entered Integer is : "<<a;
  }
  
  // function with same name with number of arguments 1 and with different signature of float.
  
  void Function(double a) { 
      cout<<"\nYour Entered Float number is :"<<a;
  }
  
  // function with same name and with number of arguments 2 and with signature same as 1st function.
  
  void Function(int a,int b) { 
  cout<<"\n Your Entered Two integers are :"<<a<<" , "<<b;
  }
};
    
int main() {
	Function_Overloading fo;
	
	// calling the first function
	
	fo.Function(5);
	
	// calling the second function
	
	fo.Function(3.4);
	
	//calling the third Function
	
	fo.Function(5,6);
	return 0;
}
```
Output :
```
Your Entered Integer is : 5
Your Entered Float number is : 3.4
Your Entered Two integers are : 5 , 6
```

### 2. Operator Overloading
<p> If we talk about operator overloading in this we overload the operators eg. ' + ' , ' - ' etc , if take an example, we can concatenate two strings,for this task we can use the single operator ' + ' which can concatenate the two strings with two strings as as operands.</p>

```
#include <iostream>
using namespace std;
class Complex_addition {
private:
    int real,imaginary;
public:
    Complex_addition(int r=0,int i=0) {  
    real = r;   
    imaginary = i;
    }
    
    // addition between two Complex numbers and Overloading the operator
    
    Complex_addition operator + (Complex_addition &c) {
         Complex_addition com;
         com.real = real + c.real;
         com.imaginary = imaginary + c.imaginary;
         return com;
    }
    void print_complex() { 
    cout << real << " + " << imaginary<<"i"<<"\n"; 
        }
};
   
int main()
{
    Complex_addition com1(2, 3);
    Complex_addition com2(4, 5);
    Complex_addition com3 = com1 + com2;  // calling the operator overloaded function "operator+"
    com3.print_complex();
}
```
Output :
```
6 + 8i

```

## --> Run Time polymorphism
<p>This is the polymorphism which occur at run time and this can be archieved by function overriding.     </p>

### 1. Function Overridding
<p>This is occur commonly in classes when derived and parent class both have the member fuction of same name in that one of the member function of the parent class hide the derive class member function so to avoid this we use " virtual " keyword which heps us to tackle this problem.</p>

```
#include <iostream>
using namespace std;

class parent
{
public:
    virtual void display() {
    cout<< "this is our base class" <<"\n"; 
    }
   
    void show () {
    cout<< "showing the base class" <<"\n"; 
    }
};
   
class child:public parent
{
public:

//display() is already virtual function in derived class and we also declared as virtual void display() and it will be called when we call display function.
    
    void display() { 
    cout<< "this is our child class" <<"\n"; 
     }
   
    void show () {
    cout<< "showing child class" <<"\n"; 
    }
};
int main() 
{
    parent *p;
    child c;
    p= &c;
       
    //virtual function (Runtime polymorphism)
    
    p->display(); 
       
    // Non-virtual function
    
    p->show(); 
  
    return 0;
} 
```
Output :
```
this is our child class
showing the base class
```
