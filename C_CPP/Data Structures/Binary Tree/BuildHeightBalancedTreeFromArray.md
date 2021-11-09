# **Build Height Balanced Tree From Array**

- A balanced tree always has a height of O(log2(N))
- We will be developing the algorithm to construct a height balanced tree from an array.

<br>

## **Approach**

- Start by selecting the mid point as root and then use the left part of the divided array to build the left subtree and similarly we use the right part of the divided array to construct the right subtree.
- Repeat this divide and build process until the array is empty
- For this implementation we will use two integer variables : start(denoted by s) and end(denoted by e)
- These variables will store the starting and ending index of the array and will be used to calculate the mid variable
  
<br>

```txt
Let the array be : 
arr = [1, 2, 3, 4, 5, 6, 7]

Start by calculating mid
First Call :
mid = (7/2) = 3
                                        (4)
                                       /   \
                                      /     \
                             (1, 2, 3)       (5, 6, 7)
                        (Right Subtree)     (Left Subtree)

Second Call : On the left part of the array
mid = (3/2) = 1
                                        (4)
                                       /   \
                                      /     \
                                    (2)     (5, 6, 7)
                                   /   \       
                                  /     \
                               (1)       (3)

Third Call : On the right part of the array
mid = (10/2) = 5
                                        (4)
                                       /   \
                                      /     \
                       (Right Subtree)       (6)
                                            /   \
                                           /     \
                                         (5)      (7)

```

<br>

### **Base Case**

- When the start index becomes equal to the end index i.e (s == e)
- Whenever we hit the base case, we just return from the function without doing any work

<br>

## **Code**

<br>

```C++
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* build_tree_from_array(int arr[], int s, int e)
{
    // base case

    if(s > e)
    {
        return NULL;
    }

    // recursive case

    int mid = (s + e) / 2;

    Node *root = new Node(arr[mid]);
    root->left = build_tree_from_array(arr, s, mid - 1);
    root->right = build_tree_from_array(arr, mid + 1, e);

    return root;
}

void print_tree_inorder(Node *root)
{
    // base case

    if(root == NULL)
    {
        return;
    }

    // recursive case

    print_tree_inorder(root->left);
    cout << root->data << " ";
    print_tree_inorder(root->right);
}

void print_tree_preorder(Node *root)
{
    // base case

    if(root == NULL)
    {
        return;
    }

    //recursive case

    cout << root->data << " ";
    print_tree_preorder(root->left);
    print_tree_preorder(root->right);
}

void print_array(int arr[], int n)
{
    cout << "The array is :\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\n";
}

void take_input(int arr[], int n)
{
    cout << "The size of the array is : " << n << "\n";
    cout << "Enter the array elements\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    take_input(arr, n);
    print_array(arr, n);

    Node *root = build_tree_from_array(arr, 0, n - 1);
    cout << "The inorder print of the tree is :\n";
    print_tree_inorder(root);
    cout << "\n\n";

    cout << "The preorder print of the tree is :\n";
    print_tree_preorder(root);
    cout << "\n\n";

    return 0;
}
```

<br>

## **Output**

<br>

![image](https://user-images.githubusercontent.com/34866732/140814050-820cc037-21ac-4d81-8592-bac024aff701.png)
