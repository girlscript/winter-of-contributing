#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int curr_element, j;

    for (int i = 1; i < n; i++)
    {
        curr_element = arr[i];
        j = i - 1;

        //Find the 'right' position in the sorted part
        //And shift the larger elements to one place right
        while (j >= 0 && arr[j] > curr_element)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        //Insert the current element at the 'right' position
        arr[j + 1] = curr_element;
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
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}