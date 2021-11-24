# N Queens Problem
N Queens problem is to place n queens in such a manner on an n x n chessboard that no queens attack each other by being in the same row, column or diagonal.

N queens problem is not applicable for n = 1, 2, 3 as n = 1 will generate a trivial solution and no solution exists for n = 2 and n = 3.

## Implementation of N Queens Problem in C++
We start by placing queens one by one in different columns, starting from the leftmost column. In the current column, if we find a row for which there is no clash, we mark this row and column as part of the solution. If we do not find such a row due to clashes, then we backtrack.

Now implementing the code for N queens problem, here lets take the value of n as 4 and see the possible output

</br>

```C++
#include<iostream>
using namespace std;
int n;
int board[100][100];
int attack(int i,int j)
{
    for(int k=0;k<n;k++)
    {
        if((board[i][k]==1)||(board[k][j]==1)) return 1;
    }
    for(int k=0;k<n;k++){
        for(int l=0;l<n;l++){
            if(((k+l)==(i+j)) || ((k-l)==(i-j)))
            {
                if(board[k][l]==1) return 1;
            }
        }
    }
    return 0;
}
int NQueen(int r)
{
    if(r==0)
    {
        return 1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((!attack(i,j))&&(board[i][j]!=1))
            {
                board[i][j]=1;
                if(NQueen(r-1)==1){
                    return 1;
                }
                board[i][j]=0;
            }
        }
    }
    return 0;
}
int main()
{
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            board[i][j]=0;
        }
    }
    NQueen(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==1)
            {
                cout<<"("<<i<<", "<<j<<")"<<endl;
            }
        }
    }
}
```
### Output

```
    Enter the value of n : 4
    (0, 1)
    (1 ,3)
    (2 ,0)
    (3 ,2)

```

---
From the above output we can see that one of possible outcome of 4-Queens problem is 
<div  align ="center">
    <img  src="https://geekstocode.com/wp-content/uploads/2020/03/NQueen.png" width="200" height="200">
    <p>Image Source:https://geekstocode.com/wp-content/uploads/2020/03/NQueen.png </p>
</div>

Similarly, we can find possible solutions for 5-Queens, 6-Queens, 8-Queens, and so on problems.