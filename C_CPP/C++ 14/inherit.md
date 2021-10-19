###  **What the Inheritance is**
•	Inheritance is the technique of building new classes called derived or child class from the existing class called a base or parent class by inheriting the features of the parent class.
•	It is also one of the important feature of object-oriented programming language.
###  **Types of Inheritance in C++**
1.	Single Inheritance
2.	Multiple Inheritance
3.	Multilevel Inheritance
4.	Hybrid Inheritance
5.	Hierarchical Inheritance
In this Documentation we learn only about Multilevel Inheritance.
###   **What is Multilevel Inheritance**
It defines as a class that is derived from one class which is already derived from another class.
###  **Change of Access Modifiers**
***Public Inheritance***
| Access specifier in parent class  | Access specifier when inherited publicly |
|-----------------------------------|------------------------------------------|
| Private                           | Inaccessible                             |
| Public                            | Public                                   |
| Protected                         | Protected                                |

***Private Inheritance***
| Access specifier in parent class  | Access specifier when inherited privately |
|-----------------------------------|-------------------------------------------|
| Private                           | Inaccessible                              |
| Public                            | Private                                   |
| Protected                         | Private                                   |

***Protected Inheritance***
| Access specifier in parent class  | Access specifier when inherited protectedly |
|-----------------------------------|---------------------------------------------|
| Private                           | Inaccessible                                |
| Public                            | Protected                                   |
| Protected                         | Protected                                   |

Example Code:
```cpp
#include <iostream>
using namespace std;
class parent // parent class
{
 	public:
 	int n;
 	void getdata()
 	{
    	cout << "Enter value of n= "; 
    	cin >> n;
 	}
};
class child1 : public parent // derived class from parent class
{
 	public:
 	int o;
 	void readdata()
 	{
 	    cout << "\nEnter value of o= "; 
 	    cin >> o;
 	}
};
class child2 : public child1   // derived from class child1
{
 	private:
 	int m;
 	public:
 	void indata()
 	{
    	cout << "\nEnter value of m= "; 
    	cin >> m;
 	}
 	void product()
 	{
 	    cout << "\nProduct= " << n * o * m;
 	}
};
int main()
{
     child2 a;      //object of derived class
     a.getdata();
     a.readdata();
     a.indata();
     a.product();
     return 0;
}             
```
OUTPUT:-
```
Enter value of n = 5
Enter value of o = 5
Enter value of m =5
Product = 125
```
