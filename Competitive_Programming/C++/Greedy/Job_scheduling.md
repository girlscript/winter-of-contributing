# Job Scheduling Problem

## Greedy 
It is one of the approach for solving problems or a design to solve a particular problem where optimisation is required.

### Optimisation Problems
A problem which requires either minimum or maximum results fall under this category.In one problem there can be many solution and out of them some will be feasible but there exist only one optimal solution which we calculate by greedy approach.It is acheiveing the goal of the problem.

## Approach:
• We have n jobs.

• Each of which takes unit time.

• A processor on which we would like to schedule them in as profitable a manner as possible.

Each job has a profit associated with it, as well as a deadline.

• If the job is not scheduled by the deadline, then we don't get the profit or we have to pay the penalty for running it after deadline..

• Because each job takes the same amount of time, we will think of a Schedule S as consisting of a sequence of job "slots" 1, 2, 3, ... where S(t) is the job scheduled in slot t.
Schedule all jobs such that maximum profit can be gained.

Goal: Schedule jobs to maximize profit.

Schedule all jobs with such that minimum penalty should be paid.

Goal: Schedule jobs to minimize penalty.

## Example:

## Code

```class Solution {
public:

bool static comp(vector<int>&a,vector<int>&b){
    if(a[0]==b[0] && a[1]==b[1]){
        return a[2]<b[2];
    }
    
    else if(a[1]==b[1]){
        return a[0]<b[0];
    }
    
    else{
        return a[1]<b[1];
    }
}


int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
    
    int n=startTime.size();
    
    vector<vector<int>>vec(n);
    
    for(int i=0;i<n;i++){
        
        int a=startTime[i];
        int b=endTime[i];
        int c=profit[i];
        
        vec[i]={a,b,c};
        
    }
    
    sort(vec.begin(),vec.end(),comp);
    
    vector<int>dp(n,0);
    
    dp[0]=vec[0][2];
    
    for(int i=1;i<n;i++){
        
        int inc=-1,ans=vec[i][2];
        
        int low=0,high=i-1;
        
        while(low<=high){
            
            int mid=(low+high)/2;
            
            if(vec[mid][1]<=vec[i][0]){
                inc=mid;
                low=mid+1;
            }
            
            else{
                high=mid-1;
            }
            
        }
        
        if(inc!=-1){
            ans+=dp[inc];
        }
        
        dp[i]=max(ans,dp[i-1]);
    }
    
    return dp[n-1];
    
}
};
```

