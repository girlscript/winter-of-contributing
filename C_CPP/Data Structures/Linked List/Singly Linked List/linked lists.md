#                       **<u>LINKED LISTS IN HTML</u>**:star2:



***HELLO PALS**:wave:* before jumping right into a linked list let us firstly revise array and then tryna connect this new topic via something that we already have in our memory.



##                                  SO LET'S GET STARTED:exclamation:

<img src="https://user-images.githubusercontent.com/70068282/134817151-b343782d-931d-4ed2-a9a9-f93366f87882.gif" alt="array" style="zoom:33%;" />



**C++ provides a data structure, the array, which stores a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.**

**Instead of declaring individual variables, such as number0, number1, ..., and number99, you declare one array variable such as numbers and use numbers[0], numbers[1], and ..., numbers[99] to represent individual variables. A specific element in an array is accessed by an index. The lowest address corresponds to the first element and the highest address to the last element.**

<u>**ITS DEMERITS INCLUDE:**</u>

- Fixed size

- Contiguous block of memory.

- Insertion or deletion is costly.

- The number of elements to be stored in an array should be known in advance.

  

**A linked list however overcomes these issues.**:fire:

------

<img src="https://user-images.githubusercontent.com/70068282/134817360-68d05ddc-b912-417d-881f-103134360386.gif" alt="What is a singly linked list!" style="zoom:33%;" />



**Like arrays, Linked List is a linear data structure where the elements are linked using pointers. A linked list is represented by a pointer to the first node of the linked list. The first node is called the head. If the linked list is empty, then the value of the head is NULL.** 
**Each node in a list consists of at least two parts:** 

1. **data .**

2. **Pointer (Or Reference) to the next node .**

   

![Linkedlist](https://user-images.githubusercontent.com/70068282/134817532-03be2322-0ad9-4023-988c-30be96b7cbbe.png)



------

<img src="https://user-images.githubusercontent.com/70068282/134817622-618daa0b-87bb-47fa-9702-e1172e940f09.gif" alt="advantages" style="zoom:33%;" />



- **Size can be modified .**

- **Memory allocated is non-contiguous.**

- **Insertion or deletion is easier.**

- **Data structures such as stack and queues can be easily implemented using linked list.**

- **As size of linked list can increase or decrease at run time so there is no memory wastage. In case of array there is lot of memory wastage, like if we declare an array of size 10 and store only 6 elements in it then space of 4 elements are wasted. There is no such problem in linked list as memory is allocated only when required.**

  ------
  
  
  
  ![Let's code it!img](https://user-images.githubusercontent.com/70068282/135026304-f4bf7f51-f635-4c10-ace8-0257452ffbf7.png)
  
  
  
  As we know, Singly linked list is a type of data structure that is made up of nodes that are created using self referential structures. Each of these nodes contain two parts, namely the data and the reference to the next list node. Only the reference to the first list node is required to access the whole linked list. This is known as the head. The last node in the list points to nothing so it stores NULL in that part.
  
  ![Declaring a Linked List](https://user-images.githubusercontent.com/70068282/134964546-af5f3a8d-0959-4ec4-a68a-52f9a40a748e.gif)
  
  
  
  <u>A program to represent a singly linked list is given as follow:</u>
  
  ```c++
  class Node {
  public:
    int data;
    Node* next;
      node*(int val)
      {
          data=val;
          next=NULL;
      }
  };
  ```
  
  

***Here we have created a class named node and whenever an object of this class is created and a value is passed the following process happens:***

1. ***A node is created which contains a data field and a pointer to the next node.***
2. ***A constructor helps us in providing a value to the data field and pointing the next pointer to NULL.***



------

![Insertion in linked list](https://user-images.githubusercontent.com/70068282/135026718-b8f055f1-0324-4ece-9736-c3bd0e6f039f.gif)

**Insertion in a linked list can be done in two ways**

- At the head

- At the tail

  <u>lets take a look at the code implementation:</u>

  ```c++
  class Node {
  public:
    int data;
    Node* next;
      node*(int val)
      {
          data=val;
          next=NULL;
      }
  };
  void insertAtTail(node*head,int val)
  {
      node* n=new node(val);
          if(head==NULL)
          {
              head=n;
              return;
          } 
  node* temp=head;
  while(temp->next!=NULL)
  {
      temp=temp->next;
  }
  temp->next=n;
  }
  void insertAtHead(node* head,int val)
  {
      node* n=new node(val)
      {
          n->next=head;
          head=n;
      }
  }
  void display(node* head)
  {
      node* temp=head;
      while(temp!=NULL)
      {
          cout<<temp->data<<"->";
          temp=temp->next;
      }
      cout<<"NULL"<<endl;
  }
  int main()
  {
           node* head=NULL; //linked list is initially empty.
           insertAtTail(head,1);
           insertAtTail(head,2);
           insertAtTail(head,3);
           insertAtTail(head,4);
           insertAtTail(head,5);
           insertAtTail(head,6);
           display(head); //print the linked list 1->2->3->4->5->6->NULL
           insertAtHead(head,7);
           insertAtHead(head,8);
           display(head);  //print the linked list 8->7->1->2->3->4->5->6->NULL
  }
  ```

  

When I want to insert a element at the end of the list ,I shall call the function insertAtTail and  pass the value which I want to insert. According to the function we will firstly move to end of the list and the next pointer of the last element will point to this new node.

When I want to insert a element at the head of the list ,I shall call the function insertAtHead and  pass the value which I want to insert. According to the function we will point the next pointer of our new node to the initial head and then we will make this new node the final head of the list.

The display function will simply help in displaying our altered or unaltered linked list.

------

![Start inspired with thousands of templates, collaborate with ease, and engage your audience with a memorable Canva Presentation](https://user-images.githubusercontent.com/70068282/135029446-86837bbd-669b-4c10-9f8f-0cbdd591196e.gif)

```c++
class Node {
public:
  int data;
  Node* next;
    node*(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertAtTail(node*head,int val)
{
    node* n=new node(val);
        if(head==NULL)
        {
            head=n;
            return;
        } 
node* temp=head;
while(temp->next!=NULL)
{
    temp=temp->next;
}
temp->next=n;
}
void insertAtHead(node* head,int val)
{
    node* n=new node(val)
    {
        n->next=head;
        head=n;
    }
}
void dlthead(node* head)
{
    node* todlt=head; //node to be deleted is head.
    head=head->next; //new head of the linked list.
    delete todlt;
}
void deletion(node* head,int val)
{
    if(head==NULL)//incase the linked list is empty.
    {
        return;
    }
    if(head->next==NULL)//Incase the val to be removed is the very first element of the    linked list,a seperate function dlthead is required.
    {
        dlthead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next; 
    temp->next=temp->next->next;//alter the pointers
    delete todelete;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
         node* head=NULL; //linked list is initially empty.
         insertAtTail(head,1);
         insertAtTail(head,2);
         insertAtTail(head,3);
         insertAtTail(head,4);
         insertAtTail(head,5);
         insertAtTail(head,6);
         display(head); //print the linked list 1->2->3->4->5->6->NULL
         insertAtHead(head,7);
         insertAtHead(head,8);
         display(head);  //print the linked list 8->7->1->2->3->4->5->6->NULL
         deletion(head,3);//print the linked list 8->7->1->2->4->5->6->NULL
         dlthead(head,8);//print the linked list 7->1->2->3->4->5->6->NULL
         dlthead(head,7);//print the linked list 7->1->2->3->4->5->6->NULL
        display(head);
}
```

**Whenever deletion in a linked list is performed it must be made sure that the next pointers are changed so that a part of the list is not left abandoned. Moreover when the node to be removed is the head itself it must be made sure that the next node is made the new head. At the last the delete keyword should be used to delete a node if not done so a memory leak may occur.**

------

![SEARCHING IN A LINKED LIST](https://user-images.githubusercontent.com/70068282/135241364-11941ac9-1aa3-43b9-a881-c931a9017b08.gif)

 

**<u>Further incase we want to search whether a particular data is contained in the linked list. The following code can be added to the previous one.</u>**

```c++
//for linear search in a linked list.
bool search(node*head,int key) //key data to be seacrjed
{
    node* temp=head;
    while(temp!=NULL)  //if the list is not empty yet continue the searching.
    {
        if(temp->data==key)
        {
            return true;//data found
        }
        temp=temp->next; //move the temp pointer to the next node.
     }
    return false;//data not found.
}
```

------

<img src="https://user-images.githubusercontent.com/70068282/135243103-c56d8fb2-51db-43a7-8f61-734e5e643c0c.gif" alt="Reversing a linked list" style="zoom:50%;" />

We can reverse a linked list via two methods:

1. Iterative

2. Recursive

   We will be looking into the iterative approach for now. This method requires three pointers namely previous ,next and current. Lets jump into the code. At the end the previous pointer will end up pointing to the last element of the list which is now the new head of the list.

   ```c++
   node* reverse(node* &head)
   node* previous=NULL:
   node* current=head;
   node* next;
   while(current!=NULL){
   next=current->next;
   current->next=previous;
   previous=current;
   current=next;
   }
   return previous;
   ```







<img src="https://i2.wp.com/www.bestworldevents.com/wp-content/uploads/2020/05/Thank-You-gif-Free.gif?fit=2149%2C1414&ssl=1" style="zoom:50%;" />

