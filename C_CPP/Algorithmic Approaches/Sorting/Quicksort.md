# QUICK SORT
- QUICK SORT: Quick sort is a sorting algorithm accepted as the fastest algorithm for sorting. It is based on Divide and Conquer algorithm. In this algorithm we assign a element as the pivot and partition according to the pivot.</br>

-  Quick Sort is accomplished by partitioning the array around pivot and then sort accordingly.
 
#### DIVIDE AND CONQUER
<p align="center"><img src="https://user-images.githubusercontent.com/71391631/136206260-1ea70f02-e77d-4a50-9a3e-7ad779d27a68.png"  width="400"/></p>

## ALGORITHM
1. Call for Quick sort //quickSort( arr, low, high)
2. Find the partition with the help of partition function // p = partition(arr,low,high)
3. Call Quick Sort for the left half of pivot // quickSort(arr,l,p-1)
4. Call Quick Sort for the right half of the pivot //  quickSort(arr,p+1,r)
<p align="center"><img src="https://user-images.githubusercontent.com/71391631/136849754-32c11dd3-ff5b-4bf3-83c9-750f4672ec73.jpg"/>
</p>

## PARTITION

1. Set pivot as the max of array // arr[high]
2. Set index as low-1 // i= low-1
3. Traverse the whole array, if any element found to be less than pivot swap the index element with the found element // swap arr[i] with arr[curr]
4. Swap arr[i] with arr[high]
5. Return i+1

<p align="center"><img src="https://user-images.githubusercontent.com/71391631/136848864-0e0a5313-65fa-41ea-a666-560ed31a1f00.png"/></p>

## C++ CODE FOR QUICK SORT
```
#include<iostream>
using namespace std;

void swap(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int Partition(int a[], int l, int h) {
   int pivot=a[h];
   int i = l-1;
   for(int j=l; j<=h-1; j++) {
      if(a[j]<pivot) {
         i++;
         swap(a[i], a[j]);
      }
   }
   swap(a[i+1],a[h]);
   return i+1;
}
void QuickSort(int a[], int l, int h) {
   if(l < h) {
      int p = Partition(a, l, h);
      QuickSort(a, l, p-1);
      QuickSort(a, p+1, h);
   }
}
int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i = 0; i < n; i++) {
      cin>>arr[i];
   }
   QuickSort(arr, 0, n-1);
   for (int i = 0; i < n; i++){
      cout<<arr[i]<<" ";
   }
   return 0;
}
```
**INPUT**
```
5
-1 90 43 15 0
```
**OUTPUT**
```
-1 0 15 43 90
```

## COMPLEXITY OF QUICK SORT
- Quick Sort is an easy-to-implement,in-place algorithm.
Time complexity Can be expressed by the following reccurrence relation: T(n) =  T(k) + T(n-k-1) + θ(n)<br>
The time taken by the Quick sort depends upon the input array and partition  
1. Worst Case: If the pivot element is greatest or smallest element of array, then the Timce complexity falls for θ(n2).
2. Average Case: Considering all permutation of array we get Time complexity of O(nLogn).
3. Best case: If the Pivot element is middle element, we get Time complexity of θ(nLogn).

- Quick sort is memory efficient with Space Complexity of O(1).

## APPLICATION OF QUICK SORT
1. Quick sort is widely accepted as the best sorting algorithm even with the worst case becuase it can be avoided by changin choice of pivot.
2. Quick Sort is Cache friendly.
3. Randomized Quick Sort provides expected Time complexity of O(nLogn). It works well in work practice.

## REFERENCE
- [Khan Academy](https://www.khanacademy.org/computing/computer-science/algorithms/quick-sort/a/overview-of-quicksort)
- [GeeksForGeeks](https://www.geeksforgeeks.org/quick-sort/)
## IMAGE REFERENCE
- [Khan academy](https://cdn.kastatic.org/ka-perseus-images/53692155715c9f26ec927cb2d40e70ce6c460e86.png)
- [Interview Bit](https://i.pinimg.com/564x/fe/f8/08/fef8085a6420538e38f6ccfaba04d12f.jpg)
