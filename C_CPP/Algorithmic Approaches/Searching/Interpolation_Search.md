# Interpolation Search
Interpolation search is also the another type of searching which is improved version of the binary search in this pointer may go to different locations according to the value of the key which is given in order to be searched.

## Some Points
1. Search is likely to be start with end element.
2. Formula used : pos = low + [ (Target-arr[low])*(high-low) / (arr[high]-arr[Low]) ] .\
arr[ ] :-  Array where elements need to be searched .\
Target  :-  Element to be searched .\
low :- Starting index in arr[] .\
high :- Ending index in arr[] .

## Algorithm
1. We calculate the value of **pos** using the formula called probe position formula in a loop.
2. If the element founded then we return the index otherwise we continue the search .
3. If the Target is less than arr[pos] then we apply probe position formula on the left sub-array. Otherwise do the same in the right sub-array.
4. We have to repeat above steps until the size of the array became zero we stop at that moment and return -1. 

### Code :
```cpp
#include<iostream>
using namespace std;

int Interpolation_Search(int arr[], int n, int Target)
{
	int low = 0, high = n - 1;

	// As we know array is sorted so the element present in array must be in range (a[low]<=Target<=a[high]) defined.
	while (low <= high && Target >= arr[low] && Target <= arr[high])
	{
		if (low == high)
		{
			if (arr[low] == Target) { 
            return low;
            }
			return -1;
		}
		// defining the position with taking the consept of uniform distribution.
		int pos = low + (((high - low) /
			(arr[high] - arr[low])) * (Target - arr[low]));

		// When element in array matched with Target element
		if (arr[pos] == Target)
			return pos;

		// If Target is larger,than the element at pos 
		if (arr[pos] < Target)
			low = pos + 1;

		// If Target is smaller, than the element at pos
		else
			high = pos - 1;
	}
    // If element not found in array
	return -1;
}

int main()
{
	int arr[] = {12,14,15,16,17,19,20,34,36,78};
	int n = sizeof(arr)/sizeof(arr[0]);

	int Target = 19; // Element to be searched
	int Target_1 = 19; // Element to be searched
	int index = Interpolation_Search(arr, n, Target);
	int index_1 = Interpolation_Search(arr, n, Target_1);

	if (index != -1)
		cout << "Element Found At index " << index <<" in array";
	else
		cout << "Element not found in array.";
    
	cout<<endl;

    if (index_1 != -1)
		cout << "Element Found At index " << index <<" in array";
	else
		cout << "Element not found in array.";
	return 0;
}
```
Output :
```
Element Found At index 5 in array
Element not found in array.
```
### Complexities
1. **Time Complexity** :- 
- O(log2(log2 n)) Comparisons for the average case (Assuming exponential distribution) .
- log(log(n)) comparisons for average case (if the elements are uniformly distributed)
- O(n) for the worst case .

2. **Space Complexity** :-  O(1) Constant Space Complexity .
