# HOW TO FIND DAY OF A GIVEN DATE   
Generally there are two approaches to find the day of a given date    
- Zeller’s Rule   
- Key-Value Method  
Here we follow the first approach i.e Zeller’s Rule.  
###  ZELLER’S RULE:  
Zeller’s rule comes from a Zeller’s formula :  
```
F=k+ [(13*m-1)/5] +D+ [D/4] +[C/4]-2*C 
```
This conversation was marked as resolved by varnikarathee
 Show conversation
where  
k   =    the day of the month.  
m  =   the month number.  
D  =  the last two digits of the year.  
C   =  the first two digits of the year.  
After finding the value of F , we simply divide it with 7. Keeping in mind that the value of F can be negative or positive, we proceed in following ways:  
- F is POSITIVE : Just divide by 7 and see the remainder.  
- F is NEGATIVE: After dividing by 7, add 7 to remainder which is negative.       

Then find the day as per following table:    
| SUNDAY |	MONDAY | TUESDAY |	WEDNESDAY |	THURSDAY |	FRIDAY |	SATURDAY |      
| ------ | ------- | ------- | ---------- | -------- | ------- | --------- |   
| 0	     | 1       | 2	     | 3	        | 4        | 5       |	6        |   

### IMPLEMENTATION IN CPP:  
Now we implement the above approach in cpp using OOPS concept:  
```cpp
#include <iostream>
#include <conio.h>
using namespace std;
class Day
{
      public:
             int k,m,D,C,F,R;                                              //Declaring variables 
             
                void input_elements()                                      //Taking variables' input from user.
                {
                    cout<<"enter the date number"<<endl;
                    cin>>k;
                    cout<<"enter the month number"<<endl;
                    cin>>m;
                    cout<<"enter the first two digits of the year"<<endl;
                    cin>>C;
                    cout<<"enter the last two digits of the year"<<endl;
                    cin>>D;
                }
             void Cal()                                                         
             {
                m=m-2;                                                     //m counts from March and ends on February.
                if(m <=0)
                {
                    m=m+12;
                    D=D-1;
                }
                     
                F= k+ (int)13*m-1/12+D + (int)D/4 + (int)C/4-2*C;          //Calculating value of F
                if(F >= 0)
                {
                    R=F%7;
                }
                else if(F<0)
                {
                    R=7-(F%(-7));
                }
                    
                          
                switch(R)                                                  //Defining Days as per respective values of R.
                {
                    case 0:
                        cout<<"Sunday"<<endl;
                        break;
                    case 4:
                        cout<<"Monday"<<endl;
                        break;
                    case 5:
                        cout<<"Tuesday"<<endl;
                        break;
                    case 6:
                        cout<<"Wednesday"<<endl;
                        break;
                    case 1:
                        cout<<"Thursday"<<endl;
                        break;
                    case 2:
                        cout<<"Friday"<<endl;
                        break;
                    case 3:
                        cout<<"Saturday"<<endl;
                        break;
                    default:
                        cout<<"try again"<<endl;
                        break;
                }
             }
             
};
      
int main()
{
    Day t;                                                            // Defining object t for class Day.
    t.input_elements();                                               // Function calling via object.
    t.Cal();
}
 ```  
### OUTPUT:  
Here we calculate day for 9 November 2021 .  
k= 9  
m= 11  
C= 20  
D= 21  
Desired changes have been made in code for finding the correct output.  

 ![image](https://user-images.githubusercontent.com/77229404/143466278-57fe1b53-f6c9-45b1-bad1-652603d40e6b.png)

### REFERENCES:
-[Beginnersbook](https://beginnersbook.com/2013/04/calculating-day-given-date/)
