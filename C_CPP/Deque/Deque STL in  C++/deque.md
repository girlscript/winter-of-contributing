# Deque in C++
<p> Let's have a look on the definition : </p>
<p> Double ended queues (Deques) are sequence containers with the feature of expansion and contraction on both the ends. They are similar to vectors, but are more efficient in case of insertion and deletion of elements. </p>
<p> Double Ended Queues are basically an implementation of the data structure double ended queue. </p>

<p> A queue data structure allows insertion only at the end and deletion from the front. </p>

<p> Speciality of Deque : Double ended queues are a special case of queues where insertion and deletion operations are possible at both the ends. </p>


## Sample program on Deque in C++ : 

```
#include <iostream>
#include <deque>

using namespace std;

void printgwoc(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
    {
        cout << '\t' << *it;
    }
    cout << endl;
}

// driver code
int main()
{
    deque<int> gwoc;
    gwoc.push_back(50);   // adding element from back
    gwoc.push_front(60);   // adding element from front
    gwoc.push_back(90);   // adding element from back
    gwoc.push_front(85);   // adding element from front
    gwoc.push_back(40);   // adding element from back
    gwoc.push_front(25);   // adding element from front
    
    cout << "The deque gwoc is : ";
    printgwoc(gwoc);   // function call

    cout << "\ngwoc.size() : " << gwoc.size();   // prints actual size of deque
    cout << "\ngwoc.max_size() : " << gwoc.max_size();   // prints maximum size of deque

    cout << "\ngwoc.at(3) : " << gwoc.at(3);   // prints an element at index-3
    cout << "\ngwoc.front() : " << gwoc.front();   // prints first element
    cout << "\ngwoc.back() : " << gwoc.back();   // prints last element

    cout << "\ngwoc.pop_front() : ";
    gwoc.pop_front();   // deletes an element from the front
    printgwoc(gwoc);   // function call

    cout << "\ngwoc.pop_back() : ";
    gwoc.pop_back();   // deletes an element from the back
    printgwoc(gwoc);   // function call

    return 0;
}

```

### Output
```
The deque gwoc is :     25      85      60      50      90      40

gwoc.size() : 6
gwoc.max_size() : 1073741823
gwoc.at(3) : 50
gwoc.front() : 25
gwoc.back() : 40

gwoc.pop_front() :      85      60      50      90      40

gwoc.pop_back() :       85      60      50      90
```
## Basic Functions in Deque
1. push_back() : Add element from the back in Deque.
2. push_front() : Add element from the front in Deque.
3. pop_back() : Remove element from the back in Deque.
4. pop_front() : Remove element from the front in Deque.
5. front() : Prints the first element.
6. back() : Prints the last element.
7. empty() : Checks if the deque container is empty or not.
8. size() : Returns the size of the deque.

## Advanced Functions in Deque
1. rbegin() : Returns a reverse iterator which points to the last element of the deque.
2. rend() : Returns a reverse iterator which points to the position before the beginning of the deque.
3. clear() : Remove all the elements of the deque.
4. remove() : Remove elements from the specified position.
5. swap() : Swap the contents of one deque with another deque of same type and size.
6. emplace_back() : Add element from the back in Deque.
7. emplace_front() : Add element from the front in Deque. 
8. resize() : Changes the size of the deque
