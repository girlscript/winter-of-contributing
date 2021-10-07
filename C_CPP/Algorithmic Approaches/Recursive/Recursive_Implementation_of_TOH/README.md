
# Recursive Implementation of Tower of Hanoi Problem.


## What is Tower of Hanoi Problem ?

![Tower of Hanoi](https://xp.io/storage/10gu6TNG.png)

Here in the diagram there are 3 towers given and in one of the tower there are some number of disks kept (there can be any number of disks).

Here the problem is we have to kept all the disks from tower A to tower C with the help of tower But. 
#### Note:- But here the condition is we have to move one disk at a time and we have to tranfer such that no larger disk is to be kept over a smaller disk.

### It seems to be a unsolvable problem ......???????

_But it can be solved by using Recursion_ :) 



## 1. Problem number 1

![picture](https://xp.io/storage/10gBK0aG.png) (Only Single Disk is there in Tower A)



Here it is simple just keep the disk to tower C and problem is solved .
![picture](https://xp.io/storage/10gLxrIU.png)

## 2. Problem number 2 

(Two disks are there in Tower A)
   * Move Disk 1. to Tower B.
   * Move Disk 2 to Tower C.
   * Then put disk 1 to tower C.

And here is the problem is sorted (having 2 disks) 
      
## If we have to solve the problem of 3 disks then ...???

We will move upper 2 disks by follwing the recurrsive approch (problem 2) method
![PIC](https://xp.io/storage/10o861Yd.png)

Now move the 1st disk by following problem 1 method
![pic](https://xp.io/storage/10omo1iD.png)
    
Now move two diskd of tower B to the tower C by using tower a
![pic](https://xp.io/storage/10ozEBxa.png)
   

  ### * Recursive Function for 3 disks problem
  ---
```
void TOH (int n, int A, int B, int c)
{
    if(n>0)
    {
        TOH(n-1, A, B, C);
        cout<<"from"<<A<<"to"<<C;
        TOH(n-1, B, A, C)
    }
}     
TOH(3, 1, 2, 3); 

 ```       

* ### By using this recursive function we got the moves for 3 disks to pass them to the Tower C  from A  

## Moves are :- 
(1,3)  (1,2)  (3,2)  (1,3)  (2,1)  (2,3)  (1,3)


# _Recursive Function for Tower of Hanoi Problem_ :-
---
---

```
#include <iostream>
using namespace std;
void TOH(int n,int A,int B,int C)
{
 if(n>0)
 {
    TOH(n-1,A,C,B);
    cout<<"\n"<<A<<C);
    TOH(n-1,B,A,C);
 }
}
int main()
{
    TOH(4,1,2,3);     //instead of 4 you can write any number i.e how many disks you have to move
    return 0;
}