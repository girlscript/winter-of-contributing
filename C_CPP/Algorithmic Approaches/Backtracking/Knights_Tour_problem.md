# Problem Statement
Given a number n which represents the size of a chess board, and a row and a column, as a starting point for a knight piece, you are required to generate the all moves of a knight starting in (row, col) such that knight visits all cells of the board exactly once.
A knight should move according to the rules in chess. Please explore the next moves in the clockwise direction to get the same result as ours.  
## Approach :
* We are starting with the chess grid with all cells filled with 0 (empty cells). Now, we need to fill these cells so that the configuration becomes valid.  
* For every cell, we will try to place the knight (give the cell number with value = current move), and then call the recursive function for all the possible 8 moves as the next cell and move number greater by 1.  
* If the current cell is (r, c), then we will try for all possible 8 moves (in clockwise direction), i.e. in the order   
**(r-2, c+1), (r-1, c+2), (r+1, c+2), (r+2, c+1), (r+1, c-1), (r+1, c-2), (r-1, c-2) and (r-2, c-1)**.
* After making a move to one of the 8 possible, we will check if the current cell is valid or not, i.e. whether the value of the row or column has gone out of bound or not (< 0 or >= size of grid).  
* Also, the current move can be invalid if it had been already visited in any of the previous moves. This is because we are not allowed to visit any cell twice, i.e. we must visit every cell exactly once.  
 Hence, we will also return (invalid configuration), if the current cell is already filled with value > 0 (a move number).

 ## CODE
 ```cpp
#include <bits/stdc++.h>
using namespace std;

void display(vector<vector<int>> &chess)        //Function for printing knight moves
{
    for (auto i : chess)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void knightTour(vector<vector<int>> &chess, int r, int c, int move)
{
    if (r < 0 || c < 0 || r >= chess.size() || c >= chess[0].size() || chess[r][c] > 0)     //BASE CONDITION I
    {
        return;
    }
    else if (move == chess.size() * chess.size())          //BASE CONDITION II
    {
        chess[r][c] = move;
        display(chess);
        cout << endl;
        chess[r][c] = 0;
        return;
    }
    chess[r][c] = move;
    knightTour(chess, r - 2, c + 1, move + 1);          //RECURSIVE CALL FOR MOVING TWO STEPS DOWNWARD(2↓) 1 STEP RIGHT(1→)
    knightTour(chess, r - 1, c + 2, move + 1);          //RECURSIVE CALL FOR MOVING TWO STEPS DOWNWARD(1↓) 1 STEP RIGHT(2→)
    knightTour(chess, r + 1, c + 2, move + 1);          //RECURSIVE CALL FOR MOVING TWO STEPS UPWARD(1↑) 1 STEP RIGHT(2→)
    knightTour(chess, r + 2, c + 1, move + 1);          //RECURSIVE CALL FOR MOVING TWO STEPS UPWARD(2↑) 1 STEP RIGHT(1→)
    knightTour(chess, r + 2, c - 1, move + 1);          //RECURSIVE CALL FOR MOVING TWO STEPS UPWARD(2↑) 1 STEP LEFT(1←)
    knightTour(chess, r + 1, c - 2, move + 1);          //RECURSIVE CALL FOR MOVING TWO STEPS UPWARD(1↑) 1 STEP LEFT(2←)
    knightTour(chess, r - 1, c - 2, move + 1);          //RECURSIVE CALL FOR MOVING TWO STEPS DOWNWARD(1↓) 1 STEP LEFT(2←)
    knightTour(chess, r - 2, c - 1, move + 1);          //RECURSIVE CALL FOR MOVING TWO STEPS DOWNWARD(2↓) 1 STEP LEFT(1←)
    chess[r][c] = 0;
}

int main()
{
    int n, r, c;
    cin >> n >> r >> c;
    vector<vector<int>> chess(n, vector<int>(n, 0));
    knightTour(chess, r, c, 1);                 //Function Call
    return 0;
}
 ```

 ## TIME COMPEXITY : 
 For each cell, we have 8 decisions to choose from for each of the **n<Sup>2</sup>** cell, the time complexity will be 
 **O(8<sup>(n^2)</sup>)**.

 ## SPACE COMPLEXITY :
The maximum number of recursive calls/depth of the recursion tree can be equal to the number of cells. Hence the recursion stack call will take at max **O(n<sup>2</sup>)** space.  
However, we are not using any extra data structure, hence the solution is said to have **O(1)** auxiliary space.
