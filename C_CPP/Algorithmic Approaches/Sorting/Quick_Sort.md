# Sorting
Sorting refers to ordering data in an increasing or decreasing fashion according to some linear relationship among the data items. Sorting can be done on names, numbers and records. 

Example:- A list of cities could be sorted by population, by area, or by zip code.

# Types of sorting algorithms
There are mainly 8 types of sorting algo/techniques:-
1) Quick Sort
2) Bubble Sort
3) Merge Sort
4) Insertion Sort
5) Selection Sort
6) Heap Sort
7) Radix Sort
8) Bucket Sort

So here we will discuss Quick Sort.

# Quick Sort
QuickSort is a Divide and Conquer algorithm. The name "Quick Sort" comes from the fact that, quick sort is capable of sorting a list of data elements significantly faster (twice or thrice faster) than any of the common sorting algorithms. It is one of the most efficient sorting algorithms and is based on the splitting of an array (partition) into smaller ones and swapping (exchange) based on the comparison with 'pivot' element selected. Due to this, quick sort is also called as "Partition Exchange" sort.

# Working/Algorithm For Quick Sort
--> Let's take an array of size(n) equals to 9 means it will have index number from 0 to 8 (0 to n-1). Now here we will take first element of array i.e 7 as "Pivot" element.

*NOTE*:- We can take any element as "Pivot" element.

![image](https://user-images.githubusercontent.com/71928146/136442611-55dd8226-d38b-46d7-9dd7-33f8eec9e393.png)

--> Now lets take two variables start and end where start will point at the pivot element i.e first element and end will point at the last element. So value of Start is 0 and value of End is 8.

*Note*:- Start and End are not pointers they are normal variables. Here pointing means indicating that element.

![image](https://user-images.githubusercontent.com/71928146/136443676-7ef956ad-3d70-4307-8ca0-3de096e500ee.png)

--> Now our moto is to bring all the elements which is smaller than or equal to our pivot element at the left side of it and rest other elememts at the right side. So for this we will move Start variable to right side(by incrementing value from 0,1..) until we get any element greater than our pivot element and if we get any element greater than our pivot element then we will stop our Start variable there and now we will move End variable to the left side(by decrementing value from 8,7..) until we get any value smaller than pivot element and if we get that smaller element then we will stop our End variable there and swap the element present at Start variable with the element which is present at End variable.

![image](https://user-images.githubusercontent.com/71928146/136445853-5cbd0924-e48f-4e17-8b9c-803b23e1b46d.png)
![image](https://user-images.githubusercontent.com/71928146/136446709-fe2c55b3-b0b8-43e0-a703-83f44ff040cd.png)
![image](https://user-images.githubusercontent.com/71928146/136448107-99f8d016-58b4-4b15-8f4c-c61d98a49ffd.png)
![image](https://user-images.githubusercontent.com/71928146/136448356-ca67b87c-1dc4-406a-b7a4-0d2bfb931690.png)
![image](https://user-images.githubusercontent.com/71928146/136448986-619c8e7e-335e-45f7-8de9-d5cdc11940d8.png)
![image](https://user-images.githubusercontent.com/71928146/136449655-11965dc0-d92a-4b82-a667-c8882502490b.png)
![image](https://user-images.githubusercontent.com/71928146/136449893-1ab6c5e5-f68b-4cc0-a697-d586683672d8.png)
![image](https://user-images.githubusercontent.com/71928146/136450186-503f9494-23d1-401e-8ce9-8e2001c39e8a.png)
![image](https://user-images.githubusercontent.com/71928146/136450766-8c40480e-7a3c-4763-98b9-20d7db661116.png)
![image](https://user-images.githubusercontent.com/71928146/136450859-4781fd67-c164-4558-bac5-f29241151194.png)
![image](https://user-images.githubusercontent.com/71928146/136452281-5363a3ca-c5f7-45e9-8bcd-4d1eade153ae.png)
![image](https://user-images.githubusercontent.com/71928146/136452607-c5db922b-3ca3-42e9-9239-799fe7a2fdfa.png)
![image](https://user-images.githubusercontent.com/71928146/136453306-7e6cb916-b1d0-4285-86fa-9e5c1b93b591.png)
![image](https://user-images.githubusercontent.com/71928146/136453559-cd2bd7fd-3182-4ed2-b4c6-216eab350ec2.png)
![image](https://user-images.githubusercontent.com/71928146/136453817-76c8865e-c924-4a6d-aba0-898ff64e69e1.png)
![image](https://user-images.githubusercontent.com/71928146/136455805-58fd54c0-9109-48ab-854d-abdd128c1c85.png)
![image](https://user-images.githubusercontent.com/71928146/136456448-72105fdd-8c3f-4759-931d-8757a04bb875.png)
![image](https://user-images.githubusercontent.com/71928146/136457746-519bafb0-a3dd-4152-8c87-27853fb8112b.png)

# Program/Code in C++
~~~
#include<iostream>
using namespace std;

int part(int *a, int lb, int ub, int n)
{
    int pivot=a[lb];
    int start=lb;
    int ennd=ub;           //ennd=end

    while(start<ennd)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[ennd]>pivot)
        {
            ennd--;
        }
        if(start<ennd)
        {
            swap(a[start],a[ennd]);
        }
    }
    swap(a[lb],a[ennd]);
    return ennd;

}
void Quicksort(int *a, int lb, int ub, int n)
{
    int loc;
    if(lb<ub)
    {
        loc = part(a,lb,ub,n);
        Quicksort(a,lb,loc-1,n);
        Quicksort(a,loc+1,ub,n);
    }

}
int main()
{
    int n,lb,ub;                      //lb=lower bound, ub=upper bound
    cout<<"Enter size of your array";
    cin>>n;
    int a[n];
    cout<<"Enter your elements";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    lb=0;
    ub=n-1;
    Quicksort(a,lb,ub,n);
    cout<<"Sorted array:- ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
~~~

# Output
![image](https://user-images.githubusercontent.com/71928146/136460002-349a6f57-d214-4b6d-80e6-df5b5f840a1d.png)

# Time Complexity
   ### Best Case
   O(nlogn)
   ### Average Case
   O(nlogn)
   ### Worst Case
   O(n^2)
  
# Space Complexity
O(n)

# Advantages
1) It requires only n (log n) time to sort n items.
2) It has an extremely short inner loop.
3) It is in-place since it uses only a small auxiliary stack.

# Disadvantages
1) It is recursive. Especially, if recursion is not available, the implementation is extremely complicated.
2) It requires quadratic (i.e., n2) time in the worst-case.
3) It is fragile, i.e. a simple mistake in the implementation can go unnoticed and cause it to perform badly.
