# Searching  in a Linked List

## **Linear Search**

</br>

## **Algorithm:**

</br>

### 1) Initialize a node pointer, current = head

### 2) Do following while current is not NULL

    a) current->key is equal to the key being searched ,return true.
    b) current = current->next

### 3) Return false

</br>

## **Iterative Implementation of the above approach**

</br>

## Including the necessary header files:-

    #include <bits/stdc++.h>
    using namespace std; 

</br>

## Creating the Node Structure:-

    class Node 
    { 
    public:
    int data; 
    Node* next; 
    }; 

    //Constructor Function to Initialize a new Node:

    Node(int x){
        data = x;
        next = NULL;
    }

</br>

## Search Function:-

    bool Search(Node*head , int val){
        Node* current = head;

        while(current != NULL){
            if(current -> data == val){
                return true;
            }
        }
        return false;
    }

</br>

### In the search function we are traversing the linked list and comparing value of each node with the value that we need to find .If any of the linked list nodes value matches with the given val then we will return true. Otherwise we will return false if the function doesn't returns true for any value.

</br>

## Main function:-

    int main(){
        //Creating a Linked list manually
        Node* head = new Node(1);
        head -> next = new Node(2);
        head -> next -> next = new Node(3);
        head -> next -> next -> next = new Node(4);

        //Taking input for the value to find (val):

        val = 2;
        Search(head , 2);
        //The above call will return true

        val =6;
        Search(head, 6);
        //The above function call will return false
    }

</br>

## Time complexity and Space Complexity:-

    Time Complexity : O(n)
    Here n is the number of nodes. 
    Space Complexity : O(1)
    Auxiliary Space : O(1)

</br>

### References

https://www.geeksforgeeks.org/ 

<br>
