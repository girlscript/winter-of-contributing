/*
Factorial Of a number

*/
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
     if(n==1) return n;
     else return n*fact(n-1);

}
int main()
{
     int n;
     cin>>n;
     int ans = fact(n);
     cout<<ans;

  return 0;
}