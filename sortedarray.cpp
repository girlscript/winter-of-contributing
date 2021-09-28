#include<iostream>
using namespace std;

bool is_sorted(int a[], int size)
{
    if(size==0 || size==1)
    {
        return true;
    }
    if(a[0]>a[1])
    {
        return false;
    }
    bool issmallsorted=is_sorted(a+1,size-1);
    return issmallsorted;
}
int main()
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<is_sorted(a,size)<<endl;
    return(0);
}