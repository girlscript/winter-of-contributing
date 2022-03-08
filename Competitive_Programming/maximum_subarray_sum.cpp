// by using Kadane's Algorithm
//  O(n) //best time complexity

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll max(ll a , ll b){
    if(a>b){
        return a;
    }   
    return b;
}
int main(){


    ll n;
    cin>>n; // taking how many number ;
    ll * arr = new ll[n]; // declare a dynamic array;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];// taking input each element 
    }
    int maxSum = INT_MIN; 
    int csum = 0;// cumaltive sum
    for (int i = 0; i <n; i++)
    {
        csum +=arr[i];
        if(csum<0){
            csum =0; // if sum  become negative 
        }
        maxSum = max(csum, maxSum);
    }
    cout<<maxSum<<endl;
    delete []arr; // deletion of dynamic array 


    return 0;
}
