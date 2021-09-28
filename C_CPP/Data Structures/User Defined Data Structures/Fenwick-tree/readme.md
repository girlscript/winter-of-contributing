## Fenwick Tree    (Binary Seach tree)

The **Binary Search Tree** can be best understoods by the given case:

Let us consider:
We have an array **arr[0...n-1]**. And we would like to
1. Compute the sum of the first i elements
2. Modify the value of a specified element of the array **arr[i]=x** where **0<=i<=n-1**
A simple solution is to run a loop from 0 to i-1 and calculate the sum of the elements. To update a value, simply do arr[i] = x. The first operation takes **O(n) time** and the second operation takes **O(1) time**.
Another simple solution is to create an extra array and store the sum of the first i-th elements at the i-th index in this new array. The sum of a given range can now be calculated in **O(1) time**, but the update operation takes **O(n) time** now. 
> This works well if there are a large number of query operations but a very few number of update operations.
Could we perform both the query and update operations in O(log n) time? 
One efficient solution is to use **Segment Tree** that performs both operations in **O(Logn) time**.
An alternative solution is **Binary Indexed Tree**, which also achieves **O(Logn)** time complexity for both operations. 
> Compared with Segment Tree, Binary Indexed Tree requires less space and is easier to implement..

### Representation 
**Binary Indexed Tree** is represented as an array. Let the array be BITree[]. Each node of the Binary Indexed Tree stores the sum of some elements of the input array. The size of the Binary Indexed Tree is equal to the size of the input array, denoted as n. In the code below, we use a size of n+1 for ease of implementation.

### Construction 
We initialize all the values in BITree[] as 0. Then we call update() for all the indexes, the update() operation is discussed below.

### Algorithm

```
getSum(x): Returns the sum of the sub-array arr[0,…,x] 
// Returns the sum of the sub-array arr[0,…,x] using BITree[0..n], which is constructed from arr[0..n-1] 
1) Initialize the output sum as 0, the current index as x+1. 
2) Do following while the current index is greater than 0. 
    a) Add BITree[index] to sum 
    b) Go to the parent of BITree[index]. The parent can be obtained by removing the last set bit from the current index, i.e., index = index – (index & (-index)) 
3) Return sum.
```

### How does Binary Indexed Tree work? 
The idea is based on the fact that all positive integers can be represented as the sum of powers of 2. For example 19 can be represented as 16 + 2 + 1. Every node of the BITree stores the sum of n elements where n is a power of 2. For example, in the first diagram above (the diagram for getSum()), the sum of the first 12 elements can be obtained by the sum of the last 4 elements (from 9 to 12) plus the sum of 8 elements (from 1 to 8). The number of set bits in the binary representation of a number n is O(Logn). Therefore, we traverse at-most O(Logn) nodes in both getSum() and update() operations. The time complexity of the construction is O(nLogn) as it calls update() for all n elements. 

### Code
```
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int getSum(int BITree[], int index)
{
    int sum = 0;  //result
    index = index + 1;
    while (index>0)
    {
        sum += BITree[index];
        index -= index & (-index);
    }
    return sum;
}

void updateBIT(int BITree[], int n, int index, int val)
{
    index = index + 1;
    while (index <= n)
    {
        BITree[index] += val;
        index += index & (-index);
    }
}

int *constructBITree(int arr[], int n)
{
    int *BITree = new int[n+1];
    for (int i=1; i<=n; i++)
    {
        BITree[i] = 0;
    }
    for (int i=0; i<n; i++)
    {
        updateBIT(BITree, n, i, arr[i]);
    }
    return BITree;
}
 
int main()
{
    int t; cin>>t;  //Size of the array
    int freq[t];
    for (int i=0; i<t;i++)
    {
        cin>>freq[i];
    }
    int n = freq.size();
    int *BITree = constructBITree(freq, n);
    cout << "Sum of elements in arr[0..5] is "
        << getSum(BITree, 5);
 
    // Let use test the update operation
    freq[3] += 6;
    updateBIT(BITree, n, 3, 6); //Update BIT for above change in arr[]
 
    cout << "\nSum of elements in arr[0..5] after update is "
        << getSum(BITree, 5);
 
    return 0;
}
```

#### Output
>Sum of elements in arr[0..5] is 12
>
>Sum of elements in arr[0..5] after update is 18