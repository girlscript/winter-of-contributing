# N Queen Problem

## Problem Statement
In this question we have to place the queens such that no queen should attack each other, the queens can attack
horizontally,vertically and diagonally.

## Backtracking
In backtracking, we start with one possible move out of many available moves. We then try to solve the problem.
If we are able to solve the problem with the selected move then we will print the solution.Else we will backtrack
and select some other move and try to solve it.

If none of the moves works out we claim that there is no solution for the problem.

## Approach
We start placing the queens in each row by finding the right place and if wrongly placed
we backtrack steps and re-arrange the queens.


## Algorithm for cpp language.

```cpp
//Header files
#include<iostream>
using namespace std;
int grid[10][10];



//Printing the solution
void print(int n) {
    for (int i = 0;i <= n-1; i++) {
        for (int j = 0;j <= n-1; j++) {
            
                cout <<grid[i][j]<< " ";
            
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}


//Checking the position for placing Queen
bool isSafe(int col, int row, int n) {
    for (int i = 0; i < row; i++) {
        if (grid[i][col]) {
            return false;
        }
    }
    for (int i = row,j = col;i >= 0 && j >= 0; i--,j--) {
        if (grid[i][j]) {
            return false;
        }
    }
    for (int i = row, j = col; i >= 0 && j < n; j++, i--) {
        if (grid[i][j]) {
            return false;
        }
    }
    return true;
}

//Solving the Problem
bool solve (int n, int row) {
    if (n == row) {
        print(n);
        return true;
    } 
    bool res = false;
    for (int i = 0;i <=n-1;i++) {
        if (isSafe(i, row, n)) {
            grid[row][i] = 1;
            res = solve(n, row+1) || res;
            grid[row][i] = 0;
        }
    }
    return res;
}


//Main function
int main()
{
        int n;
        cout<<"Enter the number of queen"<<endl;
        cin >> n;
        for (int i = 0;i < n;i++) {
            for (int j = 0;j < n;j++) {
                grid[i][j] = 0;
            }
        }
        bool res = solve(n, 0);
        if(res == false) {
            cout << -1 << endl;
        } else {
            cout << endl;
        }
  return 0;
}
```
  
## Output
```cpp  
Enter the number of queen
8
1 0 0 0 0 0 0 0 
0 0 0 0 1 0 0 0
0 0 0 0 0 0 0 1
0 0 0 0 0 1 0 0
0 0 1 0 0 0 0 0
0 0 0 0 0 0 1 0
0 1 0 0 0 0 0 0
0 0 0 1 0 0 0 0
```
  
