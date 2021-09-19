#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{

    //We have to make n-1 iterations
    for (int itr = 0; itr < n - 1; itr++)
    {

        //Swap elements if the current element is greater
        for (int i = 0; i < (n - itr - 1); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
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
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}