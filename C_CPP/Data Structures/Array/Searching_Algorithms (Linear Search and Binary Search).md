
# :point_right: Searching Algorithms   
   Searching is an algorithm which is widely used in programming.

   It is a type of algorithm which is used to check for an element or get some information about the element in a particular data structure like arrays or linked list.

   The region where we need to look for a particular element ( i.e whether an element is present or not ) is called the search space. For instance,  in case of an array the search space is defined as the entire array or the two indices of the array within which searching needs to take place.

## Types of Searching Algorithms 
There are various types of algorithms but we will stick to the most commonly used searching techniques and we will find out the most optimised way of searching in terms of time complexity. 
   
  
   ## :scroll: Linear Search
   Linear Search or Sequential search as the name suggests is a type of searching algorithm where we look for an element in a sequential manner by traversing the search space <b><b>i.e</b></b> in a particular order.
   
   #### Approach to the above algorithm
      1. Given an array (for simplicity) and a target element. 
      2. Traverse the entire array starting from the left most index till the end and check whether the target element matches
         with the current element at a particular index of an array.
      3. Return the index of the element if found in the array otherwise return -1 .
   
   <img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linear_search.gif" width="500" height="370" />
   
  #### :earth_asia: Source - https://www.tutorialspoint.com/data_structures_algorithms/linear_search_algorithm.htm
  
  #### Code sample in C++

```cpp

//Implementation of Linear Search
/*By Pratyaksh Khurana GWOC'21 Contributor*/

#include<bits/stdc++.h>
using namespace std;

int fun(int arr[],int size,int key)
{
  // if the size of the array is 0, means array does not exist and straight away return -1
  if(size == 0)         
    return -1;
  
  // traversing the entire array by placing a check and comparing with the key (i.e target)
  for (int index = 0; index < size; index++)
  {
    if(arr[index] == key)
      return index;       // returns the index of the element if found 
  }

  // means element not found so return -1
  return -1;
}

int main()
{

  int size,target;
  cin>>size>>target; // taking input from the user, size of the array and the target element
  int arr[size];
  
  // inserting elements in the array
  for (int index = 0; index < size; index++)
    cin>>arr[index];

  int x = fun(arr,size,target);  // function call that returns the index of the element 
                              // if not found returns -1 
  if(x == -1)
   cout<<"Element not found";
  else 
   cout<<"Element is found at index "<<x;  

  return 0;
}


```

  ##### Test case 1
      Input
      
      5 23
      9 20 65 23 32
      
      Output
      
      Element is found at index 3

  ##### Test case 2
      Input
      
      7 1011
      77 65 98 12 32 44 951
      
      Output
      
      Element not found
  
   ### :timer_clock: Time Complexity Analysis in case of Linear Search
   
   Time complexity is the time taken by an algorithm as a function of length of input.
   
   In simple words it is the number of comparisons that we need to make.
   
   In the worst case the time complexity of the above algorithm is O(n) , where n is the size of the search space 
   ( i.e in our case it is the size of the array).
   
   In the best case the time complexity of the above algorithm is O(1) , in this case the element will be present at the 0th index of
   the array.
   
   
   
  ## :scroll: Binary Search
  Binary Search algorithm deals with the intervals and it divides the search space in two parts, and it must fufill the condition that the search space must be sorted
  (i.e in increasing or decreasing order).
  
  In this case start from the whole search space (sorted array for simplicity) and find the middle element of the search space and then compare whether the target element
  is equal to middle element or not, if the target element is less than the middle element then reduce the search space to the left else shift it to the right and if the 
  target element matches with the middle element then return the index of the element.
  
   #### Approach to the above algorithm
      1. Given an array (must be sorted in increasing order) and a target element.
      2. Take two pointers (say start and end) where start pointer is at the 0th index of the array and the end pointer is at the
         last index of the array. 
      3. Find the middle element of the array (say mid), and compare it with the target element.
      4. If the target element = middle element, return the index.
      5. If the target element > middle element, shift the start pointer to (start = mid + 1).  
      6. If the target element < middle element shift the end pointer to (end = mid - 1).
    
    In case of decreasing order manipulate the pointers accordingly.  
    
   <img src="https://d18l82el6cdm1i.cloudfront.net/uploads/bePceUMnSG-binary_search_gif.gif" width="500" height="370" />
   
  #### :earth_asia: Source - https://brilliant.org/wiki/binary-search/
   
   #### Code sample in C++

```cpp

//Implementation of Binary Search
/*By Pratyaksh Khurana GWOC'21 Contributor*/

#include<bits/stdc++.h>
using namespace std;

//If the search space is sorted in increasing order
int IncreasingBinary(int *a,int n,int target,int start,int end)
{
  while(start <= end)
  {
    int middle = start + (end-start)/2; 
    // the above mentioned formula is used so that (start + end) does'nt overflows the range of int datatype
    
    if(a[middle] == target)
     return middle;

    else if(a[middle] > target)
     end = middle - 1;
    else if(a[middle] < target)
     start  = middle + 1;  
  }
  return -1; //if not found return -1
}

//If the search space is sorted in decreasing order
int DecreasingBinary(int *a,int n,int target,int start,int end)
{
  while(start <= end)
  {
    int middle = start + (end-start)/2;
    // the above mentioned formula is used so that (start + end) does'nt overflows the range of int datatype
    
    if(a[middle] == target)
     return middle;

    else if(a[middle] < target)
     end = middle - 1;

    else if(a[middle] > target) 
     start = middle + 1;
  }

  return -1;  //if not found return -1
}

int main()
{

  int size,target; //size of the array and the target element
  cin>>size>>target;
  int a[size];   //declaring the array

  for (int index = 0; index < size; index++)
    cin>>a[index];
  
  //to check whether the array is sorted in increasing / decreasing order
  if(a[0] <= a[size-1])
  {
   int idx = IncreasingBinary(a,size,target,0,size-1);
   cout<<idx;     // index of the element 
  }

  else if(a[0] >= a[size-1])
  {
    int idx = DecreasingBinary(a,size,target,0,size-1);
    cout<<idx;
  } 

  return 0;
}
  


```

  ##### Test case 1
      Input
      
      5 3
      2 3 4 7 10
      
      Output
      
      1

  ##### Test case 2
      Input
      
      7 88
      130 99 89 88 56 12 2
      
      Output
      
      3
      
  ##### Test case 3    
      Input
      
      6 34
      12 44 98 103 540 900
      
      Output
      
      -1
  
   ### :timer_clock: Time Complexity Analysis in case of Binary Search
   
   The time complexity of the above algorithm is O(log(n)), where n is the size of the search space (say array of size n).
   
   ## Comparison between Linear Search and Binary Search Algorithm
   Time complexity in case of Linear Search (talking about the worst case) is O(n).
   
   Time complexity in case of Binary Search (talking about the worst case) is O(log(n)) which is far more optimised as compared to linear search and it can reduce the 
   comparisons at a faster rate as it is a logarithmic time complexity.
   
   ## Practice Problems on the above mentioned algorithms
   Practice problems on various coding platforms like HackerRank, HackerEarth, and Leetcode to get comfortable with the application part.
   
   ### ProblemSet on Searching Algorithms 
     
     https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/
     https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/
     https://leetcode.com/tag/binary-search/
     
   
   ## Happy Coding !! 	:smile:
     
    
   
   
      
      
