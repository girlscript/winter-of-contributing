# UPCASTING AND DOWNCASTING
Let's first understand what is casting.
## Casting
Casting is performed when a value (variable) of one type is used in place of
some other type
``` c++
int i=4;
double d=2.5;
int result= i/d // d is cast to int and used
  ```
  Casting can be implicit as well as explicit as in previous example the casting has been done implicitly. It can be done explicitly like this
  ``` c++
  int i=4;
  double d=2.5;
  i=d// implicit
  i=(int)d;//explicit
  ```
  Just like the data types object acn also be typecasted. Casting between unrelated classes is not premitted but it can be done forecefully.Forced casting between unrelated classes can lead us to unexpected output.
  
   ```c++
#include<iostream>
using namespace std;
class A { public: int i; };
class B { public: double d; };
int main(){
A a;
B b;
a.i = 5;
b.d = 7.2;
A *p = &a;
B *q = &b;
cout << p->i << endl; // prints 5
cout << q->d << endl; // prints 7.2
p = (A*)&b;
q = (B*)&a;
cout << p->i << endl; // prints -858993459 ------------- GARBAGE
cout << q->d << endl; // prints -9.25596e+061 ------------- GARBAGE
return 0;
}
```
```
   Output:
   5
   7.2
   -858993459
   -9.25596e+061
 ```
   Casting on hierarchy is premitted in a limited sense.
   
   ###Upcasting:When an derived class is typecasted to base class. Upcasting can be done implicitly. Every derived class has an instance of the base class when we do upcast we get to access this instance of the base class but we can't access the all members of the derived class. Instead, we can access some members of the derived class for example overriden members.
   
   ###Downcasting:When an base class is typecasted to derived class. Downcast has to be done explicitly.
   
   Upcast is safe but downcast is not safe. Let's see an program which demonstrate upcasting and downcasting.
```c++ 
#include<iostream>
using namespace std;
class A { public: int dataA_; };
class B : public A { public: int dataB_; };
int main(){
A a;
B b;
a.dataA_ = 2;
b.dataA_ = 3;
b.dataB_ = 5;
A *pa = &a;
B *pb = &b;
cout << pa->dataA_ << endl; // prints 2
cout << pb->dataA_ << " " << pb->dataB_ << endl; // prints 3 5
pa = &b;
cout << pa->dataA_ << endl; // prints 3
 //cout << pa->dataB_ << endl; // error C2039: ’dataB_’ : is not a member of ’A’
 return 0;
}
 ```
 ```
Output
2
3 5
3
```
If we haven't commented the line *"cout << pa->dataB_ << endl;"* the it will throw an error *"error C2039: ’dataB_’ : is not a member of ’A’"*.
 
