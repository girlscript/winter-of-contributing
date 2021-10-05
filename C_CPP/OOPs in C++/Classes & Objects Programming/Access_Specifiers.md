# Access Specifiers / Modifiers
Access modifiers are the intregral and important part of the object orientation programming ( OOP's ) it specifically used in classes for archieving the consept of data hiding.
<p> In class they are used to assign the accessibility to the class members . Every modifier have their specific use with some restrictions . </p>

## Types Of Access modifiers
1. Public  : -
The class members which are declared in this modifier are available to everyone . The members and functions defined in this modifier can be accessed by any function and also by another class . Public memeber are also accessible outside the class by any function using the member access operator ( . ) .

```cpp
#include<iostream>
using namespace std;
class Circle
{   
    // Public data member and function
    public:
        int edge_length;
         
        int area()
        {
            return edge_length*edge_length;
        }
     
};
 
int main()
{
    Circle c;
     
    // accessing public data member outside the class
    c.edge_length = 4;
     
    cout << "The edge length is : " << c.radius << "\n";
    cout << "Area is : " << c.area();
    return 0;
}
```
Ouput :
```
The edge length is : 4
Area is : 16

```

2. Private : - The data members and functions which are defined under the private specifier are not directly accesible by object or by function outside the class . Only member functions and friends functions are allowed to use private data memebrs. 

``` cpp 
#include<iostream>
using namespace std;
class Circle
{   private :
    
    // Private data member 
    
     int edge_length;
    
    public:
        
         
        int area()
        {
            return edge_length*edge_length;
        }
     
};
 
int main()
{
    Circle c;
     
    //private data member are not accesible outside the class 
    c.edge_length = 4;
    
    cout << "Area is : " << c.area();
    return 0;
}
```
Output : 
```
Area is : 16
```

3. Protected : - The Protected modifier act same as the private modifier in the way that it also not accesible outside the class by class object and outside functions unless we use friend function . The main difference between protected and private specifier is protected memebrs can be accesible by any other subclass or we say derived class which private modifier did not .  

```cpp
#include <bits/stdc++.h>
using namespace std;

class Parent
{
	protected:
	int identity;
	
};

// sub class or derived class from public class
class Child : public Parent
{
	public:
	void KnowId(int id_new)
	{
		// Child class is able to access the inherited class
		
		identity = id_new;
		
	}
	
	void displayIdentity()
	{
		cout << "identity is : " << identity << "\n";
	}
};

int main() {
	
	Child c;
	
	// member function of the derived class can
	// access the protected data members of the base class
	
	c.KnowId(50);
	c.displayIdentity();
	return 0;
}

```
Ouput : 
```
identity is : 50
```
