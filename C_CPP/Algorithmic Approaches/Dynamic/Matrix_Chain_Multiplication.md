# Matrix Chain Multiplication 
Dynamic Programming is the optimized formed of any recursive code.The idea of this is same as recursive code that is calculate the subproblems first store the results of subproblems and whenever same problem encounter return stored result of that subproblems.

## Problem Explanation
We have given sequence of matrices and we have to find the most efficient way to multiply these matrices . We have to find merely order in which matrices should be multiplied.
- Example
```
Suppose A = 20 x 10 , B = 10 x 30 and C = 30 x 40

(AB)C = (20 x 10 x 30) + (20 x 10 x 40) = 14000
A(BC) = (10 x 30 x 40 ) + ( 20 x 30 x 40) = 36000

```

## Recursive Method

```cpp
#include<iostream>
using namespace std;
const int N=1e7+10; 

int mcm_recursion(int a[],int i,int j){
    // This is the base condition
    if(i>=j)
    return 0;

    int count=0,ans=N;

    for(int k=i;k<=j-1;k++){

     //Here a[i-1]*a[k]*a[j] is the cost of multiplying the matrices and we are breaking the array of matrix as i to k and k+1 to j

     count= mcm_recursion(a,i,k) + mcm_recursion(a,k+1,j) + (a[i-1]*a[k]*a[j]);

     ans=min(ans,count); // Finding the efficient way in which cost or operation is less.
    }

    return ans;
}

int main(){
  
  int a[]={1,2,3,4,3}; 

  int n=sizeof(a)/sizeof(a[0]);

  int i=1; // As we have to start with 1st index not with zero
  
  cout<<"The efficent Multiplication is : "<<mcm_recursion(a,1,n-1);
  
  return 0;
}
```
Output :
```
The efficent Multiplication is : 30
```
### Time Complexity
*Exponential* time complexity

### Space Complexity
*O(N)* Where N is number of matrices 

## Memorized Method
```cpp
#include<iostream>
using namespace std;
const int N=1e7+10; 
int dp[1000][1000];

int mcm_memorized(int a[],int i,int j){
    if(i>=j)
    return 0;

    // If their is call for same which we have calculated before it returned from here only
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    dp[i][j]=N;

    for(int k=i;k<=j-1;k++){
        // Memorizing the subproblems output
        dp[i][j] = min(dp[i][j],mcm_memorized(a,i,k) + mcm_memorized(a,k+1,j) + (a[i-1]*a[k]*a[j]));
    }

    return dp[i][j];
}

int main(){
  for(int i=0;i<1000;i++){
      for(int j=0;j<1000;j++){
          dp[i][j]=-1;
      }
  }

  int a[]={1,2,3,4,3};
  int n=sizeof(a)/sizeof(a[0]);
  int i=1; // As we have to start with 1st index not with zero
  cout<<"The efficent Multiplication is : "<<mcm_memorized(a,1,n-1);
  

    return 0;
}
```
Output :
```
The efficent Multiplication is : 30
```
### Time Complexity
*Exponential* time complexity.

### Space Complexity
*O(N)* Where N is number of matrices.

## Dynamic Programming ( Top Down DP )

```cpp
#include <iostream>
using namespace std;
const int N=1e7+10;

int mcm_dp(int a[], int n)
{
 
    // We take one extra column are allocated in m in which first row that is 0th row and 0th column of m are not used
    int dp[n][n];
 
    int j;
 

 
    // cost is zero when we are multiplying one matrix.
    for (int i = 1; i < n; i++)
        dp[i][i] = 0;
 
    // M is the length of chain 
    for (int M = 2; M < n; M++)
    {
        for (int i = 1; i < n - M + 1; i++)
        {
            j = i + M - 1;
            dp[i][j] = N;
            for (int k = i; k <= j - 1; k++)
            {
                dp[i][j] = min(dp[i][j],dp[i][k] + dp[k + 1][j] + (a[i - 1] * a[k] * a[j]));
            }
        }
    }
 
    return dp[1][n - 1];
}
 
int main()
{
    int a[] = { 1, 2, 3, 4 , 3};
    int n = sizeof(a) / sizeof(a[0]);
 
    cout << "The efficent Multiplication is : "<< mcm_dp(a, n);
 
    return 0;
}
```
Output :
```
The efficent Multiplication is : 30
```
### Time Complexity
*O(N^3)* Where N is number of matrices

### Space Complexity
*O(N^2)* Where N is number of matrices
