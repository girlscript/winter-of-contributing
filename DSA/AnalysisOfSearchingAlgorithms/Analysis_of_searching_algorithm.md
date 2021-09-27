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
