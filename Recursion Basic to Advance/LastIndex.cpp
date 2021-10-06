/*
1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are given a number x. 
4. You are required to find the last index at which x occurs in array a.
5. If x exists in array, print the last index where it is found otherwise print -1.


Constraints

1 <= n <= 10^4
0 <= n1, n2, .. n elements <= 10 ^ 3
0 <= x <= 10 ^ 3

Sample Input

6
15
11
40
4
4
9
4

Sample Output

4

*/
#include <bits/stdc++.h>
using namespace std;

int lastIndex(int arr[], int idx, int x, int n)
{
    // write your code here
    if (idx == n)
        return -1;

    int li = lastIndex(arr, idx + 1, x, n);
    if (li == -1)
    {
        if (arr[idx] == x)
        {
            return idx;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return li;
    }
}

int main()
{
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = lastIndex(arr, 0, d, n);
    cout << p << endl;
}