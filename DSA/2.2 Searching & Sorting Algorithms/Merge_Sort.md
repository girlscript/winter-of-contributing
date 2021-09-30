# Merge Sort

### Introduction 📖

Merge Sort is one of the most popular sorting algorithms that is based on the principle of "__Divide and Conquer Algorithm__".

Here, the problem is divided into multiple sub-problems. Now, Each sub-problem is solved individually. Finally, all the sub-problems are combined to form a final solution.

> In Divide and Conquer Technique, we divide a problem into subproblems. When the solution to each subproblem is ready, we thus, 'combine' the results from the subproblems to solve the main problem.

### Intuition behind using Merge Sort 💡

The idea is simple, we divide the array into 2 halves recursively, perform merge sort on left half and right half independently. Then we merge the two sorted left and right halves. 

<img src="https://cdn-images-1.medium.com/max/600/1*ZwWt6m6bMRZTL_-8r4zOOQ.gif" style="height: 40%;">

__Pseudo Code:__

```
MergeSort(int arr[], int start, int end) {
  if start>end :
      1. Find Middle point to divide array in 2 halves :
          mid= (start+end)/2;
      2. Call MergeSort on first half :
          MergeSort(arr,start,mid);
      3. Call MergeSort on second half :
          MergeSort(arr,mid+1,end);
      4. Merge both the sorted halves :
          Merge(arr,start,mid,end);
}
```

![image](https://user-images.githubusercontent.com/58984074/135335459-a2d87b9c-19c4-4bf4-b176-df37a531a2b0.png)


#### Merge Function: ⚙️

We are given two sorted halves and we, need to combine them into one sorted array. This can be approached easily by thinking of two pointer approach. 

- Create an auxilary array of size (end-start+1) to store the new sorted array
- Intialize two pointers to head=start and tail=mid+1
- If arr[head]<=arr[tail], then temp_arr[index]=arr[head], head++;
- else temp_arr[index]=arr[tail], tail++;

### Code 💻

```c++
// Merge Function 
void Merge(int arr[], int start, int mid, int end) {
    // Create and Auxillary Array to store new sorted array
    int temp_arr[end-start+1];
    int index=0, head=start, tail=mid+1;
    while(head<=mid and tail<=end) {
        // Checking Which part has smaller element storing in temp_arr
        if(arr[head]<=arr[tail]) {
            temp_arr[index]=arr[head];
            head++;
        } else {
            temp_arr[index]=arr[tail];
            tail++;
        }
        index++;
    }
    // If first half has still elements left 
    while(head<=mid) {
        temp_arr[index++]=arr[head++];
    }
    // If second half has still elements left 
    while(tail<=end) {
        temp_arr[index++]=arr[tail++];
    }
    index=0;
    // Storing back the result in Orignal Array 
    while(start<=end) {
        arr[start]=temp_arr[index++];
        start++;
    }
}
// Merge sort 
void Merge_sort(int arr[], int start, int end) {
    if(start<end) {
        // Find the Middle point to divide the array in two halves
        int mid=(start+end)/2;
        // Perform Merge Sort on First Half from arr[start,mid]
        Merge_sort(arr,start,mid);
        // Perform Merge Sort on Second Half from arr[mid+1,end]
        Merge_sort(arr,mid+1,end);
        // Merge both the sorted Halves 
        Merge(arr,start,mid,end);
    }
}  

// To sort Arr[] of size n, Call Merge_sort(Arr,0,n-1);
```

### ⏰ Time and Space Complexity Analysis :

Since we are first, recursively dividing the arrays and then sorting the two halves, thus it can be expressed as the following recurrence relation:

```
T(n) = 2T(n/2) + θ(n)
T(n) = 2T(n/2) + cn 
Using Master Theorem it can be reduced to  T(n) = aT(n/b) + O(n^k), where a=2 and b=2 and k=1
Therefore, Time complexity T(n)= O(n^k * logn)
                               = O(n^1 * logn)
                               = O(nlogn)
```
Therefore, **Time Complexity** of Merge Sort Algorithm is O(nlogn)

Also, **Space Complexity** of Merge Sort = Space Complexity of Merging + Size of of recursion Stack = O(n) + O(logn) = O(n)

                              
| Time Complexity |  |
| --- | --- |
| Best | O(n*log(n)) |
| Worst | O(n*log(n)) |
| Average | O(n*log(n)) |
| Space Complexity | O(n) |
| Stability | YES |



### Applications of Merge Sort 📝: 

1. Merge Sort is a stable sorting algorithm therefore similar elements would be in the same order in the newly sorted array. 
2. Merge Sort is best choice for sorting Linked Lists, it would require only O(1) extra space. 
3. Inversion Count Problem  
4. Used in [External Sorting](https://en.wikipedia.org/wiki/External_sorting)

#### Some Drawbacks of Merge Sort: 

1. Merge Sort Algorithm requires an extra space of O(n) for the temporary array
2. Worst Case Time Complexity is also O(nlogn), i.e it would perform all operations even for the sorted Array

### References 📙

1. https://www.enjoyalgorithms.com/blog/merge-sort-algorithm
2. https://www.geeksforgeeks.org/merge-sort/
3. https://en.wikipedia.org/wiki/Merge_sort
