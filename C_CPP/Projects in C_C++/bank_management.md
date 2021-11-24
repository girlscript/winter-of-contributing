# Bank Management System Project in cpp

### This Program is based on Bank Management System.
Program shows some basic banking system features like,
- Deposit money
- Withdraw money
- Check bank balance

```cpp
#include<iostream>
using namespace std;
class BankAccount
{
private:
    int ano;
    char name[30];
    float balance;
public:
    void getData()   //getdata function
    {
        cout<<"\n Enter Account no : ";
        cin>>ano;
        cout<<"\n Enter Name : ";
        cin>>name;
        cout<<"\n Enter opening balance : ";
        cin>>balance;
    }
    void deposit() //deposite money function
    {
        float amt;
        cout<<"\n Enter amount : ";
        cin>>amt;
        balance=balance+amt;
        cout<<"\n Amount is deposited";
    }
    void withdraw() //withdraw money function
    {
        float amt;
        cout<<"\n Enter amount : ";
        cin>>amt;
        if(amt<=balance)
        {
        balance=balance-amt;
        cout<<"\n Amount is withdrawn";
        }
        else
            cout<<"\n Insufficient fund ";
    }
    void display()  //display function
    {
        cout<<"\n Account no:          "<<ano;
        cout<<"\n Name :               "<<name;
        cout<<"\n Balance :            "<<balance;
    }
    int getano()    // account no return function
    {
        return ano;
    }

};


int main() //main function
{
    BankAccount b[2];
    int i,choice,tempa;
    for(i=0;i<2;i++)
    {
        b[i].getData();
    }
    do  //Menu list loop
    {
        cout<<"\n\n\n\n"; 
        cout<<"\n ####SELECT#### ";
        cout<<"\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit";
        cout<<"\n Enter choice ";
        cin>>choice;
        if(choice>=1 && choice<=3)
        {
            cout<<"\n Enter account no: ";
            cin>>tempa;
            for(i=0;i<2;i++)
            {
                if(b[i].getano()==tempa)
                {
                    switch(choice)
                    {
                        case 1 : b[i].deposit(); break; //function call
                        case 2 : b[i].withdraw(); break; //function call
                        case 3 : b[i].display(); break; //function call

                    }
                    break;

                }
            }
            if(i==2)
                cout<<"\n Invalid account number ";
        }
        else if(choice==4)
            cout<<"\n Good Bye ";
        else
            cout<<"\n Invalid choice ";

    }while(choice!=4);

    return 0;

}
//end of program
```
### output of the program
![output](https://user-images.githubusercontent.com/78864134/143279014-14528331-2375-4ba1-a3ee-242ccd85c81c.png)
