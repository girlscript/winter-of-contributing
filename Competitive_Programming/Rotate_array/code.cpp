#include<bits/stdc++.h>
 using namespace std;
 
//  to reverse  subarray
void reverse(int arr[], int low, int high){
    for (int i = low, j = high; i < j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];//swapping the values
        arr[j] = temp;
    }
}
//  to-rotate array by d positions
void leftRotate(int arr[], int d, int n)
{
    //base condition
    if (d < 0 || d >= n) 
        return;
    // Reversing the first `d` elements
    reverse(arr, 0, d - 1);
    // Reversing the remaining `n-d` elements
    reverse(arr, d, n - 1);
    // Reversing the whole array
    reverse(arr, 0, n - 1);
}
 
int main()
{
    int arr[] = { 10,20,30,40,50};
    int d = 6;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The array after rotating D places: \n";
    leftRotate(arr, d, n);
    for (int i = 0; i < n; i++) 
        cout<<arr[i]<<" ";
    return 0;
}