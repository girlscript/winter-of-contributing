# **Spiral Print of 2D Array**
Given is the 2D array, print it in spiral form of 2D array.
### **Example :**
```
Input:  1    2   3   4
        5    6   7   8
        9   10  11  12
        13  14  15  16
Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
Explanation: The output is matrix in spiral format. 

Input:  1   2   3   4  5   6
        7   8   9  10  11  12
        13  14  15 16  17  18
Output: 1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11
Explanation :The output is matrix in spiral format.
```

### **Method of approach :**
Draw the path that the spiral makes. We know that the path should turn clockwise whenever it would go out of bounds or into a cell that was previously visited.

### **Algorithm :**

Let the array have R rows and C columns. seen[r] denotes that the cell on the r-th row and c-th column was previously visited. Our current position is (r, c), facing direction di, and we want to visit R x C total cells.

As we move through the matrix, our candidate’s next position is (cr, cc). If the candidate is in the bounds of the matrix and unseen, then it becomes our next position; otherwise, our next position is the one after performing a clockwise turn.

```// Java program for the above approach of Spiral Print of 2D Array
import java.util.*;
 
class Solution {
 
    // Function to print in spiral order
    public static List<Integer> spiralOrder(int[][] matrix)
    {
        List<Integer> ans = new ArrayList<Integer>();
 
        if (matrix.length == 0)
            return ans;
 
        int R = matrix.length, C = matrix[0].length;
        boolean[][] seen = new boolean[R][C];
        int[] dr = { 0, 1, 0, -1 };
        int[] dc = { 1, 0, -1, 0 };
        int r = 0, c = 0, di = 0;
 
        // Iterate from 0 to R * C - 1
        for (int i = 0; i < R * C; i++) {
            ans.add(matrix[r]);
            seen[r] = true;
            int cr = r + dr[di];
            int cc = c + dc[di];
 
            if (0 <= cr && cr < R && 0 <= cc && cc < C
                && !seen[cr][cc]) {
                r = cr;
                c = cc;
            }
            else {
                di = (di + 1) % 4;
                r += dr[di];
                c += dc[di];
            }
        }
        return ans;
    }
 
    // Driver Code
    public static void main(String[] args)
    {
        int a[][] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
 
        System.out.println(spiralOrder(a));
    }
}
```
### **Output:**
```
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
```
### **Complexity Analysis:**
*Time Complexity: O(N)O(N), where NN is the total number of elements in the input matrix. We add every element in the matrix to our final   answer.
*Space Complexity: O(N)O(N), the information stored in seen and in ans.
