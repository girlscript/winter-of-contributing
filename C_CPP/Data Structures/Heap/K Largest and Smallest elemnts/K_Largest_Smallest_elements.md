# K Largest / Smallest elements in Array by Using Heap
Heap is a data staructure which is based on the tree data structure and There are two types of heap max heap and min heap.
- **Max Heap :** This is the heap in which parent node is always greater than its child and root node have the maximum element of heap.

- **Min Heap :** In this heap the parent node have the value which always less than its child value , So this mean root node have the smallest element of heap.

## Algorithm For K Largest elements in Array
1. First we have input all the elements of array in the **min heap**.
2. While inputting the values side by side we have check that side of heap should be less than equal to value of K.
3. We have to pop the element till the size of heap became less than or equal to K.

```cpp
#include<iostream>
#include<queue>
#include <functional>
using namespace std;

int main(){
    // Defining the heap using STL here int specifies data type , vector<int> as the container
    //greater<int> is comparator to make it min heap.
    priority_queue<int,vector<int>,greater<int>>pq;

    int a[]={12,45,10,2,3,67}; // Defining the array
    
    int n= sizeof(a)/sizeof(a[0]); // Allocating size
 
    int k=3;
    
    for(int i=0;i<n;i++){
        // Inputting the elements
        pq.push(a[i]);

        // Checking That size of heap should be less than equal to k Otherwise pop element
        if(pq.size()>k){
            pq.pop();
        }
    }

 //Printing the elements
 while (!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }

 
 return 0;
}
```
Output :
```
12 45 67
```

## Algorithm For K Smallest elements in Array
1. First we have input all the elements of array in the **max heap**.
2. While inputting the values side by side we have check that side of heap should be less than equal to value of K.
3. We have to pop the element till the size of heap became less than or equal to K.

```cpp
#include<iostream>
#include<queue>
using namespace std;

int main(){
    // Defining the heap using STL here int specifies data type , vector<int> as the container to make it max heap.
    priority_queue<int,vector<int>>pq;

    int a[]={12,45,10,2,3,67}; // Defining the array
    
    int n= sizeof(a)/sizeof(a[0]); // Allocating size
 
    int k=3;
    
    for(int i=0;i<n;i++){
        // Inputting the elements
        pq.push(a[i]);

        // Checking That size of heap should be less than equal to k Otherwise pop element
        if(pq.size()>k){
            pq.pop();
        }
    }

 //Printing the elements
 while (!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }

 
 return 0;
}
```
Output :
```
10 3 2
```
### Time Complexity
*O(n.log(n))* Where n is number of elements.

### Space Complexity
*O(n)* Where n is number of elements.
