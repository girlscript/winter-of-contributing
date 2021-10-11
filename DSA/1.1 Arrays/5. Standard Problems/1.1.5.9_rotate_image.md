# Problem Statement

You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 

### Constraints
```
matrix.length == n
matrix[i].length == n
1 <= n <= 20
-1000 <= matrix[i][j] <= 1000
```

## Example 1
### Input
```
matrix = [[1,2,3],[4,5,6],[7,8,9]]
```
### Output
```
[[7,4,1],[8,5,2],[9,6,3]]
```
### Explanation

<img src="https://github.com/ishrutik/winter-of-contributing/blob/DSA/DSA/1.1%20Arrays/5.%20Standard%20Problems/rotate%20images/image1.png">



## Example 2
### Input
```
matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
```
### Output
```
[[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
```
### Explanation

<img src="https://github.com/ishrutik/winter-of-contributing/blob/DSA/DSA/1.1%20Arrays/5.%20Standard%20Problems/rotate%20images/image%202.png">

## Algorithm
1. Traverse in the 2D matrix,for every row,initialize column number equal to the row number and traverse till size of the matrix.
2. Swap element at matrix[i][j] with element at matrix[j][i].
3. Now,for every row,reverse the elements of row. 


## Code

```C++
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};
    

```
## Time Complexity
We are traversing in 2D matrix i.e. Time complexity will be O(n^2).

## Space Complexity
We are not using any extra space i.e. Space complexity is O(1).

### References
[LeetCode Top Interview Questions](https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/770/)
