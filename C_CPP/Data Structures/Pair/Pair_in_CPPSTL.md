 <h1 style="color:rgb(191,255,0)">Pair in CPP STL</h1>


<p>

The `pair container` is a simple container defined in (utility) header consisting of `two data elements` or objects. 

-> The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).<br>
-> Pair is used to combine together two values which may be different in type. Pair provides a way to store `two heterogeneous objects` as a single unit.<br>
-> Pair can be assigned, copied and compared. The array of objects allocated in a map or <b>hash_map</b> are of type `pair` by default in which all the <b>first</b> elements are unique keys associated with their <b>second</b> value objects.<br>
-> To access the elements, we use variable name followed by dot operator followed by the keyword first or second.

</p>

<h2 style="color:rgb(0, 255, 128)">Syntax</h2>

<br>
pair (data_type1, data_type2) Pair_name;
<br><br>

<h2 style="color:rgb(0, 255, 128)">Code</h2>



```cpp
// CPP program to illustrate pair STL
#include <iostream>
#include <utility>
using namespace std;
int main()
{
	pair<int, char> PAIR1;

	PAIR1.first = 100;
	PAIR1.second = 'G';

	cout << PAIR1.first << " ";
	cout << PAIR1.second << endl;

	return 0;
}
```

<h2 style="color:rgb(0, 255, 128)">Output</h2>

100 G

```cpp
// C++ program to demonstrate vector of pairs
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector< pair <int,int> > vect;
	int arr[] = {10, 20, 5, 40 };
	int arr1[] = {30, 60, 20, 50};
	int n = sizeof(arr)/sizeof(arr[0]);
	for (int i=0; i<n; i++)
		vect.push_back( make_pair(arr[i],arr1[i]) );
	for (int i=0; i<n; i++)
	{
		cout << vect[i].first << " "
			<< vect[i].second << endl;
	}

	return 0;
}
```

<h2 style="color:rgb(0, 255, 128)">Output</h2>
10 30<br>
20 60<br>
5 20<br>
40 50
<br>
<br>
<p> <b>You can also sort the array using pairs on the basis of elements.You can also sort the elements in descending as well as ascending order. In this document I am going to detail about sorting on the basis of first and second element in ascending order.</b>
</p>
<h2>Case 1 : Sorting the vector elements on the basis of first element of pairs in ascending order.
</h2>
<h4> This type of sorting can be achieved using simple “ sort() ” function. By default the sort function sorts the vector elements on basis of first element of pairs.</h4>

```cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector< pair <int,int> > vect;
	int arr[] = {10, 20, 5, 40 };
	int arr1[] = {30, 60, 20, 50};
	int n = sizeof(arr)/sizeof(arr[0]);
	for (int i=0; i<n; i++)
		vect.push_back( make_pair(arr[i],arr1[i]) );
	cout << "The vector before sort operation is:\n" ;
	for (int i=0; i<n; i++)
	{
		cout << vect[i].first << " "
		cout << vect[i].second << endl;
	}
	sort(vect.begin(), vect.end());

	cout << "The vector after sort operation is:\n" ;
	for (int i=0; i<n; i++)
	{
		cout << vect[i].first << " "
			<< vect[i].second << endl;
	}
return 0;
}
```
<h2 style="color:rgb(0, 255, 128)">Output</h2>
The vector before applying sort operation is:<br>
10 30<br>
20 60<br>
5 20<br>
40 50<br>
The vector after applying sort operation is:<br>
5 20<br>
10 30<br>
20 60<br>
40 50<br>
<h2>Case 2 : Sorting the vector elements on the basis of second element of pairs in ascending order.
</h2>
<h4>There are instances when we require to sort the elements of vector on the basis of second elements of pair. For that, we modify the sort() function and we pass a third argument, a call to an user defined explicit function in the sort() function.
</h4>

```cpp

#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,
			const pair<int,int> &b)
{
	return (a.second < b.second);
}

int main()
{
	vector< pair <int, int> > vect;
	int arr[] = {10, 20, 5, 40 };
	int arr1[] = {30, 60, 20, 50};
	int n = sizeof(arr)/sizeof(arr[0]);
	for (int i=0; i<n; i++)
		vect.push_back( make_pair(arr[i],arr1[i]) );
	cout << "The vector before sort operation is:\n" ;
	for (int i=0; i<n; i++)
	{
		cout << vect[i].first << " "
			<< vect[i].second << endl;
	}
	sort(vect.begin(), vect.end(), sortbysec);
	cout << "The vector after sort operation is:\n" ;
	for (int i=0; i<n; i++)
	{
		cout << vect[i].first << " "
			<< vect[i].second << endl;
	}
	return 0;
}
```
<h2 style="color:rgb(0, 255, 128)">Output</h2>
The vector before applying sort operation is:<br>
10 30<br>
20 60<br>
5 20M<br>
40 50<br>
The vector after applying sort operation is:<br>
5 20<br>
10 30<br>
40 50<br>
20 60<br>


