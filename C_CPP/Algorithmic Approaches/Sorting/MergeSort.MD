# MERGE SORT
- **MERGE SORT**: Merge sort is one of the widely accepted sorting algorithm. It is based on Divide and Conquer algorithm. In this type of algorithm we build a heap and sort with comparisons.  
-  Merge Sort is accomplished by dividing the array into two halves, and then again for the two halves until we get unit, and finally merging the two sorted halves. Merging is done ithe help of a Merge function.
 
#### DIVIDE AND CONQUER
<p align="center"><img src="https://user-images.githubusercontent.com/71391631/136206260-1ea70f02-e77d-4a50-9a3e-7ad779d27a68.png"  width="400"/></p>

## ALGORITHM
```
1. Call for Merge sort. // MergeSort(arr[],l,r)
2. Find the middle point to divide array into two halves
3. Call Merge sort for first half. // MergeSort(arr,l,m)
4. Call Merge sort for second half. // MergeSort(arr,,mid+1,r)
5. Merge the two sorted halves. // Merge(arr,l,m,r)
```
<p align="center"><img src="https://user-images.githubusercontent.com/71391631/136206049-a56ac648-73d3-451f-8b27-762f796d8172.png"  width="400"/></p>

## MERGE
```
1. Make two array of Right half of and left half original array
2. Take input from the original array accordingly
3. Then change the element of array according to the increasing order from the child arrays
```
<p align="center"><img src="https://user-images.githubusercontent.com/71391631/136206563-b55e8ecd-3017-4aa9-8fb6-d7646e0a4a9b.png"  width="400"/></p>

## CODE FOR MERGE SORT IN C++
```CPP
#include <iostream>
using namespace std;
void merge(int a[],int l,int mid,int r){
  int n1=mid-l+1, n2=r-mid;
  int left[n1], right[n2];
  for(int i=0;i<n1;i++) left[i]=a[l+i];
  for(int i=0;i<n2;i++) right[i]=a[mid+1+i];
  int i(0),j(0),k=l;
  while(i<n1 && j<n2){
    if(left[i]<right[j]) {a[k]=left[i]; i++; k++;}
    else {a[k]=right[j]; j++; k++;}
  }
  while(i<n1) {a[k]=left[i]; i++; k++;}
  while(j<n2) {a[k]=right[j]; j++; k++;}
}
void mergeSort(int a[], int l, int r){
  if(l<r){
    int mid=l+(r-l)/2;
    mergeSort(a,l,mid);
    mergeSort(a,mid+1,r);
    merge(a,l,mid,r);
  }
}
int main(){
  int n; cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
	cout<<"Array before sorting is: \n";
	printArray(arr,n);
	mergeSort(arr, n);
	cout << "Sorted array is \n";
	printArray(arr, n);
  return 0;
}

```
**Input** 
```
3 -9 5 43 2
```
**output**
```
-9 2 3 5 43
```
## COMPLEXITY OF MERGE SORT
- Merge Sort is an easy-to-implement,stable algorithm.
Time complexity Can be expressed by the following reccurrence relation: T(n) = 2T(n/2) + θ(n)<br>
By solving the recurrence relation we get the Time complexity of θ(nLogn) in all 3 cases which are best, average, worst. 

- Heap sort has to make a temporary array which gives it the Auxillary space of O(n).

## APPLICATION OF MERGE SORT
1. Merge sort is widely accepted as the best sorting algorithm for Linked list.
2. Merge Sort is highly compatible for Inversion count problem.
3. Merge sort is used for External Sorting.

## CONS
1. Merge Sort is slower algorithm when it comes to smaller task.
2. It requires Extra memory space for temporary array.
3. Merge sort is not able to identify if the array is sorted or not. It takes actions even if the array is sorted in the first place.

## REFERENCE
- [Khan Academy](https://www.khanacademy.org/computing/computer-science/algorithms/merge-sort/a/overview-of-merge-sort)
- [GeeksForGeeks](https://www.geeksforgeeks.org/merge-sort/)
## IMAGE REFERENCE
- [Khan academy](https://cdn.kastatic.org/ka-perseus-images/db9d172fc33b90e905c1213b8cce660c228bb99c.png)
- [Interview Bit](https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.interviewbit.com%2Ftutorial%2Fmerge-sort-algorithm%2F&psig=AOvVaw2QdNx_ukEqZ2ZGGDtScdKF&ust=1633755709991000&source=images&cd=vfe&ved=0CAsQjRxqFwoTCMDn1beEuvMCFQAAAAAdAAAAABAI)
- [WikiMedia Commons](https://www.google.com/url?sa=i&url=https%3A%2F%2Fcommons.wikimedia.org%2Fwiki%2FFile%3AMerge_sort_algorithm_diagram.svg&psig=AOvVaw2QdNx_ukEqZ2ZGGDtScdKF&ust=1633755709991000&source=images&cd=vfe&ved=0CAsQjRxqFwoTCMDn1beEuvMCFQAAAAAdAAAAABAV)
