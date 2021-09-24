What is List ?
List is the container to store the homogeneous data ie.(data of the same type). 
It allocates memory based on a non-contiguous scheme.
By using the C++ STL list, we don’t have to worry about the implementation as it is pre implemented in the STL library, 
which becomes quite easy to use for c++ programmers. List containers are implemented as doubly-linked lists which means 
we can iterate in both the direction forward or backward ie. Lists are open from both sides.

Syntax to declare list:
```list<int> mylist```
It tell the compiler to declare variable mylist of type std:list.

Lets take an example list :
list<int> mylist = {1, 5, 2, 8, 3}; 
Through this example we will understand the implementation of the below functions for list.

Basic Functions of list:
Each of these functions/methods take O(1) or constant time.

1. begin(): Return iterator to beginning of the list.
2. end(): Return iterator to end of the list.
3. empty(): Checks whether the list is empty , and return bool value true or false.
   Eg: ```mylist.empty()``` returns false.
4. size(): Return the number of elements in the list.
   Eg: ```mylist.size()``` returns 5
5. front(): Returns the first element of the list.
   Eg: ```mylist.front()``` returns 1
6. back(): Return the last element of the list. 
   Eg: ```mylist.back()``` returns 3
7. push_front(): Insert element at the beginning of the list. 
   Eg: ```mylist.push_front(4)``` adds 4 at the beginning of the list.
8. push_back(): Insert element at the end of the list. 
   Eg: ```mylist.push_back(6)``` adds 6 at the end of the list.
9. pop_front(): Delete element at the beginning of the list. 
   Eg: ```mylist.pop_front()``` deletes 1 from the list.
10.pop_back(): Delete element at the end of the list.
   Eg: ```mylist.pop_back()``` deletes 3 from the list.
11.insert(): Insert element at the specified position. 
   Eg: ```mylist.insert(ptr,1)``` inserts 1 at position specified by ptr pointer.
12.erase(): Delete element from specified position.
   Eg: ```mylist.erase(ptr)``` delete element specified by ptr pointer
13.clear(): Erase all the elements from list.
   Eg: ```mylist.clear()``` deletes all element from the mylist.

Some methods take O(n) time to implement the function :
These are:-
1. splice(): Transfer elements from one list to another. 
   Eg: ```list1.splice(list1.end(),list2)``` transfer elements from list2 and append at list1.
2. remove(): Remove element with specified value. 
   Eg: ```mylist.remove(2)``` removes 2 from the list. 
3. reverse(): Reverse the order of elements in the list. 
   Eg: ```mylist.reverse()``` reverses the list and now content of list is [2,8,5,1].

Applications of Lists:

It saves the time to implement doubly linked list.
It helps in implementing stacks and queues.
It is used to dynamically allocate memory.