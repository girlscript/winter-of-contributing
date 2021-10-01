/*   Copy constructor is a special kind of constructor. When creating an object, it uses the previously created object in the same class to initialize the newly created object. Copy constructors are commonly used for:

Initialize the newly created object by using another object of the same type.

The copy object passes it as an argument to the function.

 It is usually of the form X (X&), where X is the class name. The compiler provides a default Copy Constructor to all the classes.

*1)Default copy constructor

If the programmer did not declared the copy constructor for a class, the compiler will add its own default copy constructor for the objects derived from that class.
Default copy constructor does a very simple operation, they will do a bit-wise (member-wise) copy of an object, which means that the object will be copied bit by bit.

There is a danger in copying an object bit by bit, if the object contains pointers since the pointer address will be copied in the process resulting in two different objects that share the same memory buffer

For a situation where an object contain pointers we have to write our own copy constructor that will prevent situations like those mentioned above.

*2)Copy constructor & passing objects as arguments to methods

There are 3 situations in which the copy constructor is called:

a)When we make copy of an object.
b)When we pass an object as an argument by value to a method.
c)When we return an object from a method by value.

*/
```
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
using namespace std;

class String
{
	char * cStr;
	long unsigned int len;
public:
	String(const String&); 			//our own copy constructor
   explicit String(const char * const p = NULL);
	const char * getString();
};

String::String(const String& ss) //our own copy constructor
{
	if(ss.cStr==NULL) 				//if passed object�s pointer is NULL
   {										//� then nullify the invoking object�s pointer too
   	cStr=NULL;
		len=0;
	}
	else 									//otherwise�
	{
		len=ss.len;
		cStr = new char[len+1]; 	//�dynamically allocate a separate memory block
      strcpy(cStr,ss.cStr);		//�and copy into it
	}
}

String::String(const char * const p)
{
	if(p==NULL) 						//if default value passed�
	{
		cStr=NULL; 						//�nullify
		len=0;
	}
	else 									//�otherwise�
	{
		len=strlen(p);
		cStr=new char[len+1]; 		//�dynamically allocate a separate memory block
		strcpy(cStr,p); 				//�and copy into it
	}
}

const char * String::getString()
{
	return cStr;
}

int main()
{
	String s1("ABC");
	String s2=s1;
	cout<<s1.getString()<<endl;
	cout<<s2.getString()<<endl;
   getch();
   return 0;
}
```
