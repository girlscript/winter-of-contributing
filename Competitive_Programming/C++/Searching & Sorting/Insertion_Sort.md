# Sorting
**Sorting** refers to ordering same type of data in an increasing and decreasing fashion according to some relationship among them.

***Example :-*** During assembly in schools students stand according to their respective heights in increasing order so that student with smallest height stand in front while student with the highest height stand at last. Here height is sorted in increasing order. 

![image](https://user-images.githubusercontent.com/71928146/137345394-5fd6269c-ec5c-4e02-897a-4787856add25.png)

# Types Of Sorting
1) Quick Sort
2) Bubble Sort
3) Merge Sort
4) Insertion Sort
5) Selection Sort
6) Heap Sort
7) Radix Sort
8) Bucket Sort

So here we will discuss Insertion Sort.

# Insertion Sort
Insertion sort is a simple sorting algorithm. In this method we virtually split/divide our array into sorted and unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

# Working/Algorithm For Insertion Sort

![image](https://user-images.githubusercontent.com/71928146/139216843-237e6b3e-3524-4214-8a6b-6399a58ddd8d.png)
![image](https://user-images.githubusercontent.com/71928146/139217139-f951bb28-b5cc-4c5a-b005-f666cfa7c180.png)
![image](https://user-images.githubusercontent.com/71928146/139217377-ef1a6fff-93d1-48b9-92b5-51b8fc4a6e20.png)
![image](https://user-images.githubusercontent.com/71928146/139217516-514f4af0-fe43-412b-a138-9ab04c17ad31.png)
![image](https://user-images.githubusercontent.com/71928146/139249486-74cc00a7-8af1-4f76-83f3-1bd4e1a1549c.png)
![image](https://user-images.githubusercontent.com/71928146/139249619-ec902c42-d12a-49a1-baa7-2097dc88bac7.png)
![image](https://user-images.githubusercontent.com/71928146/139249736-5cc35596-df89-43f1-9998-5acde19920cd.png)
![image](https://user-images.githubusercontent.com/71928146/139249852-8ad83337-87ee-4901-a2af-88338411cdec.png)
![image](https://user-images.githubusercontent.com/71928146/139249962-ff6fec5e-fa9c-4149-b69b-fc8559c0e8e4.png)

# Program/Code in C++
~~~
#include<iostream>

using namespace std;

void insertionsort(int arr[], int n)
{
    int i,temp,j;
    for(int i=1;i<=n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }

    cout<<"Your sorted array is:- ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter size of your array:- ";
    cin>>n;
    int a[n];
    cout<<"Enter elements in your array:- ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    insertionsort(a,n);
}
~~~

# Output

![image](https://user-images.githubusercontent.com/71928146/139271542-45b8f284-0d8e-444f-bd62-2ae8527a399a.png)

# Time Complexity
   ### Best Case
   O(n)
   ### Average Case
   O(n^2)
   ### Worst Case
   O(n^2)
  
# Space Complexity
O(1)

# Advantages
1) The main advantage of the insertion sort is its simplicity. 
2) It also exhibits a good performance when dealing with a small list.
3) The insertion sort is an in-place sorting algorithm so the space requirement is minimal.

# Disadvantages
1) In this n-squared steps required for every n element to be sorted, the insertion sort does not deal well with a huge list. 
2) Therefore, the insertion sort is particularly useful only when sorting a list of few items.
