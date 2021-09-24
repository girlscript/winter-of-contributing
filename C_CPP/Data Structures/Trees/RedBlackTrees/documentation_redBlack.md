# Red Black Tree (RBT)

### RBT is an algorithm for balancing trees. It is somewhat similar to AVL tree algorithm. However, it prevents the imbalance caused in AVL tree after rotation.
<br>

### PreRequisites : 
- AVL Balancing
- BST Operations
<br>

### In RBT we have 2 methods of balancing a tree :
 - Recolouring
 - Rotation (if recolouring doesn't work)
### (as compared to only rotation in AVL )
<br>

### ***We have to follow certain rules in this algorithm, which are as follows :***
 1. Every node has a colour either red or black.
 2. The root of the tree is always black.
 3. There are no two adjacent red nodes (A red node cannot have a red parent or red child)
 4. Every path from a node (including root) to any of its descendants NULL nodes has the same number of black nodes.

### (Note : We can switch the black and red color according to our preference, i.e we can keep the root as red etc.)

### RBT provides faster insertion and removal operations and used in map, multimap implementations in C++.
<br>

### As the name suggests, in red black trees we assign either red or black colour to a node. 
 - This colour assignment helps in a relatively relaxed sort of balancing where we don't need to do rotations every time to balance the tree.
 - However certain cases arise when we need to use rotations for balancing RBT.
<br>

### Recolour : When and how ?
 1. Insert node like binary tree
 2. If root : assign black colour
 3. If not root : Check Parent node 
    - If parent ***black*** : Don't change colour of node
    - Else if parent ***red*** : Check colour of uncle 
       - If uncle ***red*** : Change color of parent node and uncle node to black and grandfather node to red, and repeat for grandfather node. 

### Rotation : When and how ?
### (assume (r) for ***red*** and (b) for ***black***; Let N represent the new node)
- In recoloring : If uncle is ***black*** then rotation is done. It is of 4 types :
1. Left Left Rotation   (LL) : New node inserted in left branch of left side RBT.
```
            10 (b)                      7 (b)

           /  \                        /  \ 
                        
      (r) 7    15 (b)  ----->    (r) N      10 (r)

        /                                       \

  (r) N                                          15 (b)
```
### (Right Rotation of Grandfather Node; Recolour)
<br>

2. Left Right Rotation  (LR) : New node inserted in right branch of left side RBT.
```
            10 (b)                       10 (b)                    N (b)
  
           /  \                         /  \                      /  \
  
      (r) 7    15 (b)   ----->     (r) N     15 (b)  ----->   (r) 7     10 (r)
  
           \                          /                                  \
  
         (r) N                   (r) 7                                    15 (b)
```
### (Left Rotating parent of N; Then apply LL case)
<br>

3. Right Right Rotation (RR) : New node inserted in right branch of right side RBT.
```
            10 (b)                          15 (b)
   
           /  \                            /  \
   
      (b) 7    15 (r)    ----->      (r) 10     N (r)
   
                 \                      /
    
                  N (r)            (b) 7
```
### (Left Rotation of Grandfather of N; Swapping colors of Grandfather and Parent of N)
<br>

4. Right Left Rotation  (RL) : New node inserted in left branch of right side RBT.
```
            10 (b)                    10 (b)                        N (b)

           /  \                      /  \                          /  \

     (b) 7     15 (r)  ----->  (b) 7      N (r)     ----->    (r) 10    15 (r)
              
              /                              \                   /            
             
            N (r)                             15 (r)        (b) 7
```
### (Right Rotate Parent of N; Apply RR case)
<br>

### I have done a simple implementation of RBT, which shows comparison with what would happen if we didn't use RBT.
<br>

[Red Black Trees in C](https://github.com/a-rcane/winter-of-contributing/blob/C_CPP/C_CPP/Data%20Structures/Trees/redBlack.c)
<br>

### References
- [GeekforGeeks](https://www.geeksforgeeks.org/red-black-tree-set-2-insert/)
- [Medium.com](https://medium.com/@ben.tom.vincent/why-use-a-red-black-tree-over-a-regular-binary-search-tree-a63857916907)
