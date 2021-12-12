#include <iostream>
#include <deque>

using namespace std;

void printg(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); it++)
    {
        cout << '\t' << *it; // printing the elements of deque
    }
    cout << endl;
}

void back(int arr[], int n)
{
    deque<int> gwoc;

    cout << "Pushing From Back : ";
    for (int i = 0; i < n; i++)
    {
        gwoc.push_back(arr[i]); // adding elements from front
    }

    printg(gwoc);
}

void front(int arr[], int n)
{
    deque<int> gwoc;
    cout << "Pushing From Front : ";
    for (int i = 0; i < n; i++)
    {
        gwoc.push_front(arr[i]); // adding elements from back
    }

    printg(gwoc);
}

// driver code
int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // taking input from the user
    }

    front(arr, n); // calling front function
    back(arr, n);  // calling back function

    return 0;
}
