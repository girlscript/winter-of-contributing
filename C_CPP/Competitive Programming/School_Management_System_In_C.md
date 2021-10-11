# SCHOOL MANAGEMENT SYSTEM

### CODE:

``` cpp
/*STUDENTS RECORDS*/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <fstream.h>

/*a program to store a data into file read contents of a file, search, modify,
delete a record*/

class student
{
      int roll;
      char name[20];
      int age;
      public:
      void getdata(void);
      void putdata(void);
      int getroll(void);
};

void student :: getdata()
{
      cout<<"Enter rollno";
      cin>>roll;
      cout<<"Enter name";
      gets(name);
      cout<<"Enter age";
      cin>>age;
}

void student :: putdata()
{
      cout<<roll<<"\t"<<name<<"\t"<<age<<endl;
}

int student :: getroll()
{
      return(roll);
}
student s;

void main()
{
      clrscr();
      void write_file();
      void read_file();
      void search();
      void modify();
      void Delete();
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
      getche();
}

void write_file()
{
      ofstream afile("student.dat",ios::binary|ios::app);
      s.getdata();
      afile.write((char*)&s,sizeof(s));
      afile.close();
}

void read_file()
{
      ifstream bfile("student.dat",ios::binary);
      while(bfile.read((char*)&s,sizeof(s)))
      {
      s.putdata();
      }
      bfile.close();
}

void search()
{
      int p = -1, r;
      ifstream cfile("student.dat",ios::binary);
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
      getche();
      cfile.close();
}

void modify()
{
      int p = -1, r, t = 0;
      cout<<"Enter the rollnumber";
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
      getche();
      dfile.close();
}

void Delete()
{
      int r;
      ifstream efile("student.dat",ios::binary);
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
      getche();
      efile.close();
      ffile.close();
}

```

### OUTPUT:
![image](https://user-images.githubusercontent.com/89743157/136780063-a6f4f362-fa53-46e7-9675-059a33172a64.png)
![image](https://user-images.githubusercontent.com/89743157/136779931-4ff283d7-b1ac-431a-96c3-45f22b62da1b.png)

