<h1 align="center">Largest Rectangle Area in Histogram</h1>

### :point_right:Difficulty: Hard<br>
### :point_right:Asked in: Facebook, Amazon, Google

<hr>

## :arrow_right: Problem Statement:-
Given an Integer representing number of bars in a Histogram and an array of integers representing the height of the bars in the given Histogram. Find the maximum Rectangular area possible in the Histogram given when the width of each bar is considered to be one unit.

* **Problem reference**: https://leetcode.com/problems/largest-rectangle-in-histogram/

* **For example:** H = [2, 3, 1, 4, 5, 4, 2] then the histogram has a rectangle of area of 12 showed in shaded.<br>
  **Input:-** &nbsp;&nbsp;&nbsp;&nbsp;7<br>
  &nbsp;  &nbsp;    &nbsp;   &nbsp;  &nbsp;  &nbsp; &nbsp;&nbsp;&nbsp;&nbsp;2 3 1 4 5 4 2 <br>
  **Output:-** 12
  
  
            H[i] ^                 
               7 |       
               6 |            __
               5 |         __|  |__   
               4 |   __   |  |  |  |   
               3 |__|  |  |  |  |  |__
               2 |  |  |__|  |  |  |  |  
               1 |__|__|__|__|__|__|__|______
                  0  1  2  3  4  5  6  7        i 

            H[i] ^                 
               7 |       
               6 |            __
               5 |         __|  |__   
               4 |   __   |xx|xx|xx|   
               3 |__|  |  |xx|xx|xx __
               2 |  |  |__|xx|xx|xx|  |  
               1 |__|__|__|xx|xx|xx|__|______
                  0  1  2  3  4  5  6  7        i 

             


## :arrow_right: Brute-Force:-
A very basic approach can be, considering every bar as a ending point of area.
We can one by one consider each bar as the ending point of area and then for each ending point consider every bar having index smaller than the index of the ending bar to calculate area between them.
After calculation of area with every ending point we update the maximum possible rectangular area and finally return it after all ending points are exhausted.

Now, the maximum rectangular area between any two bars in a Histogram can be calculated by multiplying the number of bars in between starting bar and ending bar (both inclusive) by the height of the shortest bar.
This is because it is given, width of every bar is one.
That is, consider the indices of starting and ending bars to be x & y respectively, then,
Max rectangular area = [Min height bar (between x & y)] * [y – x + 1]

### C++ code:-
```
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

        ll n; //size of histogram array
        cin >> n;

        ll arr[n];//array for storing heights
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        
        ll ans=0;
        for (int i = 0; i < n; i++)//considering every bar as a ending point of an area 
        {
            ll minHeight = INT_MAX;
            ll maxArea = 0;//area when  when 'i' is chosen as the ending point of an area
            
            for (int j = i; j >=0; j--) 
            {
                minHeight = min(minHeight, arr[j]);
                maxArea = max(maxArea, minHeight * (i - j + 1));//current area will be the height of the shortest bar multiplied with the number of bars
            }
            ans=max(ans,maxArea);//updating overall maximum area with the current maximum
        }

        cout <<ans<< "\n";//Print maximum area possible
 
}
```
* Time complexity for above approach is: O(n*n)
* Space Complexity for above approach is: O(1)


## :arrow_right: Efficient Approach (Using Stack):-

* As we know, calculation of maximum rectangular area in any segment of the histogram depends upon the shortest bar in that area (if we include all of the bars).
Therefore,this problem can be solved more efficiently if we calculate area for every bar when being the shortest in its rectangle for which we need to know the index of closest smaller bar on left and the index of closest smaller bar on right. Calculation of these indices for every element in the given histogram would take O(n^2) time which makes it even more inefficient.

* But this task can be done in linear time using Stack Data Structures for remembering previous smaller elements in which basically heights are stored in increasing order with the largest being at the top of the stack. This stack does not actually stores the height of the bars but instead stores their indices.

Note:-***Atleast 1 bar is fully included in the largest rectangle.Therefore,if we find areas of all largest rectangles for each bar being included full then we can find the maximum rectangle area.***

**Steps:-**

* Insert index of each item if the value in that is greater or equal to the top of the stack.
* If the top element of the stack is greater than or equal to the current element then pop from the stack until the top element in the stack is lesser than the new element.(Stack follows LIFO i.e.last in first out technique)
* Left and right vector contains the index of the element which is closest smaller bar in the left and right respectively with respect to the current element.
* Lastly, calculete the area for each index i.e [Area=(right-left+1)*height]
where (right-left+1)=Number of bars

* For the above example given hist=[2,3,1,4,5,4,2], the iteration in visual looks like:<br>
 
![1_mIDtGGfUOkB3FTs7h74LtA](https://user-images.githubusercontent.com/72224843/141700139-59b6273c-97ab-4a91-ba12-071371c958e1.png)

### C++ Code:-
```
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        ll n; //size of histogram array.
        cin >> n;

        ll arr[n];//array for storing heights
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        stack<ll> s;//stack declaration

        vector<ll> left(n), right(n); //declare left and right vector of size n for storing index of the left limit and right limit respectively.

        for (ll i = 0; i < n; i++)//iterate through loop from left to right to find nearest left limit.
        {
            //check if stack is empty or not.
            if(s.empty())
            {
            s.push(i);//there is no element on left which is smaller therefore insert current index
            left[i]=0;
            }
            else
            { 
            while(!s.empty() && arr[s.top()]>=arr[i])
        {
            s.pop();
        }
        left[i]=s.empty()?0:s.top()+1;//storing left limit therefore s.top()+1
        s.push(i);
        }
    }

        while (!s.empty())//clear stack
            s.pop();

         for(int i=n-1;i>=0;i--)//iterate through loop from right to left to find nearest right limit.
    {
        if(s.empty())
        {
            s.push(i);//there is no element on right which is smaller therefore insert current index
            right[i]=n-1;
        }
        else
        {
        while(!s.empty() && arr[s.top()]>=arr[i])
        {
            s.pop();
        }
        right[i]=s.empty()?n-1:s.top()-1;//storing right limit therefore s.top()-1
         s.push(i);
        }
    }
    
    ll ans=0;
        for (ll i = 0; i < n; i++) 
       {
            ans = max(ans, (right[i] - left[i] + 1) * arr[i]);//calculate maximum  area among areas of individual bar included fully
        }
    
        cout << ans << "\n";//Print maximum area possible
 
}
```
* Time Complexity for above approach is: O(n)
* Space Complexity for above approach is: O(n)
<hr>

## :arrow_right: References:-
https://www.includehelp.com/icp/largest-rectangle-area-in-a-histogram.aspx<br>
https://cppsecrets.com/users/69901151051101031049797110991049710848485764103109971051084699111109/C00-program-to-find-the-LargestRectangleinHistogram.php<br>
https://tech.pic-collage.com/algorithm-largest-area-in-histogram-84cc70500f0c<br>
