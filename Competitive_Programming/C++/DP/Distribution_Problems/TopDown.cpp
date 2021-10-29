// There are two friends and there are N packets,
// where i_th packet contains A_i amount of chocolates.
// Each packet should be given to exactly one of the friends. 
// Find the minimum difference between the number of chocolates of the two friends.

#include<bits/stdc++.h>
using namespace std;

#define _z ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long int
#define endl "\n"
#define mod 1000000007
#define pb_ push_back
#define mp_ make_pair

void solve() {
    int n, su=0, ans=mod;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
        su+=a[i];
    }
    int mat[su+1][n+1];
    for(int i=0; i<su+1; i++) {
        for(int j=0; j<=n; j++) {
            mat[i][j]=0;
        }
    }
    mat[0][0]=1;
    for(int i=0; i<=su; i++) {
        for(int j=0; j<=n; j++) {
            if(mat[i][j]) {
                int temp=su-i;
                ans=min(ans, abs(temp-i));
                if(i+a[j]<=su && j<n) mat[i+a[j]][j+1]=1;
                if(j<n) mat[i][j+1]=1;
            }
        }
    }
    cout<<ans<<endl;
}

int32_t main()
{
    _z; //Fast io
    int t=1; //Initialize number of test cases as 1
    //cin>>t;  // Use in case of multiple test cases
    while(t--) {
        solve(); //Call utility function for each test case
    }
}