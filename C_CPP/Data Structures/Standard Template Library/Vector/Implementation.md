# Vectors in C++

- Vectors are sequence containers.
- Defined in header file <vector>
- Vector represents a dynamic array.
- Vectors store their elements in contiguous memory locations.
- Vectors permit direct access to an element.

**Advantage of Vector:**

- Vector can grow in size when the number of elements increases and shrink in size when the number of elements is deleted.

**Functions supported by a vector**

- at() - Gives a reference to the specified element.
- begin() - Gives a reference to the first element.
- back() - Gives a reference to the last element.
- push_back() - Adds an element at the end
- pop_back() - Deletes an element at the end
- erase() - Deletes elements
- insert() - Inserts elements
- size() - Gives the number of elements
- capacity() - Gives the capacity of the vector
- clear() - deletes all the elements from the vector
- empty() - checks if the vector is empty
- end() - Gives a reference to the end of the vector
- .resize() - Changes the size of the vector
- swap() - Interchange the values at the specified positions.

```c
//Demonstrating C++ Standard Library class template vector
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void outputVector(const vector<int> &);
void inputVector(vector<int> &);

int main()
{
    //two vector objects created
    vector<int> vect1(5);
    vector<int> vect2(7);

    //print vect1 size and content
    cout << "Size of vector vect1 is " << vect1.size() << "\n vector after initialization:" << endl;
    outputVector(vect1);

    //print vect2 size and content
    cout << "Size of vector vect2 is " << vect2.size() << "\n vector after initialization:" << endl;
    outputVector(vect2);

    //input and print integers1 and integers2
    cout << "\nenter 12 numbers:" << endl;
    inputVector(vect1);
    inputVector(vect2);

    cout << "\nAfter input the integers contain:\n"
         << "vect1:" << endl;
    outputVector(vect1);
    cout << "vect2:" << endl;
    outputVector(vect2);

    //use inequality operator (!=) with vector objects
    if (vect1 != vect2)
    {
        cout << "vect1 and vect2 are not equal" << endl;
    }

    //create vector integers3 using integers1 as an initializer ,print size and contents
    vector<int> integers3(vect1);
    cout << "Size of vector integer3 is " << integers3.size() << "\n vector after initialization:" << endl;
    outputVector(integers3);

    //use overloaded assignement(=) operator
    cout << "Assigning vect2 to vect1 :" << endl;
    vect1 = vect2;
    cout << "vect1:" << endl;
    outputVector(vect1);
    cout << "vect2:" << endl;
    outputVector(vect2);

    //use equality operator with vector objects
    cout << "Evaluating vect1 == vect2" << endl;
    if (vect1 == vect2)
        cout << "vect1 and vect2 are equal" << endl;

    //use square bracket to use rvalue
    cout << "\nvect1[3] is " << vect1[3];

    //use square bracket to create lvalue
    cout << "\n\nAssigning 140 to vect1[3]" << endl;
    vect1[3] = 140;
    cout << "vect1:" << endl;
    outputVector(vect1);

    //use vect1.insert(vect1.begin(),25)
    cout << "\n\nApplying vect1.insert(vect1.begin(),25)" << endl;
    vect1.insert(vect1.begin(), 25);
    cout << "vect1:" << endl;
    outputVector(vect1);

    //attempt to use out of range index
    try
    {
        cout << "An attempt to display vect1.at(18)" << endl;
        cout << vect1.at(18) << endl;
    }
    catch (out_of_range &ex)
    {
        cout << "An exception occured :" << ex.what() << endl;
    }
}
//output vector contents
void outputVector(const vector<int> &array)
{
    size_t i;
    for (i = 0; i < array.size(); ++i)
    {
        cout << setw(6) << array[i];
        if ((i + 1) % 6 == 0)
        {
            cout << endl;
        }
    }
    if (i % 6 != 0)
    {
        cout << endl;
    }
}
//input vector contents
void inputVector(vector<int> &array)
{
    for (size_t i = 0; i < array.size(); ++i)
        cin >> array[i];
}
```

```c
OUTPUT:

Size of vector vect1 is 5
vector after initialization:       
     0     0     0     0     0      
Size of vector vect2 is 7
vector after initialization:       
     0     0     0     0     0     0
     0

enter 12 numbers:
1 2 3 4 5 6 7 8 9 10 11 12

After input the integers contain:
vect1:
     1     2     3     4     5   
vect2:
     6     7     8     9    10    11
    12
vect1 and vect2 are not equal
Size of vector integer3 is 5
 vector after initialization:
     1     2     3     4     5
Assigning vect2 to vect1 :
vect1:
     6     7     8     9    10    11
    12
vect2:
     6     7     8     9    10    11
    12
Evaluating vect1 == vect2
vect1 and vect2 are equal

vect1[3] is 9

Assigning 140 to vect1[3]
vect1:
     6     7     8   140    10    11
    12

Applying vect1.insert(vect1.begin(),25)
vect1:
    25     6     7     8   140    10
    11    12
An attempt to display vect1.at(18)
An exception occured :vector::_M_range_check: __n (which is 18) >= this->size() (which is 8)
```
