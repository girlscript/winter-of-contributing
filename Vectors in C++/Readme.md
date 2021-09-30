
# Vectors in C/C++

Vector is a dynamic array which can be resized according to the insertion or deletion of the element. The storage of the vectors is automatically managed by the containers.

Vector elements are placed in contagious locations so that they can be accesed or traversed by iterators.


## Iterators

Certain functions associated with the vector are:

1) begin() – Returns an iterator pointing to the first element in the vector

2) end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector

3) rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element

4) rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

5) cbegin() – Returns a constant iterator pointing to the first element in the vector.

6) cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.

7) crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element

8) crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

  


```bash
  // C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>
  
using namespace std;
  
int main()
{
    vector<int> v;
  
    for (int i = 1; i <= 5; i++)
        v.push_back(i);
  
    cout << "Output of begin and end: ";
    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
  
    cout << "\nOutput of cbegin and cend: ";
    for (auto i = v.cbegin(); i != v.cend(); ++i)
        cout << *i << " ";
  
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = v.rbegin(); ir != v.rend(); ++ir)
        cout << *ir << " ";
  
    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = v.crbegin(); ir != v.crend(); ++ir)
        cout << *ir << " ";
  
    return 0;
}
```

## Output:
```bash
Output of begin and end: 1 2 3 4 5 
Output of cbegin and cend: 1 2 3 4 5 
Output of rbegin and rend: 5 4 3 2 1 
Output of crbegin and crend : 5 4 3 2 1
```

## Capacity

1) size() – Returns the number of elements in the vector.
2) max_size() – Returns the maximum number of elements that the vector can hold.
3) capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
4) resize(n) – Resizes the container so that it contains ‘n’ elements.

5) empty() – Returns whether the container is empty.

6) shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.

7) reserve() – Requests that the vector capacity be at least enough to contain n elements.

```bash
// C++ program to illustrate the
// capacity function in vector
#include <iostream>
#include <vector>
  
using namespace std;
  
int main()
{
    vector<int> v;
  
    for (int i = 1; i <= 5; i++)
        v.push_back(i);
  
    cout << "Size : " << v.size();
    cout << "\nCapacity : " << v.capacity();
    cout << "\nMax_Size : " << v.max_size();
  
    // resizes the vector size to 4
    v.resize(4);
  
    // prints the vector size after resize()
    cout << "\nSize : " << v.size();
  
    // checks if the vector is empty or not
    if (v.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";
  
    // Shrinks the vector
    v.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
  
    return 0;
}
```

## Output:

```bash
Size : 5
Capacity : 8
Max_Size : 4611686018427387903
Size : 4
Vector is not empty
Vector elements are: 1 2 3 4
```

## Element access:

1) reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
2) at(g) – Returns a reference to the element at position ‘g’ in the vector
3) front() – Returns a reference to the first element in the vector
4) back() – Returns a reference to the last element in the vector
5) data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
  
```bash
// C++ program to illustrate the
// element accesser in vector
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    vector<int> v;
  
    for (int i = 1; i <= 10; i++)
        v.push_back(i * 10);
  
    cout << "\nReference operator [g] : v[2] = " << v[2];
  
    cout << "\nat : v.at(4) = " << v.at(4);
  
    cout << "\nfront() : v.front() = " << v.front();
  
    cout << "\nback() : v.back() = " << v.back();
  
    // pointer to the first element
    int* pos = v.data();
  
    cout << "\nThe first element is " << *pos;
    return 0;
}
```

## Output:

```bash
Reference operator [g] : v[2] = 30
at : v.at(4) = 50
front() : v.front() = 10
back() : v.back() = 100
The first element is 10
```

## Modifiers:

1) assign() – It assigns new value to the vector elements by replacing old ones
2) push_back() – It push the elements into a vector from the back
3) pop_back() – It is used to pop or remove elements from a vector from the back.
4) insert() – It inserts new elements before the element at the specified position
5) erase() – It is used to remove elements from a container from the specified position or range.
6) swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
7) clear() – It is used to remove all the elements of the vector container
8) emplace() – It extends the container by inserting new element at position
9) emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector

```bash

// C++ program to illustrate the
// Modifiers in vector
#include <bits/stdc++.h>
#include <vector>
using namespace std;
  
int main()
{
    // Assign vector
    vector<int> v;
  
    // fill the array with 10 five times
    v.assign(5, 10);
  
    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
  
    // inserts 15 to the last position
    v.push_back(15);
    int n = v.size();
    cout << "\nThe last element is: " << v[n - 1];
  
    // removes last element
    v.pop_back();
  
    // prints the vector
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
  
    // inserts 5 at the beginning
    v.insert(v.begin(), 5);
  
    cout << "\nThe first element is: " << v[0];
  
    // removes the first element
    v.erase(v.begin());
  
    cout << "\nThe first element is: " << v[0];
  
    // inserts at the beginning
    v.emplace(v.begin(), 5);
    cout << "\nThe first element is: " << v[0];
  
    // Inserts 20 at the end
    v.emplace_back(20);
    n = v.size();
    cout << "\nThe last element is: " << v[n - 1];
  
    // erases the vector
    v.clear();
    cout << "\nVector size after erase(): " << v.size();
  
    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
  
    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
  
    // Swaps v1 and v2
    v1.swap(v2);
  
    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
}
```

## Output:

```bash
The vector elements are: 10 10 10 10 10 
The last element is: 15
The vector elements are: 10 10 10 10 10 
The first element is: 5
The first element is: 10
The first element is: 5
The last element is: 20
Vector size after erase(): 0

Vector 1: 1 2 
Vector 2: 3 4 
After Swap 
Vector 1: 3 4 
Vector 2: 1 2
```