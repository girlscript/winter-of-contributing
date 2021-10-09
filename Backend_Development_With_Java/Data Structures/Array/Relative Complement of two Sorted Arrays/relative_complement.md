# Relative Complement of 2 Sorted Arrays

## Problem Statement :

Given two sorted arrays p and q of size m and n respectively. Find the relative complement
of two arrays.

- Complement of p means , element not in P. Similarly, relative complement means (p with respect to q) element present in p but not present in q, i.e, array p - array q.

## Example

## Input

```
p[] = {2,3,5,6,8}
q[] = {1,2,3,4,6,9}
```

## Output

```
5
8
```

## Explanation

```
The given array is p:
| 2 | 3 | 5 | 6 | 8 |
The given array is q:
| 1 | 2 | 3 | 4 | 6 | 9 |
The 5 and 8 are present in array p but not in array q.
```

## Algorithm

1. Firstly, we take two inputs of sorted array.
2. Then, we iterate over the two sorted array using the two pointer i and j by using for loop or while loop.
3. Now, we are gonna check the conditions :
   - i. If p[i] < q[j] ,then print p[i] and increment i.
   - ii. If p[i] > q[j] ,then increment j.
4. Else increment both the pointer.

## Implementation Code in C++

```C++
#include <iostream>
using namespace std;

// Driver code
int main()
{
    int m, n; //declaration of length of array

    cout << "Enter the size of first array : ";
    cin >> m; // taking input of length of array

    int p[m];
    cout << "Enter the elements of first array : ";
    for (int a = 0; a < m; a++)
    {
        cin >> p[a]; // Taking input of sorted array p
    }

    cout << "Enter the size of second array : ";
    cin >> n;

    int q[n];
    cout << "Enter the elements of second array : ";
    for (int b = 0; b < n; b++)
    {
        cin >> q[b]; // Taking input of sorted array q
    }

    int i = 0, j = 0; //initialising variable i and j

    while (i < m && j < n)
    {
        // If current element in p[] is smaller than q[] then p[] can't present in q[].
        if (p[i] < q[j])
        {
            cout << p[i] << endl;
            i += 1;
        }

        // Skipping smaller elements of q[]
        else if (p[i] > q[j])
        {
            j += 1;
        }

        // If Equal elements found (increament in both arrays)
        else if (p[i] == q[j])
        {
            i += 1;
            j += 1;
        }
    }

    // Printing remaining elements of arr1[]
    for (; i < m; i++)
    {
        cout << p[i] << " ";
    }

    //Output is the relative complement of two array.

    return 0;
}
```

### Output

```
Enter the size of first array : 5
Enter the elements of first array : 2 3 5 6 8
Enter the size of second array : 6
Enter the elements of second array : 1 2 3 4 6 9

5
8
```

## Time Complexity

> Time Complexity = O(m+n)

## Space Complexity

> Space Complexity = O(m+n)
