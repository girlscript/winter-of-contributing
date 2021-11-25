
# Sort an array in wave form

Given an unsorted array of integers, sort the array into a wave like array. An array ‘arr[0..n-1]’ is sorted in wave form if arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >=...

## Algorithm :- 
- Traverse all even positioned elements of the input array, and do the following  — >

- If the current element is smaller than the previous odd element, swap previous and current.
- If the current element is smaller than the next odd element, swap next and current.

## Code :-
```
#include<iostream>
using namespace std;
int main(){

    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);

    ///Go to every 2nd element, try to create a peak
    for(int i=0;i<n;i+=2){

        ///Check for Left Element
        if(i>0 && a[i-1]>a[i]){
            swap(a[i],a[i-1]);
        }
        ///Check for the right element
        if(i<=n-2 && a[i+1]>a[i]){
            swap(a[i],a[i+1]);
        }

    }
    ///Print the array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

return 0;
}
```
## Output :-
```
2 1 4 3 5
```

## Complexity Analysis :-
 
- Time Complexity : O(n)

- Space Complexity : O(1)

## References :-
- https://www.geeksforgeeks.org/sort-array-wave-form-2/
- https://medium.com/enjoy-algorithm/sort-an-array-in-wave-form-9c88ed34b7f2

