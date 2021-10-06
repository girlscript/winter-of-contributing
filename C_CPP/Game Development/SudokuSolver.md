<h3>
STATEMENT</h3><br>

<p>SUDOKU is a maze of 9X9 grid,which is divided into 3X3 boxes.<br>
There are some rules for the number maze problem that we have to follow.<br>
1. Numbers should be from 1-9.<br>
2. Each row and column of 9X9 should have the number once. <br>
3. Each 3X3 box should have the number once.<br>
</p>
<h2>This is the code section.</h2>
#include <iostream><br>
using namespace std;<br>
#define N 9<br>
<h3>Input for Sudoku</h3>
<p>int grid[N][N] = {
   {0, 0, 8, 0, 0, 5, 9, 0, 0},<br>  
   {4, 2, 9, 0, 6, 0, 1, 8, 0},<br>
   {5, 0, 1, 0, 0, 8, 0, 7, 4},<br>
   {6, 1, 0, 0, 4, 9, 8, 0, 0},<br>
   {0, 5, 0, 0, 0, 0, 6, 0, 9},<br>
   {9, 0, 4, 0, 0, 2, 0, 0, 1},<br>
   {1, 0, 6, 0, 8, 0, 7, 5, 0},<br>
   {7, 4, 0, 0, 0, 0, 0, 1, 0},<br>
   {0, 0, 0, 0, 0, 7, 4, 9, 6}<br>
};<br>
</p><br>
<br>
<br>
   <b>Checking if the number is present in the same column.</b><br>
<p>bool ispresentincol(int col, int num){ <br>
   for (int row = 0; row < N; row++)<br>
      if (grid[row][col] == num)<br>
         return true;<br>
   return false;<br>
}<br>
</p>

<br>
<b>Checking if the number is present in the same row.</b><br>
<p>bool ispresentinrow(int row, int num){ <br>
   for (int col = 0; col < N; col++)<br>
      if (grid[row][col] == num)<br>
         return true;<br>
   return false;<br>
}<br>
</p>
<br>

<b>Checking if the number is present in the same 3x3 grid</b>.<br>
<p>bool ispresentingrid(int boxStartRow, int boxStartCol, int num){<br>
   for (int row = 0; row < 3; row++)<br>
      for (int col = 0; col < 3; col++)<br>
         if (grid[row+boxStartRow][col+boxStartCol] == num)<br>
            return true;<br>
   return false;<br>
}<br>
</p>

<br>
<b>Finding empty place in the sudoku.</b><br>
bool findemptyspace(int &row, int &col){ <br>
   for (row = 0; row < N; row++)<br>
      for (col = 0; col < N; col++)<br>
         if (grid[row][col] == 0)<br> 
            return true;<br>
   return false;<br>
}<br>


<br>
<b>Number is not present in the samr row,column and 3x3 grid.</b><br>
bool isvalid(int row, int col, int num){<br>
  return !ispresentinrow(row, num) && !ispresentincol(col, num) && !ispresentingrid(row - row%3 ,col - col%3, num);<br>
}<br>
<br>

<b>Solving the Sudoku</b><br>
bool solveSudoku(){<br>
   int row, col;<br>
   if (!findemptyspace(row, col))<br>
      return true; <br>
   for (int num = 1; num <= 9; num++){ <br>
      if (isvalid(row, col, num)){ <br>
         grid[row][col] = num;<br>
         if (solveSudoku()) <br>
            return true;<br>
         grid[row][col] = 0;<br>
      }<br>
   }<br>
   return false;<br>
}<br>

<br>
<b>Printing the grid</b><br>
void sudokuGrid(){ <br>
   for (int row = 0; row < N; row++){<br>
      for (int col = 0; col < N; col++){<br>
         if(col == 3 || col == 6)<br>
            cout << "  ";<br>
         cout << grid[row][col] <<" ";<br>
      }<br>
      if(row == 2 || row == 5){<br>
         cout << endl;<br>
         for(int i = 0; i<N; i++)<br>
            cout << "   ";<br>
      }<br>
      cout << endl;<br>
   }<br>
}<br>
<br>


int main(){<br>
   if (solveSudoku() == true)<br>
      sudokuGrid();<br>
   else<br>
      cout << "No Solution exists for this Sudoku.";<br>
}<br>
<br>
<h3> OUTPUT</h3><br>
3 7 8   4 1 5   9 6 2<br>
4 2 9   7 6 3   1 8 5 <br>
5 6 1   9 2 8   3 7 4<br>

6 1 3   5 4 9   8 2 7<br>
2 5 7   8 3 1   6 4 9<br>
9 8 4   6 7 2   5 3 1<br>

1 9 6   2 8 4   7 5 3<br>
7 4 5   3 9 6   2 1 8<br>
8 3 2   1 5 7   4 9 6
