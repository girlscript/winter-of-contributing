# SCHOOL MANAGEMENT SYSTEM

### CODE:

``` cpp
/*STUDENTS RECORDS*/

#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std; 

/*a program to store a data into file read contents of a file, search, modify,
delete a record*/

class student
{
      int roll;       
      char name[20];                           //A class that consists of student's information
      int age;
      public:
      int getdata(void);
      int putdata(void);
      int getroll(void);
};

int student :: getdata()
{
      cout<<"Enter rollno";
      cin>>roll;                     //To input student's roll no.
      cout<<"Enter name";
      cin>>name;                    //To input student's name
      cout<<"Enter age";
      cin>>age;         //To input student's age

      return 0;
}

int student :: putdata()
{
      cout<<roll<<"\t"<<name<<"\t"<<age<<endl;

      return 0;
}

int student :: getroll()
{
      return(roll);                
}
student s;

int main()
{
      int write_file();
      int read_file();
      int search();
      int modify();
      int Delete();
      int c;
do
{
      cout<<"MAIN MENU"
      <<" \n 1. ADD A RECORD"
      <<"\n 2. READ A RECORD"
      <<"\n 3. SEARCH A RECORD"
      <<"\n 4. MODIFY A RECORD"
      <<"\n 5. DELTE A RECORD"
      <<"\n 6. EXIT"
      <<"\n 7. YOUR SELECTION";
      cin>>c;
      if (c == 1)
      write_file();
      else if (c == 2)
      read_file();
      else if (c == 3)
      search();
      else if (c == 4)
      modify();
      else if (c == 5)
      Delete();
}
      while (c != 6);
      cin.get();
      return 0;
      
}

int write_file()
{
      ofstream afile("student.dat",ios::binary|ios::app);                   //A function to write in the file
      s.getdata();
      afile.write((char*)&s,sizeof(s));
      afile.close();
      cin.get();
      return 0;
}

int read_file()
{
      ifstream bfile("student.dat",ios::binary);                          //A function to open the file in the read mode
      while(bfile.read((char*)&s,sizeof(s)))
      {
      s.putdata();
      }
      bfile.close();
      cin.get();
      return 0;
}


int search()
{
      int p = -1, r;
      ifstream cfile("student.dat",ios::binary);                         //A function that searches a student's record using his or her roll no.
      cout<<"Enter rollnumber";
      cin>>r;
      while (cfile.read((char*)&s,sizeof(s)))
      {
            if (s.getroll() == r)
            {
                  s.putdata();
                  p++;
            }
      }
      if (p == -1)
      cout<<"\n record not found !!!!!!";
      cfile.close();
      cin.get();
      return 0;
}

int modify()
{
      int p = -1, r, t = 0;
      cout<<"Enter the rollnumber";                                    //A function that helps to modify the student's record
      cin>>r;
      fstream dfile("student.dat",ios::binary|ios::in|ios::out);
      while (dfile.read((char*)&s,sizeof(s)))
      {
            t++;
            if (s.getroll() == r)
            {
                  s.getdata();
                  dfile.seekp((t-1)*sizeof(s),ios::beg);
                  dfile.write((char*)&s,sizeof(s));
                  p++;
            }
     }
      if (p == -1)
      cout<<"\n record not found !!!!";
      dfile.close();
      cin.get();
      return 0; 
    
}

int Delete()
{
      int r;
      ifstream efile("student.dat",ios::binary);                         //A function that removes a student's record from the file
      ofstream ffile("temp.dat",ios::binary);
      cout<<"Enter rollnumber";
      cin>>r;
      while (efile.read((char*)&s,sizeof(s)))
      {
            if (s.getroll() != r)
            {
            ffile.write((char*)&s,sizeof(s));
            }
      }
      remove("student.dat");
      rename("temp.dat","student.dat");
      efile.close();
      ffile.close();
      cin.get();
      return 0;
}


```

### OUTPUT:
![image](https://user-images.githubusercontent.com/89743157/136780063-a6f4f362-fa53-46e7-9675-059a33172a64.png)
![image](https://user-images.githubusercontent.com/89743157/136779931-4ff283d7-b1ac-431a-96c3-45f22b62da1b.png)
