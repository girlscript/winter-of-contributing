# BINARY SEARCH 

Binary search is also known as half-interval search. It is a searching technique in a sorted array by repeatedly dividing search intervals in half. It is an efficient algorithm to find the element efficiently. Repeatedly check until the value is found or the interval is empty.




## Steps To Implement Binary Search
Let us assume there is an array A and an element x.
We have to search throughout the array and we need to find element x inside the array.
If not present print -1 or print the position of the array.


---
<p align="center">
  <img src="https://github.com/ayushijindal/winter-of-contributing/blob/Competitive_Programming/Competitive_Programming/C%2B%2B/Searching%20%26%20Sorting/Binary%20Search/assets/BS.png">
</p>


---
### Approach: 
1. Compare x with the middle element of array A.
2. If x matches with the middle element, we return the mid index.
3. Else If x is greater than the mid element, then x can only lie in the right half subarray after the mid element. So we recur for the right half.
4. Else (x is smaller) recur for the left half.
#### Note: To apply binary search array must be sorted.


### Pseudocode

```
arr ← sorted array

size ← size of array

item ← value to be searched

start ← 0

end ← (size-1)


binarySearch(arr, size)
      loop until start is not equal to end
    
      	midIndex = start + (end – start)/2
      
      	if (item == arr[midIndex] )
          	return midIndex
          
      	else if (item > arr[midIndex] ) 
          	start = midIndex + 1
          
      	else                       
          	end = midIndex - 1
          
     	if item is not found after iterating through whole array then
         	return -1  
```


---

#### Code in C++:

```c
#include<iostream>
using namespace std;

int binary_search(int arr, int size, int target)
{    int start = 0;
     int end = size-1;
     while(start<=end)
     {   // Finding mid of the array
         int mid = start + (end – start)/2;
        
         // Comparing the middle element with target
         if(arr[mid] == target)
         {   // if the middle element is equals to target return the mid index
             return mid;
         }

         else if(arr[mid] > target)
         {   // if target is smaller than the middle element, then target can only lie in the left
             end = mid - 1;
         }

         else if(arr[mid] < target)
         {   // if target is greater than the middle element, then target can only lie in the right
             start = mid + 1;
         }
     }
     // if the target is not inside the array then return -1
     return -1;
}


int main()
{  //Consider a sorted Array   
   int arr[]={1,3,5,8,10};
   int target=8;  

   // Calculating size of array
   int size=sizeOf(arr)/sizeOf(arr[0]);
   
   // Calling of binary_search function
   int index = binary_search(arr, size, target);
   cout<<index<<endl;
   return 0;
}
```


```c

// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;
  
// A recursive binary search function. It returns
// location of x in given array arr[start..end] is present,
// otherwise -1
int binarySearch(int arr[], int start, int end, int target)
{
    if (end >= start) {
        int mid = start + (end - start) / 2;
  
        // If the element is present at the middle
        // itself
        if (arr[mid] == target)
            return mid;
  
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > target)
            return binarySearch(arr, start, mid - 1, target);
  
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, end, target);
    }
  
    // We reach here when element is not
    // present in array
    return -1;
}
  
int main(void)
{
    int arr[] = {1,3,5,8,10};
    int target = 8;
    
    // Calculating size of array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Calling binarySearch function
    int index = binarySearch(arr, 0, size-1, target);
    cout << index<<endl;         
    return 0;
}


```





## Some Common Binary Search Problems
### Question: 
### Find the index of first 1 in a sorted array of 0’s and 1’s if 1 is not present in the array then print -1



#### Example:
---
Input : 

arr[] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1}

Output : 
6

Explanation:
The index of first 1 in the array is 7.

---

Input : 

a[ ]={0,0,0,0,0}


Output: -1

Explanation:
The array do not contain 1

```c
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find_first_occur(int arr[] , int n)
{
    int start=0;
    int end=n-1;
    int ans =-1;
    while(start<=end)
    {   // Finding mid of the array   
        int mid = start + (end – start)/2;

        //if middle is 0 then 1 lies in right half as array is sorted
        if(arr[mid] == 0)
            start=mid+1;
        
        // if middle is 1 then it may be possible that there is 1 in left of it
        // thus, find the occurance in left half 
        else if(arr[mid] == 1)
        {   // possible position that this is the first occurance
            ans=mid;
            // but still finding left of it
            end=mid-1;
        }    
    }
    // completion of the loop either gives us the first occurance if 1 present
    // otherwise return the default value -1 which indicates that 1 is not present in array 
    return ans;
}


int main(){
    int arr[]={0,0,0,0,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);    //size of the array
    int first=find_first_occur(arr,  n);
    if(first!=-1)
        cout<<first+1<<endl;    // gives the index of first occurence of 1
    else    
        cout<<first<<endl;  // 1 is not present in the array
}
```


### Question: 
### Find the frequency of the target element if present in the sorted array and if not present then print "Not Found"

#### Example:
---
Input:

 a[]={1,2,3,3,3,4}, 
target= 3

Output: total occurence of given target is: 3

Explanation:
The element of 3(target) is repeated 3 times in the given array

---

a[]={1,2,3,3,3,4}
 
target= 5

Output: Not Found

Explanation:
The element of 5(target) is not even present in the given array



```c
#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int binary(int arr[], int size, int target, bool isleft)
{   int ans=-1;
    int start= 0;
    int end=size-1;

    while(start<=end)
    {   
    	// finding the mid of the array
        int mid = start + (end – start)/2;

        // if target is smaller than middle then traverse in left half
        if(arr[mid]>target)
            end=mid-1;

        // if target is greater than middle then traverse in right half
        else if(arr[mid]<target)
            start=mid+1;

        // if target is found then traverse to find first occurence in left and right side resp
        else if((arr[mid]==target)){
            ans=mid;
            if(isleft)  end=mid-1;          //searching in left side of the array
            else        start=mid+1;        // searching int the right side of the array
            
        }
    }
    return ans;
}
int main(){
    int arr[]={1,2,4,6,6,6,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int left = binary(arr, n, 6, true);

    // find right if and only if left is present
    if(left!=-1)
    {
        int right=binary(arr, n, 6, false);
        cout<<"total occurence of given target is :" <<(right -left)+1;

    }
    // if left is -1 it implies that element is not present in the array
    else 
        cout<<"Not found"<<endl;
    

}
```

## End Note
Hope this documentation provided you some basic idea about binary search algorithm and how to solve questions using this approach.
Binary search runs in ```logarithmic time``` in the worst case, making ```O(log n)``` comparisons, where n is the number of elements in the array.Binary search is faster than linear search except for small arrays. However, the array must be sorted first to be able to apply binary search. There are specialized data structures designed for fast searching, such as hash tables, that can be searched more efficiently than binary search. However, binary search can be used to solve a wider range of problems, such as finding the next-smallest or next-largest element in the array relative to the target even if it is absent from the array.
