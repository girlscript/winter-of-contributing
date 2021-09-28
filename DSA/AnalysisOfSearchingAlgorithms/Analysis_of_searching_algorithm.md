## Analysis Of Searching Algorithm

The name itself makes it quite clear and transparent.
These algorithms are designed to search for an element and to get the element from any  data structure where it is stored.

*There may be any way to search for a given element. Based on the type of search operations.*
**These algorithms are generally classified into 2 categories.**


## 1. Sequential Search:-
In this type of search, we pick a very naive and straightforward method to search.
 		       We traverse through the list of arrays and every element is compared with the element to be searched.

Example:- **Linear Search**

In linear search we do nothing but just traverse through the array or list and compare each element with the element to be searched.

The time complexity for linear search is O(n) and the space complexity is constant i.e. O(1) because we do not take any extra data structure in order to perform the linear search algorithm.


*Here is a pseudo-code for the linear search algorithm*
		


		int linearSearch(arr[],key)
		{
			for(int i=0;i<arr.length;i++)
				{
					if(arr[i]==key)
						return i;
				}
				return -1;


		} 




## 2.Interval Search:
These algorithms are specially designed for searching in data structures whose elements are already in a sorted array. They follow the divide and conquer rule. 
example: **Binary Search**


To perform a binary search, the elements of the data structure must be in sorted order then only this also can be performed on the given elements.
The idea of binary search is to make use of the information that the array is sorted and then to reduce the time complexity.

**In binary search, we ignore half of the elements just after one comparison.**


*Algorithm for Binary Search*



	
>	1. Keep counter low=0 and high=lenthOfDS-1

> 2. run a while loop with condition as low<=high

> 3. calculate mid=low+(high-low)/2
		Note:- it is suggested to calculate mid as low+(high-low)/2 instead of calculating it as (low+high)/2 to avoid integer overflow.

> 4. compare the key with the middle element

> 5. if the key matches with the middle element, we return the mid index

> 6. else if the key is greater than the mid element, then key can only lie in the right half subarray after the mid element. So we recur for the right half.

> 7. else recur for the left half since the key is less than mid.

			The time complexity for Binary Search is O(logn)
			and the space complexity is constant i.e. O(1)



**Pseudocode for Binary search**


		 BinarySearch(arr[],key)
		{
			low=0, high=arr.length-1;
			while(low<=high)
			{
				int mid=low+(high-low)/2;
				if(arr[mid]==key)
					return mid;
				else if(arr[mid]>key)
					high=mid-1;
				else
					low=mid+1;

			}
			return -1;


		}

**Comparison between Binary Search and Linear Search**

1. Time complexity for linear search is O(n) and for binary search is O(logn).
2. The data structres need to be sorted otherwise one cannot perform binary search, this is not so in linear search.
3. Binary Search is more efficient than linear search.
4.Linear search does the sequential access whereas binary search accessdata randomly.
5. Linear search perdorms equality comparisions and binary search performs ordering comparisions.


#  Problem based on BinarySearch

>Problem Statement

**Given an array of integers, you have to return the index of the peak element.**
**So the peak element is an element that is strictly greater than its neighbors**
>Note:- If the array has multiple peaks, return either of the index of peak element.
**You must write the code that runs in O(logn) time**


Since it is clear from the problem statement itself that the time complexity should be **O(logn)** , there is no point in traversing the whole array and reaching the peak element.

**Let's see how we approach this very problem using binary search**
>Before we move ahead, recall the first condition that should be there to apply binary search, i.e. **the array should be sorted** innit?
>but to approach this problem, we need not sort the array, in case you try to sort the array and then approach , time complexity would be greater than **O(logn)** 
>Think How?

**Here is the code for the problem statement**

```
	 public int findPeakElement(int[] nums) {
        if(nums.length==1)
            return 0;
        int n=nums.length; 
        if(nums[0]>nums[1])
            return 0;
        if(nums[n-1]>nums[n-2])
            return n-1;
        int low=1,high=n-2;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1])
                return mid;
            else if(nums[mid]<nums[mid-1])
                high=mid-1;
            else if(nums[mid]<nums[mid+1])
                low=mid+1;
        }
        return -1;
        
    }

```
**You can clearly see in the above code - the usage of binary search algorithm**


*Hope it helped*


**Stay Kind**
