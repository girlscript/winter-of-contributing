Copy Constructor:
===============
Constructors in itself corresponds to a special functions which initialises an object, whenever it is formed.Special in sense, that like other functions they doesn't have a prototype and cannot return any value to the compiler.
Further it doesn't support initialising objects in following explicit way:  
**Example**:  t2.test(789);  
**Reason**: Because they cannot be treated like normal functions.

Copy constructor is a type of constructor which invokes the copies of an already created object.The replicas hold the same 
value, datatype and resources.

```
//SYNTAX:
test t1(123);
test t2=t1;  //copy constructor.
test t3(t2); // Passing t2 as a parameter for object t3.  
```
**Depending upon the resources allocated to an object, we generate copies in two ways**

1) SHALLOW COPY
2) DEEP COPY

1.) SHALLOW COPY:
---------------
If the variables hold by the original object are static ie.they are not defined in the heap section of the memory , all of the resources are hence copied for the new object.
If in case, some variables are dynamically allocated memory from heap section, then copied object's variable will also point on the same memory location. Now if we create change in one object for that particular variable, it will show up for another too, leading to runtime errors. Thus shallow copy fails to fulfill the purpose of the replica generated.

original object ------> heap memory <--------- copy of that object

```
//SYNTAX:
test t1( 12, 24, 32); // MARKS IN THREE SUBJECT
test t2 = t1;         //WE COPY THE MARKS FOR OBJECT T1 TO T2 AND ON CALLLING DISPLAY FUNCTION BOTH WILL DISPLAY SAMCONTENT
t1.display();
t2.display();
```
2.) DEEP COPY:
---------------
The variables hold by both the object might be same but would point on to different memory allocations.

original object ------> heap memory for object 1
copy of object -------> heap memory for object 2

```
//SYNTAX:
test t1();
t1.marks( 12, 24, 32);
t1.display();  //FIRST WE EXPLICITLY DEFINE THE FIRST OBJECT AND THEN MAKE A COPY OUT OF IT
test t2= t1;
t2.display();
```
**Now we show how to implement basic string operation using copy constructor**
---------------
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
	String(const String&); 			                    //our own copy constructor
   explicit String(const char * const p = NULL);
	const char * getString();
};

String::String(const String& ss) //our own copy constructor
{
	if(ss.cStr==NULL) 				           //if passed objects pointer is NULL
   {							           //Then nullify the invoking objects pointer too
   	cStr=NULL;
		len=0;
	}
	else 							   //otherwise
	{
		len=ss.len;
		cStr = new char[len+1]; 	                  //dynamically allocate a separate memory block and copy into it
      strcpy(cStr,ss.cStr);		                        
	}
}

String::String(const char * const p)
{
	if(p==NULL) 					          //if default value passed
	{
		cStr=NULL; 					  //nullify
		len=0;
	} 
	else 						         //otherwise
	{
		len=strlen(p);
		cStr=new char[len+1]; 		                 //dynamically allocate a separate memory block
		strcpy(cStr,p); 			         //and copy into it
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
**OUTPUT:**
---------------
ABC                       
ABC

