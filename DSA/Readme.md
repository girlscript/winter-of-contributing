## Next Greater Element
<hr>

```

Given an array arr[ ] of size N having distinct elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

```

## Example

```

Input: 
N = 4, arr[] = [1 3 2 4]
Output:
3 4 4 -1
Explanation:
In the array, the next larger element 
to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? 
since it doesn't exist, it is -1.

```

## Cpp Solution

```

#include <bits/stdc++.h>
 
using namespace std;
 
/* prints element and res pair for all
elements of arr[] of size n */
void printNGE(int arr[], int n)
{
    stack<int> s;
    int res[n];
    for (int i = n - 1; i >= 0; i--) {
        /* if stack is not empty, then
        pop an element from stack.
        If the popped element is smaller
        than next, then
        a) print the pair
        b) keep popping while elements are
        smaller and stack is not empty */
        if (!s.empty()) {
            while (!s.empty() && s.top() <= arr[i]) {
                s.pop();
            }
        }
        res[i] = s.empty() ? -1 : s.top();
        s.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " --> " << res[i] << endl;
}
// Driver Code
int main()
{
    int arr[] = { 11, 14, 17, 2, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    printNGE(arr, n);
    return 0;
}

```

## Output

```

11 ---> 14
14 ---> 17
17 ---> -1
2---> 5
5---> -1

```
