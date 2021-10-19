
# KADANE'S ALGORITHM IN C++

### Contributed By-- [Tamal Das](https://github.com/Rijudas149)

***Q. What is the importance of Kadane's Algorithm?***

***Ans.*** Kadane's algorithm is the most eficient way among all ways to calculate the sum of contiguous subarray within a 1D array of numbers.

### Kadane's Algorithm

```bash
Initialize:
    max = INT_MIN
    ending = 0

Loop for each element of the array
  (a) ending += a[i]
  (b) if(max < ending)
            max = ending
  (c) if(ending < 0)
        ending = 0
return max

```

### Explanation

The simple idea of Kadane’s algorithm is to look for all positive contiguous segments of the array & keep track of maximum sum contiguous segment among all positive segments. Each time we get a positive-sum compare it with max and update max if it is greater than max.

### Program (C++)

```bash
#include<iostream>
#include<climits>
using namespace std;
 
int maxSubArraySum(int a[], int size)
{
    int max = INT_MIN, ending = 0;
 
    for (int i = 0; i < size; i++)
    {
        ending += a[i];
        if (max < ending)
            max = ending;
 
        if (ending < 0)
            ending = 0;
    }
    return maxr;
}
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}

```

### Output

```bash
Maximum contiguous sum is 7
```

***Time Complexity:-*** *O(n)*

***Auxilary Space:-*** *O(1)*