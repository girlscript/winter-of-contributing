# Single Inheritance in C++

### **Concept of Inheritance**
 Inheritance is the process by which objects of one class acquire the properties of objects of another class.
### **Types of Inheritances in C++**
C++ supports 5 types of Inheritances

- Single Inheritance
- Multiple Inheritance
- Hirerichal Inheritance
- Multilevel Inheritance
- Hybrid Inheritance

In this Documentation we only learn about Single Inheritance in C++

### **Single Inheritance**
In Single Inheritance a class is derived from only one Base class

![Single Inheritance Image](https://www.softwaretestinghelp.com/wp-content/qa/uploads/2019/06/Single-inheritance.png)

### **Change of Access Modifiers in Single Inheritance**

**<u>Private Inheritance (Private members is not Inheritable)</u>**

| Base           |     Derived        |
|----------------|--------------------|
| Private        |⇨ Non Iinheritable |
| Protected      |⇨ Private          |
| Public         |⇨ Private          |


**<u>Public Inheritance (Private members is not Inheritable)</u>**

| Base           |     Derived        |
|----------------|--------------------|
| Private        |⇨ Non Iinheritable |
| Protected      |⇨ Protected        |
| Public         |⇨ Public           |

**<u>Protected Inheritance (Private members is not Inheritable)</u>**

| Base           |     Derived        |
|----------------|--------------------|
| Private        |⇨ Non Iinheritable |
| Protected      |⇨ Protected        |
| Public         |⇨ Protected        |

Example Code:

```cpp
#include<iostream>
using namespace std;

//......................................Base Class
class BASE{                         
    private:
        int Bpvt;                         // Base class private data
    public:
        int Bpub;                          // Base class public data
        void setval(void);
        int getval(void);
        void show_bp(void);
};
//.....................................Derived class from Base class
class DERIVED : public BASE{       
    private:
        int Dpvt;                        // Derived class private data
    public:
        void mul(void);
        void display(void);
};
//.....................................Base class Functions
void BASE :: setval(void){
    Bpvt = 10;
    Bpub = 15;
    return;
}
int BASE :: getval(void){
    return Bpub;
}
void BASE :: show_bp(void){
    cout << "\n Base Private ==> " << Bpvt << endl;
}
//....................................Derived class Functions
void DERIVED :: mul(void){
    Dpvt = (Bpub * getval());
    return;
}
void DERIVED :: display(void){
    cout <<"\n Base Private (Bpvt)    ==> " << getval() << endl;
    cout <<"\n Base Public (Bpub)     ==> " << Bpub << endl;
    cout <<"\n Derived Private (Dpvt) ==> " << Dpvt << endl;
}
//....................................Main Function
int main(void){

    DERIVED d;

    d.setval();              // Calling Base Function using Derived Object 
    d.mul();
    d.show_bp();            // Calling Base Function using Derived Object
    d.display();

    d.Bpub = 25;           // Updating Base public variable
    d.mul();
    d.display();
    
    return(0);
}
```
Output:
```
 Base Private ==> 10

 Base Private (Bpvt)    ==> 15

 Base Public (Bpub)     ==> 15

 Derived Private (Dpvt) ==> 225

 Base Private (Bpvt)    ==> 25

 Base Public (Bpub)     ==> 25

 Derived Private (Dpvt) ==> 625
```
### **Constructor in Derived Classes**

One important aspect of Inheritance in C++ is the Constructor in Derived class.
As long as no Base class constructor takes any arguments, the derived class need not have a constructor function. However, if any base class contains a constructor with one or more arguments, then it is manadatory for the derived class to have a constructor and pass the arguments to the base class constructors.

If both the derived and Base classes contain constructor, the base constructor is executed first and then the constructor in the derived class is executed.   

Example Code:
```cpp
#include<iostream>
using namespace std;

//......................................Base Class
class BASE{                         
    private:
        int Bpvt;                                           // Base class private data
    public:                                                 // Base class public data
        BASE(int ival){                                     // BASE Constructor
            Bpvt = ival;
            cout << "\n Base Constructor Executing..." << endl;
        }
        int getval(void);
};
//.....................................Derived class from Base class
class DERIVED : public BASE{       
    private:
        int Dpvt;                        // Derived class private data
    public:

        // Calling the Base Constructor from Derived Constructor

        DERIVED(int Bval, int Dval) : BASE(Bval){ 
            Dpvt = Dval;
            cout << "\n Derived Constructor Executing..." << endl;
        }
        
        int getval_Derived(void);
};
//.....................................Base class Functions
int BASE :: getval(void){
    return Bpvt;
}
//....................................Derived class Functions
int DERIVED :: getval_Derived(void){
    return Dpvt;
}
//....................................Main
int main(void){

    DERIVED d(15, 25);

    cout << "\n Base data    ==> " << d.getval() << endl;
    cout << "\n Derived data ==> " << d.getval_Derived() << endl;

    return(0);
}
```
Output:
```
 Base Constructor Executing...

 Derived Constructor Executing...

 Base data    ==> 15

 Derived data ==> 25
```
