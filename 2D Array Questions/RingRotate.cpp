/*
You are given a n*m matrix where n are the number of rows and m are the number of columns.
 You are also given n*m numbers representing the elements of the matrix.
You will be given a ring number 's' representing the ring of the matrix. For details, refer to image.

shell-rotate

You will be given a number 'r' representing number of rotations in an anti-clockwise manner
 of the specified ring.
You are required to rotate the 's'th ring by 'r' rotations and display the rotated matrix.


Constraints

1 <= n <= 10^2
1 <= m <= 10^2
-10^9 <= e11, e12, .. n * m elements <= 10^9
0 < s <= min(n, m) / 2
-10^9 <= r <= 10^9

Sample Input

5
7
11
12
13
14
15
16
17
21
22
23
24
25
26
27
31
32
33
34
35
36
37
41
42
43
44
45
46
47
51
52
53
54
55
56
57
2
3

Sample Output

11 12 13 14 15 16 17
21 25 26 36 46 45 27
31 24 33 34 35 44 37
41 23 22 32 42 43 47
51 52 53 54 55 56 57

*/

#include <bits/stdc++.h>
using namespace std;

void reverse1D(int arr1[], int n, int m)
{
     while (m > n)
     {
          int temp = arr1[n];
          arr1[n] = arr1[m];
          arr1[m] = temp;
          n++;
          m--;
     }
}

void Rotate1D(int arr1[], int m, int k)
{
     k = k % m;
     if (k < 0)
     {
          k += m;
     }
     reverse1D(arr1, 0, m - 1);
     reverse1D(arr1, 0, k - 1);
     reverse1D(arr1, k, m - 1);
}

int main()
{
     int n, m;
     cin >> n >> m;
     int arr[n][m];
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               cin >> arr[i][j];
          }
     }

     int s, K;
     cin >> s >> K;

     int rmax = n - s;
     int cmax = m - s;
     int rmin = s - 1;
     int cmin = s - 1;

     int size1 = 2 * (cmax - cmin) + 2 * (rmax - rmin);
     int arr1[size1];
     int idx = 0;

     // Taking value of 1d array from 2d array for left boundary.
     for (int i = rmin; i <= rmax; i++)
     {

          arr1[idx] = arr[i][cmin];
          idx++;
     }
     cmin++;

     // For bottom.
     for (int i = cmin; i <= cmax; i++)
     {

          arr1[idx] = arr[rmax][i];
          idx++;
     }
     rmax--;

     // For Right
     for (int i = rmax; i >= rmin; i--)
     {

          arr1[idx] = arr[i][cmax];
          idx++;
     }
     cmax--;

     // For Top
     for (int i = cmax; i >= cmin; i--)
     {

          arr1[idx] = arr[rmin][i];
          idx++;
     }

     // Rotate that value for k times
     Rotate1D(arr1, size1, K);


     // Printing 1d Reversed Array  just for checking Purpose.
     // for (int i : arr1)
     // {
     //      cout << i << "\t";
     // }
      
     
     // Filling That value to 2d array  from 1d Array.
     rmax = n - s;
     cmax = m - s;
     rmin = s - 1;
     cmin = s - 1;
     idx = 0;

     // filling value of 2d array from 1d array for left boundary.
     for (int i = rmin; i <= rmax; i++)
     {

           arr[i][cmin]= arr1[idx];
          idx++;
     }
     cmin++;

     // For bottom.
     for (int i = cmin; i <= cmax; i++)
     {

          arr[rmax][i] = arr1[idx];
          idx++;
     }
     rmax--;

     // For Right
     for (int i = rmax; i >= rmin; i--)
     {

          arr[i][cmax] = arr1[idx];
          idx++;
     }
     cmax--;

     // For Top
     for (int i = cmax; i >= cmin; i--)
     {

          arr[rmin][i] = arr1[idx];
          idx++;
     }

   //  Displaying Array.
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               cout << arr[i][j] << " ";
          }
          cout << endl;
     }

     return 0;
}

