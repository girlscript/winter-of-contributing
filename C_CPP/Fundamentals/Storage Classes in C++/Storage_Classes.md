# Storage Classes

## What are storage classes?

Storage classes are used to describe the different features like scope, visibility, and lifetime of a variable or a function in a C++ program. These features tell the existence and use of a variable (or a function) during the runtime of the program.</br>
There are <strong>five types of storage classes</strong> that are used in C++, these are :

## 1. Automatic

The keyword used for this storage class is : auto. The lifetime that this storage class offers to a variable or function is : function block. </br>
It is the default storage class for all the local variables. Hence, its visibility is local. The default (initial) value of variables of this storage class is a garbage value.</br>
Since all the types are obtained in the compiler phase, the time for compilation (due to the use of auto) may slightly increase but it doesn't affect the overall runtime of the program.

### Example

```
#include<iostream>
using namespace std;
int main()
{
    //No datatype declaration needed
    auto a = "GWOC";
    auto b = 2021;
    cout<<a<<" - "<<b;
    return 0;
}
```

### Output

```
GWOC - 2021
```

## 2. External

The keyword used for this storage class is : extern. The lifetime that this storage class offers to a variable or function is : the whole program. </br>
This storage class tells us that the corresponding variable or function is defined somewhere else and not within the block that we are in. It can be accessed within any block. Hence, its visibility is global. The default (initial) value of variables of this storage class is 0.</br>
We can also use a global variable and make it external by using the extern keyword before its definition in any block. This storage class is generally used when there exist two or more classes and they are sharing some global variables or functions.

### Example

```
#include<iostream>
using namespace std;
extern int num; //An external variable defined in some other file with value 78
int main()
{
    cout<<"Value of extern variable num : "<<num;
    return 0;
}
```

### Output

```
Value of extern variable num : 78
```

## 3. Register

The keyword used for this storage class is : register. The lifetime that this storage class offers to a variable or function is : function block. </br>
The compiler tries to store register variables in the registers of the microprocessor (if there is any free register present). Therefore, this makes the use of this storage class faster. Although it can't find a free register, then these are stored in memory only.</br>
Its visibility is local. The default (initial) value of variables of this storage class is a garbage value.</br>
Also, we can't obtain the address of a register variable using pointers.

### Example

```
#include<iostream>
using namespace std;
int main()
{
    register int i = 90;
    cout<<"Value of register variable : "<<i;
    return 0;
}
```

### Output

```
Value of register variable : 90
```

## 4. Static

The keyword used for this storage class is : static. The lifetime that this storage class offers to a variable or function is : the whole program. </br>
This storage class instructs the compiler to keep a variable during the lifetime of the program instead of making and deleting it each time it comes into or goes out of scope. Therefore, static allows maintaining the value between different function calls.</br>
Its visibility is local. The default (initial) value of variables of this storage class is 0.</br>
Also, when static is used with data members of a class then, only a single copy of the data member is made, which is shared by all objects of that class.

### Example

```
#include<iostream>
using namespace std;
void funcStatic()
{
    static int x = 0; //static variable
    int y = 10; //normal variable
    x++;
    y++;
    cout<<"x = "<<x<<", y = "<<y<<endl;
}
int main()
{
    funcStatic();
    funcStatic();
    return 0;
}
```

### Output

```
x = 1, y = 11
x = 2, y = 11
```

## 5. Mutable

The keyword used for this storage class is : mutable. The lifetime that this storage class offers to a variable or function is : class. </br>
This storage class is used generally when we have to modify some data members of a class (or structure) which are declared const or through const functions.</br>
Its visibility is local. The default (initial) value of variables of this storage class is a garbage value.</br>

### Example

```
#include<iostream>
using namespace std;
class GWOC{
    public:
    string domain;
    mutable int contributions;
    GWOC()
    {
        domain = "C/CPP";
        contributions = 0;
    }
};
int main()
{
    const GWOC obj;
    //We can only modify mutable data members, not the others (since object is const)
    obj.contributions++;
    cout<<"Contributions in "<<obj.domain<<" : "<<obj.contributions;
    return 0;
}
```

### Output

```
Contributions in C/CPP : 1
```
