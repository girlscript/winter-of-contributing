/*


1. You are given a number x.
2. You are given another number n.
3. You are required to calculate x raised to the power n. Don't change the signature of power function.

Note1 -> The previous version expects the call stack to be of n height.
 This function expects call function to be only log(n) high.

Note2 -> The online judge can't force you to write the function recursively but that is what the 
spirit of question is. Write recursive and not iterative logic. 
The purpose of the question is to aid learning recursion and not test you.


Constraints

1 <= x <= 10
0 <= n <= 9

Sample Input

2
5

Sample Output

32

*/

#include<bits/stdc++.h>
using namespace std;
int fact(int x , int n)
{
     if(n==0) return 1;

     int pnb2 = fact(x , n>>1);  // n>>1 , right sift opeator equal to n/2.
     int pn = (pnb2*pnb2 );
     if(n%2 !=0){
          pn *=x;
     }
     return pn;
}
int main()
{
      int x,n;
     cin>>x>>n;
     int ans = fact(x,n);
     cout<<ans<<endl;

  
   
  return 0;
}