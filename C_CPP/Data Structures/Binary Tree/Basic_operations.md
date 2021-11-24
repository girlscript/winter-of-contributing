# Basic Operations performed on Binary Tree

## Insert Operation
* Time Complexity: O(log n)
* Insert operation starts from the root node.

Algorithm: 
* Create a new node with a value and set its left and right to NULL.
* Check whether the tree is empty or not.
* If the tree is empty, set the root to a new node.
* If the tree is not empty, check whether a value of new node is smaller or larger than the node.
* If a new node is smaller than or equal to the node, move to its left child.
* If a new node is larger than the node, move to its right child.
* Repeat the process until we reach to a leaf node.

![image](https://user-images.githubusercontent.com/73405757/141138318-30be80aa-456a-4d29-9869-22e354b238fa.png)

Source: [log<sub>2</sub>2](https://www.log2base2.com/data-structures/tree/insert-a-node-in-binary-search-tree.html)


Insert Function Code:

```c++
struct node *insert(struct node *root, int val)
{
    /*
     * It will handle two cases,
     * 1. if the tree is empty, return new node in the root
     * 2. if the tree traversal reaches NULL, it will return the new node
     */
    if(root == NULL)
        return getNewNode(val);
    /*
     * if given val is greater than root->key,
     * we should find the correct place in the right subtree and insert the new node
     */
    if(root->key < val)
        root->right = insert(root->right,val);
    /*
     * if given val is smallar than root->key,
     * we should find the correct place in the left subtree and insert the new node
     */
    else if(root->key > val)
        root->left = insert(root->left,val);
    /*
     * It will handle two cases
     * (Prevent the duplicate nodes in the tree)
     * 1.if root->key == val it will straight away return the address of the root node
     * 2.After the insertion, it will return the original unchanged root's address
     */
    return root;
}
```

## Search Operation

* Time Complexity: O(log n)
* Search operation starts from the root node.

Algorithm:
* Read the element from the user.
* Compare this element with the value of root node in a tree.
* If element and value are matching, display "Node is Found" and terminate the function.
* If element and value are not matching, check whether an element is smaller or larger than a node value.
* If an element is smaller, continue the search operation in left subtree.
* If an element is larger, continue the search operation in right subtree.
* Repeat the same process until we found the exact element.
* If an element with search value is found, display "Element is found" and terminate the function.
* If we reach to a leaf node and the search value is not match to a leaf node, display "Element is not found" and terminate the function.

![image](https://user-images.githubusercontent.com/73405757/141142173-85397d25-560a-4db5-9b0f-5b33d3511c72.png)

Source: [javatpoint](https://www.javatpoint.com/searching-in-binary-search-tree)

Search Function Code:

```c++
struct node* search(struct node* root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->key == key)
       return root;
    
    // Key is greater than root's key
    if (root->key < key)
       return search(root->right, key);
 
    // Key is smaller than root's key
    return search(root->left, key);
}
```

## Preorder Traversal

Algorithm:
* Visit or print the root.
* Traverse the left subtree.
* Traverse the right subtree.

Preorder Traversal Fuction Code:

```c++
void preorder(struct node *root)
{
    if(root == NULL)
        return;

    //visit the root
    printf("%d ",root->key);

    //traverse the left subtree
    preorder(root->left);

    //traverse the right subtree
    preorder(root->right);
}
```

Examples:

![image](https://user-images.githubusercontent.com/73405757/141156800-7e403573-9c58-44ab-9b43-30adee9a5bf9.png)

![image](https://user-images.githubusercontent.com/73405757/141156871-e97413ea-ec9d-4d10-a780-b9e6efbb1b8c.png)

Source: [GeeksforGeeks](https://practice.geeksforgeeks.org/problems/preorder-traversal/1)

## Postorder Traversal

Algorithm:
* Traverse the left subtree.
* Traverse the right subtree.
* Visit or print the root.

Postorder Traversal Fuction Code:

```c++
//postorder traversal of binary search tree
void postorder(struct node *root)
{
    if(root == NULL)
        return;

    //traverse the left subtree
    postorder(root->left);

    //traverse the right subtree
    postorder(root->right);

    //visit the root
    printf("%d ",root->key);
}
```

Examples:

![image](https://user-images.githubusercontent.com/73405757/141156467-b77de97f-b0df-476f-b395-b55f989be028.png)

![image](https://user-images.githubusercontent.com/73405757/141156529-1646cd0c-0ce3-4582-8029-8d6b9247a5f7.png)

Source: [GeeksforGeeks](https://practice.geeksforgeeks.org/problems/postorder-traversal/1)

## Inorder Traversal

Algorithm:
* Traverse the left subtree.
* Visit or print the root.
* Traverse the right subtree.

Inorder Traversal Fuction Code:

```c++
void inorder(struct node *root)
{
    if(root == NULL)
        return;

    //traverse the left subtree
    inorder(root->left);

    //visit the root 
    printf("%d ",root->key);

    //traverse the right subtree
    inorder(root->right);
}
```

Examples:

![image](https://user-images.githubusercontent.com/73405757/141155910-382f217c-12e9-4682-993c-cb5611710d8d.png)

![image](https://user-images.githubusercontent.com/73405757/141155987-20e232b5-d166-40dd-b624-b74f58b853e1.png)

Source: [GeeksforGeeks](https://practice.geeksforgeeks.org/problems/inorder-traversal/1)
