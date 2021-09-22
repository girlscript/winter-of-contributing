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
  