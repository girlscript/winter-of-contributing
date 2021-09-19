#include <iostream>
using namespace std;

int minimumIndex(int arr[], int s, int e)
{
    int min_idx = s;
    for (int i = s; i <= e; i++)
    {
        if (arr[i] < arr[min_idx])
        {
            min_idx = i;
        }
    }
    return min_idx;
}

void selectionSort(int arr[], int n)
{
    int min_idx;
    for (int i = 0; i < n - 1; i++)
    {
        //Find minimum element's index in the unsorted part
        min_idx = minimumIndex(arr, i, n - 1);

        //Swap the minimum element with first element of the unsorted subarray
        swap(arr[min_idx], arr[i]);
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}