// There are N people in a shop having C candies. 
// The i-th person will but Ci candies 
// and will pay Ri money for it to the shopkeeper. 
// You are also given M pairs of friends where a pair (x,y) 
// means x and y are friends. The friends have a rule that 
// if the person Q buys candies then none of Q's friends (direct or indirect) 
// can buy candies. Maximize the amount of money the shopkeeper can earn.

#include<bits/stdc++.h>
using namespace std;

#define _z ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long int
#define endl "\n"
#define mod 1000000007
#define pb_ push_back
#define mp_ make_pair

void dfs(vector<int>g[], int n, int cur, int vis[], vector<int>&se) {
    vis[cur]=1;
    se.pb_(cur);
    for(auto it:g[cur]) {
        if(!vis[cur]) dfs(g, n, it, vis, se);
    }
}

void solve() {
    int c, n;
    cin>>c>>n;
    int can[n], pri[n], visi[n]={0};
    for(int i=0; i<n; i++) cin>>can[i];
    for(int i=0; i<n; i++) cin>>pri[i];
    int m;
    cin>>m;
    vector<int>graph[n];
    for(int i=0; i<m; i++) {
        int temp1, temp2;
        cin>>temp1>>temp2;
        temp1--;
        temp2--;
        graph[temp1].pb_(temp2);
        graph[temp2].pb_(temp1);
    }
    vector<vector<int>>sets;
    for(int i=0; i<n; i++) {
        if(!visi[i]) {
            vector<int>se;
            dfs(graph, n, i, visi, se);
            sets.pb_(se);
        }
    }
    int no=sets.size(), mat[no+1][c+1];
    for(int i=0; i<no+1; i++) {
        for(int j=0; j<c+1; j++) mat[i][j]=0;
    }
    for(int i=1; i<no+1; i++) {
        for(int j=1; j<c+1; j++) {
            for(int k=0; k<sets[i-1].size(); k++) {
                int x=sets[i-1][k];
                if(can[x]<=j) {
                    mat[i][j]=max(max(mat[i][j], mat[i-1][j]), mat[i-1][j-can[x]]+pri[x]);
                }
                else {
                    mat[i][j]=max(mat[i][j], mat[i-1][j]);
                }
            }
        }
    }
    cout<<mat[no][c]<<endl;
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