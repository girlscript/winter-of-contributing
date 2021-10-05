# Trapping Rain Water Problem

## Overview

```
#include<bits/stdc++.h>
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

    // My Approach O(n^2)
    /*
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

    */

    cout<<"Total water is "<<trappedWater(arr)<<endl;

}
```