/*
1. You are given a square matrix of size 'n'. You are given n*n elements of the square matrix. 
2. You are required to find the saddle price of the given matrix and print the saddle price. 
3. The saddle price is defined as the least price in the row but the maximum price in the column of the matrix.

Constraints

1 <= n <= 10^2
-10^9 <= e11, e12, .. n * m elements <= 10^9

Sample Input

4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44

Sample Output

41
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin >> n;
     int arr[n][n];
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
               cin >> arr[i][j];
          }
     }

     for (int i = 0; i < n; i++)
     {
          // Find Minimum Element
          int minelmt = arr[i][0];
          int cno = 0;

          for (int j = 0; j < n; j++)
          {

               if (arr[i][j] < minelmt)
               {
                    minelmt = arr[i][j];
                    cno = j;
               }
          }

          // For checking Is Any greater element in that column
          int ve = true;
          for (int col = 0; col < n; col++)
          {
               if (arr[col][cno] > minelmt)
               {
                    ve = false;
                    break;
               }
          }
          if(ve){
               cout<<minelmt<<endl;
              return 0;
          }
     }
     cout<<"Invalid input"<<endl;

  return 0;
}