# Trapping Rain Water Problem

## Overview
<hr>
Given n non-negative integers array arr representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining

### Solution:
  We would solve this problem with the following steps:
  - Declare two array of size of main array namely ltr(Left To Right) and rtl(Right To Left). 
  - Traverse the main array from Left to Right and fill the ltr array with max size encountered so far. 
  - Again Traverse the main array from Right to Left and fill the rtl array with max size encountered so far.
  - Now to get water at that level find out the min(ltr[i], rtl[i]) and subtract it with arr[i]

![array](https://user-images.githubusercontent.com/63805002/136038692-820bcbc6-ea0b-44d4-9994-005c658e3320.png)
### Implementation(C++) Naive approach:
```c++
#include<iostream.h> 
#include<vector>
#include<climits>

using namespace std;
int main(){
    vector<int> arr{5,4,1,3,4};
    int total_water = 0;
    for(int i = 0; i < arr.size(); ++i){
        int a = 0, b = 0;
        for(int j = i; j>=0; --j){
            if(arr[j] > a)
                a = arr[j];
        }
        for(int k = i; k <arr.size(); ++k){
            if(arr[k] > b)
                b = arr[k];
        }
        int water = min(a,b) - arr[i];
        total_water += water;
    }
    cout<<"Total water is "<<total_water<<endl;
    return 0;
}
```

### Implemetation(C++) O(n) Approach

```c++
#include<iostream.h> 
#include<vector>
#include<climits>

using namespace std;

int trappedWater(vector<int> heigths){
    int n = heigths.size();
    if(n==2) return 0;

    vector<int> left(n,0), right(n,0);
    left[0] = heigths[0];
    right[n-1] = heigths[n-1];
    
    for(int i = 1; i < n; i++){
        left[i] = max(left[i-1], heigths[i]);
        right[n-i-1] = max(right[n-i], heigths[n-i-1]);
    }

    int water = 0;

    for(int i = 0; i < n; ++i){
        water += min(left[i],right[i]) - heigths[i];
    }

    return water;
}

int main(){ 
    vector<int> arr{5,4,1,3,4};
    int total_water = 0;

    cout<<"Total water is "<<trappedWater(arr)<<endl;

}
```
## Example 1.

![Screenshot 2021-10-06 113008](https://user-images.githubusercontent.com/63805002/136148609-8dc14d1b-26b2-4fd3-a807-57889036c170.jpg)

```
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. 
             In this case, 6 units of rain water (blue section) are being trapped.
```
## Example 2.

```
Input: height = [4,2,0,3,2,5]
Output: 9
```

## Analysis
<hr>
This problem can be solved in O(n) and O(n^2) approach. For O(n), Basically it can be solved by scanning the array from both sides and then get the total.

![array](https://user-images.githubusercontent.com/63805002/136040377-d6d7a053-c2c1-48cd-a689-a6798f92f2d6.png)
