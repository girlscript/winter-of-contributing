# Sorting
**Sorting** refers to ordering same type of data in an increasing and decreasing fashion according to some relationship among them.

***Example :-*** During assembly in schools students stand according to their respective heights in increasing order so that student with smallest height stand in front while student with the highest height stand at last. Here height is sorted in increasing order. 

<img src="https://user-images.githubusercontent.com/71928146/137345394-5fd6269c-ec5c-4e02-897a-4787856add25.png" width="1000"  />

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

* Here we have our array which is not in sorted form. So to sort it using Insertion Sorting we will divide this array into two parts i.e sorted array/sublist and unsorted array/sublist.
<img src="https://user-images.githubusercontent.com/71928146/139432056-fd231264-e482-4ed6-902b-5db54401e800.png" width="1000"  />

* Now we have divided our array. Our 1st element i.e element on 0th index is at sorted side and elements from index number 1 to n-1(n is size of array) i.e 4 are on unsorted side.
<img src="https://user-images.githubusercontent.com/71928146/139432225-15a95a5d-94c2-4b5e-9acb-a35dc3efc658.png" width="1000"  />

* Now we will pick elements from unsorted side from index 1 to 4 and then compare it with the element of the sorted side and will place it accordingly at the sorted side.
<img src="https://user-images.githubusercontent.com/71928146/139432650-ca509750-5cf1-4f00-ab3b-0f3a7ed39435.png" width="1000"  />

* So first of all pick element on index number 1 i.e 4 and place it in the temp variable. This will create free space at index number 1.
<img src="https://user-images.githubusercontent.com/71928146/139432777-fb59cc35-d53c-49d1-b744-640a32153d75.png" width="1000"  />

* Now compare temp value i.e 4 with element at sorted side. 4<5 and we have also on index number 0. So put 4 at index 0 and shift 5 at index 1. Now sorted array size became 2 i.e from index number 0 to 1. 
<img src="https://user-images.githubusercontent.com/71928146/139432933-218d9250-b2de-4d73-9ba4-994cd9171bea.png" width="1000"  />

* Now put 10 in temp variable and compare it with 5.
<img src="https://user-images.githubusercontent.com/71928146/139433167-1c3b17a2-4545-4f42-bdd3-3002894aa44f.png" width="1000"  />

* 10>5 so it means 10 will be at same position i.e on index number 2 and size of sorted array became 3 i.e from 0 to 2.  
<img src="https://user-images.githubusercontent.com/71928146/139433413-ba3229c5-4691-4dfa-9d83-3d3c3e9b5c73.png" width="1000"  />

* Now put 1 in temp variable and compare it with 10. 
<img src="https://user-images.githubusercontent.com/71928146/139433680-eb178229-6220-458c-b10a-cf822da17ca5.png" width="1000"  />

* 1<10 so now 10 will go to index number 3 and index becomes empty.
<img src="https://user-images.githubusercontent.com/71928146/139433776-b0d68ad1-9494-4128-b1c3-871151b9f9d3.png" width="1000"  />

* Now compare 1 with 5. 1<5 so move 5 to index number 2 and index 1 becomes empty.
<img src="https://user-images.githubusercontent.com/71928146/139433874-f8f67e45-1e48-4f3d-b8f5-d353d094fa4a.png" width="1000"  />

* Now compare 1 with 4. 1<4 so move 4 to index number 1 and also we have checked last element of sorted array i.e we have reached to the 0th index so now put 1 from temp and index number 0 and now our sorted array becomes of size 4 i.e from index number 0 to 3.
<img src="https://user-images.githubusercontent.com/71928146/139434085-75c73a17-c91a-4bda-ac98-468654b993bb.png" width="1000"  />

* Now same procedure will be there for element 6 which is on index number 4 and at last we will have our sorted array only.
<img src="https://user-images.githubusercontent.com/71928146/139434306-85492bf1-7391-4d51-bb5c-af85ba5d0e56.png" width="1000"  />

# Program/Code in cpp
~~~cpp
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

Enter size of your array:- 5

Enter elements in your array:- 5 4 10 1 6

Your sorted array is:- 1 4 5 6 10

# Time Complexity
   ### Best Case
   O(n)
   
   eg:- When the array is already sorted (in ascending order)
   ### Average Case
   O(n^2)
   ### Worst Case
   O(n^2)
   
   eg:- When the array is reversly sorted (in descending order)
  
# Space Complexity
O(1)

# Advantages
1) The main advantage of the insertion sort is its simplicity. 
2) It also exhibits a good performance when dealing with a small list.
3) The insertion sort is an in-place sorting algorithm so the space requirement is minimal.

# Disadvantages
1) In this n-squared steps required for every n element to be sorted, the insertion sort does not deal well with a huge list. 
2) Therefore, the insertion sort is particularly useful only when sorting a list of few items.
