# Tollbooth management project in c++

## This program keeps a record of all cars who pass the toll with paying a toll or without paying a toll.

- Pay car means all those cars who pay the toll.
- Nopaycar means government cars.


```cpp
#include<iostream>
using namespace std;
class TollBooth  
{
    int car;
    float amt;

public:
    TollBooth()
    {
        car=0;
        amt=0;
    }

    void paycar() //pay car function
    {
        car++;
        amt+=50; //add and increment
    }
    void nopaycar() //no pay car function
    {
        car++; //simply increment
    }
    void display() //display function
    {
        cout<<"\n Total car= " <<car;
        cout<<"\n Total Amount= " <<amt;

    }

};
int main() //main function
{
    TollBooth obj;
    int choice;
    do //menu list
    {
        cout<<"\n\n\n\n";
        cout<<"@@@@  SELECT  @@@@";
        cout<<"\n 1:paying car";
        cout<<"\n 2:nonpaying car";
        cout<<"\n 3:display";
        cout<<"\n 4:Exit";
        cout<<"\n Enter choice";
        cin>>choice;

        switch(choice)
        {
            case 1 : obj.paycar(); break;     //paycar function call
            case 2 : obj.nopaycar(); break;   //nopaycar function call
            case 3 : obj.display(); break;    //display function call
            case 4 : cout<<"\n GOOD BYE  "; break;
            default : cout<<"\n Invalid choice";
        }

    }while(choice!=4);
}  //end of main

//end of program
```

# Output of this program
![output](https://user-images.githubusercontent.com/78864134/143040323-4cca9d0f-7223-447f-ba1a-494f329d0c34.png)
