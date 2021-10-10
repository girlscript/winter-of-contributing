# Search in a row wise and column wise sorted matrix
## Problem Statement:
Given an **m x n** matrix and a number target, print "Found" if target is present in it otherwise, print “Not Found”. In the given matrix, every row and column is sorted in increasing order.<br><br>
## Brute Force Approach
The idea is to traverse the array and to search each element one by one.<br><br>
**Algorithm:** 
<ol>
  <li>Run a nested loop, outer loop for row and inner loop for the column.</li>
  <li>Check every element with x and if the element is found then print “Found”.</li>
  <li>If the element is not found, then print “Not Found”.</li>
  </ol><br>
  
### Time complexity:
The time complexity is **O(n2)** since there are two iterations one of which is nested into another.<br><br>


## Approach 2: Using Binary Search
This is the approach we will be using to solve this problem since it gives the best time complexity (discussed further in detail).<br><br>
**Algorithm**
<ol>
  <li>Apply binary search along the first elements of each row to find out which row the element might be in.</li>
  <li>Then apply binary search among the elements of the respective row to find out the element.</li>
  <li>If found return true else return false.</li></ol> <br>
  
### Code:
  ```cpp
#include <bits/stdc++.h>
using namespace std;
//defining the search function
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row,i=0,j=matrix.size()-1,mid;  //initializing lower bound, upper bound and middle
        while(i<=j)
        {
            mid=(i+j)/2;                      //finding middle index
            if(matrix[mid][0]==target)        //if found at mid index returned true
                return true;
            else if(matrix[mid][0]>target)    //if mid element is greater than target, discard lower half of the matrix
                j=mid-1;
            else                              // if mid element is less than target, discard upper half of the matrix
                i=mid+1;
        }
        if(matrix[mid][0]<target)             //initializing row to the index of the row in which the element might be present
            row=mid;
        else
            row=mid-1;
        if(row<0)
            return false;
        //initializing lower and upper bounds to begin searching in the respective row
        i=0;                                   
        j=matrix[row].size()-1;
        while(i<=j)
        {
            mid=(i+j)/2;                      //finding middle index
            if(matrix[row][mid]==target)      //if found at mid index returned true
                return true;
            else if(matrix[row][mid]>target)  //if mid element is greater than target, discard right half
                j=mid-1;
            else                              //if mid element is lower than target, discard left half
                i=mid+1;
        }
        return false;                         //if true has not been returned by the function yet, the element is not present and hence we return false
    }

//driver code
int main()
{
    /*
    Below we initialize a 2D vector
    named "vect"
    */
     
    vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
     
    /*
    Here we call the search function
    */
    if(searchMatrix(vect,8))
       cout<<"Found";
     else
       cout<<"Not Found";
    return 0;
}
```
### Output:
```
Found
```
### Time complexity:
The overall time complexity is **O(log m + log n)**. It takes log m to return the results of binary search and we search in log n number of rows.
<br>
The time complexity is O(logm + logn) and not O(logm*logn). ***We do binary search for a row only if we are sure the target is within the range of the row. Hence, the total number of operations would be O(log m + log n).***





