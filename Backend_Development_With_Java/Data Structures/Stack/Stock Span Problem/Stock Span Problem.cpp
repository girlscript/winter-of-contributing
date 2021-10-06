#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<pair<int,int>>s;
    vector<int>v;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top().first>a[i])
        {
            v.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first<=a[i])
        {
            while(!s.size()==0 && s.top().first<=a[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top().second);
            }
        }
        s.push({a[i],i});
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<i-v[i]<<" ";
    }

    return 0;
}

