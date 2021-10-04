### 1. First Bad Version - https://leetcode.com/problems/first-bad-version/
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
### 2. Valid Perfect Square - https://leetcode.com/problems/valid-perfect-square/ 
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
### 3. Single Element in a Sorted Array - https://leetcode.com/problems/single-element-in-a-sorted-array/submissions/
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
### 4. Check if N and its Double exists - https://leetcode.com/problems/check-if-n-and-its-double-exist/submissions/
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
### 5. Search A 2D matrix - https://leetcode.com/problems/search-a-2d-matrix/submissions/
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
         ans= binarySearch(matrix,start,n-1,target); if(ans==-1)
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
