# Prefix Sum Array

## What is Prefix Sum Array?
The Prefix Sum Array of a given array is another array whose element at any index is sum of all elements upto that index in previous array.

For example- PreSumArray[i]=Array[0]+Array[1]+...+Array[i-1]+Array[i]

```
Input: n=5 Array={5,12,13,25,10}
Output: PreSumArray={5,17,30,55,65}
```
Explanation: first element is left undisturbed i.e. 5, second element as sum of first two elements i.e. 17 and third element as sum of first three i.e. 30 and so on.

## Time Complexity: O(n)


## Uses of Prefix Sum Array 💡
1. To calculate cummulative frequency from a givan array of frequency distribution
2. To find equilibrium index of array where sum of elements at lower indices is same as that of higher indices
3. To find a subarray having sum of elements equal to 0
4. To find subarray of maximum size where their sum of elements is strictly less than a fixed value.

Many such problems can be generated where Prefix Sum Array concept can be used.

#### Code 💻

```
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//we first take input of size n and then the array from user
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	//new array to perform Pre Sum
	int PreSum[n];
	PreSum[0]=array[0];
	for(int i=1;i<n;i++)
	{
  		//now we will find the sum of current element of 'original' array and previous element of 'PreSum' array starting from second position
  		//first position has no previous element so no need to change
		PreSum[i]=array[i]+PreSum[i-1];
  	}
	//now we have our new array as prerfix sum array of original array
	//printing new array
	for(int i=0;i<n;i++)
  	{
    	cout<<PreSum[i]<<" ";
  	}
  	return 0;
}
```
## Sample Input:
6

10 20 30 15 25 10

## Output:
10 30 60 75 100 110
