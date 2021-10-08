<h1>Introduction to structures in c++:</h1>

Structure is simply a user defined data type which is used to combine different
data types.<br>

As array in c++ is used to store a similar type of data, structure can be used 
when you need to store different type of data together.<br>
For example, we need to record the details of students/staff members in our 
school/institue, this can be done at ease using a structure. We can create different 
variables such as name, Id, fees/ salary,etc. as required.<br>

All this above information can be stored under a single name i.e. "structure name" let 
here be 'students'.<br>

<h2>Defining a structure:</h2>
To define a structure, use the keyword 'struct' followed by an identifier(name of structure)
Then inside curly braces you can define more than one, different members.<br>
For example,<br>
struct students
{
    char name[20];
    int Id;
};
Defining a structure only specifies the variables that the defined structure holds.<br>
NOTE : No memory is allocated, as if for now we have only defined  a structure.

<h2>Declaring the structure:</h2>
Once we have defined a structure, next we declare variables. These variables are of type sturcture
student.<br>
For example(continuing with the above code):<br>
struct students student1;

NOTE : Once a structure variable is declared then the required memory is allocated by the compiler.<br>

<h2>Accessing the structure variables:</h2>
The variables can be simply accessed using a dot(.) operator.<br>

The values of the variables can  be taken by user.<br>
<h3>Code for above:</h3>
cout<<"Enter the name of the student1";<br>
cin.get(student1.name, 20);<br>
cout<<"Enter student Id";<br>
cin>>student1.Id;<br>

And similarly for others if any.<br>

This could be harder for maintaining large records where the code could be used within a loop and all 
the variables may be assigned the values.<br>


<h3>A final code for the above :</h3>

#include<iostream>
using namespace std;

struct students
{
    char name[20];
    int Id;
};

int main(){
    struct students student1;

    // taking from user
    cout<<"Enter the name of the student1"<<endl;
    cin.get(student1.name, 20);
    cout<<"Enter student Id"<<endl;
    cin>>student1.Id;


    cout<<"Returning the values"<<endl;
    cout<<"student1"<<endl;
    cout<<"  "<<student1.name;
    cout<<"  "<<student1.Id;
    
    return 0;
}


That was a brief on structures in c++.