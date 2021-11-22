# **Different Sorting Technique in C/C++**
## What is sorting?
Sorting means arranging the data or some records or numbers in increasing and decreasing order.


for example,

given data= 1,6,5,3,8,9

sorted data= 1,3,5,6,8,9

Generally sorting  in c++ is used to sort the arrays . For example , we have an array of 5 element i.e, array={5,4,6,2,1}

After sorting the sorted array becomes {1,2,4,5,6}

### __Different types of sorting technique__

* Insertion Sort

* [Selection sort](Selection%20sort%20in%20c.md)

* Bubble Sort

* Merge Sort

* Quick Sort

Here only three sorting techniques will be discussed .

## __*Insertion Sort*__
Insertion sort is a sorting technique in which we compare the element and transfer greater element to the right of the array one by one.

First we divide the array into two parts ,i.e, sorted and unsorted parts . First element of the array is the sorted one and rest of the part is unsorted .

lets understand with an example,

![alt text](https://www.alphacodingskills.com/cs/img/insertion-sort.PNG)

Here ,first we assume 23 as sorted  part and rest is unsorted.

In second pass we store 1 in a temp variable and then check whether 1 is less than 23 or not , if it is less than 23 we shift 23 towards its right and store 1 in first position .And then we mark 1 and 23 as sorted part.

In third pass we store 10 in a temp variable and then check with 23 whether it is less or not,if less than shift 23 towards its right and then we will also check whether 10 is less than 1 or not and then shift accordingly.

Similarly,we will check for all the passes.

Best Time complexity = **O(n)**,when only first element is  shifted.

Worst and average time complexity= **O(n^2)**

### Code of insertion sort in c++.

```c++
#include <bits/stdc++.h>
using namespace std;
 //Function for insertion sort.
void insertionSort(int arr[], int n)
{
    int i, temp, j;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
 //shift the element that are greater than temp towards right
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}
 
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = { 23, 1, 10, 5, 2 };
    int n = 5;
 
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}
```
### output:

1 2 5 10 23

## __*Selection Sort*__
Selection sort is a sorting technique which select the minimum element  from an array or a list in each iteration and place it at the starting index of an unsorted array.This sorting technique has two subarrays in a given array ,i.e, the array which is already sorted and the remaining unsorted subarray.


lets understand with an example ,

![alt text](https://www.testingdocs.com/questions/wp-content/uploads/SelectionSortExample.png)

Here , we set  first element 23 as minimum. Then we compare minimum with next second element , if second element is smaller than first then mark second element as minimum. After one iteration we will find the minimum element in an array is 9 .then place it at the starting of unsorted array , and mark that element as sorted .


Similarly , we compare each element and find the minimum element in every iteration and place at starting position of unsorted array.

Best Time complexity = **O(n^2)**

Worst and average case Time Complexity =  **O(n^2)**

### Code of Selection sort in c++.

```c++
#include <bits/stdc++.h>
using namespace std;
 // function for selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n-1; i++)
    {
        // Finding the smallest element in array
        min = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min])
            min = j;
 
   // swap the minimum element and  first element of unsorted subarray   
     int temp = arr[min];  
    arr[min] = arr[i];  
    arr[i] = temp;  
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {23, 56, 9, 103, 77};
    int n = 5;
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
```
### Output:
9 23 56 77 103

## __*Bubble Sort*__
Bubble sort is also a sorting technique in which we swap the adjacent elements if the first element is greater than the second one . This process continues until the greatest element comes at the end of array.

lets understand with an example ,

![alt text](https://haygot.s3.amazonaws.com/questions/932510_918959_ans_6d3b54b821904d36b7a1788f5a671699.png)

In each iteration we will compare each adjacent element and swap them if needed so that the largest element comes at the end of the array.

 First pass :

 arr={ 5,1,5,2,8 } here we compare first two element and swap 5 with 1 because 5 is greater.

 So array becomes { 1,5,4,2,8 } , now compare 5 with 4 and swap because 5 is greater. So the array becomes { 1,4,5,2,8}
 .

Now compare 5 with 2 , since 5 is greater so we swap 5 with 2.

Now array becomes{ 1,4,2,5,8 } , here no swap is needed since 8 is greater than 5.

Hence after first pass the largest element comes at the end of the array.


 Similarly we will compare and swap the element in next  passes also .

 
Best Time complexity = **O(n)** , when array is already sorted.

Worst and average case Time Complexity =  **O(n^2)**

### Code of Selection sort in c++.

```c++
#include <bits/stdc++.h>
using namespace std;
  // A function  for bubble sort 
void bubbleSort(int arr[], int n) 
{ 
    int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {   
            //for comparing the greater element 
            if(arr[j] < arr[i])    
            {    
                // for swapping
                temp = arr[i];    
                arr[i] = arr[j];    
                arr[j] = temp;     
            }     
        }     
    }     
} 
  

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = {5, 1, 4, 2, 8}; 
    int n = 5; 
    bubbleSort(arr, n);
    printArray(arr, n); 
    return 0; 
} 
```
### Output:
1 2 4 5 8


