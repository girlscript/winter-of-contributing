### Pair in CPP STL 

<p>The pair container is a simple container defined in (utility) header consisting of two data elements or objects. 

-> The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).
-> Pair is used to combine together two values which may be different in type. Pair provides a way to store two heterogeneous objects as a single unit.
-> Pair can be assigned, copied and compared. The array of objects allocated in a map or hash_map are of type ‘pair’ by default in which all the ‘first’ elements are unique keys associated with their ‘second’ value objects.
-> To access the elements, we use variable name followed by dot operator followed by the keyword first or second.
</p>

<h2>Syntax</h2>
pair (data_type1, data_type2) Pair_name;

<h2> code </h2>
``` 
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
<h2>Output</h2>
100 G