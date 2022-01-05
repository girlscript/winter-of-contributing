# Stock Span Problem
The problem statement states that -*"The span of the stock's price today is defined as the maximum number of consecutive days (starting from today and going backward) for which the stock price was less than or equal to today's price."*

So according to the statement we have to **find the span of days for the given input of the prices of a stock for the given number of days**.

I am presenting the code and the logic of this problem which I developed during my practice of stack problems.

## Logic
1. We are given the price of the stock for the given number of consecutive days in the form of array.
2. We will find the greatest integer to the left of the particular pointed index with each traversal.
3. For that we will create a stack and a vector.
4. For the leftmost price in the array we will push -1 in the vector.
5. For other elements we will find the greatest element to the left of the pointed index.
6. With every traversal we will keep on pushing the elment and it's index to the stack.
7. If the top of stack is lesser than the current pointed element then it has to be popped else that element index has to be added to the index.
8. By following all these procedures we will get the index of all the greatest elemnts to the left of the pointed index.
9. The final result i.e **the span of days** will be given by subtracting the index of the particular price in the array and the element present on the same index in the vector.
10.This is the algorithm ,I followed for this problem.

### NOTE
This problem is very famous and common during the placement procedure.
For reference of whole statement of problem you can click on Question link:-
[Question link](https://leetcode.com/problems/online-stock-span/)
#  CODE
You can look on to the code for reference:-

#include<bits/stdc++.h>

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

Test case:

Input: [100,80,60,70,60,75,85]

Output:[1,1,1,2,1,4,6]

Follow the above algorithm and code and we will get the required output.
