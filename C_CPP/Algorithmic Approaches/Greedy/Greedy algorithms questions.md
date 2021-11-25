# Basic questions on greedy algorithm

## 0/1 Knapsack problem

```CPP
#include<iostream>
#include<vector>

using namespace std;

int max(int a, int b)
{
    return (a>b)?a:b;
}

int knapsack(int w , int wt[], int val[], int n){
    if(n==0 || w==0)
    return 0;

if(wt[n-1]>w)
return knapsack(w,wt,val,n-1);

else
return max(
    val[n-1]+ knapsack(w-wt[n-1],wt,val,n-1),knapsack(w,wt,val,n-1)
);

}

int main()
{
    int val[]={60,100,120};
    int wt[]={10,20,30};
    int w=50;
    int n = sizeof(val)/sizeof(val[0]);
    cout<<knapsack(w,wt,val,n);
    return(0);
}

```
- Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item or don’t pick it (0-1 property).

### OUTPUT
220


## Highest Peak

```CPP
#include<iostream>
#include<vector>
using namespace std;

int highest_mountain(vector<int> a){
	int n = a.size();

	int largest = 0;

	for(int i=1;i<=n-2;){

		//check a[i] is peak or not
		if(a[i]>a[i-1] and a[i]>a[i+1]){
			//do some work
			int cnt = 1;
			int j = i;
			//cnt backwards (left)
			while(j>=1 and a[j]>a[j-1]){
				j--;
				cnt++;
			}
			//cnt forwards (right)
			while(i<=n-2 and a[i]>a[i+1]){
				i++;
				cnt++;
			}
			largest = max(largest,cnt);

		}
		else{
			i++;
		}
	}
	return largest;

}

int main(){
	vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
	cout<< highest_mountain(arr)<<endl;
	return 0;
}

```

### OUTPUT
9
