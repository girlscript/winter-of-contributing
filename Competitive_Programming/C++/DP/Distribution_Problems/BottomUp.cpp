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

// dfs for finding connected components
void dfs(vector<int>g[], int n, int cur, int vis[], vector<int>&se) {

    vis[cur]=1; //all nodes in the same component are marked visited
    se.pb_(cur); //a set of current connected component is maintained

    for(auto it:g[cur]) {
        if(!vis[cur]) dfs(g, n, it, vis, se); //if the next ndoe in graph is not already visited
                                              //we call dfs function for it recursively

    }
}

void solve() {
    int c, n; //c=number of candies, n=number of friends
    cin>>c>>n;
    int can[n], pri[n], visi[n]={0}; //can[i] holds number of candies i-th friend will buy
                                     // pri[i] holds price that the i-th friend will pay for can[i] candies

    for(int i=0; i<n; i++) cin>>can[i];
    for(int i=0; i<n; i++) cin>>pri[i];

    int m; //m is the number of pairs if friends
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

        //if node is not part of a connected component, call dfs on it
        if(!visi[i]) {
            vector<int>se;
            dfs(graph, n, i, visi, se);

            sets.pb_(se); //pushing connected components in a vector
        }
    }

    int no=sets.size(), mat[no+1][c+1]; //mat[i][j] depicts maximum earnings of chopkeeper
                                        //considering one member of the first i components 
                                        //buys chocolates, and total chocolates bought are 
                                        //no more than j

    for(int i=0; i<no+1; i++) {

        //initializing the dp table with zeroes
        //as all non 0 indices will be updated while constructing the table
        //and the indices depicting none of the components' members buying candies or 
        //them buying 0 candies (constituting 0 weight) will remain 0
        for(int j=0; j<c+1; j++) mat[i][j]=0;
    }

    //iterating over the number of connected components
    for(int i=1; i<no+1; i++) {

        //iterating over total number of candies
        for(int j=1; j<c+1; j++) {

            for(int k=0; k<sets[i-1].size(); k++) {

                //here we will pick the friend from each component resulting in maximum value of state
                int x=sets[i-1][k];
                if(can[x]<=j) {
                    mat[i][j]=max(max(mat[i][j], mat[i-1][j]), mat[i-1][j-can[x]]+pri[x]);
                }
                else {
                    //if candies bought by considered friend exceed maximum candies
                    //considered for thsi iteration, we pick the previous value

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