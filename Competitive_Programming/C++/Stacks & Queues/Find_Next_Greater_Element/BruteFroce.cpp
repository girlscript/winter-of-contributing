#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int size;
    cin >> size;
    vector<int> vec(size);
    for (size_t i = 0; i < size; i++)
    {
        cin >> vec[i];
    }
    int next;
    for (int i = 0; i < size; i++)
    {
        next = -1;
        for (int j = i + 1; j < size; j++)
        {
            if (vec[i] < vec[j])
            {
                next = vec[j];
                break;
            }
        }
        cout << vec[i] << "'s Next Greater Element is " << next << endl;
    }
    return 0;
}