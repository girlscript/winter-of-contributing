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
 A square matrix named maze is given to you.The blocks which can be used are denoted by 1 and rest by 0  
 **Brute force Approach**  
 In backtracking we used to try each and every **possible solution** to reach our destination and at the end we find the correct solution.
 In the same manner for this question we have two directions in which the rat can move,**forward** and **downward**.
 Here to reach from the source to destination the rat will first try to move in the forward direction if the block ahead will be 1 then that solution will be  
 added to the solution,else the rat will backtrack from that block to its initial position and try another option i.e. move downwards. 
### Algorithm  
  - Take the matrix maze as input
  - Make a solutions array an initialize with 0 
  - traverse through the maze and check whether the block is safe or not
  - Mark 1 for those blocks which are in your solution
  - If any block takes you to wrong position then set that block to 0 again 
  
### Code
```c++

#include <iostream>
#include<vector>
using namespace std;


bool issafe (vector < vector < int >>maze, int x, int y, int m, int n)
{	// the boolean function issafe is checking whether the block at x,y index is safe or not                                              {                                       //check whether the index lie inside the maze and is it 1 or not
  if (x >= 0 && x < m && y >= 0 && y < n && maze[x][y] == 1)
    return true;
  return false;
}

bool solution (vector < vector < int >>maze, int x, int y, vector < vector < int >>&ans, int m, int n)	//here x and y are storing the current position of rat
{
  if (x == m - 1 && y == n - 1 && maze[x][y] == 1)
    {
      ans[x][y] = 1;
      return true;
    }
  if (issafe (maze, x, y, m, n) == true)
    {
      if (ans[x][y] == 1)
	    return false;
      ans[x][y] = 1;

      if (solution (maze, x + 1, y, ans, m, n) == true)	//if the solution for moving one block forward is true then return true
	    return true;
      if (solution (maze, x, y + 1, ans, m, n) == true)	//if the solution for moving one block downward is true then return true
	    return true;
      ans[x][y] = 0;		//if either of them is not true means the current block is not the correct solution so backtrack from it by marking it 0
      return false;
    }

  return false;
}

int main ()
{

  int m, n;
  cout << "Enter number of rows\n";
  cin >> m;
  cout << "Enter number of columns\n";
  cin >> n;
  vector < vector < int >>maze (n, vector < int >(m));
  for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
	{
	  int element;
	  cin >> element;
	  maze[i][j] = element;
	}
    }
  vector < vector < int >>sol (n, vector < int >(m));
  for (int row = 0; row < m; row++)
    {
      for (int col = 0; col < n; col++)
	{
	  sol[row][col] = 0;	// initialized each element of solution to 0 initially
	}
    }
  bool answer = solution (maze, 0, 0, sol, m, n);	//solution is taking the maze and solution array  
  // and starting and ending positions in the maze i.e. 0,0
  if (answer == false)		// if false is returned by solution it means no path to destination exists
    cout << "Solution does not exists";
  else
    {
      for (int i = 0; i < sol.size (); i++)
	{
	  for (int j = 0; j < sol[i].size (); j++)
	    cout << sol[i][j];
	  cout << "\n";
	}
    }
  return 0;
}
```
**Input**
>Enter number of rows  
>2  
>Enter number of columns  
>2  
>1 1 0 1   
    
**Output:**    
>1 1  
>0 1    

### Complexity Analysis: 

**Time Complexity: O(2<sup>(n<sup>2</sup>)</sup>).**   
**Space Complexity: O(n<sup>2</sup>).**
