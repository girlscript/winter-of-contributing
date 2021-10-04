Selection Sort Code

#include<iostream>
#include<algorithm>
using namespace std;
// printing all elements of array
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// selection algorithm
void selection_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int smallest = arr[i];
        int small_index = i;
        for(int j=i;j<n;j++){
            if(arr[j]<smallest){
                smallest = arr[j];
                small_index = j;
            }
        }
        swap(arr[i],arr[small_index]);
    }
}
// algorithm works as finding minimum element by removing previous all minimums one by one
// worst and best case complexities are same in selection sort that is O(n^2)
int main(){
    //this is our array
    int arr[] = {12,1,21,15,13,0,-3};
    // this is number of elements in array
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Our array before sorting : ";
    print(arr,n); 
    selection_sort(arr,n);
    cout<<"Array after sorting : ";
    print(arr,n);
    return 0;
}


Complexity analysis :- 
O(N^2)

Video Link :- https://youtu.be/EeAppyH_0-g
