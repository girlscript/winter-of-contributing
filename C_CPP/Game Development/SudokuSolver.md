
# STATEMENT



**SUDOKU** is a maze of 9X9 grid, which is divided into 3X3 boxes.


There are some rules for the number maze problem that we have to follow.<br>
1. Numbers should be from 1-9.<br>
2. Each row and column of 9X9 should have the number once. <br>
3. Each 3X3 box should have the number once.<br>


### Header Files

```cpp
#include<iostream><br>
using namespace std;<br>
#define N 9<br>
```

### Input for Sudoku
   
```cpp
   int grid[N][N] = {
   {0, 0, 8, 0, 0, 5, 9, 0, 0}, 
   {4, 2, 9, 0, 6, 0, 1, 8, 0},
   {5, 0, 1, 0, 0, 8, 0, 7, 4},
   {6, 1, 0, 0, 4, 9, 8, 0, 0},
   {0, 5, 0, 0, 0, 0, 6, 0, 9},
   {9, 0, 4, 0, 0, 2, 0, 0, 1},
   {1, 0, 6, 0, 8, 0, 7, 5, 0},
   {7, 4, 0, 0, 0, 0, 0, 1, 0},
   {0, 0, 0, 0, 0, 7, 4, 9, 6}
};
```

**Checking if the number is present in the same column.**
   
```cpp
bool ispresentincol(int col, int num){ 
   for (int row = 0; row < N; row++)
      if (grid[row][col] == num)
         return true;
   return false;
}
```
**Checking if the number is present in the same row.**
```cpp
bool ispresentinrow(int row, int num){ 
   for (int col = 0; col < N; col++)
      if (grid[row][col] == num)
         return true;
   return false;
}
```
**Checking if the number is present in the same 3x3 grid**
 ```cpp
bool ispresentingrid(int boxStartRow, int boxStartCol, int num){
   for (int row = 0; row < 3; row++)
      for (int col = 0; col < 3; col++)
         if (grid[row+boxStartRow][col+boxStartCol] == num)
            return true;
   return false;
}
```
**Finding empty place in the sudoku.**
```cpp
bool findemptyspace(int &row, int &col){
   for (row = 0; row < N; row++)
      for (col = 0; col < N; col++)
         if (grid[row][col] == 0)
            return true;
   return false;
}
```
**Number is not present in the samr row,column and 3x3 grid.**
```cpp
bool isvalid(int row, int col, int num){
  return !ispresentinrow(row, num) && !ispresentincol(col, num) && !ispresentingrid(row - row%3 ,col - col%3, num);
}
```
**Solving the Sudoku**
```cpp
bool solveSudoku(){
   int row, col;
   if (!findemptyspace(row, col)
      return true; 
   for (int num = 1; num <= 9; num++){ 
      if (isvalid(row, col, num)){ 
         grid[row][col] = num;
         if (solveSudoku()) 
            return true;
         grid[row][col] = 0;
      }
   }
   return false;
}
```
**Printing the grid**
```cpp
void sudokuGrid(){ 
   for (int row = 0; row < N; row++){
      for (int col = 0; col < N; col++){
         if(col == 3 || col == 6)
            cout << "  ";
         cout << grid[row][col] <<" ";
      }
      if(row == 2 || row == 5){
         cout << endl;
         for(int i = 0; i<N; i++)
            cout << "   ";
      }
      cout << endl;
   }
}
```

**Executing the program**
   ```cpp
int main()
   if (solveSudoku() == true;
      sudokuGrid;
   else
      cout << "No Solution exists for this Sudoku;

```
### OUTPUT

| 3 | 7 | 8 | 4 | 1 | 5 | 9 | 6 | 2 |
|---|---|---|---|---|---|---|---|---|
| 4 | 2 | 9 | 7 | 6 | 3 | 1 | 8 | 5 |
| 5 | 6 | 1 | 9 | 2 | 8 | 3 | 7 | 4 |
| 6 | 1 | 3 | 5 | 4 | 9 | 8 | 2 | 7 |
| 2 | 5 | 7 | 8 | 3 | 1 | 6 | 4 | 9 |
| 9 | 8 | 4 | 6 | 7 | 2 | 5 | 3 | 1 |
| 1 | 9 | 6 | 2 | 8 | 4 | 7 | 5 | 3 |
| 7 | 4 | 5 | 3 | 9 | 6 | 2 | 1 | 8 |
| 8 | 3 | 2 | 1 | 5 | 7 | 4 | 9 | 6 |
