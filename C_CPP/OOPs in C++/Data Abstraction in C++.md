# **Data Abstraction in c++**

**Data Abstraction** is the one of the most important feature of OOPs which is providing only the essential details to the outside world and hiding the internal details, i.e., representing only the essential details in the program.

Data Abstraction is a programming technique that depends on the seperation of the interface and implementation details of the program.

***Example of Data Abstraction in c++***:- 
Your program can make a call to the sort() function without knowing what algorithm the function actually uses to sort the given values. In fact, the underlying implementation of the sorting functionality could change between releases of the library, and as long as the interface stays the same, your function call will still work.

C++ classes use the data abstraction concept, they are also termed as ***abstract data types***.

***Data Abstraction can be achieved in two ways***:
* Abstraction using classes
* Abstraction in header files

### ***Abstraction using classes***: 
An abstraction can be achieved using classes. A class is used to group all the data members and member functions into a single unit by using the access specifiers. A class has the responsibility to determine which data member is to be visible outside and which is not.

**Access Specifiers Implement Abstraction**:

---
**Public specifier**: When the members are declared as public, members can be accessed anywhere from the program.

**Private specifier**: When the members are declared as private, members can only be accessed only by the member functions of the class.
Let's see a simple example of abstraction in header files.

#### **Program of data abstraction using classes**
```cpp
#include<iostream>    
using namespace std;    
class Sum    
{    
    private: int x, y, z;  // private variables  
    public:    
        void add()    
    {    
        cout<<"Enter two numbers: ";    
        cin>>x>>y;    
        z= x+y;    
        cout<<"Sum of two number is: "<<z<<endl;    
    }    
};    
int main()    
{    
    Sum s;    
    s.add();    
    return 0;    
}    
``` 
**Output**:

Enter two numbers: 3 6

Sum of two number is: 9

### ***Abstraction in header files***:
An another type of abstraction is header file. For example, pow() function available is used to calculate the power of a number without actually knowing which algorithm function uses to calculate the power. Thus, we can say that header files hides all the implementation details from the user.

#### **Program of data abstraction in header files**
```cpp
#include <iostream>  
#include<math.h>  
using namespace std;  
int main()  
{    
 int n = 4;    
   int result = sqrt(n);         // sqrt(n) is a square root function  
   std::cout << "Square root of n is : " <<result<< std::endl;  
   return 0;  
}  
```
**Output**

Square root of n is : 2
