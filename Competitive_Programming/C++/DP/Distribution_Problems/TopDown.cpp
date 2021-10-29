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
    int n, su=0, ans=mod; //su=total number of chocolates, n=number of packets of chocolates
                          //ans=minimum difference between friends' chocolates

    cin>>n;
    int a[n]; //a[i]=number of chocolates in the i-th packet

    for(int i=0; i<n; i++) {
        cin>>a[i];
        su+=a[i];
    }
    int mat[su+1][n+1]; //mat[i][j] depicts that the first friend has i chocolates
                        //considering he can only have packets from among the first j packets

    for(int i=0; i<su+1; i++) {

        //initially consider all cases to not be feasible
        for(int j=0; j<=n; j++) {
            mat[i][j]=0;
        }
    }
    mat[0][0]=1; //first friend has 0 chocolates considering first 0 packets only 
                 //is possible

    for(int i=0; i<=su; i++) {
        for(int j=0; j<=n; j++) {

            //if having i chocolates considering first j packets is possible then
            //having i chocolates considering first j+1 packets will also be possible
            if(mat[i][j]) {
                int temp=su-i;
                ans=min(ans, abs(temp-i)); //pick the minimum difference obtained so far

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