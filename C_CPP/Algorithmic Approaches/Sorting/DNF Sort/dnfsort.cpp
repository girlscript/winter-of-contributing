// Program to sort (0s, 1s and 2s) array using DNF Sort Algorithm
#include <bits/stdc++.h>
using namespace std;

class DNF
{
public:
    //function to perform DNF Sort Algorithm
    void DNFSortAlgorithm(int arr[], int s)
    {
        int low = 0;                        //low pointing the 0th element of array
        int mid = 0;                        //mid to pointing the 0th element of array
        int high = s - 1;                   //high pointing last element of the array

        while (mid <= high)                 //tranverse until mid less than or not equal to high
        {
            if (arr[mid] == 0)             //if arr[mid] = 0, swap arr[low] with arr[mid] and increment low and mid by 1
            {
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if (arr[mid] == 1)         //if arr[mid] = 1, increment the value of mid
            {
                mid++;
            }
            else                            //else arr[mid] = 2, swap arr[mid] with arr[high], high--
            {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};

int main()
{
    DNF sol;

    int size;
    cout << "Enter the size of array : " << endl;
    cin >> size;                         //size of input array
    int arr[size];
    cout << "Enter elements of array(0s,1s and 2s): " << endl; 
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sol.DNFSortAlgorithm(arr, size);    //function call

    cout << "Sorted Array: " << endl;
    for (int i = 0; i < size; i++)  //print the sorted array
    {
        cout << arr[i] << " ";
    }

    return 0;
}
