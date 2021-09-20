#include <bits/stdc++.h>
using namespace std;
void nextGreaterElements(vector<int> &nums)
{
    stack<int> s;
    vector<int> ans(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        if (s.empty())
            s.push(i);
        else if (nums[s.top()] >= nums[i])
        {
            s.push(i);
        }
        else
        {
            while (!s.empty() && nums[s.top()] < nums[i])
            {
                ans[s.top()] = nums[i];
                s.pop();
            }
            s.push(i);
        }
    }
    while (!s.empty())
    {
        ans[s.top()] = -1;
        s.pop();
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << "'s Next Greater Element is " << ans[i] << endl;
    }
}
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
    nextGreaterElements(vec);
    return 0;
}