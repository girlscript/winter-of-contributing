
# Searching Algorithms   
   Searching is an algorithm which is widely used in programming.

   It is a type of algorithm which is used to check for an element or get some information about the element in a particular data structure like arrays and linked list.

   The region where we need to look for a particular element ( i.e whether an element is present or not ) is called the search space. For instance,  in case of an array the search space is defined as the entire array or the two indices of the array within which searching needs to take place.

## Types of Searching Algorithms 
There are various types of algorithms but we will stick to the most commonly used searching techniques and we will find out the most optimised way of searching in terms of time complexity. 
   
  
   ## Linear Search
   Linear Search or Sequential search as the name suggests is a type of searching algorithm where we look for an element in a sequential manner by traversing the search space <b><b>i.e</b></b> in a particular order.
   
   #### A simple approach
      1. Given an array (for simplicity) and a target element. 
      2. Traverse the entire array starting from the left most index till the end and check whether the target element matches with the
         current element at a particular index of an array.
      3. Return the index of the element if found in the array otherwise return -1 .
  
  #### Code sample in C++

```cpp

//Implementation of Linear Search
/*By Pratyaksh Khurana GWOC'21 Contributor*/

#include<bits/stdc++.h>
using namespace std;

int fun(int arr[],int n,int key)
{
  // if the size of the array is 0, means array does not exist and straight away return -1
  if(n == 0)         
    return -1;
  
  // traversing the entire array by placing a check and comparing with the key (i.e target)
  for (int i = 0; i < n; i++)
  {
    if(arr[i] == key)
      return i;       // returns the index of the element if found 
  }

  // means element not found so return -1
  return -1;
}

int main()
{

  int n,target;
  cin>>n>>target; // taking input from the user, size of the array and the target element
  int arr[n];
  
  // inserting elements in the array
  for (int i = 0; i < n; i++)
    cin>>arr[i];

  int x = fun(arr,n,target);  // function call that returns the index of the element 
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
  
   ### Time Complexity Analysis in case of Linear Search
   
   Time complexity is the time taken by an algorithm as a function of length of input.
   
   In simple words it is the number of comparisons that we need to make.
   
   In the worst case the time complexity of the above algorithm is O(n) , where n is the size of the search space 
   ( i.e in our case it is the size of the array).
   
   In the best case the time complexity of the above algorithm is O(1) , in this case the element will be present at the 0th index of
   the array.
      
      
