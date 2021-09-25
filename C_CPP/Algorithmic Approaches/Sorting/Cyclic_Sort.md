# CYCLIC SORT

Cyclic Sort is an in-place and unstable sorting algorithm.

TIP:-

If range => [0,N]

- every element will be at index = value

If range => [1,N]

- every element will be at index = value - 1

Ex- 1,2,3,4,5,6,7,8,9......24

so range will be [1,24], so N is the last number!

# Code

```
// C+++ program for CYCLIC SORT

#include <iostream>
using namespace std;

// function to swap the values
void swap(int arr[], int first, int second)
{
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

// Implementation of Cyclic Sort function
void cycleSort(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        int Index = arr[i] - 1;
        if (arr[i] != arr[Index])
        {
            swap(arr, i, Index);
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // displaying the array before sorting
    cout << "Before Cyclic Sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // calling Cyclic Sort function
    cycleSort(arr, n);

    // displaying the array after sorting
    cout << "After Cyclic Sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

```

# Output

```
Before Cyclic Sort
5 4 3 2 1
After Cyclic Sort
1 2 3 4 5
```

// n is number of elements int the array.

Time Complexity : O(n)

Space Complexity : O(1)
