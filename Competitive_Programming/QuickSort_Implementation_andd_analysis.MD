## QuickSort and Its Analysis
### Overview
The algorithm was developed by a British computer scientist Tony Hoare in 1959. The name "Quick Sort" comes from the fact that, quick sort is capable of sorting a list of data elements significantly faster (twice or thrice faster) than any of the common sorting algorithms.
\
QuickSort is the sorting algorithm, based upon the _divide and conquer_ approach. In this approach the bigger problem is divided into smaller solvable problems that is further solved to give the desired results.
It be implemented by selecting a _pivot_ element in the sequence and then arranging the elements greater than it to the left or to the right and smaller to the left or right of the pivot element respectively.
\
**The pivot element can be choosen in many ways.Some of them are:**
\
1.Selecting the rightmost element as the pivot element.
\
2.Selecting the leftmost element as the pivot element.
\
3.Selecting any random element from the sequence.
\
\
![example](https://www.geeksforgeeks.org/wp-content/uploads/gq/2014/01/QuickSort2.png)
###### image source: GeeksforGeeks
### Procedure.
1. Select the pivot element.
2. Divide the array such that the elements below are lesser and above are greater than the pivot element.
3. Repeat the above procedure for thwe lower and the higher partition along pivot.
4. Repeat the process. 
### PseudoCode.
```
partition (arr[], low, high)
{
    pivot = arr[high];  
    i = (low - 1);
    for (j = low; j <= high-1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;   
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
```
### JAVA Code:
```
class QuickSort 
{ 
	int partition(int arr[], int low, int high) 
	{ 
		int pivot = arr[high]; 
		int i = (low-1);
		for (int j=low; j<high; j++) 
		{ 
			if (arr[j] <= pivot) 
			{ 
				i++; 
				int temp = arr[i]; 
				arr[i] = arr[j]; 
				arr[j] = temp; 
			} 
		} 
		int temp = arr[i+1]; 
		arr[i+1] = arr[high]; 
		arr[high] = temp; 

		return i+1; 
	} 
	void sort(int arr[], int low, int high) 
	{ 
		if (low < high) 
		{ 
			int pi = partition(arr, low, high); 

			sort(arr, low, pi-1); 
			sort(arr, pi+1, high); 
		} 
	} 
	static void printArray(int arr[]) 
	{ 
		int n = arr.length; 
		for (int i=0; i<n; i++) 
			System.out.print(arr[i]+" "); 
		System.out.println(); 
	} 
	public static void main(String args[]) 
	{ 
		int arr[] = {10, 7, 8, 9, 1, 5}; 
		int n = arr.length; 

		QuickSort ob = new QuickSort(); 
		ob.sort(arr, 0, n-1); 

		System.out.println("Sorted array: "); 
		printArray(arr); 
	} 
} 
```
### Complexity analysis.
1. **Worst case scenario**: This happens when we encounter the most unbalanced partitions possible, then the original call takes n time, the recursive call on n-1 elements will take (n-1) time, the recursive call on (n-2) elements will take (n-2) time, and so on. The worst case time complexity of Quick Sort would be O(n2).
2. **Best case scenario:** The best case scenario occurs when the partitions are as evenly balanced as possible, i.e their sizes on either side of the pivot element are either are equal or are have size difference of 1 of each other.

Case 1: The case when sizes of sublist on either side of pivot becomes equal occurs when the subarray has an odd number of elements and the pivot is right in the middle after partitioning. Each partition will have (n-1)/2 elements.
\
Case 2: The size difference of 1 between the two sublists on either side of pivot happens if the subarray has an even number, n, of elements. One partition will have n/2 elements with the other having (n/2)-1.
\
The best-case complexity of the quick sort algorithm is O(n logn).
### Space Complexity
The space complexity is calculated based on the space used in the recursion stack. The **worstcase** space used will be **O(n)** . The **average case** space used will be of the order **O(log n)**. The worst case space complexity becomes O(n), when the algorithm encounters its worst case where for getting a sorted list, we need to make n recursive calls.




