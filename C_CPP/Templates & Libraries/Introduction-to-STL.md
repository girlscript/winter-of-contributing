# Introduction to the Standard Template Library 

The STL contains more types of entities. But there are three entities very important namely,
- Containers
- Algorithms
- Iterators

## Containers

Basically, a container is a way to store data which consists of in-built types like _int_, _float_ or even a _class objects_. The STL makes 7 basic and 
3 derived kinds of containers. You can create your own containers based on the basic kinds. C++ uses so many kinds of containers for efficiency, 
because arrays are slow in many situations.

Containers in STL mainly fall into two main categories:
- Sequence
- Associative

### Sequence Containers

 Sequence containers refers to a group of container class templates from the standard library of the C++ programming language that implements storage of data elements.
 In other words, Sequence containers implements data structures that can be accessed sequentially.
 
 - **Array**: Implements static array.
 - **Deque**: Implements double-ended queue.
 - **Vector**: Implements dynamic array.
 - **Forward List**: Implements singly-linked list.
 - **List**: Implements doubly-linked list.

### Associative Containers

 Associative containers refers to a group of class templates from the standard library of the C++ programming language that implements ordered associative arrays.
 In other words, Associative containers implements sorted data structures that can be accessed quickly.
 
 - **Map**: It is a collection of unique key-valued pairs, sorted by keys.
 - **Set**: It is a collection of unique keys, sorted by keys.
 - **Multiset**: It is a collection of keys, sorted by keys.
 - **Multimap**: It is a collection of key-valued pairs, sorted by keys.

## Algorithms

The Algorithms defines a collection of functions mainly designed to be used for range of elements. They generally act on the containers that provide means for variety of 
operations to the contents of container.

List of STL Algorithms:
- **Search**: Searches for a set of sequence of values in a container and corresponds the same sequence with another container.
- **Sort**: Sorts the values in container in a specified order.
- **Swap**: Exchanges values in a location with values in another.
- **Merge**: Combines 2 sorted ranges of elements.
- **Count**: Counts the number of elements with a specific value.
- **Find**: Searches and returns the first occurence of the specified value.
- **Fill**: Copies a value and fills in the specified location.

## Iterators

Iterators are mostly pointer-like entities used to access data items individually in a container. They are used to move sequentially to each elements which is called 
_iterating_ through the container. They are the major feature which allows generality in STL.

List of Iterator characteristics: 
- **Random access**: This iterator supplies random access of any specified element at an arbitrary position.
- **Forward**: This iterator is used to read and write to a container and provides only forward direction.
- **Bidirectional**: This iterator provides all the features of forward iterator and also we can move backwards. So it provides both forward and back direction.
