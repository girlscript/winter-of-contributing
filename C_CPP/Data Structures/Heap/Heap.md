# HEAP
HEAP is a Type of Data Structure in which the top element is either the smallest or the largest element in the entire range of elements.
When this top element is popped out , A heapify procedure is called and again the new top is the smallest or the largest element depending on the type of Heap.
A heap can be visualised as a Tree and it can be of 2 types :
1. max heap
2. min heap

Both the max heap and the min heap work in the same manner just the order is reversed i.e. we put largest element on top in max heap and smallest on top in min heap.
So, we will here consider the case of min heap for understanding the basic operations of a heap.

 **Basic construction algorithm** :
  ```
    Step 1 − Create a new node at the end of heap. 
    Step 2 − Assign new value to the node.
    Step 3 − Compare the value of this child node with its parent.
    Step 4 − If value of parent is less than child, then swap them.
    Step 5 − Repeat step 3 & 4 until Heap property holds. 
  ```
  Here is an example Max-heap:
  
  ![image](https://www.fluentcpp.com/wp-content/uploads/2018/01/max_heap.png)
  
  **Walking around the heap**:
  As a heap can be visualised as a binary tree shown in above figure, we can just hop to the children of a node in the vector  by using the below formula :
  ```
  left child index: (parent_index + 1) * 2 - 1;
  right child index :  (parent_index + 1) * 2;  
  ```
### Heap  Operations

1. **make_heap()** :- This function is used to convert a range in a container to a heap.
   
    ```
    vector<int> v1 = {2, 3, 21, 20, 7};  
    // Converting vector into a heap using make_heap()
    make_heap(v1.begin(), v1.end());
    ```
2. **front()** :- displays the first/top element of heap which is the largest number.

      ```
      cout << "The maximum element of heap is : ";
          cout << v1.front() << endl;
     ```
3. **push_heap()** :-  inserts elements into heap. The size of the heap is increased by 1 and New element is placed appropriately in the heap by internal heapify operation.
      ```
        v1.push_back(5);    
        // using push_heap() to reorder elements
        push_heap(v1.begin(), v1.end());
      ```
4. **pop_heap()** :- It deletes the maximum(top) element of the heap. The size of heap is decreased by 1. The heap elements are reorganised accordingly after this operation.

    ```
    pop_heap(v1.begin(), v1.end());
    // The popped element is moved to the end of the vector.
    v1.pop_back();
    ```
5. **sort_heap()** :- This function is used to sort the heap. After this operation, the container is no longer a heap.

    It one by one proceeds by popping the largest element and inserting it in the end of the vector.
    so, at the end the vector becomes sorted in ascending order for max heap.
    similarly , the smallest element is popped in the min heap and inserted in the end of the vector
    and the vector becomes sorted in descending order for min heap. 
```
     sort_heap(v1.begin(), v1.end()); 
     // Displaying elements 
     cout << "sorted elements : ";
     for (int x : v1) 
       cout << x << " ";
```

 ## Implementation of a Heap using Priority Queue (STL)
   **Initialising the Max Heap heap**: 
```
     priority_queue<int> p;
```
     
   **Initialising the Min Heap heap**:
 ```
     priority_queue <int, vector<int>, greater<int>> p;  
```
     
  **Push element**:
 ```
     p.push(10);
 ```
     
   **Display Top element**:
```
     cout << p.top();
```
   
   **Remove Top element**:
```
     p.pop();
```
    
   **Print all elemnts**
```
        while (!p.empty()) {
            cout<< p.top()<<" ";
            p.pop();
        }
```



 

