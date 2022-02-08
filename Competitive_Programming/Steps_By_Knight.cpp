///Problem  Description 
// Given a square chessboard, the initial position of Knight and position of a target. Find out the minimum steps a Knight will take to reach the target position.

// Note:
// The initial and the target position co-ordinates of Knight have been given accoring to 1-base indexing.

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    void newstep(int r, int c, queue<pair<pair<int, int>,int>>&q, int N, int next, vector<vector<bool>>&visited, int level){
        int rr[8] ={r+1,r+1,r-1,r-1,r+2,r+2,r-2,r-2};
        int cc[8] ={c+2,c-2,c+2,c-2,c+1,c-1,c+1,c-1};
        
        for(int i =0 ;i<8;i++){
            //cout<<r+1<<" "<<c+1<<"---";
            int nr = rr[i];
            int nc = cc[i];
            //cout<<nr+1<<" "<<nc+1<<endl;
            if(nr<0 || nc<0 || nr>=N|| nc>=N){
                continue;
            }
            
            if(visited[nr][nc]){
                continue;
            }
            q.push({{nr,nc},level+1});
            visited[nr][nc]  = true;
            //cout<<nr+1<<" "<<nc+1<<" "<<level<<endl;
        }
        //cout<<"#######"<<endl;
    }
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    queue<pair<pair<int,int>,int>>q;
	    q.push({{KnightPos[0]-1,KnightPos[1]-1},0});
	    //int in = 1;
	    int next = 0;
	    vector<vector<bool>>visited(N,vector<bool>(N, false));
	    visited[KnightPos[0]-1][KnightPos[1]-1] = true;
	    while(!q.empty()){
	            int r = q.front().first.first;
	            int c = q.front().first.second;
	            int steps = q.front().second;
	            q.pop();
	        
    	        if(r == TargetPos[0]-1 && c == TargetPos[1]-1){
    	            return steps;
    	        }
    	        newstep(r,c,q,N,next, visited, steps);
	  
	        
	    }
	    return -1;
 	}

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends