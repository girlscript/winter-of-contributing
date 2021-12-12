# Intersecting Linked Lists

<p>When two linked lists intersect at a point (node), we refer to them as intersecting linked lists.

Following is an example : </p>
</br>

```
h1 - 1 - 2 - 3 - 4
                  \
                   5 - 6 - 7 - 8 - 9 - 10 - NULL
                  /
            h2 - 3

The 2 linked lists intersect at node 5. 

To just check whether the 2 nodes intersect or not, the sufficient condition is that they have the same tail.  
So, we can just check whether the addresses of the two linked lists have the same address or not.
  

## Finding node of Intersection

For finding the node at which two linked lists intersect we can compare the addresses of each node of a linked list with the other, but this would give the time complexity as O(m*n), where m and n are the lengths of the individual linked lists.  
  
So we use a different method. Let m and n be the length of the 2 linked lists and m>n.
Then follow the following steps : 
 
 1. Find the difference in lengths, i.e, let m - n = d.
 2. Traverse the longer list by "d" nodes.
 3. Then parallely traverse the two lists and compare the address of each node.
 4. If the address matches, then that is the intersecting node.

 **Example :**  
  
```
h1 - 1 - 3 - 5 
              \
               7 - 9 - 11 - Null
              /
    h2 - 2 - 4

Length of linked list 1 : 6
Length of linked list 1 : 5
Difference = 6 - 5 = 1

Traverse linked list 1 by 1 ;

        ptr1
         |
h1 - 1 - 3 - 5 
              \
               7 - 9 - 11 - Null
              /
    h2 - 2 - 4
         |
        ptr2

Here, ptr1 and ptr 2 represent the traversal pointers.

Now compare address of each node while traversing, to find the intersecting node.

```

[Intersecting linked list](readme_IntersectingLL.md)  
[References](https://www.geeksforgeeks.org/intersection-point-of-two-linked-lists-set-3/)  
