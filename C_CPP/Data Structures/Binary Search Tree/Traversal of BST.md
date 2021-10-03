# Traversal methods in Binary Search Tree

## Sample BST
![image](https://user-images.githubusercontent.com/73171376/134503655-43c2a2d3-31dc-46ea-99ab-41b9bb1a33e0.png)

## Depth First Traversals<br>
In Depth First Traversal methods we traverse the BST in depth wise motion

### 1. Inorder Traversal
```c
Algorithm
1. First of all Traverse the left subtree of the node using same algorithm (from step-1 itself).
2. Visit current node
3. Traverse right subtree of the node using same algorithm.
```
```c
Output of Inorder Traversal for the above Sample BST will be
4 7 9 10 14 26
```
