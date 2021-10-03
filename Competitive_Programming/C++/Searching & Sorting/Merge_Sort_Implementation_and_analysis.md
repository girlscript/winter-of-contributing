## Merge Sort and Its Analysis
### Overview
Like **QuickSort**, **Merge Sort** is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves. The **merge( )** function is used for merging two halves. The **merge(arr, l, m, r)** is a key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one.

<hr>

### Algorithm
```
MergeSort(arr[ ], l,  r)
     If r > l 
          1. Find the middle point to divide the array into two halves: <br/>  
               middle m = l+ (r-l)/2 
               
          2. Call mergeSort for first half:
               Call mergeSort(arr, l, m)
               
          3. Call mergeSort for second half:
               Call mergeSort(arr, m+1, r)
               
          4. Merge the two halves sorted in step 2 and 3:
               Call merge(arr, l, m, r)
 ```
<hr>

### Code.
```
#include<iostream>
#include<vector>

using namespace std;

//Helper Method
void merge(vector<int> &array, int s, int e){
    int i = s;
    int m = (s+e)/2;
    int j = m + 1;

    vector<int> temp;
    while(i<=m and j<=e){
        if(array[i] < array[j]){
            temp.push_back(array[i]);
            i++;
        }
        else{
            temp.push_back(array[j]);
            j++;
        }
    }
    //copy remaining element from first array
    while(i<=m){
        temp.push_back(array[i++]);
    }

    //copy remaining element from second array
    while(j<=e){
        temp.push_back(array[j++]);
    }

    //copy back the element from temp to original array
    int k = 0;
    for(int idx = s; idx <= e; ++idx){
        array[idx] = temp[k];
        k++;
    }
    return;
}

//sorting method
void mergesort(vector<int> &arr, int s, int e){
    //base case i.e if there is only one element in array so its already sorted
    if(s>=e){
        return;
    }

    //rec case
    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    return merge(arr,s,e);
}   

int main(){
    vector<int> arr{38,27,43,3,9,82,10};

    int s = 0;
    int e = arr.size()-1;
    mergesort(arr,s,e);
    for(int i : arr){
        cout<<i<<" ,";
    }
}
```
<hr>

### Input and Output Analysis
```
Given array is 
38 27 43 3 9 82 10 
Sorted array is 
3 9 10 27 38 43 82

```
<p align="center">
<img src="https://user-images.githubusercontent.com/63805002/134805767-7f0ec507-444e-45b6-9c06-5c1914c3d7c8.png"> 
</p>
<hr>

### Complexity analysis.
Merge Sort is a **recursive algorithm** and time complexity can be expressed as following recurrence relation. 
```
T(n) = 2T(n/2) + θ(n)
```

**Auxiliary Space** : O(n) <br/>
**Algorithmic Paradigm** : Divide and Conquer <br/>
**Sorting In Place** : Not in a typical implementation <br/>
**Stable** : Yes <br/>

The best-case and average-case complexity of the quick sort algorithm is **O(n logn)**.

<hr>

### Space Complexity
The space complexity is calculated based on the space used in the recursion stack. The **worstcase** space used will be **O(n)** . The **average case** space used will be of the order **O(log n)**. The worst case space complexity becomes **O(n)**, when the algorithm encounters its worst case where for getting a sorted list, we need to make n recursive calls.
<br>
### Drawbacks
1. Slower comparative to the other sort algorithms for smaller tasks.
2. Merge sort algorithm requires an additional memory space of 0(n) for the temporary array.
3. It goes through the whole process even if the array is sorted.

<hr>

## Author

* [@ksheetiz](https://github.com/ksheetiz)

