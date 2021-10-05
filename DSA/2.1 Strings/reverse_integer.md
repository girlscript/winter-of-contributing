# Problem Statement

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

### Constraints
```
-2^31 <= x <= 2^31 - 1
```

## Example 1
### Input
```
 x = 123
```
### Output
```
321
```

## Example 2
### Input
```
x= -123
```
### Output
```
-321
```


## Algorithm


## Code

```C++
class Solution {
public:
    int reverse(int x) {
        int flag=1;
        if(x<0)
            flag=0;
        int temp=abs(x);
        long int sum=0;
        while(temp>0)
        {
            int a=(temp%10);
            if(sum*10>INT_MAX)
                return 0;
            sum=sum*10+a;
            temp=temp/10;
            
        }
        if(flag)
            return sum;
        else
            return sum*(-1);
        
    }
};
```
## Time Complexity
Time complexity will be O(n).

## Space Complexity
Space Complexity will be O(1).

### References
[LeetCode Top Interview Questions](https://leetcode.com/explore/featured/card/top-interview-questions-easy/127/strings/880/)
