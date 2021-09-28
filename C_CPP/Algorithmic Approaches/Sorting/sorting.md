## What is sorting?

Sorting basically means to arrange the data items in increasing or decreasing manner according to the relationship among the data's.
> FOR EXAMPLE - we have given an array [9,5,7,3,1]
> Now let us suppose we need to sort the array in increasing/ascending order , so it will become 
> Array after sorting - [1,3,5,7,9] (ascending).This will give us data in a sorted manner.

## Why do we need sorting and it's different methods?

 - If we have a huge data with us (suppose 1 lakh entries) and we are provided with a task to select all the person's in that data whose roll no starts with 1 upto 100 . Now in this if we don't have any sorting technique then we need to go through all the data (i.e approx lakh) to select the needful,and we need to go through it several times to arrange all data in order.
Therefore the solution of above complication is **_SORTING TECHNIQUE_**.
 - Time complexity is the main advantage of sorting.problems can be solved easily or quickly based on sorting.


## Types of sorting 

> - **Bubble sort** - It is a simple and basic algorithm used for sorting.This is a comparison-based algorithm in which each pair of adjacent elements is compared and the elements are swapped if they are not in order.

> - **Insertion sort** - It is a method in which ONE ELEMENT is taken in order to compare it with every other elements to find it's correct position. It iterates the input elements by growing the sorted array at each iteration.

> - **Merge sort** - It is an algorithm which uses the idea of breaking down a list into several sub-lists until each sublist consists of a single element and then merge it in a sorted manner

[Types_of-sorting] - (https://cdn.educba.com/academy/wp-content/uploads/2019/09/Sorting-in-C.png())

**In this we will talk about bubble sort and insertion sort**

## Drawback of BUBBLE SORT over INSERTION SORT

> BUBBLE SORT can not be used for large data items.Moreover it is not the fastest sorting method.If we do not optimise the code it will run even after the sorting.This is the reason why insertion sort has been created to overcome these disadvantages.

## Defining BUBBLE SORT 

> This method is basically used for sequencing small list. We will start comparing the first item with the second item , then second item with third item and so on..untill it finds one item out of order. Then two items will get swapped and start over.

## C CODE FOR BUBBLE SORT 

```C

#include<stdio.h>
int main()
{
   int arr[] = {2,9,6,5,6,0,-1}, n = 7;
   int i , int j ;
   for(i = 0; i < n - 1; ++i)
   { 
      int swapped = 0;

      for(j = 0; j < (n - i - 1); ++j)
         if(arr[j] > arr[j+1])
         {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

            swapped = 1;
         }
      if(!swapped)
         break;
   }
         
   printf("\nArray after sorting: ");
   for(i = 0; i < n; ++i)
      printf("%d ", arr[i]);
 
   return 0;
}

```

[gif](https://tenor.com/MLaj.gif)

**Dont worry we will understand this in the simplest way**

 - Let us suppose we have an array of size n. We will swap for n-1 passes.(because indexing starts from 0  and will iterate upto n-1).
 - After sorting there will be the largest element at right place and smallest element at left place.
 - Take the starting element (index=0) and compare it with the next element.If the current element is greater than the next element then SWAP them.
 - If we will see that the current element is smaller than the next element then we will leave the current element at it's place and then compare next element to it's next element'
 - Repeat this untill the array get sorted.

## BUBBLE SORT example

 - Consider an array = [14, 33, 27, 35, 10].
 - Index value of (14=[0],33=[1],27=[2],35=[3],10=[4])

[Array indexing](https://tutorials-image.s3-us-west-2.amazonaws.com/unsorrted+array.png)

 - We will compare arr[0] and arr[1] i.e 14 and 33. if 14>33 then swapping will occur. This    condition is false. Therefore no swapping.
- Check Arr[1] and Arr[2]. Check if 33 > 27 which is true. So, we swap Arr[1] and Arr[2].

[1st swap](https://tutorials-image.s3-us-west-2.amazonaws.com/bubble+sort+1.png)

- We will now check Arr[2] and Arr[3]. Check if 33 > 35 which is false. So, no swapping happens and the array remains the same.

- Check Arr[3] and Arr[4]. Check if 35 > 10 which is true. So, we swap Arr[3] and Arr[4.

[second swap](https://tutorials-image.s3-us-west-2.amazonaws.com/bubble+sort+4.png)

**Likewise we will again iterate the array and compare one by one**

 - Check Arr[0] and Arr[1]. Check if 14 > 27 which is false. So, no swapping happens and the array remains the same.similarly check for 27>33 i.e Arr[1] and Arr[2] no swap taking place.
 - Check Arr[2] and Arr[3]. Check if 33 > 10 which is true. So swap Arr[2] and Arr[3].

[Third swap](https://tutorials-image.s3-us-west-2.amazonaws.com/bubble+sort+5.png)
 - After the Nth paas , when every element of array will get compared to every other element of array the smallest element will be at Nth last position.Thus the sorted array is:[10,14,27,33,35]
 
[Sorted array](https://tutorials-image.s3-us-west-2.amazonaws.com/final+sorted+array+using+bubble+sort.png)


## C CODE FOR BUBBLE SORT USING FUNCTION

```C
#include <stdio.h>
void bubble_sort(int [], int);

int main()
{
  long arr[100], n, c;

  printf("Enter number of elements\n");
  scanf("%ld", &n);

  printf("Enter %ld integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%ld", &arr[c]);

  bubble_sort(arr, n);

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
     printf("%ld\n", arr[c]);

  return 0;
}

void bubble_sort(int list[], int n)
{
  int c, d, t;

  for (c = 0 ; c < n - 1; c++) {
    for (d = 0 ; d < n - c - 1; d++) {
      if (list[d] > list[d+1]) {
       
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}
```
> In the above code we have made a function named 'bubble_sort' which has been called in the global environment inside void.

## Defining INSERTION SORT

> This method is basically used for big list data's. Elements get transferred one at a time to the right position. An insertion sort has the benefits of simplicity and low overhead. The first element is always considered to be sorted even if it is an unsorted array. However, an insertion sort is less efficient on larger data sets and less efficient than the heap sort or quick sort algorithms.


## C CODE FOR INSERTION SORT 


```C
#include<stdio.h>
int main(){

   int i, j, count, temp, number[20];

   printf("How many numbers?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   for(i=1;i<count;i++){
      temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }

   printf("elements after sorting: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
```
> In the above driven code number[] will store the array , count = total number of element present in the array.
> Temp is assigned the initial array before several passes.
> i and j are the initializers.

## C CODE FOR INSERTION SORT USING FUNCION

```C

#include <stdio.h>
void PArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void insertion_Sort(int arr[], int size) {
  for (int step = 1; step < size; step++) {
    int key = arr[step];
    int j = step - 1;
    while (key < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
  }
}

int main() {
  int data[] = {3, 5, 1, 2, 4};
  int size = sizeof(data) 
  insertion_Sort(data, size);
  printf("Sorted array in ascending order:\n");
  PArray(data, size);
}
```
> In the above driver code , PArray is the function which will return the sorted array and we will print the Array/sorted array using PArray function.
> insertion_sort is the function inside which the whole sorting process is been defined and implemented. In which step is the initializer and given the initial value as 1. 
> int main() is the global environment in which all the return value is stored as function gets called. 

## What is time complexity ?

> Time complexity is the measure of amount taken by a program to execute as a function of the length of input. FOR EXAMPLE
> ```C
>int main(){
>   printf("hello world")
>   return 0;
>}

> This will print "hello world" only 1 time , Therefore **time_complexity = O(1)** .

## Time complexity for BUBBLE SORT

> - In bubble sort (n-1) comparision in 1st pass , (n-2) comparision in 2nd pass and so on . Therefore Sum = (n-1) + (n-2) + (n-3) + ..... + 3 + 2 + 1 . 
> - Sum = n(n-1)/2 . HENCE time complexity = O(N^2)

## Time complexity for INSERTION SORT 

> - In Best Case i.e., when the array is already sorted, time complexity = O(N)
Therefore,T( n ) = C1 * n + ( C2 + C3 ) * ( n - 1 ) + C4 * ( n - 1 ) + ( C5 + C6 ) * ( n - 2 ) + C8 * ( n - 1 )
> - In average case time complexity = O(N^2)

[Understanding_time_comeplexity](https://youtu.be/KXAbAa1mieU)









   


