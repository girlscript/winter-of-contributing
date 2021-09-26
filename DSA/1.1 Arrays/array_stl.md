# Array Implementation using STL in C++


<hr>
Arrays can also be implemented using some built-in classes available in the C++ Standard Template Library.

Some of the most commonly used classes for implementing arrays in STL are:
- Array Container
- Vectors

Let's look at each of these classes in details.

## Array Container
   Array Container in STL provides us the implementation of static Array. It provides some member functions and non-member functions which gives it an edge over the array defined classically like, int array_name[array_size].
   
   SYNTAX of Array Container:
   array<object_type, array_size> array_name;

### Member Functions of Array Template
#### at function
 This method returns value in the array at the given index. If the given index is greater than the array size, out_of_range exception is thrown.
#### [ ] Operator 
 The use of operator [ ] is it returns the value at the given position in the array. 
#### front() function
This method returns the first element in the array.
#### back() function
This method returns the last element in the array. 
#### fill() function
This method assigns the given value to every element of the array.
#### swap function
This method swaps the content of two arrays of same type and same size.
#### empty function
This boolean method can be used to check whether the array is empty or not.
#### size function
This method returns the number of element present in the array.
#### max_size function
This method returns the maximum size of the array.
#### begin function
This method returns the iterator pointing to the first element of the array.
#### end function
This method returns an iterator pointing to an element next to the last element in the array.

Lets see Implementation of some of the above listed functions in C++.

### Implementation(C++):

```c++
#include<iostream.h> // header
using namespace std;
int main(){
 array<int,10> array1 = {1,2,3,4,5,6,7,8,9};
   
    cout << array1.at(2);     // prints 3
    cout << array1.at(4);     // prints 5
    cout << array1[5];        // prints 6
    array1.fill(1);            // It will fill the array1 elements with value one.
    cout<<"array1 is :";
    for(int i=0; i < 10; i++) {
       cout << array1[i] <<" ";
    }
    cout<<endl;
    array<int,8> a = {11,12,13,14,15,16,17,18};
    array<int,8> b = {1,2,3,4,5,6,7,8,};
    a.swap(b)  // swaps array a and b
    
    cout << "a is : ";
    for(int i=0; i < 8; i++) {
       cout << a[i] <<" ";
    }
    cout << endl;
    cout << "b is : ";
    for(int i=0; i < 8; i++) {
         cout << a[i] <<" ";
    }
    return 0;
}
```

## Vectors
   Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container.

   To use the Vector class, include the below header file in your program:
   #include< vector >

   SYNTAX of Vector:
   vector< Type_of_element > vector_name;

### Member Functions of Vector :
#### begin() 
Returns an iterator pointing to the first element in the vector.
#### end() 
Returns an iterator pointing to the theoretical element that follows the last element in the vector.
#### size() 
Returns the number of elements in the vector.
#### capacity() 
Returns the size of the storage space currently allocated to the vector expressed as number of elements.
#### empty() 
Returns whether the container is empty.
#### push_back() 
It push the elements into a vector from the back.
#### pop_back() 
It is used to pop or remove elements from a vector from the back.
#### insert() 
It inserts new elements before the element at the specified position.
#### erase() 
It is used to remove elements from a container from the specified position or range.
#### swap() 
It is used to swap the contents of one vector with another vector of same type and size.
#### clear() 
It is used to remove all the elements of the vector container.
#### emplace() 
It extends the container by inserting new element at position.
#### emplace_back() 
It is used to insert a new element into the vector container, the new element is added to the end of the vector.

Lets see Implementation of some of the above listed functions in C++.

### Implementation(C++):

```c++
#include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
    vector<int> v; 
    
    // Push elements 
    for (int i = 1; i <= 10; i++) 
        v.push_back(i); 

    cout << "Size : " << v.size(); 
    cout<<endl;
    
    // checks if the vector is empty or not 
    if (v.empty() == false) 
        cout << "Vector is not empty"; 
    else
        cout << "Vector is empty"; 

    cout<<endl;

    cout << "Output of begin and end: "; 
    for (auto i = v.begin(); i != v.end(); ++i) 
        cout << *i << " "; 

    cout<<endl;   
    // inserts at the beginning 
    v.emplace(v.begin(), 5); 
    cout << "The first element is: " << v[0]; 

    cout<<endl;
  
    // Inserts 20 at the end 
    v.emplace_back(20); 
    int n = v.size(); 
    cout << "The last element is: " << v[n - 1]; 

    cout<<endl;
  
    // erases the vector 
    v.clear(); 
    cout << "Vector size after erase(): " << v.size();    
    
    return 0; 
} 
```
