## Heap Sort
<br>
<p>
Heap sort is based on the heap structure, and is a comparison based in-place sorting algorithm.</p>
<p>
We define a binary heap using a complete binary tree. The special thing about a binary heap is the order in which we the items are stored. 2 types of binary heaps exists : 

- Max Heap : Value of parent node > values of both the child nodes
- Min Heap : Value of parent node < values of both the child nodes

The heap can be represented using a binary tree or array. We will implement the array representation.

( A complete binary tree is a binary tree with every level filled completely. )
</p>
<br>

## Array Representation
<br>
<p>
We can use an array representation for a binary heap. Using an array helps in easy accessibility.</p>
<p>
We do this in the following way : 

- Assign index A to the parent node, i.e, parent = arr [ A ]
- Then index of right child will be right = arr [ 2*A + 1 ]
- Then index of right child will be right = arr [ 2*A + 2 ]

( let arr [ ] be our array )
</p>

## Time and Space Complexity

<p>

- Time complexity  : O(nlogn) (overall)
- Space complexity : O(n) (space required only for storing the initial list)
</p>
<br>

## Algorithm
<p>
We use a max heap (parent > children) for this implementation, for sorting in increasing order. Following are the steps : 

1. Build a max heap.
2. Replace root with last element in heap.
3. Reduce the heap by 1.
4. Heapify the new root.
5. Repeat above steps while size of heap > 1.

***( Note : Heapify works on a node only if its's children nodes are heapified. )***
</p>
<br>

## Implementation
<br>

<p>

For ***Heapify***
</p>

```
Data to sort : 10 8 4 6 9 1 ( in ascending order )

Index :  (0)  (1) (2) (3) (4) (5)

Array : | 10 | 8 | 4 | 6 | 9 | 1 |

This can be viewed as : 

                 10(0)
               /     \
              /       \   
          (1)8         4(2)
           /  \        /
          /    \      /
      (3)6    9(4)   1(5)
 

- Applying heapify on 4(2) leads to no change as parent > children values. 

- Applying heapify on 8(1). 

                 10(0)
               /     \
              /       \   
          (1)9         4(2)
           /  \        /
          /    \      /
      (3)6    8(4)   1(5)

- Max heap obtained.
 
```
<br>
<p>

For ***heap sort***
</p>

```
- Replace root with last node.

                 1(0)
               /     \
              /       \   
          (1)9         4(2)
           /  \        /
          /    \      /
      (3)6    8(4)   10(5)
 
- Reduce heap by 1

                 1(0)
               /     \
              /       \   
          (1)9         4(2)
           /  \        
          /    \      
      (3)6    8(4)   

- Heapify this new sub heap.

                 9(0)
               /     \
              /       \   
          (1)8         4(2)
           /  \        
          /    \      
      (3)6    1(4)   

- Replace root with last node, and reduce the heap by 1.

                 1(0)
               /     \
              /       \   
          (1)8         4(2)
            /          
           /         
       (3)6  

- Repeat the process.     
```

<p> We obtain the sorted array as : 

```
Data to sort : 1 4 6 8 9 10 ( in ascending order )

Index :  (0)  (1) (2) (3) (4) (5)

Array : | 1 | 4 | 6 | 8 | 9 | 10 |   
```
<br>

## Functions

<p>
Function for heapify :
</p>

```
void heapify(int *arr, int n, int i)
{
    int big = i; // Initialize big as root
    int l = 2 * i + 1; // left 
    int r = 2 * i + 2; // right 
 
    // If left >  root
    if (l < n && arr[l] > arr[big])
        big = l;
 
    // If right > big so far
    if (r < n && arr[r] > arr[big])
        big = r;
 
    // If big not root
    if (big != i) {
        int t;
        t = arr[i];
        arr[i] = arr[big];
        arr[big] = t;
 
        // heapify sub-tree using recursion
        heapify(arr, n, big);
    }
}
```
<br>
<p>
Function for heapsort :
</p>

```
void sort(int *arr, int n)
{
    // Build heap 
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // Taking element from heap
    for (int i = n - 1; i > 0; i--) {
        // root to end
        int t;
        t = arr[0];
        arr[0] = arr[i];
        arr[i] = t;

        // heapify reduced heap
        heapify(arr, i, 0);
    }
}
 
```
