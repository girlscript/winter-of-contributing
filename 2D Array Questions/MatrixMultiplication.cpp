/*
1. You are given a number n1, representing the number of rows of 1st matrix.
2. You are given a number m1, representing the number of columns of 1st matrix.
3. You are given n1*m1 numbers, representing elements of 2d array a1.
4. You are given a number n2, representing the number of rows of 2nd matrix.
5. You are given a number m2, representing the number of columns of 2nd matrix.
6. You are given n2*m2 numbers, representing elements of 2d array a2.
7. If the two arrays representing two matrices of dimensions n1 * m1 and n2 * m2 can be multiplied, 
display the contents of prd array as specified in output Format.
8. If the two arrays can't be multiplied, print "Invalid input".

Constraints

1 <= n1 <= 10^2
1 <= m1 <= 10^2
-10^9 <= e11, e12, .. n1 * m1 elements <= 10^9
1 <= n2 <= 10^2
1 <= m2 <= 10^2
-10^9 <= e11', e12', .. n2 * m2 elements <= 10^9

Sample Input

2
3
10 0 0 
0 20 0 
3
4
1 0 1 0
0 1 1 2
1 1 0 0

Sample Output

10 0 10 0
0 20 20 40

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n1  , m1;
     cin>>n1>>m1;
     int arr1[n1][m1];
     for(int i =0 ; i<n1 ; i++){
          for(int j = 0 ; j<m1 ; j++){
               cin>>arr1[i][j];
          }
     }

     int n2  , m2;
     cin>>n2>>m2;
     int arr2[n2][m2];
     for(int i =0 ; i<n2 ; i++){
          for(int j = 0 ; j<m2 ; j++){
               cin>>arr2[i][j];
          }
     }

    

     if(m1 != n2 ){
          cout<<"Invalid input";
     }else{
          int n3 = n1;
          int m3 = m2;
          int arr3[n3][m3];
          for(int i = 0 ; i<n1 ; i++){
               for(int j = 0 ; j<m2 ; j++){
                    int ans = 0;
                  for(int k = 0 ; k<m1 ; k++){
                       ans += arr1[i][k]* arr2[k][j];
                  }
                  arr3[i][j] = ans;
               }
          }
          for(int i = 0 ; i <n3 ; i++){
               for(int j =0 ; j<m3 ; j++){
                    cout<<arr3[i][j]<<" ";
               }
               cout<<endl;
          }
         
     }

     
}    