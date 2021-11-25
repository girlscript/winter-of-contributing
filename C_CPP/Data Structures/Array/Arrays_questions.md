# Basic questions of Arrays

## Find the minimum element from an array , calculate its difference with k.

```CPP
#include <iostream>
using namespace std;
int main()
{   
        int n , k;
        cin>>n>>k;
        int arr[n];
        int m ;
        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
            if (i==0)
            {
                m = arr[i];                
            }
            if (arr[i]<m)
            {
                m = arr[i];                
            }
        }
        int min;
        min = k-m;
        cout<<min<<endl;    
    return 0;
}

```
## INPUT
2 3

1 2 3

## OUTPUT
3

## Find the sum of all the elements present in the array

```CPP
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n ; 
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n], sum=0,max=0;
        for(int i = 0 ; i< n ; i++)
        {
            cin>>arr[i];
        }
        for(int i = 0 ; i < n;i++)
        {
            sum+=arr[i];
            if(sum>max)
            max=sum;
            if(sum<max)
            sum=0;
        }
        cout<<max<<endl;
    }
    return(0);
}

```
## INPUT
2

2

1 2

3

1 2 3

## OUTPUT
3

6

## Wave array

```CPP
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void convertToWave(vector<int>& arr, int n){
        for(int i=0;i<n-1;i=i+2)     
                swap(arr[i],arr[i+1]); 
    }
};
int main()
{
    int t,n;
    cin>>t; 
    while(t--) 
    {
        cin>>n; 
        vector<int> a(n); 
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        Solution ob;
        ob.convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";     
        cout<<endl;
    }
}  

```
## INPUT

2

3

1 2 3

4

1 2 3 4

## OUTPUT

2 1 3

2 1 4 3

## Minimum number of jumps to reach the end
```cpp
#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{
	if (n == 1)
		return 0;
	int res = INT_MAX;
	for (int i = n - 2; i >= 0; i--) {
		if (i + arr[i] >= n - 1) {
			int sub_res = minJumps(arr, i + 1);
			if (sub_res != INT_MAX)
				res = min(res, sub_res + 1);
		}
	}
	return res;
}
int main()
{
	int arr[] = { 1 , 6 , 3 , 0 ,3 , 5, 2 , 8 ,9,2 , 1 , 3 ,4  };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Minimum number of jumps to reach the end is " << minJumps(arr, n);
	return 0;
}

```
## OUTPUT

Minimum number of jumps to reach the end is 3
