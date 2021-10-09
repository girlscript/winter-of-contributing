# Backtracking Algorithms

### What is meant by "Backtracking" ?
- Backtracking means to retrace one's steps.
- Backtracking Algorithm is an algorithm implemented using recursion for solving problems.
- Backtracking technique is simply based upon the idea that you take a step and then if that step is not fulfilling the constraints 
  then you take that step back and choose another step,Means you backtrack.  
  
**For Example**  
You encountered with four gates with different paths ,and you don't know which gate will take you to the correct position,  
So what you will do is open the gates one by one if you get the right one then you will go ahead and if not then you will move back and choose another gate,   
Means you just backtrack from using that step and then choose another step.  
 
 
### Question on ***Backtracking***  
 
 **1 Rat in a Maze**   
 A maze of size N*N size is given to you.The blocks which can be used are denoted by 1 and rest by 0
 
### Input

> {1, 0, 1, 0}  
> {1, 1, 1, 1}  
> {0, 1, 0, 1}  
> {1, 1, 0, 1}    
  
  
### Algoirithm  
  - Take the matrix maze as input
  - Make a solutions array an initialize with 0 
  - traverse through the maze and check whether the block is safe or not
  - Mark 1 for those blocks which are in your solution
  - If any block takes you to wrong position then set that block to 0 again 
  
### Code
```c++
#include <iostream>

bool solveMaze(
    int maze[4][4],
     int ans[4][4],int x,int y);  
bool isSafe(int maze[4][4], int x, int y)
{
  if ( x >= 0 && x < 4 && y >= 0 && y < 4 && maze[x][y] == 1)
        return true;
 
    return false;
}
bool solveMaze(int maze[4][4], int ans[4][4],int x,int y)
{
    if (x == 4 - 1 && y == 4 - 1 && maze[x][y] == 1) {
        ans[x][y] = 1;
        return true;
    }
    if (issafe(maze, x, y) == true) {
          if (ans[x][y] == 1)
              return false;
        ans[x][y] = 1;
 
        if (solveMaze(maze,ans, x + 1, y) == true)
            return true;
        if (solveMaze( maze,ans, x, y + 1)== true)
            return true;
        ans[x][y] = 0;
        return false;
    }
 
    return false;
}
int main()
{
    int maze[4][4] = { { 1, 0, 1, 0 },
                    { 1, 1, 1, 1 },
                    { 0, 1, 0, 1 },
                    { 1, 1, 0, 1 } };
  int ans[4][4] = { { 0, 0, 0, 0 },
                    { 0, 0, 0, 0 },
                    { 0, 0, 0, 0 },
                    { 0, 0, 0, 0 } };
    bool sol=solveMaze(maze,0,0,ans);
    if(sol==false)
    cout<<"Solution does not exists";
    else
    { for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            cout<<ans[i][j];
        cout<<"\n";
        }
    }
    return 0;
}
```
**Output:** 
>The 1 values show the path for rat   
> 1  0  0  0  
>1  1  1  1  
> 0  0  0  1   
>0  0  0  1    

### Complexity Analysis: 

**Time Complexity: O(2^(n^2)).**   
**Space Complexity: O(n^2).**
