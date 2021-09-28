//Print nth fibonacci no. using recurion 

#include<iostream>
using namespace std;

int fib(int n ){
    if(n==0)
    return 0;
    if(n==1)
    return 1;

    int prevfib1=fib(n-1);
    int prevfib2=fib(n-2);
    return prevfib1 +prevfib2;
}

int main()
{
    int n ;
    cin>>n;
    cout<<fib(n)<<endl;
    return (0);
}