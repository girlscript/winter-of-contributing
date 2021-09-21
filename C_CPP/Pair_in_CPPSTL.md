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