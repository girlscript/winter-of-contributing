# CSES Counting Rooms
<!-- ## Definition -->

You are given a map of a building, and your task is to count the number of its rooms. The size of the map is n × m squares, and each square is either floor or wall. You can walk left, right, up, and down through the floor squares.

### Input

The first input line has two integers n and m: the height and width of the map.

Then there are n lines of m characters describing the map. Each character is either . (floor) or # (wall).

### Output

Print one integer: the number of rooms.

### Constraints
```
1≤ n,m ≤1000
```

### Example
```
Input:
5 8
########
#..#...#
####.#.#
#..#...#
########

Output:
3
```

# Prerequistes

### DFS
Depth-first search (DFS) is a technique for traversing or exploring data structures such as trees or graphs. The algorithm begins at the root node (or, in the case of a graph, selects any arbitrary node as the root node) and explores as far as possible along each branch before backtracking.

![dfs](https://he-s3.s3.amazonaws.com/media/uploads/9fa1119.jpg)

### Connected Components
A connected component, or simply component of an  undirected graph component, is a subgraph in which each pair of nodes is connected to each other by a path.

![connected_component](https://www.baeldung.com/wp-content/uploads/sites/4/2020/05/Connected-Component-Algorithm.png)

## Basic Approach
For each unvisited cell, we have to make  dfs and continue colouring the visited nodes. We maintain track of connected components using a variable that correspond to the desired solution.

## Implementation
 First we will implement a function connected_components which will determine 

### Template and Variables
```C++
#include <bits/stdc++.h>

int n, m, room; // n -> rows, m -> columns, room -> final anwser
vector<vector<bool>> visited; // Adjacency List
vector<pair<int, int>> pos = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

```
### Step 1 : Verify whether the location is valid or not
```C++
      bool isValid(int a, int b) {
          if(a < 0 || b < 0 || a >= n || b >= m) {
              return false; // Checking for out of bound errors
          }
          
          if(visited[a][b]) {
              return false; // If the location is already visited avoid moving in that location
          } else {
              return true;
      }
```
### Step 2 : Connected Component DFS over all locations accessible from the given place.
Choose an unexplored location, begin dfs, and explore as much as possible before moving on to the next location.
The number of connected components is equal to the number of picks you make.

```C++
    void ConnectedComp() {
        for(auto i = 0; i < n; i++) {
            for(auto j = 0; j < m; j++) {
                if(!visited[i][j]) {
                    dfs(i, j);
                    room++;
                }
            }
        }
    }
```

### Step 3 : DFS over all possible locations

```C++
    void dfs(int x, int y) {
        visited[x][y] = true;
        
        for(auto p : pos) {
            dfs(x + p.first, y + p.second);
        }
    } 
```

### Code: 

```C++
#include <bits/stdc++.h>

int n, m, room; // n -> rows, m -> columns, room -> final anwser
vector<vector<bool>> visited; // Adjacency List
vector<pair<int, int>> pos = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    
bool isValid(int a, int b) {
  if(a < 0 || b < 0 || a >= n || b >= m) {
    return false; // Checking for out of bound errors
  }
          
  if(visited[a][b]) {
    return false; // If the location is already visited avoid moving in that location
  } else {
    return true;
  }
}
   
void dfs(int x, int y) {
  visited[x][y] = true;
        
  for(auto p : pos) {
    dfs(x + p.first, y + p.second);
  }
}
    
void ConnectedComp() {
  for(auto i = 0; i < n; i++) {
    for(auto j = 0; j < m; j++) {
      if(!visited[i][j]) {
        dfs(i, j);
        room++;
      }
    }
  }
}
    
    
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
       
  cin >> n >> m;
	visited.resize(n);
 
	for(int i = 0; i < n; ++i) {
		 visited[i].resize(m);
	}
       
  for (int i = 0; i < n; ++i) {
		 for (int j = 0; j < m; ++j) {
		 	 char ch; cin >> ch;
			 if(ch == '#') {
			 	 visited[i][j] = true;
			 }
		 }
	}
  
	ConnectedComp();
	cout << room << endl;
        
}
```

⏰ The Time and Space Complexity is O(N x M)
### Problem Tag
```
DFS on Grid, Floodfill
```
