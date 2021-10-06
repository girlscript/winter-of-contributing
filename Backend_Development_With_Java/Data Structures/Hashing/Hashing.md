# HASHING IN CPP:
## HASH FUNCTION, HASH TABLES AND COLLITION PRINCIPLES:

`What is Hash Function?`

Hash Function is a special type of function which is used to generate an <b>unique key</b> for a particular value. Say for example, the unique key of the value 6785432 is 2 i.e the last digit of the value is its key. In the same way, for the number 678 the key is 8. For value of any length the key will be of a fixed size.

`What is hash table?`

Hash Table is used to store the information with their unique values. If we have to store the name and pan number of all residents of Mumbai, then the unique pan number will serve as the key whereas the names will serve as its corresponding values.

`Collision:`

This is a condition when 2 values have the same key i.e the keys cease to be unique. This ambiguous condition is avoided using various methods.

Say for example, the unique key of the value 6785432 is 2 i.e the last digit of the value is its key. In the same way, for the number 678 the key is 8. For value of any length the key will be of a fixed size. Now, 228 will also have the same key as that of 678. This ambiguous condition is called collision.

Double Hashing can prevent collision. There are several such methods.

## UNORDERED SETS:

They are used to store unique elements.
Elements are stored in any order.
They use the principles of a Hash Table.
Let us now look at the syntax of an unordered set:

        unordered_set <int> s;

Let us now look at a self explainatory program using unordered set:
```cpp
# include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set <int> s;
    s.insert(4);
    s.insert(8);
    s.insert(2);
    s.insert(9);
    s.insert(8); //repeated element
    s.insert(1);
    s.insert(2); //repeated element

    for(auto i:s)
    {
        cout<<i<<" ";
    }
    //We can see that the output is in random order and all elements are unique.
    cout<<endl;
    cout<<"size= "<<s.size()<<endl; // prints the size of the unordered set

    s.erase(9); // This erases a particular element
    for(auto i:s)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<"size= "<<s.size()<<endl; // prints the size after element is deleted

    if(s.find(2)!=s.end()) // checks whether an element is present or not
    cout<<"Present"<<endl;
    else
    cout<<"Not Present"<<endl;

    s.clear(); // removes all elements from the set and hence its size will become 0.
    cout<<endl;
    cout<<"size= "<<s.size();
}

/*NOTE:
Unordered set uses the principles of Hash table.
All operations are performed in O(1) or O(n) time complexity.*/
```
## UNORDERED MAPS:

They are used to store key-value pairs.
Elements are stored in any order.
They use the principles of hash table.
Here is the syntax for an unordered map,

      unordered_map <int, int> m;
Let us now look at an example of unordered map:

```cpp
/*implementation of map with the help of a program
Write a program to print the frequency of each digit in an array.*/
# include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map <int, int> m;
    int arr[10]={1, 5, 6, 6, 8, 9, 6, 7, 1, 5};

    for(int i=0;i<10;i++)
        m[arr[i]]++;

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}
```
We now, can clearly understand the implementation of unordered maps and sets.

<h3>Here is an explanation of the code,</h3>
<hr>
[Video on Hashing by elixir14082002](https://drive.google.com/file/d/1AT8uLDtcFEc1wnQ4lkFKuAdx3cDUT4lI/view?usp=sharing)
