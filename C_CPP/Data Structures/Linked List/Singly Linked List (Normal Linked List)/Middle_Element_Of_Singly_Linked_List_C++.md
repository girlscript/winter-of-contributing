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

struct node 
{
    int data;                
    node *next;             
}*head; 
              
void Middle_element(struct node *head);	        
void create_list(int n);   


int main() 
{
    int n,num;
    cout<<"Enter number of nodes of Linked List: ";
    cin>>n;
    create_list(n);
    cout<<endl<<"Middle element of Linked List: ";	
    Middle_element(head);
   
}
void create_list(int n) 
{
    struct node *new_node, *temp;
    int i,value;
 
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)        
    {
        cout<<"Memory can not be allocated!";
    }
    else
    {
                                  
        cout<<"Enter data for node 1: ";
        cin>>value;
        head-> data = value;      
        head-> next = NULL; 
        temp = head;
 
        for(i=2; i<=n; i++)
        {
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
                new_node->data = value;         
                new_node->next = NULL;    
                temp->next = new_node;     
                temp = temp->next;
            }
        }
    }
} 

void Middle_element(struct node *head)
{
        struct node *p=head;
        int l=0,s=0;
        while(p!=NULL){
            l++;
            p=p->next;
        }
       // cout<<l;
       p=head;
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
