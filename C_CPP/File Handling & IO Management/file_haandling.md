 In C++ file input/output is implemented through header file (fstream.h) of C++ standard library. In C++, a file at 
lowest level is interpreted as a sequence or stream of bytes.
The fstream library predefines a set of operations for handling a file, i.e., it defines certain clsses to perform file input 
and output.For example :
ifstream class is for file input ,
ofstream class is for file output , and
fstream class is for both input and output
filebuf class sets the file buffer to read and write
fstreambase class is the base class for fstream, ofstream & ifstream
The above mentioned classes also have some functions like open(), close(), read(), write(), seekg(), tellg(), etc;
to perform the tasks.

In C++, there are filemodes also, which describes how a file is to be used : like for reading the data , to write data
in it , or to append it.
So, some of the file modes are :
ios::in -> input mode (opens file for reading)
ios::out -> output mode (opens file for writing)
ios::ate -> input/output mode (seeks to end-of-file)
ios::app -> append mode (it causes all output to the file to be appended at the end)
ios::binary -> input/output mode (it causes a file to be opened in binary mode)


// Now , below is program to modify data in a file, i.e., it both reads and writes in the file

```
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
class student 
{
    int rollno;
    char name[25];
    float marks;
    char grade;

    public:
    void getdata()
    {
        cout<<"Enter details"<<endl;
        cout<<"Rollno: ";  cin>>rollno;
        cout<<"Name: ";    cin>>name;
        cout<<"Marks: ";   cin>>marks;
        if(marks>=75)
            grade='A';
        else if(marks>=60 && marks<75)
            grade='B';
        else if(marks>=50 && marks<60)
           grade='C'; 
        else if (marks>=40 && marks<50)
           grade='D';
        else
           grade='F';            
    }
    void putdata()
    {
        cout<<"Rollno:"<<rollno<<"\t Name: "<<name<<"\n Marks: "<<marks<<"\t Grade: "<<grade<<endl;
    }
    int getrno()   //accessor function
    {
        return rollno;
    }
    void modify();
} 
                                                                                                   
s1,stud;

void student::modify()  //modify() displays old details and ask for new details 
{
    cout<<"Rollno:"<<rollno;
    cout<<"\n Name: "<<name<<"\t Marks: "<<marks<<"\t Grade: "<<grade<<endl;
    cout<<"Enter new details: "<<endl;
    char nm[25]=" "; //nm->new name 
    float mks; //nwe marks
    cout<<"New Name: (or Enter '.' to retain old one) ";
    cin>>nm;
    cout<<"New Marks: (or Enter -1  to retain old one) ";
    cin>>mks;
    if(strcmp(nm,".")!=0)
        strcpy(name,nm);
    if(mks!= -1)
    {
        marks=mks;
        if(marks>=75)
           grade='A'; 
        else if(marks>=60 && marks<75)
           grade='B'; 
        else if(marks>=50 && marks<60)
            grade='C'; 
        else if (marks>=40 && marks<50)
            grade='D'; 
        else
           grade='F'; 
    }      
}
int main()
{
    fstream fio("student.txt",ios::in | ios::out | ios::binary); //student.dat must exist on disk
    int rno; long pos; char found='f';
    s1.getdata();
    s1.putdata();
    cout<<"Enter the rollno of student whose record is to be modified \n";
    cin>>rno;
    while(!fio.eof())
    {
        pos=fio.tellg(); //defines the beginning position
        fio.read((char*)&s1,sizeof(s1));
        if(s1.getrno()==rno)
        {
            s1.modify();
            fio.seekg(pos); //pointed to the beginning position of record to be modified
            fio.write((char*)&s1,sizeof(s1));
            found='t';
            break;
        }
    }
    if(found=='f')
        cout<<"Record not found \n";
    fio.seekg(0);
    cout<<"Now the file contains \n";
    while(!fio.eof())
    {
        fio.read((char*)&stud,sizeof(stud));
        stud.putdata();
    }
    fio.close();
    return 0;    
}
```            
