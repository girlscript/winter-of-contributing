# **Constructors in derived classes**

**Constructor:** A constructor in c++ is a special method that is automatically invoked when an object of a class is created.

### **Can we use constructors in derived classes?**
Yes, we can absolutely use constructors in derived classes.
Whenever we create an object of a class, the default constructor of that class is invoked automatically to initialize the members of the class.

If we inherit a class from another class and create an object of the derived class, the default constructor of the derived class will be invoked but before that the default constructor of all of the base classes will be invoked.

The data members and member functions of base class are inherited in the derived class based on the access specifier but the definition of these members exists in base class only. So when we create an object of derived class, all of the members of derived class must be initialized but the inherited members in derived class can only be initialized by the base class constructor. This is why the **constructor of base class is called first to initialize all the inherited members.**

* If base class constructor does not have any arguments, there is no need of any constructor in derived class.

* Whenever the derived class default constructor is called, the base class default constructor is called automatically.

* If there are one or more arguments in the base class constructor, derived class needs to pass arguments to the base class constructor.

* If both base class and derived class have constructors **base class constructor is executed first**.

```c++
// C++ program to show the order of constructor call

#include <iostream>
using namespace std;

// base class
class Base
{
	public:
	
	// base class constructor
	Parent()
	{
		cout << "Inside base class" << endl;
	}
};

// derived class
class Child : public Base
{
	public:
	
	// derived class constructor
	Child()
	{
		cout << "Inside child class" << endl;
	}
};

int main() {
	
	// creating object of child class
	Child obj;
	
	return 0;
}
```
**Output**
```
Inside base class
Inside child class
```
* In *multiple inheritance*, base class constructors are executed in the order in which they appear in class declaration, i.e.,  the base class constructors are called in the order of inheritance and then the derived class constructor is called.

```c++ 
/* C++ program to show the order of constructor calls
 in Multiple Inheritance*/

#include <iostream>
using namespace std;

// first base class
class Base1
{
	
	public:
	
	// first base class Constructor
	Base1()
	{
		cout << "I am Base1 class" << endl;
	}
};

// second base class
class Base2
{
	public:
	
	// second base class Constructor
	Base2()
	{
		cout << "I am Base2 class" << endl;
	}
};

// Derived class inherits Base1 and Base2
class Derived : public Base1, public Base2
{
	public:
	
	// Derived class Constructor
	Derived()
	{
		cout << "I am Derived class" << endl;
	}
};

// main function
int main() {
	
	// creating object of class Derived
	Derived obj1;
	return 0;
}
```
**Output**
```
I am Base1 class  
I am Base2 class
I am Derived class
```
* In multilevel inheritance, the constructors executed in the order of inheritance.

* The parameterized constructor of base class cannot be called in default constructor of sub class, it should be called in the parameterized constructor of sub class.

* The constructors for virtual base classes are invoked before that of non-virtual classes


**Reference:** *Javatpoint*