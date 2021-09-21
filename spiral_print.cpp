#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &arr)
{
    if (arr.size() == 0)
    {
        return {};
    }
    vector<int> res;
    int startRow = 0, startCol = 0, endRow = arr.size() - 1, endCol = arr[0].size() - 1;

    while (startRow <= endRow && startCol <= endCol)
    {

        //Traverse the first row
        for (int i = startCol; i <= endCol; i++)
        {
            res.push_back(arr[startRow][i]);
        }
        startRow++;

        //Traverse the last column
        for (int i = startRow; i <= endRow; i++)
        {
            res.push_back(arr[i][endCol]);
        }
        endCol--;

        if (endRow >= startRow)
        {
            //Traverse the last row
            for (int i = endCol; i >= startCol; i--)
            {
                res.push_back(arr[endRow][i]);
            }
            endRow--;
        }

        if (endCol >= startCol)
        {
            //Traverse the first column
            for (int i = endRow; i >= startRow; i--)
            {
                res.push_back(arr[i][startCol]);
            }
            startCol++;
        }
    }
    return res;
}

int main()
{
    int n, m, x;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            v[i][j] = x;
        }
    }
    vector<int> res;
    res = spiralOrder(v);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}