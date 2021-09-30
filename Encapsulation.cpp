/*
Encapsulation

Encapsulation is the process to enclose data members and methods in a single unit for security purposes. 
This is also known as data abstraction. This is possible in Oop languages like C++ and Java. That means encaps
-ulation is the method of combining data and function inside a class. This process helps to hide the data from
being accessed from outside of a class directly. Only through the functions inside the class, access to 
information is available.

Data encapsulation is a mechanism used to bundle data and the function. Encapsulation is used for data hiding.
Data hiding is a mechanism where the details of the class are hidden from the user.
The user can perform only a set of operations in the hidden member of the class.
Encapsulation is a powerful feature(in OOP concept) that leads to information hiding for security purposes.


Benefits of encapsulation :-

1. Data hiding – Restriction of external access to the features of a class.
2. Implementation independence – A change in the implementation is done easily without affecting the user interface.
3. Information hiding – The implementation details are not known to the user.


Access Specifier :

There are three types of access specifier :-

  private
  public 
  protected
The data members should be labled as private using the private access modifier. The member function which 
manipulates the data member should be labled as public using public accessed modifier.



		#include<isotream>
		using namespace std;
		class test
		{
  		private:
    			int x;
  		public:
    			test(int a)
    			{
      				x =a;
    			}
    			int get()
    			{
      				return x;
    			}
		};
		int main()
		{
  			test a(7);
  			cout<<"The Number is: "<<a.get();
  			return 0;
		}



Output :

The Number is: 7

Explanation :

In the above program, we show the concept of encapsulation. We have a private member x which cannot be acces
-sed from the main function. The only way to access it is by creating a object of class test.

There is a parameterized constructor, which assigns the value we get from main to x. We have a get method,
that returns the value of x. Inside the main function, we create an object of test class and assign a 
parameter. This moment the parameterized constructor is called, and it assigns the parameter value to x.

We have a cout statement that calls the get function and the number is displayed.

*/
