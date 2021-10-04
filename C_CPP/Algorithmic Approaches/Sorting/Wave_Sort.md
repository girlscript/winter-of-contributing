# Wave Sort in C++

### Overview :-
In Wave Sort, We are given an array <b> A<sub>1</sub>, A<sub>2</sub>, … , A<sub>N</sub> </b> consisting of <b> N </b> integers.
We have to sort the array into a wave-like arrangement. In other words, an array A[0..n-1] is sorted in wave form if A[0] >= A[1] <= A[2] >= A[3] <= A[4] >= ….<br>

### There are two ways to solve this problem :-
1. Sorting & Swapping: Sort the array and swap the adjacent values.
1. Comparing Neighbors: Compare neighbouring elements and swap if the problem condition doesn’t satisfy.

## 1. Sorting & Swapping :-
The problem asks that the array elements in the resultant array must be such that arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] ..... . So, one can find many different solutions for one input. However, the problem statement also requires to return the lexicographically smallest array. So, we can generalize the outputs in a simple way.

We can directly sort the input array so that arr[0] <= arr[1] <= arr[2] <= arr[3] <= arr[4] ..... now, swapping the alternate elements i.e. arr[0] with arr[1] and arr[2] with arr[3] and arr[4] with arr[5] and …, we will have the resultant array satisfying the problem condition.

### Solution steps :-

* Sort the array in ascending order.
* Swap the adjacent elements.
<br>

### Complexity Analysis :-

Time Complexity: <b>O(n log n)</b> (How?)

Space Complexity: <b>O(1)</b>
<br>
```c
#include<iostream>
#include<algorithm>
using namespace std;

// swapping values of x and y
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

//Function to perform wave sort
void wavesort(int A[],int n)
{
    sort(A,A+n);
    for(int i=0;i<n-1;i+=2)
    {
        swap(A[i],A[i+1]);
    }
}

int main()
{
    int n;
    cout<<"SIZE OF ARRAY IS : ";
    cin>>n;
    int A[n];
    cout<<"ENTER ELEMENTS OF ARRAY : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    wavesort(A,n);
    cout<<"SORTED ARRAY IS : ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
```


```c
OUTPUT 1 : 
SIZE OF ARRAY IS : 5
ENTER ELEMENTS OF ARRAY : 5 2 9 3 2 
SORTED ARRAY IS : 2 2 5 3 9

OUTPUT 2 : 
SIZE OF ARRAY IS : 6
ENTER ELEMENTS OF ARRAY : 3 2 9 6 4 1 
SORTED ARRAY IS : 2 1 4 3 9 6 
```

## 2. Comparing Neighbors :-
We can optimize the previous approach as we can only focus on maintaining the condition for neighbouring elements. However, this will not guarantee the lexicographically smallest array in return.<Br>

If we make sure that all even positioned (at index 0, 2, 4, ..) elements are greater than their adjacent odd positioned elements, we won’t have to check the oddly positioned element.

### Solution steps :-

Traverse all even positioned elements of the input array, and do the following  — >

* If the current element is smaller than the previous odd element, swap previous and current.
* If the current element is smaller than the next odd element, swap next and current.

### Complexity Analysis :-

  Time Complexity: <b>O(n)</b>

  Space Complexity: <b>O(1)</b>
<br>

```c
#include<iostream>
#include<algorithm>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void wavesort(int A[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(A[i]<A[i-1])
        {
            swap(A[i],A[i-1]);
        }
        if(i<n-1 && A[i]<A[i+1])
        {
            swap(A[i],A[i+1]);
        }
    }
}

int main()
{
    int n;
    cout<<"SIZE OF ARRAY IS : ";
    cin>>n;
    int A[n];
    cout<<"ENTER ELEMENTS OF ARRAY : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    wavesort(A,n);
    cout<<"SORTED ARRAY IS : ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
```

```c
OUTPUT 1 :
SIZE OF ARRAY IS : 5
ENTER ELEMENTS OF ARRAY : 5 2 9 3 2 
SORTED ARRAY IS : 2 5 3 2 9 

OUTPUT 2 :
SIZE OF ARRAY IS : 6
ENTER ELEMENTS OF ARRAY : 3 2 9 6 4 1 
SORTED ARRAY IS : 2 3 6 4 1 9 
```
