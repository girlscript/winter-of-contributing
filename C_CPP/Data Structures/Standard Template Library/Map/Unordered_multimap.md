# Unordered multimap in STL

### Definition
<p> Unordered multimaps are associative containers that store elements formed by the combination of a key value and 
a mapped value, much like unordered map containers, but allowing different elements to have equivalent keys.
In an unordered_multimap, the key value is generally used to uniquely identify the element as the name suggest,
while the mapped value is an object with the content associated to this key. Types of key and mapped value may 
differ.</p>

Internally, the elements in the unordered_multimap are not sorted in any particular order with respect to either
their key or mapped values,

### Syntax to create unordered multimap:

 unordered_multimap<data_type,data_type> map_name;

### Member Function


# funtion to return begin iterator
1.begin( ): It returns an iterator(explained above) referring to the first element of unordered multimap.
Its time complexity is O(1).
Syntax:
map_name.begin()

# funtion to insert
2.insert( ):It inserts a single element or the range of elements in the unordered multmap.Its time complexity is
 O(N) where N is the number of elements inserted.
Syntax:
map_name.insert({key,element})

# function to return end iterator
3.end( ): It returns an iterator referring to the theoretical element(doesn’t point to an element) which follows
 the last element.Its time complexity is O(1).
Syntax:
map_name.end()

# function to count mapped value of a key
4.count( ):It searches the unordered multmap for the elements mapped by the given key and returns the number of 
matches..Its time complexity is O(N) where N is the number of elements counted.
Syntax:
map_name.count(k) //k is the key

# function to find map value

5.find( ): It searches the unordered multmap for the element with the given key, and returns an iterator to it, 
if it is present in the unordered multimap otherwise it returns an iterator to the theoretical element which 
follows the last element of the unordered multmap.Its time complexity is O(1) in average case and O(N) in worst 
case where N number of elements in the unordered multimap.
Syntax:
map_name.find(key)

# function to clear

6.clear( ): It clears the unordered multimap, by removing all the elements from the unordered multmap and 
leaving it with its size 0.Its time complexity is O(N) where N is the number of elements in the unordered 
multimap.
Syntax:
map_name.clear()

# function to check empty

7.empty( ): It checks whether the unordered multimap is empty or not. It doesn’t modify the unordered multimap.
It returns 1 if the unordered multimap is empty otherwise it returns 0.Its time complexity is O(1).
Syntax:
map_name.empty()

# funcion to erase

8.erase( ): It removes a single element or the range of elements from the unordered multimap.
Syntax for erasing a key:
map_name.erase(key)
9.Syntax for erasing the value from a particular position pos:
map_name.erase(pos)
10.Syntax for erasing values within a given range [pos1,pos2):
map_name.erase(pos1,pos

# Implementation:

#include <iostream>
#include <unordered_map>
using namespace std;
 
int main() {
    unordered_multimap<int,int> m;
    
    //inserts values in the unordered multimap
    m.insert({1,10});
    m.insert({2,20});
    m.insert({3,40});
    m.insert({5,90});
    m.insert({4,60});
    
    //printing the elements 
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" : "<<it->second<<"\n";
    }
    
    //gives the size of the unordered multimap
    cout<<"\nSize of the unordered multimap m:"<<m.size()<<"\n";
    
    //inserts values
    m.insert(make_pair(9,30));
    m.insert(make_pair(8,50));
    m.insert(make_pair(7,60));
    m.insert(make_pair(5,100));
    m.insert(make_pair(4,30));
    
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" : "<<it->second<<"\n";
    }
    
    cout<<"\nSize of the unordered multimap m:"<<m.size()<<"\n";
    
    //removing key 7 and 5 from the unordered_multimapmap
    m.erase(7);
    m.erase(5);
 
    cout<<"Elements after removing key 7 and 5:\n"; 
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" : "<<it->second<<"\n";
    }
    
    //gives the number of key 4 present in the unordered multimap
    cout<<"\nGives count of 4:"<<m.count(4)<<"\n";
    
    //checks the presence of key 9
    if(m.find(9)==m.end())
         cout<<"key 9 not present in the unordered multimap."<<"\n";
    else
         cout<<"Key 9 is present."<<"\n";
    
    return 0;
}

# Output:

4 : 60
1 : 10
2 : 20
3 : 40
5 : 90

Size of the unordered multimap m:5
7 : 60
8 : 50
9 : 30
4 : 30
4 : 60
1 : 10
2 : 20
3 : 40
5 : 100
5 : 90

Size of the unordered multimap m:10
Elements after removing key 7 and 5:
8 : 50
9 : 30
4 : 30
4 : 60
1 : 10
2 : 20
3 : 40

Gives count of 4:2
Key 9 is present.

**Contributor**: [Sujal Gupta](https://github.com/sujal2048)