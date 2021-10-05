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
