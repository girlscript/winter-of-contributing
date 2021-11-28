### 1. First Bad Version - https://leetcode.com/problems/first-bad-version/
You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.you want to find out the first bad one, which causes all the following ones to be bad.
You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.
Example 1:
```c++
Input: n = 5, bad = 4
Output: 4
Explanation:
call isBadVersion(3) -> false
call isBadVersion(5) -> true
call isBadVersion(4) -> true
Then 4 is the first bad version.
```
- Solution
```c++
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=1;int end=n; int mid;
        if(n==1)
            return n;
        while(start<end){
             mid=start+(end-start)/2;
            if(isBadVersion(mid)){
                end=mid;
            }
            else 
                start=mid+1;
        
    }return start;}
};
```
**Time Complexity - O(logn)**  
**Space Complexity - O(1)**
### 2. Valid Perfect Square - https://leetcode.com/problems/valid-perfect-square/ 
Given a positive integer num, write a function which returns True if num is a perfect square else False.
Follow up: Do not use any built-in library function such as sqrt.  
Example 1:
```c++
Input: num = 16
Output: true
```
- Solution
```c++
class Solution {
public:
    bool isPerfectSquare(int num) {
        int start=1;int end=num/2; float mid; long int ans;
     if(num==1||num==9||num==4) return true; 
        while(start<=end){
        mid=start+(end-start)/2;
            if(mid==((float)(num/mid)))  
                return true;
            else if(mid>(num/mid))
                end=mid-1;
            else
                start=mid+1;
        }
        return false;
    }
};
```
**Time Complexity - O(logn)**  
**Space Complexity - O(1)**
### 3. Single Element in a Sorted Array - https://leetcode.com/problems/single-element-in-a-sorted-array/submissions/
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.    
Return the single element that appears only once.   
Example 1:
```c++
Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
```
- Solution
```c++
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0;int end=nums.size()-1;
        while(start<=end){
            if(nums.size()==1)
                return nums[0];
            int mid=start+(end-start)/2;
            if(mid==0)
            {
                if(nums[mid]!=nums[mid+1])
                    return nums[mid];
            }
              else if(mid==nums.size()-1)
            {
                if(nums[mid]!=nums[mid-1])
                    return nums[mid];
            }
         else if(nums[mid]!=nums[mid+1]&&nums[mid]!=nums[mid-1])
          return nums[mid];
            else if(nums[mid]==nums[mid+1]){
                if(mid%2==0)
                    start=mid+2;
            
            else
                end=mid-1;}
               else if(nums[mid]==nums[mid-1]){
                if((mid-1)%2==0)
                    start=mid+1;
            
            else
                end=mid-2;}
           
           
            
        }return -1;
    }
};
```
**Time Complexity - O(logn)**  
**Space Complexity - O(1)**
### 4. Check if N and its Double exists - https://leetcode.com/problems/check-if-n-and-its-double-exist/submissions/
Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).  
More formally check if there exists two indices i and j such that :  
- i != j  
- 0 <= i, j < arr.length  
- arr[i] == 2 * arr[j]    
 Example 1:
```c++
Input: arr = [10,2,5,3]
Output: true
Explanation: N = 10 is the double of M = 5,that is, 10 = 2 * 5.
```
- Solution
```c++
class Solution {
public:
    int binary(vector<int>& arr,int nindex){
        int start=0,end=nindex-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[nindex]>=0&&mid>=0){
            if(arr[nindex]==arr[mid]*2||arr[nindex]*2==arr[mid])
                return 1;
            else if(arr[nindex]>arr[mid]*2)
                start=mid+1;
            else
                end=mid-1;
            }
            else if(arr[nindex]<0){
                 if(arr[nindex]==arr[mid]*2||arr[nindex]*2==arr[mid])
                return 1;
            else if(arr[nindex]<arr[mid]*2||arr[nindex]*2>arr[mid])
                start=mid+1;
            else
                end=mid-1;
            }
            else if(arr[nindex]>=0&&mid<0)
                start=mid+1;
            }
        
        return -1;
    }
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=arr.size()-1;i>0;i--){
           int ans=binary(arr,i);
            if(ans==1)
                return true;
          
            
        }
        return false;
    }
};
```
**Time Complexity - O(logn)**  
**Space Complexity - O(1)**
### 5. Search A 2D matrix - https://leetcode.com/problems/search-a-2d-matrix/submissions/
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:  
- Integers in each row are sorted from left to right.  
- The first integer of each row is greater than the last integer of the previous row.    
Example 
```c++
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
```
- Solution
```c++
class Solution {
public:int binarySearch(vector<vector<int>>& arr, int start, int r, int x)
{int l=0;
    while (r >= l) {
        int mid = l + (r - l) / 2;
  
      
        if (arr[start][mid] == x)
            return mid;  
      else if (arr[start][mid] > x)
        r=mid-1;
  else
      l=mid+1;
    } return -1;}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0,m=matrix.size(),n=matrix[0].size(),ans;
       
        while(start<m){
        if(matrix[start][n-1]>target){
         ans= binarySearch(matrix,start,n-1,target);   
         if(ans==-1)
            return false;
            else
                return true;}
        else if(matrix[start][n-1]==target)
            
            return true;
        else
            start++;}
        return false;
       
    }
};
 ```
**Time Complexity - O(logn)**  
**Space Complexity - O(1)**  
**Reference - Leetcode**
