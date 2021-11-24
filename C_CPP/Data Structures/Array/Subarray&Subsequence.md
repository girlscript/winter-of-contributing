# Subarray 
*A Subarray is defined as a continous part of a given array.*

***Example->***

Given Array :- 
|1|5|7|3|9|
|---|---|---|---|---|
 
*Following are the possible subarrays of given array ->*

 `1` , `1 5` , `1 5 7 `  , `1 5 7 3 ` , `1 5 7 3 9 ` , `5` , `5 7` , `5 7 3 ` , `5 7 3 9` , `7 ` , `7 3 ` , `7 3 9` , `3 ` , `3 9 ` , `9 `

Formula to find number of subarray with n elements :- n*(n+1)/2

## Program to print Subarray
```cpp
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:-";
    cin>>n;                      //input size of array
    int a[n];
    cout<<"Enter array elements:-";
    for(int i = 0; i <n;i++)
    {
        cin>>a[i];              //input array elements
    }
    for(int i = 0; i<n; i++)    //loop Starting point i from 0 to n
    {
        for(int j=i;j<n; j++)    //loop ending point j from i to n
        {
            for(int k = i; k<=j; k++)
            {
                cout<<a[k]<<" ";     //print the elements between i and j 
            }
            cout<<endl;
        }
    }
}
```
## Output :-
![Subarray](https://user-images.githubusercontent.com/70843941/140601332-79d716b9-1910-4d1a-9117-1c1dd0388c73.png)

**Time Complexity ->O(n^3)**

**Space Complexity ->O(1)**

# Subsequence
*A subsequence is defined as a sequence that can be derived from an array by selecting zero or more elements without changing the order of the remaining elements.*

***Example->***

Given Array :- 
|1|5|7|3|9|
|---|---|---|---|---|

*Following are the possible subsequence of given array ->*

`1` , `5` , `1 5` , `3` , `1 3` , `5 3` , `1 5 3` , `7` , `1 7` , `5 7` , `1 5 7` , `3 7` , `1 3 7` , `5 3 7` , `1 5 3 7` , `9` , `1 9` , `5 9` , `1 5 9` , `3 9` ,  
`1 3 9` , `5 3 9` , `1 5 3 9` , `7 9` , `1 7 9` , `5 7 9` , `1 5 7 9` , `3 7 9` , `1 3 7 9` , `5 3 7 9` , `1 5 3 7 9`

Formula to find number of subsequence with n elements :- 2^n

## Program to print Subsequence
```cpp
#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array-> ";
    cin>>n;                           //input size of array
    int a[n];
    cout<<"Enter elements of array-> ";
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];                   //input elements of array
    }
    int set_size = pow(2, n) ;       //no of possible subsequences
    for (int i = 1; i < set_size; i++)        //loop for all possible subsequences
    {
        //printing subsequence
        for (int j = 0; j <= n; j++)       //loop from 0 to n 
        {
            if(i & (1<<j))               // if the i bit in the counter is set 
            {
                cout<<a[j]<<" ";          //print element for a particular subsequences.
            }
        }
        cout<<endl;
    }
    return 0;
}
```
## Output :-
![Subsequence](https://user-images.githubusercontent.com/70843941/140635880-4d485767-49b8-45bb-aa1b-f4ec06438e32.png)

**Time Complexity ->O(2^n)**

**Space Complexity ->O(1)**

***Note->***
*Every subarray is subsequence but every subsequence is not a subarray.*
