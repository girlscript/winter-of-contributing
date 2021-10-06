**Sort functions in C++ STL(Standard Template Library)**

A Sorting is used to rearrange a given array or list elements in ascending or decending order.The comparison operator is used to decide the new order of element in the respective data structure

IN C++ STL there is a builtin function by the name of  **sort()**

It generally takes two parameters :- 

* First one being the point of the array or vector from where the sorting needs to begin.
* The second parameter being the length up to which we want the array or vector to get sorted.

*By default this function sort the array or vector in ascending order.*

## **Example of simple sort():-**
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + n);
	cout << "\nArray after sorting in default way : \n";
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	return 0;
}
```

**Output**
Array after sorting in default way: 
0 1 2 3 4 5 6 7 8 9
**For Sort the array in decending order**
sort() takes a third parameter which is used to specify the order in which elements are to be sorted. We can pass the “greater()” function to sort in descending order.
## **Example of sort function in decending order:-**

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + n, greater<int>());
	cout << "Array after sorting : \n";
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	return 0;
}
```
