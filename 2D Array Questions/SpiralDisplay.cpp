/*
1. You are given a number n, representing the number of rows.
2. You are given a number m, representing the number of columns.
3. You are given n*m numbers, representing elements of 2d array a.
4. You are required to traverse and print the contents of the 2d array in form of a spiral.
Note - Please check the sample output for details.

1 <= n <= 10^2
1 <= m <= 10^2
-10^9 <= e1, e2, .. n * m elements <= 10^9

Sample Input

3
5
11
12
13
14
15
21
22
23
24
25
31
32
33
34
35

Sample Output

11
21
31
32
33
34
35
25
15
14
13
12
22
23
24

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n ,m;
     cin>>n>>m;
   int arr[n][m];
    for(int i = 0 ; i <n ; i++){
        for(int j=0 ; j<m ; j++){
             cin>>arr[i][j];
        }
   }
 

   // For Printing Values.
     int rmax = n-1;
     int rmin = 0;
     int cmin = 0;
     int cmax = m-1;

     int tnc = m*n;
     int count =0;

     while(count < tnc){
          //Left Boundary
          for(int row = rmin ; row<=rmax && count < tnc ; row++){
               cout<< arr[row][cmin]<<"\n";
               count++;
              
          } 
          cmin++;
          // Bottom Boundary
          for(int col = cmin ; col <=cmax && count < tnc ; col++){
               cout<<arr[rmax][col]<<"\n";
                count++;
          }
          rmax--;
          // Right Boundary
           for(int row = rmax ; row>=rmin && count < tnc  ; row--){
               cout<< arr[row][cmax]<<"\n";
                count++;
               
          }
          cmax--; 
         // Top Boundary
          for(int col = cmax ; col >=cmin && count < tnc  ; col--){
               cout<<arr[rmin][col]<<"\n";
                count++;
          }
          rmin++;
     }

  return 0;
}