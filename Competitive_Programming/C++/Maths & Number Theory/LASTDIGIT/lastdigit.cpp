#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
int t,a,ans;
long long int b;
scanf("%d",&t);
while(t--)
{
scanf("%d %lld",&a,&b);
if(a==0 && b>0)
ans=0;
else if(a>0 && b==0)
ans=1;
else
{
if(b%4==0)
b=4;
else
b=b%4;
long long int temp=pow(a,b);
ans=temp%10;

}

printf("%d\n",ans);
}
return 0;
}