# Map in STL


Topics covered:
- [Definition of Map](#definition)
- [Usage of Map](#usage)
    - [Initialization of Map](#initialization-of-a-map)
    - [Declaration of a Map](#declaration-of-a-map)
- [Pre-defined functions](#pre-defined-functions)



### Definition
<p> .Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. Here key values are used to uniquely identify the elements mapped to it. The data type of key value and mapped value can be different. Elements in the map are always in sorted order by their corresponding key and can be accessed directly by their key using bracket operator ([ ]). </p>

### Usage

To use a map datatype in C++, we need to import the **map** header file while importing other header files in the start of the source code.

```
#include <map>
```
This header file recognizes the use of vector in the code and avoids any compile-time error on encountering the keyword **map**.

#### Initialization of a map:
The following is a desired syntax to initialize a map in C++ language.
```
map<data_type,data_type> map_name[size];
```
To initialize a map named "nums" to store 10 (can be of size greater than 10 or lesser also) key values :
```
map<int,int> nums[10];
```
Here, size is completely optional to provide since size is variable. A syntax of the following form is also acceptable:
```
map<data_type,data_type> vector_name;
```

#### Declaration of a map:
 - map<char,int> m;     //creates map m where key is char type and value is int type
m[‘a’]=2;                   //assign 2 to key a

### Pre-Defined functions

# function to begin
begin( ): returns an iterator(explained above) referring to the first element of map.Its time complexity is O(1).
Syntax:
map_name.begin()

# function to insert
insert( ): insert a single element or the range of elements in the map.Its time complexity is O(logN)where N is the number of elements in the map, when only element is inserted and O(1) when position is also given.
Syntax:
map_name.insert({key,element})

# function to find end
end( ): It returns an iterator referring to the theoretical element(doesn’t point to an element) which follows the last element.Its time complexity is O(1).
Syntax:
map_name.end()

# function to count
count( ):It searches the map for the elements mapped by the given key and returns the number of matches.As map stores each element with unique key, then it will return 1 if match if found otherwise return 0.Its time complexity is O(logN) where N is the number of elements in the map.
Syntax:
map_name.count(k) //k is the key

# function to find
find( ): It searches the map for the element with the given key, and returns an iterator to it, if it is present in the map otherwise it returns an iterator to the theoretical element which follows the last element of map.Its time complexity is O(logN) where N is the number of elements in the map.
Syntax:
map_name.find(key)
clear( ): It clears the map, by removing all the elements from the map and leaving it with its size 0.Its time complexity is O(N) where N is the number of elements in the map.
Syntax:
map_name.clear()

# function to check
empty( ): It checks whether the map is empty or not. It doesn’t modify the map.It returns 1 if the map is empty otherwise returns 0.Its time complexity is O(1).
Syntax:
map_name.empty()

# function to erase

erase( ): It removes a single element or the range of elements from the map.
Syntax for erasing a key:
map_name.erase(key)
Syntax for erasing the value from a particular position pos:
map_name.erase(pos)
Syntax for erasing values within a given range [pos1,pos2):
map_name.erase(pos1,pos2)


**Contributor**: [Sujal Gupta](https://github.com/sujal2048)