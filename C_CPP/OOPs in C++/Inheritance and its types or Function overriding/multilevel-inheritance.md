## Multilevel Inheritance

This is a process in which a child class is derived from the base class, which in turn is inherited by its child class and so on.
You can also think it like a single inheritance with multiple derived classes and a single base class which is also called the super class. <br />

To give you a practical example, the following image depicts Multilevel Inheritance in the best way:

<div align="center"> 
<img src = "https://2.bp.blogspot.com/-WBDqZR0o8Do/Vsc1BNHKozI/AAAAAAAAARY/-7JRfazme8I/s1600/fig1.png" width="400" height="250">
</div>

<br />


__Here's a program that represents Multiple Inheritance:__

```C++
#include<iostream>
using namespace std;
class grandfather
{
    private:
           char name[20];
           int age;
    public: 
           void get_data();
           void show_data();
};
class father : public grandfather      //class father derived from class grandfather
{
    private:
           char qual[50];
           double salary;
    public:
           void input_data();
           void output_data();
};
class son : public father      //class son derived from class father
{
    private:
           char hobby[20];
    public:
           void read_data();
           void print_data();
};
void grandfather :: get_data()
{
    cout<<"Enter the name: "<<endl;
    cin>>name;
    cout<<"Enter the age: "<<endl;
    cin>>age;
}
void grandfather :: show_data()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
void father :: input_data()
{
    get_data();              //accessed from base class i.e. class 'grandfather'
    cout<<"Enter the Qualification: "<<endl;
    cin>>qual;
    cout<<"Enter the salary: "<<endl;
    cin>>salary;
}
void father :: output_data()
{
    show_data();            //accessed from base class i.e. class 'grandfather'
    cout<<"Qualification: "<<qual<<endl;
    cout<<"Salary: "<<salary<<endl;
}
void son :: read_data()
{
    input_data();            //accessed from base class i.e. class 'father'
    cout<<"Enter the hobby: "<<endl;
    cin>>hobby;
}
void son :: print_data()
{
    output_data();            //accessed from base class i.e. class 'father'
    cout<<"Hobby: "<<hobby<<endl;
}
int main()
{
    son s;
    cout<<"ENTER SON'S INFORMATION"<<endl;
    s.read_data();
    
    cout<<endl<<"SON'S INFORMATOIN IS\n"<<endl;
    s.print_data();
    return 0;
}
```

### Output

> ENTER SON'S INFORMATION   
> Enter the name: Abhimanyu  
> Enter the age: 19  
> Enter the Qualification: b.tech  
> Enter the salary: 999999  
> Enter the hobby: reading  
> <br />
> SON'S INFORMATION IS  
> Name: Abhimanyu  
> Age: 19  
> Qualification: b.tech  
> Salary: 999999  
> Hobby: reading

---
