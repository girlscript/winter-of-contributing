#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int maxSubArraySum(int a[], int n)
{
    int max = INT_MIN, max_end = 0;
 
    for (int i = 0; i < n; i++) //traversing the array
    {
        max_end+=a[i];
        if (max < max_end)
            max = max_end;
 
        if (max_end < 0)
            max_end = 0;
    }
    return max;
}
 
int main()
{
    int a[] = {-2,4,-5,4,-2};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}