#Introduction to structures in c++:

**Structure** is simply a user defined data type which is used to combine different
data types.

As array in c++ is used to store a similar type of data, structure can be used when you need to store different type of data together.

**For example,** we need to record the details of students/staff members in our school/institue, this can be done at ease using a structure. We can create different variables such as name, Id, fees/ salary,etc. as required.

All this above information can be stored under a single name i.e. **"structure name"** let 
here be ```students```.

##Defining a structure:
To define a structure, use the keyword ```struct``` followed by an identifier(name of structure).
Then inside curly braces you can define more than one, different members.
**For example,**
```struct students
{ 
    char name[20];
    int Id;
};```
Defining a structure only specifies the variables that the defined structure holds.
**NOTE** : No memory is allocated, as if for now we have only defined  a structure.

##Declaring the structure:
Once we have defined a structure, next we declare variables. These variables are of type sturcture
student.
For example(continuing with the above code):
```struct students student1;```

**NOTE** : Once a structure variable is declared then the required memory is allocated by the compiler.

##Accessing the structure variables:
The variables can be simply accessed using a dot
(.) operator.

The values of the variables can  be taken by user.
###Code for above:
```cout<<"Enter the name of the student1";
cin.get(student1.name, 20);
cout<<"Enter student Id";
cin>>student1.Id;```

And similarly for others if any.

This could be harder for maintaining large records where the code could be used within a loop and all 
the variables may be assigned the values.


###A final code for the above :

```#include<iostream>
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
}```


That was a brief on structures in c++.