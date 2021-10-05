
//time cpmplexity =o(n)
// space complexity=0(1)

BOTTOM_UP APPROACH:

#include<bits/stdc++.h>
using namespace std;
    int find(int arr[],int n){
    if(n==0) return 0;
    if(n==1) return arr[0];
    if(n==2) return max(arr[0],arr[1]);
       int curr;
    int prev1=max(arr[0],arr[1]);
    int prev2=arr[0];
   for(int i=2;i<n;i++){
      curr=max(prev1,arr[i]+prev2);
     prev2=prev1;
     prev1=curr;
     }
    return curr;

}



int main(){
int n; // total number of house
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){  // amount of money in every ith house
        cin>>a[i];
      
    }
cout<<find(a,n);
}
