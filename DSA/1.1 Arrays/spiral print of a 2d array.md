<hr>

## Problem Statement

Write documentation regarding the approach as well as code for a spiral print of a 2d array.

<hr>

## Examples

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

<hr>

## Algoritihm Approach

Let the array have R rows and C columns. seen[r] denotes that the cell on the r-th row and c-th column was previously visited. Our current position is (r, c), facing direction di, and we want to visit R x C total cells.

As we move through the matrix, our candidate’s next position is (cr, cc). If the candidate is in the bounds of the matrix and unseen, then it becomes our next position; otherwise, our next position is the one after performing a clockwise turn.

<hr>

## Intuition


Draw the path that the spiral makes. We know that the path should turn clockwise whenever it would go out of bounds or into a cell that was previously visited.

<hr>

## Code

```

#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int> >& matrix)
{
	vector<int> ans;

	if (matrix.size() == 0)
		return ans;

	int R = matrix.size(), C = matrix[0].size();
	vector<vector<bool> > seen(R, vector<bool>(C, false));
	int dr[] = { 0, 1, 0, -1 };
	int dc[] = { 1, 0, -1, 0 };
	int r = 0, c = 0, di = 0;

	// Iterate from 0 to R * C - 1
	for (int i = 0; i < R * C; i++) {
		ans.push_back(matrix[r]);
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

// Driver code
int main()
{
	vector<vector<int> > a{ { 1, 2, 3, 4 },
	             { 5, 6, 7, 8 },
							 { 9, 10, 11, 12 },
							 { 13, 14, 15, 16 } };

	for (int x : spiralOrder(a)) {
		cout << x << " ";
	}
	return 0;
}


```

<hr>

## Complexity

<ul>
  <li>Time Complexity - O(n)</li>
  <li>Space Complexity - O(n)</li>
  </ul>
  
  <hr>
