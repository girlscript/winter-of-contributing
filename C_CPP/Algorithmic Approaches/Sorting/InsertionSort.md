## INSERTION SORT

 - INSERTION SORT :Insertion sort is a sorting algorithm .In this type of algorithm the array is virtually split into sorted and unsorted part.
  the values from the unsorted part of list are picked and placed at the correct position in the sorted part of the list.</br>
   In other words, an insertion sort helps in building the final sorted list, one item at a time, with the movement of higher-ranked elements.

 - HOW DOES IT WORK?</br>
 Assume first element be sorted and rest all be unsorted ,then pick 1 element from unsorted list and place it in  right position in sorted list. Repeat for all unsorted elements.
 - ALGORITHM </br>
 This is the algorithm to sort an array n in the ascending order :</br>
 1. First of all , iterate over the array from arr[1] to arr[n].
 2. Then, compare the current element (curr) to its predecessor.
 3. If the current element is smaller than its predecessor,then compare it to the elements before.
 4. Then move the greater elements one position up to make space for the swapped element.
  
 - C++ PROGRAM FOR INSERTION SORT
 ```
 #include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;           // taking size of array as input from user
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];             // taking array as input from user
    }

    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){     //Move elements of arr[0...i-1],that are greater than key,to one position ahead of their 
            arr[j+1]=arr[j];                //current position
            j--;
    }
    arr[j+1]=current;
    }
    for(int i=0;i<n;i++){         // A utility function to print an array of size n
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
```
- COMPLEXITY OF INSERTION SORT </br>

   Insertion Sort is an easy-to-implement,stable sorting algorithm with time complexity of O(n^2)in the average case and O(n) in the best case when the elements are already sorted and the worst case occurs when the array is sorted in reverse order. For vey small n, Insertion Sort is good for sorting small arrays . It sorts smaller arrays faster than any other sorting algorithm.It is very efficient for semi-sorted arrays . For an array of n elements ,where the maximum divergence an element can have from its "sorted"position is k, insertion sort takes O(n) time.</br>
   
   Insertion sort is stable sort with a space complexity of O(1) and it is said to be stable  if two objects with equal keys appear in the same order in sorted output as they appear in the input array to be sorted. Stability is mainly important when we have key value pairs with duplicate keys possible  and we want to sort these objects by keys.</br>
   A sorting algorithm is stable if-</br>
   i < j and A[i]≡A[j] implies π(i) < π(j)
   
where π is the sorting permutation ( sorting moves A[i] to position π(i) )</br>
Informally, stability means that equivalent elements retain their relative positions, after sorting.
![image](https://user-images.githubusercontent.com/88306424/134770958-c8a7012e-6827-47eb-b12a-f103dc4d7ab6.png)


