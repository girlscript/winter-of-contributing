# Vectors Standard Template Library (STL)

Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes there may be a need of extending the array. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.

Certain functions associated with the vector are:

1. begin() – Returns an iterator pointing to the first element in the vector
2. end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
3. capacity() - Returns the capacity of the vector.
4. size() - Returns the size of the vector (number of elements)
5. at() - Returns the element of the vector at the position specifiesd
6. push_back() - Used to push element into the vector
7. pop_back() - Used to pop the last element from the vector
8. clear() - Used to clear all the elements from the vector

## INDEX
1. Declaring a Vector
2. Insertng elements
3. Deleting elements
4. clear function
5. size function
6. empty function
7. capacity function
8. at function
9. front and back function
10. Test code


### Declaring an Vector
* Declaring a vector of integers

`
#include <vector>

int main()
{
    std::vector<int> v;  //Declare an empty vector named (v) of integer data type
}
`

* Declaring a vector of strings

`
#include <vector>

int main()
{
    std::vector<string> v {"Aditya" ,"The" ,"Competitive" ,"Coder"};
}
`

* Initializing a vector with one element a certain number of times

`
#include <vector>

int main()
{
    std::vector<string> v(4 , "test");
}
`

IMage

## Inserting Elements

### push_back function
push_back() is used for inserting an element at the end of the vector. If the type of object passed as parameter in the push_back() is not same as that of the vector or is not interconvertible an exception is thrown.

IMAGE

Code:

`
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>  v;
    v.push_back(1);  //insert 1 at the back of v
    v.push_back(2);  //insert 2 at the back of v
    v.push_back(4);  //insert 3 at the back of v
    
    for(vector<int>::iterator i = v.begin(); i != v.end(); i++) 
    {
          cout << *i <<" ";   // for printing the vector
    }
}
`

Output:

> 1 2 4

### insert function
insert(itr, element) method inserts the element in vector before the position pointed by iterator itr.

Image

Syntax:
`
v.insert(i, v2.begin(), v2.end());
`

## Deleting Elements 

### pop_back function
pop_back() is used to remove the last element from the vector. It reduces the size of the vector by one.

Code:
`
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v {10,20,30,40};
    
    v.pop_back();  
    
    vector<int>::iterator it;
    
    for(it = v.begin(); it != v.end(); it++) 
    {
        cout << *it <<" ";   // for printing the vector
    }cout<<endl;
}
`
Output:
> 10 20 30


### erase function
erase(itr_pos) removes the element pointed by the iterator itr_pos. erase method can also be overloaded with an extra iterator specifying the end point of the range to be removed, i.e erase(itr_start, itr_end).

Code:
`
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vecto<int>v {1,2,3,4};
    vector<int>iterator:: it = v.begin();
    
    v.erase(it);   //removes first element from the vector
    
    v.erase(v1.begin(), v1.end() - 2 )  //removes all the elements except last two 
    
    for(it = v.begin(); it != v.end(); it++) 
    {
        cout << *it <<" ";   // for printing the vector
    }
}
`

Output:
> 3 4

## clear function
This method clears the whole vector, removes all the elements from the vector but do not delete the vector.

Syntax:
`
v.clear();
`
> For a vector v, v.clear() will clear it, but not delete it.

## size function
This method returns the size of the vector.

Syntax:
`
v.size();
`

## empty function
This method returns true if the vector is empty else returns false.

Syntax:
`
cout<<v.empty();
`

## capacity function
This method returns the number of elements that can be inserted in the vector based on the memory allocated to the vector.

Syntax:
`
cout<<v.capacity();
`

## at function
This method works same in case of vector as it works for *array.vector_name.at(i)* returns the element at ith index in the vector vector_name.

Syntax:
`
cout<<v.ar(2);  //Print the element at the 2nd position in the vector
`

## front and back function
*vector_name.front()* retuns the element at the front of the vector (i.e. leftmost element). While *vector_name.back()* returns the element at the back of the vector (i.e. rightmost element).

Syntax:
`
cout<<"First element "<<v.front()<<endl;
cout<<"Last element "<<v.back()<<endl;
`

## Test code

`
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;

    vector <int> a(5,1);      //Vector of size 5 with all elements 1

    vector <int> copies(a);    //This is copy og vector "a"
    cout<<"print copies"<<endl;
    for (int i:copies)
    {
        cout<<i<<" ";
    }  cout<<endl;

    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(1);               //I pushed "1" to the vector
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(2);               //I pushed "1" to the vector
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(3);               //I pushed "1" to the vector
    cout<<"Capacity "<<v.capacity()<<endl;         //Capacity is how much space is assigened for the elements in the vector
    cout<<"Size "<<v.size()<<endl;                 //and size is number of elements

    cout<<"Element at 2nd index "<<v.at(2)<<endl;

    cout<<"first element "<<v.front()<<endl;

    cout<<"End "<<v.back()<<endl;
    cout<<"Before pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    } cout<<endl;

    v.pop_back();     //Deleting the last element

    cout<<"After pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    } cout<<endl;
    
    cout<<"Before clear"<<v.size()<<endl;
    v.clear();
    cout<<"After Clear "<<v.size()<<endl;
}
`
Output:
>print copies
>1 1 1 1 1 
>Capacity 0
>Capacity 1
>Capacity 2
>Capacity 4
>Size 3
>Element at 2nd index 3
>first element 1       
>End 3
>Before pop
>1 2 3 
>After pop
>1 2
>Before clear2
>After Clear 0
