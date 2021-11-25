## Circular array problem(Maximize sum, Maximize difference), left and right shift on the circular array.

## Circular Array :- 
  + When an array become circular array ? <br>
  So till now we have a basic idea of array .  if we consider the first element as next of the last element of the array than we can call this array as a circular array.
   <br>
  suppouse consider 5 people P Q R S T  and given name as ‘S’. People sitting in a circular manner starting from S are S T P Q R.
   <br>
   
   
## Problem name : 
  Maximum Sum Circular Subarray :

## Problem Statement : 
   Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.
## Constraints:

+ 1 <= nums.length() <= 3 * 104
+ -3 * 104 <= nums[i] <= 3 * 104

## Naive approach :
<br>
  The naive approach to solve this problem is using  using three nested loop.
   <br>
  and the time complexity would be O(n^3).  
   <br>
  It is very simple you just have to run three loop and find the maximum sub array sum.

  ## pesedo code of this approach :
  
  ```sum = 0, res=0 ;
     for(int i=0; i<n; i++)
     {                     
       for(int j=i+1; j<n; j++) 
       {                        
         for(int k=j+1 ; k<n; k++) 
         {                     
           sum = sum + a[i] + a[j] + a[k];
           res = max(res, sum);
         } 
       }
     }
     return res;
  ```
  
## time complexity = O(n * n * n);    
## Another approach:
  The Another approach is to use Kadane's Algorithm.The simple idea of Kadane’s algorithm is to look for all positive contiguous segments of the array (cur is used for this). And keep track of maximum sum (ans is used for this);
  
 ## Algorithm :
```
 Initialize:
    ans = INT_MIN
    cur = 0

  Loop for each element of the array
    (a) cur = cur + a[i]
    (b) if(ans < cur)
              ans = cur
    (c) if(cur < 0)
              cur = 0
  return ans;
 
 ```
## Code Implementation (in c++):

     #include<bits/stdc++.h>
     using namespace std;
    
    int maxSubArray(int a[], int n)
    {
        int sum = 0;
        int ans = INT_MIN;
        for (int i=0; i<n ; i++)
        {
            sum = sum + a[i];
            ans = max(sum,ans);
            if(sum < 0)
            {
              sum = 0;
            }

        }
        return ans;
    }
    
    int main()
    {
        int arr[] = {-8, -5, 4, -1, -8, 1, 5, -16};
        int n = sizeof(a)/sizeof(arr[0]);
        int sum = maxSubArraySum(a, n);
        cout << "Maximum contiguous sum is " << sum;
        return 0;
    }
    
## Output :
  Maximum contiguous sum is 6.

 
+ Time Complexity  = O(n)
+ space Complexity = O(n)
 <br><br><br>

## Problem name : 
  Maximum difference Circular Subarray :

## Problem Statement : 
   Given a circular integer array nums of length n, Return the largest difference of a non-empty subarray of nums.
## Constraints:

+ 1 <= nums.length() <= 3 * 104
+ -3 * 104 <= nums[i] <= 3 * 104


## Code Implementation (in c++):

```
 class Solution {
   public:
    
    int maxDiffSubArrays(vector<int> &nums) {
       
        int len = nums.size();

        int minLeft[len],maxLeft[len],maxRight[len],minRight[len];

        for (int i = 0; i < len; i++) 
        {
            maxLeft[i] = maxRight[i] = INT_MIN;
            minLeft[i] = minRight[i] = INT_MAX;
        }

        int sum = 0;
        int mx = INT_MIN;
        for (int i = 0; i < len; i++) 
        {
            sum += nums[i];
            mx = max(mx, sum);
            sum = sum < 0 ? 0 : sum;
            maxLeft[i] = mx;
        }
        sum = 0;
        int mn = INT_MAX;
        for (int i = 0; i < len; i++) {
            sum += nums[i];
            mn = min(mn, sum);
            sum = sum > 0 ? 0 : sum;
            minLeft[i] = mn;
        }
        sum = 0;
        mx = INT_MIN;
        for (int i = len - 1; i >= 0; i--) {
            sum += nums[i];
            mx = max(mx, sum);
            sum = sum < 0 ? 0 : sum;
            maxRight[i] = mx;
        }
        sum = 0;
        mn = INT_MAX;
        for (int i = len - 1; i >= 0; i--) {
            sum += nums[i];
            mn = min(mn, sum);
            sum = sum > 0 ? 0 : sum;
            minRight[i] = mn;
        }

        int diff = 0;
        for (int i = 0; i < len - 1; i++) 
        {
            diff = max(diff, abs(maxLeft[i] - minRight[i + 1]));
            diff = max(diff, abs(minLeft[i] - maxRight[i + 1]));
        }
        return diff;
    
    }

   };
```

## Input :
[1,2,-3,1]

## Output :
  6.

+ Time Complexity  = O(n)
+ space Complexity = O(n)
  
