# MAPS in C++ STL

**Definition**: A map in C++ STL is an associative container that stores key-value pairs, which means the map stores a key of some data type and its corresponding values of some data type. 

The syntax for declaring a map is:
```c++
map<data_type_of_key, data_type_of_value>  variable_name;
```
- The data_type_of_key denotes the datatype of the map keys.
- The data_type_of_value denotes the datatype of the values corresponding to the map keys.
- The variable_name is the name of the map.

For example:
```c++
map<string, int> map1;
```
There are some inbuilt functions in STL that can be used to perform operations on maps.
Some of them are:
- begin()- This function returns the iterator to the first item of the map.
- end()- This function point next to the last element of the map.
- insert()- This function inserts a new key-value pair into the map.

### A program to store names and marks using map

```c++
#include<iostream>
#include<map>
#include<string>
using namespace std;
 
int main(){
 
    map<string, int>  marksMap;
    marksMap["Aayam"] = 68;
    marksMap["Neha"] = 57;
    marksMap["Siddhi"] = 89;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;
    marksMap.insert( { {"Ree",67}, {"Akshay", 56} } );
 
    map<string,int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    return 0;
}
```
### Output of the above program

```c++
Aayam 68
Aditya 65
Akshay 56
Neha 57
Ree 67
Sachin 53
Siddhi 89
```
- Maps use Red Black Trees for implementation. 
- We can store data in a sorted order in  Maps. 
- Maps can store only unique keys.
- The search time is O(log n) where n is the number of elements in the map.

## UNORDERED MAPS

We use unordered_map to store data in an unordered way.

The syntax for declaring an unordered_map is:
```c++
unordered_map<data_type_of_key, data_type_of_value>  variable_name;
```
### A program to store integers and strings using unordered_map

```c++
#include<bits/stdc++.h>
using namespace std;

void print( unordered_map<int,string>&m){
cout<<m.size()<<endl;
for(auto &pr:m){
    cout<<pr.first<<" "<<pr.second<<endl;
 }
}
int main(){
    unordered_map<int,string> m;
    m[1]="abc";
    m[2]="cdc";
    m[5]="acd";
    m[6]="a";
    m[5]="cde";

    print(m);
}
```
### Output of the above program
```c++
4
6 a
5 cde
1 abc
2 cdc
```
- Unordered_map uses Hash Tables for implementation.
- The time complexity of insertion and deletion is O(1) in unordered_map.

## MULTI MAPS

Multimaps are the associative containers like map that stores sorted key-value pair,but it can store duplicate keys also.

The syntax for declaring a multimap is:
```c++
multimap<data_type_of_key, data_type_of_value>  variable_name;
```
### A program to store integers and strings using multimap

```c++
#include<bits/stdc++.h>
using namespace std;

int main(){
    multimap<int,string> m={{1,"abc"},{2,"cdc"},{5,"acd"},{6,"a"},{5,"cde"}};
    
    for (multimap< int, string>::iterator it = m.begin(); it != m.end(); ++it)  
    {  
       cout << (*it).first << " " << (*it).second  << endl;  
    }  
}
```
### Output of the above program

```c++
1 abc
2 cdc
5 acd
5 cde
6 a
```
