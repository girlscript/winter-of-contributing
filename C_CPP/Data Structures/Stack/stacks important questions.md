# Important questions of Stacks

## Nearest Greater Element On Right 

```CPP
#include<bits/stdc++.h>
using namespace std;

vector<int> nearestGreaterElementOnRight(vector<int>& v1)
{
    vector<int> answer(v1.size());
    stack<int> s1;
    int arr_size=v1.size()-1;

    for(int i=v1.size()-1; i>=0; i--)
    {
        int temp;
        if(s1.empty())
            temp=-1;

        else if(s1.top()>v1[i])
            temp=s1.top();

        else if(s1.top()<=v1[i])
        {
            while(!s1.empty() && s1.top()<=v1[i])
                s1.pop();
            
            if(s1.empty())
                temp=-1;
            else
                temp=s1.top();
        }

        s1.push(v1[i]);
        answer[arr_size]=temp;
        arr_size--;
    }

    return answer;
}

int main()
{
    vector<int> v1{1,6,2,5,3,4};
    
    cout<<"Elements of vector: ";
    
    for(int i=0; i<v1.size(); i++)
        cout<<v1[i]<<" ";
    
    cout<<endl;

    vector<int> v2;
    v2=nearestGreaterElementOnRight(v1);

    cout<<"Nearest Greater Element on Right: ";
    
    for(int i=0; i<v2.size(); i++)
        cout<<v2[i]<<" ";

    return 0;
}

```

#### OUTPUT
```CPP
Elements of vector: 1 6 2 5 3 4 
Nearest Greater Element on Right: 6 -1 5 -1 4 -1 

```
- In this question we will find nearest greater element to right,We will take the help of stacks and vectors for solving this problem.

## Nearest greater element to left

```CPP
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int n=4;
    int arr[n]={1 , 3, 2 , 4};
    vector<int> v;
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        if(s.size()==0)
        v.push_back(-1);
        else if(s.size()>0 && s.top()>arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=arr[i])
        {
            while(s.size()>0 && s.top()<=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    return(0);
}
```

#### OUTPUT
```CPP
-1 -1 3 -1 
```

- In this question we will find nearest greater element to left,We will take the help of stacks and vectors for solving this problem.

## Nearest smaller element to left

```CPP
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> v;
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        if(s.size()==0)
        v.push_back(-1);
        else if(s.size()>0 && s.top()<arr[i])
        v.push_back(s.top());
        else if(s.size()>0 && s.top()>=arr[i]){
            while(s.size()>0 && s.top()>=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    for(auto i:v)
        {
            cout<<i<<" ";
        }
    return(0);
}

```

#### INPUT
```CPP
4
1 2 3 4
```

#### OUTPUT
```CPP
-1 1 2 3

```

- In this question we will find nearest smaller element to left,We will take the help of stacks and vectors for solving this problem.

## Nearest smaller to right

```CPP
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> v;
    stack<int> s;
    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0)
        v.push_back(-1);
        else if(s.size()>0 && s.top()<arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()>=arr[i])
        {
            while(s.size()>0 && s.top()>=arr[i]){
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    return(0);
}

```

#### INPUT
```CPP
5
3 2 51 1 4
```
- In this question we will find nearest smaller element to right,We will take the help of stacks and vectors for solving this problem.

#### OUTPUT
```CPP
2 1 1 -1 -1
```
## Stock Span problem

```CPP

#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    stack<pair<int,int>> s;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top().first>arr[i])
        v.push_back(s.top().second);
        else if(s.size()>0 && s.top().first<=arr[i])
        {
            while(s.size()>0 && s.top().first<=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            v.push_back(-1);
            else
            v.push_back(s.top().second);
        }
        s.push({arr[i],i});
    }
    for(int i=0;i<n;i++)
    {
        v[i]=i-v[i];
    }
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    return (0);
}

```

#### INPUT
```CPP
4
12 3 5 1
```

#### OUTPUT
```CPP
1 1 2 1 
```

- Stock Span Problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate span of stock’s price for all n days. 
The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day. 
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6} 