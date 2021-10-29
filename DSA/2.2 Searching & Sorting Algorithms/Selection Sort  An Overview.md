# Selection Sort : An Overview



### Introduction

When it comes to Algorithms, sorting algorithms are one of the primary and basic algorithms that comes in picture. Although there are around dozen of sorting algorithms but few of them are very famous as they are simple and easy to understand. Selection Sort is one of them. Today in this documentation we will getting some insights on this famous sorting algorithm.  We will be focusing on the algorithm, space and time complexity, when to use and its advantages and disadvantages.



### Intuition behind using Selection Sort

Selection Sort divides the list(array) into sublists : a sorted sublist and an unsorted sub list. Initially we are given an unsorted list. This algorithm swaps through the lists number of times approximately equal to the number of elements present in the list.

At every iteration the smallest element present in the unsorted sub list comes to its right position (position in which it will be present when the array is sorted) using swapping. We will see how it works in next section. One thing to notice is that the initially size of sorted sublist is 0 and size of unsorted sublist is n.

>  So at every iteration the size of sorted sublist increases by one while the length of unsorted sublist decreases by one. 

 The iterations start from the 0 index and go upto last second index. There is no need for iterating one more time as the after n-1 iterations all the elements except the largest element comes to its right position making the largest element on its correct position automatically i.e. at last. 

> Total number of iterations to sort n elements using selection sort are n-1.





### Working of Selection Sort

Selection Sort is an in-place sorting algorithm which works using iteration and swaps as mentioned above. Now we will be understanding the above algorithm using an example.

Let the elements in unsorted array be  																																																

> 99, 44, 11, 66, 55, 33

Here we have n = 6 elements so the we have number of iterations equal to n-1 i.e. 5

**Iteration 1 : ** So at first iteration **we start from index 0** and find the smallest element **11** in the unsorted sublist (99, 44, 11, 66, 55, 33) and swap it with 0 index. Now 0 index contains the smallest element of the array. After 1st iteration the array is 

> 11, 44, 99, 66, 55, 33

**Iteration 2 :** In second iteration **we start from index 1** and find the smallest element **33** in the unsorted sublist (44, 99, 66, 55, 33) and swap it with 1 index. Now first index contains second smallest element of the array and our array becomes 

> 11, 33, 99, 66, 55, 44

**Iteration 3 :** In third iteration **we start from index 2** and find the smallest element **44** in the unsorted sublist (99, 66, 55, 44) and swap it with 2 index. No second index contains third smallest element of the array and our array becomes 

> 11, 33, 44, 66, 55, 99

**Iteration 4 :** In fourth iteration **we start from index 3** and find the smallest element **55** in the unsorted sublist ( 66, 55, 99) and swap it with 3 index. No third index contains fourth smallest element of the array and our array becomes 

> 11, 33, 44, 55, 66, 99

**Iteration 5** : In fifth iteration **we start from index 4** and find the smallest element **66** in the unsorted sublist (66, 99) and swap it with 4 index. No third index contains fourth smallest element of the array and our array becomes 

> 11, 33, 44, 55, 66, 99

We don't need to do last iteration  because the largest element is already sorted and is in its correct position at last.



### Code 

```c++
void selectionSort(vector<int> &arr)
{
	int i, j, min_idx;
    int n = arr.size();

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swap the found minimum element with the first element
		swap(arr[min_idx], arr[i]);
        
        //print the array after each iteration
		for(int ele : arr)
            cout<<ele<<" ";
         cout<<endl;
	}
   
}
```





### Time and Space Complexity Analysis

As we have already seen in the above code we have two nested for loops. What are they for ?

> The outer for loop is to separate the sorted and unsorted sublist while the inner for loop is for iterating through the unsorted list and finding minimum element.

 **Due to present of two nested for loops the time complexity is O(n^2)**

We can also derive it like this : In first iteration we have n-1 comparisons, for second iteration n-2 comparisons, for third iteration n-3 comparisons and so on. So the total number of comparisons we have (n-1) + (n-2) + (n-3) + ..... + 2 + 1 =  (1/2) * (n) * (n-1)  which is of the order O(n^2). 

As it is in place sorting algorithm, no extra space is used. it is very useful when the memory writing is a costly operation as the maximum number of swaps in the worst case can be n-1.

**As no extra space is used so the Space Complexity is O(1)**



### When to use Selection Sort

As this algorithm has time complexity if the order O(n^2) it is not recommended to be used when the list (or array) contains very large number of elements, as it becomes very inefficient due to high overhead of time.

We should prefer Selection Sort when the auxiliary memory is limited. It stands unique from other sorting algorithms as the maximum number of swaps in the worst case are n-1.

Moreover Selection Sort is not stable. Means the order of two equal elements before and after the sorting may differ. So we should not use Selection sort if the order of equal elements is of prime concern. Although we can make selection sort stable with some modifications.



### References 

https://www.geeksforgeeks.org/selection-sort/

https://en.wikipedia.org/wiki/Selection_sort

