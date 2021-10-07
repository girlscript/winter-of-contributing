#include<iostream>

using namespace std;

// Binary Search
int binarySearch(int arr[],int j,int element){
    int beg = 0,end=j;
    int mid;
    while (beg<=end){
        mid = (beg+end)/2;

        // if middle element is more than element 
        if(arr[mid]>element)
        end = mid-1;
        else
        beg = mid+1;
    }
    return mid;
    
}
// binary insertion sort
void binsertionSort(int arr[],int n){

    for(int i=1;i<n;i++){
        int j = i-1;
        int element = arr[i];

        // calling binary search for finding the location
        int location = binarySearch(arr,j,element);
        while (j>=location){
            arr[j+1] = arr[j];
            j--;
        }
        arr[location] = element;

    }
}

int main(){
    // taking size of array from user
    int n;
    cout<<"\n Enter size of an array : ";
    cin>>n;

    // taking input of array elements
    int arr[n];
    cout<<"\n Enter array elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // calling binary insertion sort
    binsertionSort(arr,n);

    // printing sorted array
    cout<<"\n Sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

