## Binary Insertion Sort

Binary Insertion Sort is an special kind of sort in which we find pick the element one by one and find its correct position thrugh **BINARY SEARCH** else te rest alorithm is same as **INSERTION SORT**

**BINARY SEARCH**
Binary Search ia an searching technique that works in O(nlogn) time. It finds the index of the element to be searched.It seaces in search space which reduces as the algorithm proceed.
The important Condition to note that is - Array must be **SORTED**, otherwise it won't work.

Code-

````
#include<iostream>

using namespace std;

int main()
{
	int n;
	int a[10];
	cout<<"\n enter size";
	cin>>n;

    <!-- item is the element to be searched -->
    <!-- beg is starting point of search space -->
    <!-- end is endin point of search space -->
    <!-- loc for the location of item if it is present in the array -->
	
    int item,beg=0,end=n-1,mid,loc=0;
	cout<<"\n enter array elements :";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n array elements : ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n enter element to be searched : ";
	cin>>item;
	mid=(beg+end)/2;
	while((beg<=end)&&(a[mid]!=item))
	{
		if(a[mid]<item)
		beg=mid+1;
		else
		end=mid-1;
		mid=(beg+end)/2;
		
	}
	if(a[mid]==item)
	{
		loc=mid;
		cout<<"\n number found at : "<<loc;
	}
		
	else if(loc==0)
	cout<<"\n not found";
	
	return 0;
	
}

````
Output-

 enter size5

 enter array elements :1 2 3 4 5

 array elements : 1 2 3 4 5     
 enter element to be searched : 4

 number found at : 3


**INSERTION SORT**
Insertion Sort is a sorting algorithm which works in O(n^2) time. It divides the array into sorted and unsorted part. Initially first element is taken as sorted part gradually it increases. We take an element from unsorted part and check for its correct position in sorted part of the array.

Example Code-
````
#include <iostream>
using namespace std;
int main()
{
    int key, j, n;
    cout << "\n enter the size : ";
    cin >> n;
    int a[n];
    cout << "\n enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "\n elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    <!-- starting from index 1 i.e. 2nd element -->
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        
        <!-- checking for its correct position -->
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    cout << "\n sorted array are : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

````
Output-
 enter the size : 7

 enter the array elements : 7 6 5 4 3 2 1

 elements are : 7 6 5 4 3 2 1
 sorted array are : 1 2 3 4 5 6 7


So Now You have understood about both insertion sort and binary search, Let's get into understanding binary insertion sort.
It also divides the array into sorted and unsorted part. Initially first element is taken as sorted part gradually it increases. We take an element from unsorted part and check for its correct position in sorted part of the array, but difference is that we use binary search to find the position of the element. After that we shift the elements forward.

Example Code-

````
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

````

Output-

 Enter size of an array : 9

 Enter array elements :47 89 23 14 67 89 56 34 12 

 Sorted array is : 12 34 14 56 23 67 89 89 47


**Time Complexity of Algorithm**
The algorithm still has a running worst-case running time of O(n^2) because of the series of swaps required for each insertion.
As we require 2 nested loops.s

