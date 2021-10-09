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
 
### "Whenever the solution leads you to a wrong solution then just backtrack and choose a different solution"  
 
### Question on ***Backtracking***  
 
 **1 Rat in a Maze**   
 A Maze is given as N*N binary matrix of blocks where the starting position is the upper left most block i.e., maze[0][0]  
  and destination block is lower rightmost block i.e., maze[N-1][N-1]. A rat starts from the starting position and has to reach the final destination.  
 The rat can move only in two directions: **forward** and **down.**  
 In the maze matrix, **0** means the **block can not be used** end and **1** means the block can be **used** in the path from stat position to destination.  
 ![alt text](https://www.geeksforgeeks.org/wp-content/uploads/ratinmaze_filled11.png)
  
  > White blocks are the blocks depicted by 1.       
### Input
 Following is a binary matrix representation of the above maze. 

> {1, 0, 0, 0}  
> {1, 1, 0, 1}  
> {0, 1, 0, 0}  
> {1, 1, 1, 1}    

  ![alt text](https://www.geeksforgeeks.org/wp-content/uploads/ratinmaze_filled_path1.png)
  > The Green line in the above image shows the path which the rat has to follow  
  
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
    int maze[4][4], int x,
    int y, int ans[4][4]);

 
/* A utility function to check if x,
y is valid index for N*N maze */
bool isSafe(int maze[4][4], int x, int y)
{
    // if (x, y outside maze) return false
    if (
        x >= 0 && x < 4 && y >= 0
        && y < 4 && maze[x][y] == 1)
        return true;
 
    return false;
}
 
/* A recursive utility function
to solve Maze problem */
bool solveMaze(
    int maze[4][4], int x,
    int y, int ans[4][4])
{
    if (x == 4 - 1 && y == 4 - 1
        && maze[x][y] == 1) {
        ans[x][y] = 1;
        return true;
    }
 
    // Check if maze[x][y] is valid
    if (isSafe(maze, x, y) == true) {
          // Check if the current block is already part of solution path.   
          if (ans[x][y] == 1)
              return false;
       
        // mark x, y as part of solution path
        ans[x][y] = 1;
 
        /* Move forward in x direction */
        if (solveMaze(maze, x + 1, y, ans) == true)
            return true;
 
        /* If moving in x direction
        doesn't give solution then
        Move down in y direction */
        if (solveMaze(
                maze, x, y + 1, ans)
            == true)
            return true;
       
        /* If none of the above movements
        work then BACKTRACK: unmark
        x, y as part of solution path */
        ans[x][y] = 0;
        return false;
    }
 
    return false;
}
 
// driver program to test above function
int main()
{
    int maze[4][4] = { { 1, 0, 0, 0 },
                    { 1, 1, 0, 1 },
                    { 0, 1, 0, 0 },
                    { 1, 1, 1, 1 } };
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
>1  1  0  0  
> 0  1  0  0   
>0  1  1  1    

### Complexity Analysis: 

**Time Complexity: O(2^(n^2)).**   
**Space Complexity: O(n^2).**
