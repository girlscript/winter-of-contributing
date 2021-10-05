
# Constructors and Destructors

In this section we are going to study about constructors and destructors.

## Constructors in C++
1. Constructors are member function of a class.
2. Constructor name is same as the class name.

eg. 
    ``` 
    
    #include<iostream>
    using namespace std;
    class Base    //class name is Base
    {
	private:
		int a;
		
	public:
		Base()    //This is the constructor same as class name
		{
			-------//Coading part
		}
    };
    int main()
    {
	.
    .
    .
    }
3. Constructor has no return value.

4. Constructor can never be static , it is instance member function.

5. Constructor is automatically calles when the object is created. 

eg. 
    Syantax of creating an object

    <class name> <Object_name>

    eg. Base B1;    //B1 is the object of class Base

* Types of Constructors:-
    
    1. Default Constructor
    2. Parametrized Constructor
    3. Copy Constructor
    eg. 
    ```
    #include<iostream>
    using namespace std;
    class Base
    {
	private:
		int a,b;
		
	public:
		Base(int x, int y) //Parameterized Constructor
		{
			a=x;
			b=y;
		}
		base()  //Default Constructor
		{
			a=0;
			b=0;
		}
    };
    int main()
    {
	Base B1(2,3), b2(); //B1(2,3) called the parameterized Constructor, B2() called the default constructor
    }

* Important Points on Constructors:-

    1. If we don't make any constructor in class then compiler automatically makes default constructor.
    ```
    #include<iostream>
    using namespace std;
    class Base
    {
	private:
		int a;
		
	public:
		//There is no Constructor made.
    };
    int main()
    {
	Base B1; //Object called a default Constructor.
    }
    
    ```
    2. If we make a parametrised constructor then it will not make any default constructor in the program.


## Destructors in C++

1. It is an instance member function of a class.
2. Name of Destructor is same as class name and preceded by tilde symbol (~).
3. It has no return value and has no arugements.
4. Overloading of destructor is not possible.
5. It is used to relese memory that are allocated to objects.

eg. 
    
```
~ <class_name>
{
    //code of program
}

