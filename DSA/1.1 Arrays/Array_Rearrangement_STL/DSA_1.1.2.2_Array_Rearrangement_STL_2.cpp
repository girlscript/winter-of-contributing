/*
Problem definition : Rearrange positive and negative numbers such that negative numbers occur before the positive numbers using STL comparator.

Prerequisite Knowledge: STL Sort Function

Explanation:

1-  We need to create our own custom comparator function to place negative numbers before positive numbers. We also have to keep zero's between positive and negative numbers.

2- In bool comp(int a, int b) 'a' occurs after 'b' in the array and if we return true then 'a' and 'b' will be swapped else not.

3-  We don't need to swap:
      1- (if both elements are positive)
      2- or (negative)
      3- or (they are already rearranged like we wanted)
      4- or (the element that occurs later in the array is 0 and the element that occurs first in the array is negative)
      5- or (the element that occurs in the array is greater than 0 and the element that occurs first in the array is 0).

4-  We need to swap:
      1- (if the positive element occurs before the negative element)
      2- or (the element that occurs later in the array is 0 and the element that occurs first in the array is positive)
      3- or (the element that occurs later in the array is negative and the element that occurs first in the array is 0).

Time Complexity: O(n log(n)),where n is the size of the input array.
Auxiliary Space Complexity: O(1)  
 
*/

//Implementation in C++
#include <bits/stdc++.h>
using namespace std;

//Comparator function.
bool comp(int a, int b)
{
    //  no need to swap
    //  (if both elements are positive)
    //  or (negative)
    //  or (they are already rearranged like we wanted)
    //  or (the element that occurs later in the array is 0 and the element that occurs first in the array is negative)
    //  or (the element that occurs in the array is greater than 0 and the element that occurs first in the array is 0).
    if ((a > 0 and b > 0) or (a < 0 and b < 0) or (a > 0 and b < 0) or (a == 0 and b < 0) or (a > 0 and b == 0))
        return false;

    // swap
    // (if the positive element occurs before the negative element)
    // or (the element that occurs later in the array is 0 and the element that occurs first in the array is positive)
    // or (the element that occurs later in the array is negative and the element that occurs first in the array is 0).
    if ((a < 0 and b > 0) or (a < 0 and b == 0) or (a == 0 and b > 0))
        return true;
    return true;
}

//Function to rearrange array.
void rearrange(vector<int> &arr)
{
    sort(arr.begin(), arr.end(), comp);
}

int main()
{
    //n is the size of the array
    int n;

    //read n
    cin >> n;

    vector<int> arr(n);
    //read the input array
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    //Rearrange array
    rearrange(arr);

    //print the array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

/*

Generally in these types of problems we need to just implement the custom comparator function based on the problem definition.

Similar Problems:
    1- Move all zeros to end of the array.
    2- Rearrange positive and negative numbers such that positive numbers occur before the negative numbers.
    
*/
