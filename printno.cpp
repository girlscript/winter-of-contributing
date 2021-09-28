
#include<iostream>
using namespace std;

void printnos(int n)
{
    if(n>0)
    {
        printnos(n-1);
        cout<<n<<" ";
    }
    return;
}

int main(){
    int n;
    cin>>n;
    printnos(n);
    return(0);
}