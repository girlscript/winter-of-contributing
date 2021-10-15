# Search an Element in a Sorted and Rotated Array

We are given an sorted array which is rotated as input. Our task is to search an element in this sorted and rotated array and return its index.

**Example :**

```
Input: arr[] = {11,12,15,18,2,5,6,8};
       key = 8

Output: Found at index 7

Input: arr[] = {20,30,50,5,7};
       key = 5

Output: Found at index 3 

```
## Approach: 

1. Since the array is sorted, we will use binary search to find the element. But the array is also rotated so first we need to find the pivot along which the array is rotated.

2. After finding the pivot element we divide the array into two sub-arrays.

3. The two sub-arrays formed will already be in sorted order so we apply binary search on each subarray to find the element.

### Finding the pivot element

Consider the following sorted array:

![Sorted Array](https://user-images.githubusercontent.com/61610837/136654922-578c35b9-8a29-41ef-b09e-9c703aaf48f9.png)

Initially the no. of rotations on this array = 0 (notice the index of minimum element)

This array is rotated and provided to us as input  :

11&nbsp; 12&nbsp; 15&nbsp; 18&nbsp; 2&nbsp; 5&nbsp; 6&nbsp; 8

In the rotated array the no. of rotations = 4 (index of minimum element in rotated array)

So we can say that the no. of rotations performed on an array = index of the minimum element.

Therefore, we need to calculate the index of the minimum element.

We find the mid element in the array.

The smallest element would be the one that is smaller than both its neighbours
We compare mid element with both its neighbours if mid is less than both, then mid element is minimum element and we return it,
else we look in either of the unsorted arrays for the minimum element.

The implementation of the above function is given below

```
int pivot(int a[],int n){    // Function to find the index of minimum element in the array
    int start = 0,end=n-1;
    int mid;
    while(start<end){
        mid = start+(end-start)/2;
        int prev = (mid+n-1)%n;
        int next = (mid+1)%n;
        if(a[start]<=a[end]){
            return start;
        }
        if(a[mid]<a[next] && a[mid]<a[prev]){
            return mid;
        }
        else if(a[start]<=a[mid]){
            start=mid+1;
        }
        else if(a[mid]<=a[end]){
            end = mid-1;
        }
    }
}


```
Now we have the pivot element we divide the array in two sorted subarrays and apply binary search on each subarray to find the element.

```
int search(int a[],int n,int key){ // function to compute the index of the element to be searched
    int ind = count(a,n);
    int ans1 = b_search(a,0,ind-1,key);
    int ans2 = b_search(a,ind,n-1,key);

    if(ans1==-1 && ans2 == -1){
        return -1;
    }
    else if(ans1 == -1 && ans2!=-1){
        return ans2;
    }
    else if(ans1!=-1 && ans2==-1){
        return ans1;
    }

```

If both the subarrays return -1, it means the element is not present, else the index of the element is returned by any one subarray.

The complete implementation of the approach is given below

```
#include<iostream>
using namespace std;

int count(int a[],int n){    // Function to find the index of minimum element in the array
    int start = 0,end=n-1;
    int mid;
    while(start<end){
        mid = start+(end-start)/2;
        int prev = (mid+n-1)%n;
        int next = (mid+1)%n;
        if(a[start]<=a[end]){
            return start;
        }
        if(a[mid]<a[next] && a[mid]<a[prev]){
            return mid;
        }
        else if(a[start]<=a[mid]){
            start=mid+1;
        }
        else if(a[mid]<=a[end]){
            end = mid-1;
        }
    }
}
int b_search(int a[],int start,int end,int key){   // function to implement binary search
    int mid;
    while(start<end){
        mid = start+(end-start)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(key>a[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
} 
int search(int a[],int n,int key){ // function to compute the index of the element to be searched
    int ind = count(a,n);
    int ans1 = b_search(a,0,ind-1,key);
    int ans2 = b_search(a,ind,n-1,key);

    if(ans1==-1 && ans2 == -1){
        return -1;
    }
    else if(ans1 == -1 && ans2!=-1){
        return ans2;
    }
    else if(ans1!=-1 && ans2==-1){
        return ans1;
    }
}
int main(){

    int n;
    cin>>n;   // size of the array
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];            // sorted and rotated array as input
    }
    int element;
    cin>>element;   // element to be searched in the sorted rotated array
    int index = search(a,n,element);
    cout<<index<<endl;

    return 0; 
}

```

## Time Complexity

Since the array given to us is sorted, we applied Binary Search to solve the problem. Therefore, the time complexity of this algorithm will be
 O(log n).
 
## Space Complexity 

The Space Complexity is O(1), since we haven't used any extra space for computing the solution.

### References

[Search In Sorted and Rotated Array](https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/)<br>
[No. of times Sorted Array is Rotated - Aditya Verma](https://youtu.be/4WmTRFZilj8)<br>
[Find an Element in Sorted and Rotated Array - Aditya Verma](https://youtu.be/Id-DdcWb5AU)
