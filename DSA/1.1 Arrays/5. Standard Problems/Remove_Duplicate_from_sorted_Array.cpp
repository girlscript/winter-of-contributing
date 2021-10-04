#include <bits/stdc++.h>
using namespace std;
int remove(vector<int> &arr)
{
    int k = 1;
    for (auto i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[k - 1])
        {
            arr[k] = arr[i];
            k++;
        }
    }
    return k;
}
int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the size : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        arr.push_back(c);
    }
    int k = remove(arr);
    cout << "After removing all duplicates size of new array is : " << k << endl;
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}