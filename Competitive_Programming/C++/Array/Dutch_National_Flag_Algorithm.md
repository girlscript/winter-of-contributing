# Dutch National Flag Algorithm

## Problem Statement
Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array without using extra space and any sorting algorithm.

#### Example
```
Input: {1,1,2,0,0,2,2}
Output: {0,0,1,1,2,2,2}

Input: {0,0,0,2,2,2,2,0,0,1,1,1,2}
Output: {0,0,0,0,0,1,1,1,2,2,2,2,2}
```
#### Algorithm
```
1. Let's maintain three pointers low = 0, mid = 0, high = size-1.
2. Run a loop till mid < = high is satisfied.
3. Here are some following cases to be considered:
    3.1 if A[mid] = 0 then swap A[low] and A[mid] and increment low and mid pointers.
    3.2 if A[mid] = 1 then simply increment the mid pointer.
    3.3 if A[mid] = 2 then swap A[mid] and A[high] and decrement high pointer.
4. After the termination of loop print the contents of the Array.
```
#### Dry Run
```
Suppose we have, A[]={2,0,1,0,2,1}.
We initialize low = 0, mid = 0, high = size-1 = 5.

mid = 0 and high = 5 --> mid < = high
A[mid] = A[0] = 2 and A[high] = 1, so swap A[mid] and A[high] and high = high-1 = 4.
A[]={1,0,1,0,2,2}

mid = 0 and high = 4 --> mid < = high
A[mid] = A[0] = 1, mid = mid + 1 = 1.
A[]={1,0,1,0,2,2}

mid = 1 and high = 4 --> mid < = high
A[mid] = A[1] = 0 and A[low] = 1, so swap A[mid] and A[low] and low = low+1 = 1, mid = mid+1 = 2.
A[]={0,1,1,0,2,2}

mid = 2 and high = 4 --> mid < = high
A[mid] = A[2] = 1,  mid = mid + 1 = 3.
A[]={0,1,1,0,2,2}

mid = 3 and high = 4 --> mid < = high
A[mid] = A[3] = 0 and A[low] = 1, so swap A[mid] and A[low] and low = low+1 = 2, mid = mid+1 = 4.
A[]={0,0,1,1,2,2}

mid = 4 and high = 4 --> mid < = high
A[mid] = A[4] = 2 and A[high] = 2 , so swap A[mid] and A[high] and high = high-1 = 3.
A[]={0,0,1,1,2,2}

mid = 4 and high = 3 --> mid > high, so loop will terminate
Hence, A[]={0,0,1,1,2,2} is the required sorted Array!
```

#### C++ Implementation
```
#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int low = 0, mid = 0, high = n-1; // initializing the pointers
    while(mid <= high)
    {
        switch(a[mid])
        {
            case 0: swap(a[low],a[mid]);
                    low++,mid++;
                    break; // it is required to prevent jumping onto next case
            case 1: mid++;
                    break; 
            case 2: swap(a[high],a[mid]);
                    high--;
                    break; 
        }
    }
    // printing the contents of the array
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
```
**Input** \
6 \
2 0 1 0 2 1 \
**Output** \
0 0 1 1 2 2

#### Complexity:
***Time Complexity:*** O(n) \
***Auxilary Space:*** O(1)
