#include <bits/stdc++.h>
using namespace std;
// Efficient Solution
void Move1(vector<int> &arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}
// brute force Approach
void Move2(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                    break;
                }
            }
        }
    }
}
void print(vector<int> arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> arr{1, 2, 0, 4, 3, 0, 5, 0};
    // Move1(arr);
    // print(arr);
    // cout << endl;
    Move2(arr);
    print(arr);
    return 0;
}