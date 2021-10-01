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
![alt_txt](https://user-images.githubusercontent.com/65339915/135598494-1f343f48-1af9-4da5-9a3a-a5cbdf427816.jpg)
## Code

```

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//declaring structure for id,deadline profit of arrays
struct Job
{
   int id;    
   int dead;    
   int profit;  
};
class Solution {
public:

//arranging array on decreasing order of profit
static bool comp(Job a,Job b){
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        //sorting in decreasing order of profit
        sort(arr,arr+n,comp);
        //declaring an array bool type to check if its empty or not
        bool fill[n];
        for(int i=0;i<n;i++)
        fill[i]=false;
        int res[n],c=0,prof=0;
        for(int i=0;i<n;i++)
        {
            for(int j=min(arr[i].dead,n)-1;j>=0;j--)
            {
              //if time slot is empty 
                if(fill[j]==false)
                {
                  c++;
                  //put job in this slot and make it fill as true
                    prof=prof+arr[i].profit;
                    fill[j]=true;
                    break;
                }
            }
        }
                    return {c,prof};

        
    } 
};
int main()
{
  int t;
  //asking user to enter number of test cases
  cout<<"\n Enter number of test cases:";
  cin>>t;
  while(t--)
  {
    int n;
    cout<<"\n Enter Array size:";
    cin>>n;
    Job arr[n];

  for(int i= 0;i<n;i++){
int x, y, z;
cin >> x >> y >> z;
     arr[i].id=x;
     arr[i].dead=y;
     arr[i].profit=z;
  }
  //creatinf object of class solution
  Solution ob;

  vector<int> ans=ob.JobScheduling(arr,n);
  //calling of function and printing result
  cout<<"\n Count of jobs="<<ans[0]<<"maximum profit="<<ans[1]<<endl;
    return 0;
}

}
```

##Time Complexity:O(n^2)

# Output
![alt_txt](https://user-images.githubusercontent.com/65339915/135598542-3f1fc7b2-6585-45ff-ba2c-d229913ee918.jpg)

