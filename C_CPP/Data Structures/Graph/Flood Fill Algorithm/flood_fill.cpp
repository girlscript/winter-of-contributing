/*
Sample Input/Output:
    Input Method:
    - Give Number of Test Cases you want to run.
    - Input should contain n+2 lines. 
    - First line should contain n and m. 
    - Each of next n lines should contain m elements. 
    - Next lines should contain sr, sc and newColor.

    Sample Input:
    1
    3 3
    1 1 1
    1 1 0
    1 0 1
    1 1 2
    Sample Output:
    2 2 2 
    2 2 0 
    2 0 1 
*/

// Including header files.
#include<iostream> // for cout, cin
#include<vector>   // for vector<int>
#include<string.h>   // for memset
using namespace std;

// Defination of Flood_Fill class.
class Flood_Fill {
public:
    // For tracking whether the cell is visited or not.
    bool isVisited[101][101];
    // For storing the resultant matrix.
    vector<vector<int>> result;
    // For storing constants.
    int ROW, COL, COLOR;
    
    // To check whether the move is valid or not.
    bool isValid(vector<vector<int>>& grid, int i, int j){
        if((i >= 0 and i < ROW) and (j >= 0 and j < COL) and (grid[i][j] == COLOR) and (!isVisited[i][j]))
            return true;
        return false;
    }
    
    // DFS in a matrix.
    void DFS(vector<vector<int>>& grid, int i, int j, int newColor){
        isVisited[i][j] = true;
        result[i][j] = newColor;
        if(isValid(grid, i, j+1)){
            DFS(grid, i, j+1, newColor);
        }
        if(isValid(grid, i, j-1)){
            DFS(grid, i, j-1, newColor);
        }
        if(isValid(grid, i+1, j)){
            DFS(grid, i+1, j, newColor);
        }
        if(isValid(grid, i-1, j)){
            DFS(grid, i-1, j, newColor);
        }
    }

    // floodFill() function that will color all it neighbour with the same color.
    vector<vector<int>> floodFill(vector<vector<int>>& grid, int r0, int c0, int newColor) {
        memset(isVisited, false, sizeof isVisited);
        ROW = grid.size(); COL = grid[0].size(); COLOR = grid[r0][c0];
        result.resize(ROW, vector<int>(COL));
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++)
                result[i][j] = grid[i][j];
        }
        DFS(grid, r0, c0, newColor);
        return result;    
    }
};

// main() function or the driver function.
int main(){
    // Taking input for the number of test cases.
	int tc;
    cout<< "Enter the number of test cases: ";
	cin>> tc;
    
    // Taking input for every test cases.
	while(tc--){
		int n, m;
        cout<< "\nEnter Row and Col for the matrix: "<< endl;
		cin>> n>> m;
		vector<vector<int>>image(n, vector<int>(m,0));
        
        // Taking input for m x n matrix.
        cout<< "\nEnter Elements of matrix: "<< endl;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin>> image[i][j];
		}
        
        // Taking input for the starting cell.
		int sr, sc, newColor;
        cout<< "\nEnter index form where the colouring will starts: "<< endl;
		cin>> sr>> sc;
        
        // Taking inpit for the new color.
        cout<< "\nEnter New Color: "<< endl;
        cin>> newColor; 
		Flood_Fill obj;
        
        // Calling the floodFill().
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);

        // Printing the matrix after the flood fill algorithm.
        cout<< "\nAfter Running Flood Fill Algorithm: "<< endl;
		for(auto i: ans){
			for(auto j: i)
				cout<< j << " ";
			cout<< "\n";
		}
	}
	return 0;
    // } Driver Code Ends
}