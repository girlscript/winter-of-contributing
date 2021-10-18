# typedef

In C++, typedef ( type definition ) is a keyword allows us to create an alias for existing data types.One does not actually create a new data type , but rather defining a new name for an existing type. This process can help make machine-dependent programs more portable. If you define your own type name for each machine-dependent data type used by your program, then only the **typedef**  statements have to be changed when compiling for a new environment. **typedef** also can aid 
in self-documenting your code by allowing descriptive names for the standard types. The general form of the **typedef** statement is

> typedef _type_ _newname_;

where _type_ is any valid data type and _newname_ is the new name for this type. The new name you define is in addition to,not a replacement for, the existing type name.
***
**For example** <br> you could create a new name for float using

> **typedef** float balance;

This statement tells the compiler to recognize **balance** as another name for float.
Next, you could create a **float** variable using balance:

> balance over_due;

Here, **over_due** is a floating variable of tyepe **balance**, which is another word for **float**.

***

Now that **balance** has been defined, it can  be used in another **typedef**. <br>

**For Example**
<br>
> **typedef** balance overdraft;

tells the compiler to recognize overdraft as another name for balance, which is another name for **float**.
Using **typedef** can make youe code easier to read and easier to port to a new machine, but you are not creating a new physical type.

## code
```


/*typedef - Example Program of typedef in C++ */

#include <iostream>
using namespace std;

int main()
{
	typedef int integer;    // typedef  
	integer num1, num2, sum;       //using the typedef in place of datatype
	cout<<"Enter two number: ";           
	cin>>num1>>num2;                          
	sum=num1+num2;
	cout<<sum;
	return 0;
}
```
