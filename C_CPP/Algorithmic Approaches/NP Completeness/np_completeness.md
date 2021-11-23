
<hr>
<h1 align="center">Type Casting - C Programming</h1>
<br>

## What is type casting?
*Type casting refers to changing an variable of one data type into another. 
The compiler will automatically change one type of data into another if it makes sense.
For instance, if you assign an integer value to a floating-point variable, the compiler will convert the int to a float.
Casting allows us to make this type conversion explicit, or to force it when it wouldn’t normally happen.

*Type conversion in c can be classified into the following two types:

### Implicit Type Conversion
* Also known as ‘automatic type conversion.’
* Done by the compiler on its own, without any external trigger from the user.
* Generally takes place when in an expression more than one data type is present. In such condition type conversion (type promotion) takes place to avoid lose of data.

#### An example of implicit conversion
```C
#include <iostream>
using namespace std;
  
int main()
{
    int x = 10; // integer x
    char y = 'a'; // character c
  
    // y implicitly converted to int. ASCII
    // value of 'a' is 97
    x = x + y;
  
    // x is implicitly converted to float
    float z = x + 1.0;
  
    cout << "x = " << x << endl
         << "y = " << y << endl
         << "z = " << z << endl;
  
    return 0;
}

```
#### Output
```
x = 107
y = a
z = 108
```

### Explict Type Conversion
* The type conversion performed by the programmer by posing the data type of the expression of specific type is known as explicit type conversion. 
* The explicit type conversion is also known as type casting.

#### An example of explicit conversion
```C
#include <iostream>
using namespace std;
  
int main()
{
    double x = 1.2;
  
    // Explicit conversion from double to int
    int sum = (int)x + 1;
  
    cout << "Sum = " << sum;
  
    return 0;
}

```
#### Output
```
Sum = 2
```

### Advantages of Type Conversion:
* This is done to take advantage of certain features of type hierarchies or type representations.
* It helps to compute expressions containing variables of different data types.
<hr>

