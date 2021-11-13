# MIDDLE ELEMENT OF SINGLY LINKED LIST
## INPUT :
Singly linked lists which are inputed by user.  
Example 1 : 10->9->8->7->6  
Example 2 : 10->9->8->7->6->5
## OUTPUT:
Middle of the given linked list. If list has even number of nodes, then print the second middle element.  
For first example, middle will be 8.  
For second example, middle will be 7. (because we will take the second middle element in case of even number of nodes)
## APPROACH :
* Ask the user for number of nodes in the linked list.
* Create the Linked list by inputting the data value given by user.
* Traverse the whole linked list and calculate the number of nodes in that list. Let's say : n nodes are there.
* Iterate through the list again till n/2. 
* This node is the middle node.

## CODE :
```c++
#include <iostream>
using namespace std;

// node creation
struct node 
{
    int data;       // data of the node         
    node *next;     // address of next node       
}*head; // head pointer

// function declaration
void Middle_element(struct node *head);	        
void create_list(int n);   

// main function
int main() 
{
    int n,num;
    cout<<"Enter number of nodes of Linked List: ";
    cin>>n;
    
    // function call
    create_list(n);
    cout<<endl<<"Middle element of Linked List: ";
    
    // function call
    Middle_element(head);
   
}

// Function definition
void create_list(int n) 
{
    struct node *temp , *new_node;
    int i,value;
    
    // creating a new node
    head = (struct node *)malloc(sizeof(struct node));
    
    // checks if the list is empty
    if(head == NULL)        
    {
        cout<<"Memory can not be allocated!";
    }
    else
    {
                                  
        cout<<"Enter data for node 1: ";
        cin>>value;
        
        // assign data to first node
        head-> data = value; 
        
        // link address field of head with NULL
        head-> next = NULL; 
        
        // temp will become new head of the list
        temp = head;
 
        for(i=2; i<=n; i++)
        {    
            // creating a new node
            new_node = (struct node *)malloc(sizeof(struct node)); 
            
            if(new_node == NULL) 
            {
                cout<<"Memory can not be allocated!";
                break;
            }
            else
            {
                cout<<"Enter data for node "<<i<<": "; 
                cin>>value;
            
                // assign data to ith node
                new_node->data = value;
                
                // link address field of new node with NULL
                new_node->next = NULL;    
                
                // temp's next will point to new_node i.e. new node will be added after tail
                temp->next = new_node;     
                
                // advances position of temp node
                temp = temp->next;
            }
        }
    }
} 

// Function definition
void Middle_element(struct node *head)
{
        struct node *p=head;
        int l=0,s=0;
        
        // Traversing the list to find the total number of nodes present
        while(p!=NULL){
            l++;
            p=p->next;
        }
       
       // p will become new head of the list
       p=head;
       
       // iterating through the list to find middle element
        while(s<l/2){
            p=p->next;
            s++;
        }
      cout<<p->data;
}
```

* EXAMPLE 1 :
```c++
Enter number of nodes of Linked List: 7
Enter data for node 1: 21
Enter data for node 2: 32
Enter data for node 3: 43
Enter data for node 4: 54
Enter data for node 5: 65
Enter data for node 6: 76
Enter data for node 7: 87
```
* OUTPUT 1 :
```c++
Middle element of Linked List: 54
```

* EXAMPLE 2 :
``` c++
Enter number of nodes of Linked List: 6
Enter data for node 1: 21
Enter data for node 2: 32
Enter data for node 3: 43
Enter data for node 4: 54
Enter data for node 5: 65
Enter data for node 6: 76
```

* OUTPUT 2:
 ```c++
 Middle element of Linked List: 54
 ```
