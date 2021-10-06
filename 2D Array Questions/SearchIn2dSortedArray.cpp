/*
1. You are given a number n, representing the number of rows and columns of a square matrix.
2. You are given n * n numbers, representing elements of 2d array a. 
Note - Each row and column is sorted in increasing order.
3. You are given a number x.
4. You are required to find x in the matrix and print it's location int (row, col) format as discussed in output format below.
5. In case element is not found, print "Not Found".

Constraints

1 <= n <= 10^2
-10^9 <= e11, e12, .. n * m elements <= 10^9
All rows and columns are sorted in increasing order

Sample Input

4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44

43

Sample Output

3
2
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

     int data;
     cin >> data;

     // Brute Force Approch.
     //       int i1 , j1 , ct =false;
     //      for(int i= 0 ; i< n ; i++){
     //           for(int j = 0 ; j< n ;j++){
     //                if(arr[i][j] == data){
     //                     ct = true;
     //                     i1 = i;
     //                     j1 = j;

     //                }
     //           }
     //      }
     //     if(ct){
     //          cout<<i1<<endl<<j1;
     //     }else{
     //          cout<<"Not Found";
     //     }

     int i = n-1, j = 0;
     while (i >= 0 && j <= n - 1)
     {
          if (arr[i][j] == data)
          {
               cout << i << endl
                    << j;

               return 0;
          }
          else if (arr[i][j] < data)
          {
               j++;
          }
          else
          {
               i--;
          }
     }

     cout << "Not Found";

     return 0;
}