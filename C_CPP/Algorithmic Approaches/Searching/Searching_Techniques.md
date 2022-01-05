# **Different Searching Techniques in C++**
## What is searching?
Searching is a process of finding the position of a given value from a list of values.

For example,
    Given Data in array/list -> 18,6,20,3,38,9
    Item to be Searched -> 20
    Index of required Data -> 2

Generally searching means to find out whether the given data to be searched is present in list/array or not, if present we get the index number of the data. For example:- 

a)
    List/array -> {13,5,23,545,44}
    Item to be searched -> 545
    Output -> 3. 

b)
    List/array -> {34,13,545,67,2}
    Item to be searched -> 100
    Output -> -1.
    Here, we are getting '-1' as output because '100' is not present in the array/lisy.

### __Different Types of Searching Techniques__

* Linear Search

* Binary Search

* Ternary Search

Note: We will be discussing only Linear and Binary search in brief.

## __*Linear Search*__
Linear Search is a method/algorithm which is used to find the index/position of a given value in list/array by iterating over each index one by one,i.e., linearly.

Let's understand this with example,

![alt text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Linear-Search.png)

Here, we will iterate over the list/array. Let us assume that we have to find 20. At first we will check is there 20 at index 0, as we can see that there is 10 so we will move over to next index and again will check for 20, we will perform the check again and again till we dont find 20 or if the iteration in list/array ends.
   
 As we see 20 is there at index 6, so when we will be performing the check at 6th index we will find that ther is 20. So, we will stop the itertion and will get our answer/output as 6.

 Best Time-Complexity -> O(1), when the element is found at first(0th) index.

 Worst Time-Complexity -> O(n), when the element is found at last index(n-1) or else is not present.
 Here, n is size of list/array.

 ### Code for Linear Search in c++.

 ```c++
#include <iostream>
using namespace std;

//Linear Search function which will return the index of the element to be searched.
int LinearSearch(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
//main function
int main(void)
{
    int arr[] = { 10, 50, 30, 70, 80, 60, 20, 90, 40 };
    //element to be searched
    int find = 10;
    //size of array/list
    int n = sizeof(arr) / sizeof(arr[0]);
   
    // Function call
    int result = LinearSearch(arr, n, find);
    cout<<result<<endl;
    return 0;
}
```
### Output : 
6

## __*Binary Search*__
Pre-Requisite : Sorting

Binary search is a method/algorithm which is used to search an elemetn in a sorted array/list. It is a divide and conquer method, i.e., we keep on dividing the list/array into two halves until we find the element.

Let's undestand this with an example,

![alt text](https://www.geeksforgeeks.org/wp-content/uploads/Binary-Search.png)

Here we can see that the size of array/list is '10' and it is also sorted. We will create three variables and initialise them as low=0, high = (size of array/list)-1 and mid=(low+high)/2.

At First we will find the mid index of array/list and will check at mid index for '23'. If mid index is having the element to be searched(i.e.,23), we will return the mid index value, if the element present at mid index is less than element to be searched(i.e., 23) then we will move 'low' to 'mid+1' or if the element present at mid index is greater than element to be searched then we will move 'high' to 'mid-1'.

We will repeat the above steps again and again till we dont find element or till 'low < high'(i.e., element is not present in the list/array).

After halving the list/array for 3rd time according to above mentioned procedure we will be having low=5, mid=5 and high=6 & then after performing the check at mid we will get the required element. So, we will return the mid and will print the ans as '5'.

Best Time-Complexity -> O(1), when the element is found after first partition,i.e., it is present in mid of the list/array.

Worst Time-Complexity -> O(log n), here n is the size of array/list.

### Code for Binary Search in c++.

 ```c++
// Binary Search in C++ (Iterative method)

#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  
    //Repeat until low and high meet each other in other words low becomes greater than high
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }
    //If we reach at this point means element is not present in list/array. So, we will return'-1'.
    return -1;
}

int main() {
    //Given list/array
    int array[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    //Element to besearched
    int x = 23;
    //Size of array/list
    int n = sizeof(array) / sizeof(array[0]);
    //Calling Binary search function to get ans
    int result = binarySearch(array, x, 0, n - 1);
    
    cout<<result<<endl;
    return 0;
}
 ```

### Output : 
5

**Reference: Geeksforgeeks**
