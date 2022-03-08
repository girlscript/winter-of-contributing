Question- Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Approach-We used binary search to find out the square root of given number.

Time complexity=O(logn)

Space complexity=O(1)

Solution-
int mySqrt(int x) {
       int low=0;
        int high=x-1;
        int ans=0;
        if(x==1)
            return 1;
        while(low<=high)
        {
            long long int mid=low+(high-low)/2;
            long long int y=mid*mid;
            if(y==x)
                return mid;
            else if(y>x)
                high=mid-1;
            else
            {
                low=mid+1;
                ans=mid;
            }
            
        }
        return ans;
    }
Input=4
output=2