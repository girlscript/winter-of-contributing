# Count Sort

- Counting sort is a sorting technique based on keys between a specific range. It works by counting the number of objects having distinct key values (kind of hashing). Then doing some arithmetic to calculate the position of each object in the output sequence.

## Algorithm :-

- Input: Unsorted array A[] of n elements
- Output: Sorted arrayB[]
- Step 1: Consider an input array A having n elements in the range of 0 to k, where n and k are positive integer numbers. These n elements have to be sorted in ascending order using the counting sort technique. Also note that A[] can have distinct or duplicate elements

- Step 2: The count/frequency of each distinct element in A is computed and stored in another array, say count, of size k+1. Let u be an element in A such that its frequency is stored at count[u].

- Step 3: Modify the count array such that each element at each index 
  stores the sum of previous counts. 

- Step 4: The updated count array gives the index of each element of array A in the sorted sequence. Assume that the sorted sequence is stored in an output array, say B, of size n.

- Step 4: The updated count array gives the index of each element of array A in the sorted sequence. Assume that the sorted sequence is stored in an output array, say B, of size n.

- Step 5: Add each element from input array A to B as follows:
 
    Set i=0 and t = A[i]
Add t to B[v] such that v = (count[t]-1).
Decrement count[t] by 1
Increment i by 1
Repeat steps (a) to (d) till i = n-1

- Step 6: Display B since this is the sorted array


## Code :-
```
#include<iostream>
using namespace std;

int k=0; 	// for storing the maximum element of input array

/* Method to sort the array */
void sort_func(int A[],int B[],int n)    
{
	int count[k+1],t;
	for(int i=0;i<=k;i++)
	{
		//Initialize array count
		count[i] = 0;
	}
	for(int i=0;i<n;i++)
	{
	    // count the occurrence of elements u of A 
	    // & increment count[u] where u=A[i]
		t = A[i];
		count[t]++;			
	}
	for(int i=1;i<=k;i++)
	{
	    // Updating elements of count array 
		count[i] = count[i]+count[i-1];            
	}
	for(int i=0;i<n;i++)
	{
		// Add elements of array A to array B
		t = A[i];
		B[count[t]] = t;          
	    // Decrement the count value by 1
		count[t]=count[t]-1;		
	}
}
int main()
{
	int n;
	cout<<"Enter the size of the array :";
	cin>>n;
	
	// A is the input array and will store elements entered by the user
	// B is the output array having the sorted elements	
	int A[n],B[n]; 
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++)        
	{
		cin>>A[i];
		if(A[i]>k)
		{
			// k will have the maximum element of A[]
			k = A[i];              
		}
	}
	
	sort_func(A,B,n);        
	
	// Printing the elements of array B
	for(int i=1;i<=n;i++)       
	{
		cout<<B[i]<<" ";
	}
	
	cout<<"\n";
	return 0;
}
```

## Output :-
```
Enter the size of the array :10
Enter the array elements:1 3 2 8 5 1 5 1 2 7
1 1 1 2 2 3 5 5 7 8
```

## Time Complexity :-
- Best Case	- O(n + k)
- Average Case  -	O(n + k)
- Worst Case  -  O(n + k)

## Space Complexity :-
Space Complexity - O(max)

## References :-
- https://www.javatpoint.com/counting-sort
- https://www.geeksforgeeks.org/counting-sort/
