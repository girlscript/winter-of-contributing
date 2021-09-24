## Vectors in STL
Topics covered:
- [Definition of vector](#definition)
- [Usage of vector](#usage)
    - [Initialization of vector](#initialization-of-a-vector)
    - [Declaration of a vector](#declaration-of-a-vector)
- [Pre-defined functions](#pre-defined-functions)
    - push_back()
    - size()
    - begin()
    - end()
    - empty()
    - back()
    - front()
    - pop_back()
    - erase()
- [Traversal in a vector](#traversal-in-a-vector)
### Definition
<p> Vectors in Standard Template Library is a datatype to form a size variable collection of objects that have same data type. </p>

Size-variable means that the size of vectors can be increased or decreased as per the requirement. This property, of variable size, differentiates vectors from normal arrays.

Vectors possess all the properties of arrays like indexing and collection of objects with same data type. It also contains extra features like flexible size and pre-defined functions which makes the code much more clean and easy to use.

### Usage

To use a vector datatype in C++, we need to import the **vector** header file while importing other header files in the start of the source code.

```
#include <vector>
```
This header file recognizes the use of vector in the code and avoids any compile-time error on encountering the keyword **vector**.

#### Initialization of a vector:

The following is a desired syntax to initialize a vector in C++ language.
```
vector<data_type> vector_name[size];
```
To initialize a vector named "nums" to store 10 (can be of size greater than 10 or lesser also) integer values:
```
vector<int> nums[10];
```
Here, size is completely optional to provide since size is variable. A syntax of the following form is also acceptable:
```
vector<data_type> vector_name;
```
Now, let us suppose that we need to initialize a vector of a particular size and keep all the values same (say 0).

#### Declaration of a vector:

There can be various ways to feed values to a vector while initializing it.

- Providing array values directly:
In this method, while initializing a vector, it can be given the elements to be inserted in the array format. E.g.:
```
vector<int> nums {1,5,1,66,15};
```

- Repeating a value for a specific number of times:
Here, two arguments are provided in a pair of square bracket. The first argument is the number of repetitions and the second argument is the value that is to be repeated. <br>
E.g. To initialize a vector of size 5 and all elements 0, the syntax would look like:
```
vector<int> nums[5,0];
```

The nums vector: nums=[0,0,0,0,0]
<br>
- Using another vector and copying its values in the newly declared vector:
Here, we already have a vector and we put all the values of the existing vector in the new vector.
E.g. Let the existing vector be nums and the new vector be n.
```
vector<int> n(nums.begin(),nums.end());
```

Here, nums.begin() and nums.end() use predefined functions of vectors to access the starting and ending elements of a vector respectively. This takes us to the vector's pre-defined functions.

<br>

### Pre-Defined functions

Let us take the vector nums as used in the previous examples for better understanding. At present, **nums=[0,0,0,0,0]**.

- push_back(**value**):
On using push_back(value) will insert the **value** at the end of the vector in hand by increasing the size by one.
```
nums.push_back(3);
```
Here, nums will become equal to **[0,0,0,0,0,3]**.

- size()
This would return the size of the vector in hand (here nums). This is mostly useful while iterating through a vector.
```
int a = nums.size()
```
Here, a will hold the value 6 because nums is containing 6 integer values.

- begin()
This would point to the element at the starting of the vector.
```
int d = *nums.begin();
```
Here, d will hold the value 0 which is present at the beginning of vector.

- end()
This would point to the end of the vector.
```
int e = *nums.end();
```
Here, e will hold value 3 because nums contain 3 at the end.

- empty()
This returns a boolean value stating whether a vector is empty or not.
```
bool x = nums.empty();
```
This would store 0 in x because nums is not empty vector.

- back()
This stores the value present at the end of the vector. It does not point to the end of the vector but just stores the value in a separate memory space.
```
int c = nums.back();
```
This makes the value of c to be equal to 3 (according to the value present at the end of vector nums).

- front()
It stores the value at the starting of the vector.
```
int d = nums.front();
```
This would store 0 in d. <br>

- pop_back()
This would pop out the value present at the end of vector and decrease the size of vector by 1.
```
nums.pop_back();
cout<<nums.end();
```
This would make the nums to be equal to [0,0,0,0,0] by popping out 3 which is present at the end of nums and print 0.

- erase(position)
This would erase the element uptil position. For instance, if we write 
```
nums.erase(nums.begin());
```
This would reduce the size of nums by 1 and remove element from first position.
Or else, if we write
```
nums.erase(nums.end());
```
This would erase all the elements present in the nums vector and make the vector's size 0.

#### Traversal in a Vector

Vector traversal can be done in the following ways:

- Using iterator keyword
STL provide a feature to initialize an iterator specific to the vector. This is done as:
```
vector<int>::iterator it;
```
This would initialize an iterator named it which would iterate through integer valued vector.
```
for(it=nums.begin();it<nums.end();it++){
    cout<<*it<<"\t";
}
```
- Using auto keyword
Here, the iterator need not be declared before usage with the datatypes. The auto keyword automatically assigns data type according to the right hand side of the equation.
```
for(auto it=nums.begin();it!=nums.end();it++){
    cout<<*it<<"\t";
}
```
- Using index values
```
for(int i=0;i<nums.size();i++){
    cout<<nums[i];
}
```
All the important concepts about vectors have been covered above. Vectors are mostly used when the size of array is not fixed to avoid any wastage of memory. It very efficiently stores values of same data type and also provides functions for easy usage.
