**TOWER OF HANOI**

The Tower of Hanoi is a mathematical Puzzle that consists of three towers(pegs) and multiple disks. Initially, all the disks are placed on one rod. And this disks are arranged on one over the other in ascending order of size.

=>Our Objective is to move all disks from initial tower to another tower without violating the rule.

=>There are some rules which needs to be followed at the time of solving this puzzle.

1) Only one disk can be moved at a time.
2) A disk can only be moved if it is the uppermost disk in the pole.
3) A larger disk can't be placed on a smaller disk.
<hr></hr>

 **:arrow_right:Working:-**<br>
 
 If there are n disks then the minimum steps taken to solve the problem will be 2^n−1 steps.<br>

**:arrow_right:Pictorial Representation of How Tower of Hanoi works:-**<br>

Let’s see the below example where we have 3 disks that have to move in the destination tower which is the middle one with the help of the auxiliary tower.Therefore the minimum steps required to move the disks in the destination tower will be 2^n-1 i.e 2^3-1=7.


![structure-de-donnees-et-algorithmes-tour-de-hanoi-4](https://user-images.githubusercontent.com/72224843/140602551-e789416a-cd9d-47a0-9a00-1d76b6d36339.gif)<br>
      <p>&nbsp;&nbsp; &nbsp;  ***Source***&nbsp;&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;***Destination***&nbsp;&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;***Auxiliary***</p>

Step 1:-Move disk 1 from tower source to tower destination<br>
Step 2:-Move disk 2 from tower source to tower auxiliary<br>
Step 3:-Move disk 1 from tower destination to tower auxiliary<br>
Step 4:-Move disk 3 from tower source to tower destination<br>
Step 5:-Move disk 1 from tower auxiliary to tower source<br>
Step 6:-Move disk 2 from tower auxiliary to tower destination<br>
Step 7:-Move disk 1 from tower source to tower destination
<hr></hr>

**:arrow_right:Iterative Solution using Stack(C++ Code):-**
```
   #include<bits/stdc++.h>
   using namespace std;

   class toh{                             //To make a variable which can keep a track of source, auxiliary and destination pole.
       public:
         char from;
         char to;
         char aux;
         int n;
   };

   void towerOfHanoi(int n, char source, char auxiliary, char destination){

        stack<toh> st;                    //Declaring a stack. 

        while(n>=1 or !st.empty()){
            while(n>=1){                 //Save the current state and move to  the towerOfHanoi(n-1,source,destination,auxiliary).

                toh cur;
                cur.from=source;
                cur.aux=auxiliary;              
                cur.to=destination;
                cur.n=n;
                st.push(cur);
                swap(destination,auxiliary);
                n--;
            }

            toh cur = st.top();
            st.pop();
            cout << "Move disk " << cur.n << " from rod " << cur.from << " to rod " << cur.to << endl; 

            if(cur.n>=1){
                source=cur.aux;           // Simulates the towerOfHanoi(n-1,auxiliary,source,destination) of Recursive Step.
                auxiliary=cur.from;            
                destination=cur.to;
                n=cur.n-1; 
           }
    }
}

int main(){
     int n;                             // Number of disks.
     cin>>n;
     towerOfHanoi(n,'A','B','C');

     return 0;
}
```
```
Output(For n=3):-
Move disk 1 from rod A to rod C
Move disk 2 from rod A to rod B
Move disk 1 from rod C to rod B
Move disk 3 from rod A to rod C
Move disk 1 from rod B to rod A
Move disk 2 from rod B to rod C
Move disk 1 from rod A to rod C
```

**Time Complexity :** O(2^N)<br>
This is same as recursive approach because the basic idea and logic is same.<br>

**Space Complexity :** O(2^N)<br>
This is due to the stack size.<br>
<hr></hr>

**:arrow_right:References:-**<br>
https://www.geeksforgeeks.org/iterative-tower-of-hanoi/<br>
https://www.tutorialcup.com/interview/stack/iterative-tower-of-hanoi.htm<br>
https://www.hebergementwebs.com/data-structures-and-algorithms/data-structure-and-algorithms-tower-of-hanoi<br>

