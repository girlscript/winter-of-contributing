# Car Sell Problem

## Problem Definition

MAXIMUM PROFIT:

A man owns N cars (numbered from 1 to N). He wishes to sell all cars over N days by selling exactly one car per day. For each valid i, the initial price of the i-th car is Pi. Due to depreciation, the price of each car decreases by 1 unit per day until it is sold. Note that the price of a car cannot drop below 0 no matter how many days have passed, i.e. when the price of a car reaches 0 on some day then it remains 0 in all subsequent days. Find the maximum profit he can make if he sells his cars in an optimal way in order to maximise his profit. The output can be very large so compute it to modulo of 1000000007(10^9+7).


## EXPLANATION
We use Greedy approach for solving this problem. 
As we already know that price of any given car can never become negative. So, we will start by selling the car with maximum price and then proceed to car with lower price.
We store the prices in ascending or descending order and then add prices accordingly until we get negative value for price of any car after depreciation on anyday.


## Example

### Input
```
5
2 4 5 6 3
```
### Output
```
12
```
### CODE 💻
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
	// your code goes here
    long long int n,k,i;
	    cin>>n;
	    k=0;
        //create a vector to store price of cars
	    vector <long long int> v(n);
        //storing prices of cars in v
	    for(i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
        //we sort this vector using sort() function
	    sort(v.begin(),v.end());
	    for(i=n-1;i>=0;i--)
	    {
                if(v[i]-n+1+i>0)k+=v[i]-n+1+i;
                else break;
	    }
	    k=k%1000000007;
	    cout<<k<<endl;
	}
	return 0;
}
```

## Time Complexity: N(Log N)
