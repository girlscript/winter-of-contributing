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
The time complexity is **O(n^2)** since there are two iterations one of which is nested into another.<br><br>


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
    named "vect" and take user input
    */
    
    int m,n;
    cout<<"enter the size of matrix (mxn)"<<endl;
    cout<<"m:";
    cin>>m;
    cout<<"n:";
    cin>>n;
    vector<vector<int>> vect( m , vector<int> (n, 0));
    cout<<"enter the elements: "<<endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>vect[i][j];
        }
    }
    
    /*
    Here we take the element to be 
    searched as input from the user
    */
    
    int el;
    cout<<"enter the element to be searched: ";
    cin>>el;
    
    /*
    Here we call the search function
    */
    
    if(searchMatrix(vect,el))
       cout<<"Found";
     else
       cout<<"Not Found";
    return 0;
}

```
### Output:
```
enter the size of matrix (mxn)
m:3
n:4
enter the elements:
11 22 33 44
56 67 78 89
91 93 95 99
enter the element to be searched: 100
Not Found
```
```
enter the size of matrix (mxn)
m:3
n:3
enter the elements:
1 2 4
5 7 8
9 11 13
enter the element to be searched: 5
Found
```
### Time complexity:
The overall time complexity is **O(log m + log n)**. It takes log m to return the results of binary search and we search in log n number of rows.
<br>
The time complexity is O(logm + logn) and not O(logm*logn). ***We do binary search for a row only if we are sure the target is within the range of the row. Hence, the total number of operations would be O(log m + log n).*** 





