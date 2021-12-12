* ### Recursive Function for 3 disks problem
  ---
```
void TOH (int n, int A, int B, int c)     //function is created
{
    if(n>0)
    {
        TOH(n-1, A, B, C);         //function calling
        cout<<"from"<<A<<"to"<<C;
        TOH(n-1, B, A, C)          //function calling
    }
}     
TOH(3, 1, 2, 3); 

 ```       

* ### By using this recursive function we got the moves for 3 disks to pass them to the Tower C  from A  

## Moves are :- 
(1,3)  (1,2)  (3,2)  (1,3)  (2,1)  (2,3)  (1,3)


# Implementation for Tower of Hanoi problem :-
---
---

```
#include <iostream>
using namespace std;
void TOH(int n,int A,int B,int C)  //creating a function here
{
 if(n>0)
 {
    TOH(n-1,A,C,B);      //function calling
    cout<<"\n"<<A<<C);
    TOH(n-1,B,A,C);       //function calling
 }
}
int main()
{
    TOH(4,1,2,3);     //instead of 4 you can write any number i.e how many disks you have to move
    return 0;
}
