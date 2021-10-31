# Problem Statement
You are given a 2d array of dimensions n*m.
This array is filled with either 0 or 1. You can only move to cells which have 0 value in them. You can't move out of the boundaries or in the cells which have value 1 in them (1 means obstacle)  
Only four moves are allowed:  
**'t' (1-step up), 'l' (1-step left), 'd' (1-step down) 'r' (1-step right)** in the given order only.  
You are required to print all paths that can be used to move from top-left to bottom-right.

## Approach
* Here, we pass an empty boolean 2d array in the function as a parameter called "visited[ ][ ]" which has the dimensions same as are our input array.
* Before visiting a cell in the maze array , we mark the corresponding cell in the visited array " true" so that in the duration of the same path we don't visit the already visited cell again.

## CODE

```cpp
#include<iostream>
#include<vector>

using namespace std;
const int col = 11;                 

void floodfill(vector<vector<int>> maze,int rows,int columns,string ans,bool visited[][col]) {
    
    if(rows<0 || columns<0 || rows==maze.size() || columns == maze[0].size()|| maze[rows][columns]==1 || visited[rows]
    [columns]==true)                //BASE CONDITION I
    {
        return;
    }
    else if(rows==maze.size()-1 && columns==maze[0].size()-1)       //BASE CONDITION II
    {
        cout<<ans<<endl;
        return;
    }
    visited[rows][columns]=true;                            //MARKING VISITED BLOCKS
    floodfill(maze,rows-1,columns,ans+"t",visited);         //RECURSIVE CALL FOR MOVING IN UPWARD DIRECTION
    floodfill(maze,rows,columns-1,ans+"l",visited);         //RECURSIVE CALL FOR MOVING IN LEFT DIRECTION
    floodfill(maze,rows+1,columns,ans+"d",visited);         //RECURSIVE CALL FOR MOVING IN DOWNWARD DIRECTION
    floodfill(maze,rows,columns+1,ans+"r",visited);         //RECURSIVE CALL FOR MOVING IN RIGHT DIRECTION
    visited[rows][columns]=false;
    
}

int main() {
    int n, m;
    cin >> n >> m;
    vector < vector < int >> arr(n, vector < int > (m));    //CREATED VECTOR
    bool visited[n][col]={false};

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    floodfill(arr,0,0,"",visited);                          //FUNCTION CALL
    return 0;
}
```
## OUTPUT
```c
INPUT:
4 4 
0 0 0 0 
0 1 0 0
0 0 1 0 
0 0 0 0 

OUTPUT:
dddrrr
ddrdrr
rrdrdd
rrrddd
```
## TIME COMPLEXITY : O(4*n<sup>2</sup>) which can simply be written as O(n<sup>2</sup>)).
This is because each cell of the matrix is processed at most 4 times. For Example, a particular cell can be called by its top, down, left or right cell.

## SPACE COMPLEXITY : O(n<sup>2</sup>)
Since an extra 2D array is used for storing "visited" cells therefore the space complexity is quadratic.
