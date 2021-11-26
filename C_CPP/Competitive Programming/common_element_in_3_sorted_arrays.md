# Common Elements in Three Sorted Arrays

## Problem Statement :

Given three sorted arrays p, q and r of size a, b and c respectively. Find all the common elements in these three arrays.

## Example

## Input

```
p[] = {2,4,6,8,10,12,14,16,18,20}
q[] = {4,8,12,16,20}
r[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,16,18,19,20}
```

## Output

```
4
8
12
16
20
```

## Implementation Code in C++

```C++
#include <iostream>
#include <unordered_set>
using namespace std;

// Driver code
int main()
{
    int a, b, c;

    cout << "Enter the size of first array : ";
    cin >> a; // taking input of length of array

    int p[a];
    for (int i = 0; i < a; i++)
    {
        cin >> p[i];
    }

    cout << "Enter the size of second array : ";
    cin >> b; // taking input of length of array

    int q[b];
    for (int i = 0; i < b; i++)
    {
        cin >> q[i];
    }

    cout << "Enter the size of third array : ";
    cin >> c; // taking input of length of array

    int r[c];
    for (int i = 0; i < c; i++)
    {
        cin >> r[i];
    }

    cout << "Common Elements of given Sorted Arrays are : " << endl;

    // made three unordered sets to store these 3 arrays
    unordered_set<int> one, two, three;

    // inserting first array p[] to unordered set one
    for (int i = 0; i < a; i++)
    {
        one.insert(p[i]);
    }

    // inserting second array q[] to unordered set two
    for (int i = 0; i < b; i++)
    {
        two.insert(q[i]);
    }

    // checking if elements of 3rd array's elements are present in first 2 unordered sets
    for (int i = 0; i < c; i++)
    {
        if (one.find(r[i]) != one.end() && two.find(r[i]) != one.end())
        {
            // using a 3rd unordered set to prevent duplicates
            if (three.find(r[i]) == three.end())
            {
                cout << r[i] << endl;
            }
            three.insert(r[i]);
        }
    }

    return 0;
}
```

### Output

```
Enter the size of first array : 10
2 4 6 8 10 12 14 16 18 20
Enter the size of second array : 5
4 8 12 16 20
Enter the size of third array : 20
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

Common Elements of given Sorted Arrays are :
4
8
12
16
20
```

## Time Complexity

> Time Complexity = O(a+b+c)

## Space Complexity

> Space Complexity = O(a+b+c)
