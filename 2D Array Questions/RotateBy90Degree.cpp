/*
1. You are given a number n, representing the number of rows and number of columns.
2. You are given n*n numbers, representing elements of 2d array a.
3. You are required to rotate the matrix by 90 degree clockwise and then display the contents using display function.
*Note - you are required to do it in-place i.e. no extra space should be used to achieve it .*

Constraints

1 <= n <= 10^2
-10^9 <= e1, e2, .. n * n elements <= 10^9

Sample Input

4
11
12
13
14
21
22
23
24
31
32
33
34
41
42
43
44

Sample Output

41 31 21 11
42 32 22 12
43 33 23 13
44 34 24 14

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

     for (int i = 0; i < n - 1; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               int temp = arr[i][j];
               arr[i][j] = arr[j][i];
               arr[j][i] = temp;
          }
     }

     int end = n - 1;
     int st = 0;
     while (end >= st)
     {
          for (int i = 0; i < n; i++)
          {
               int temp = arr[i][st];
               arr[i][st] = arr[i][end];
               arr[i][end] = temp;
          }
          end--;
          st++;
     }
     

     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
               cout << arr[i][j] << " ";
          }
          cout << endl;
     }

     return 0;
}