/*
    Test Case: insertAtHead 1 insertAtTail 2 insertAtTail 3 insertAtTail 4 insertAtTail 5 show insertAt 1 9 show insertAtHead 0 show deletePos 2 show deleteHead show deleteTail show deleteTail show deleteHead deleteHead show deleteTail show exit
    This is a command line Tool
    Command Are:-
      Command-Name      Argument-1      Argument-2      
    * insertAtHead      data            ---
    * insertAtTail      data            ---
    * insertAt          position        data
    * deleteHead        ---             ---
    * deleteTail        ---             ---
    * deletePos         position        ---
    * show              ---             ---
    * size              ---             ---
    * clear             ---             ---
    Note:- These Commands are Case Sensitive
    ***Feel free to add your floavour***
*/

#include<iostream>
#include<cstring>
#include<map>

class Node;

std::map<int, Node*> mp;

//Node of a linked list
class Node
{
    private:
        static int size;
        int index;
    public:
        Node *prev;
        int data;
        //to store the size of the LinkedList
        Node *next;
        Node()
        {
            data = 0;
            prev = next = NULL;
        }
        Node(int data)
        {
            this->data = data;
            prev = next = NULL;
            index = size++;
            mp[index] = this;
        }
        //if an element is deleted it should reduce 
        //size and clear Nodes' prev and next
        ~Node()
        {
            prev = next = NULL;
            data = 0;
            size--;
        }
        int len() {return size;}
};

//Initializing static variable size to zero
int Node::size = 0;

class LinkedList
{
    //Don't want to change head and tail pointers 
    //accidentally
    private:
        Node* head;
        Node* tail;
    public:
        //Default Construtor should be called only
        LinkedList() {head = tail = NULL;}
        void insertAtHead(int);
        void insertAtTail(int);
        //Can insert anywhere in the liked list
        void insertAt(int, int);
        void deleteHead();
        void deleteTail();
        void deletePos(int); //Can delete any pos node
        void show();
        int size() {return (head)? head->len():0;} 
        /*
        equivalent to 
        if(head != NULL) 
            return head->size; 
        else 
            return 0;
        */
        void reverse();
        Node* operator[] (int i){return mp[i];}
        void updateMap();
};

int main()
{
    char command[15];
    LinkedList ll;
    int pos, data;
    while (1)
    {
        //Enter the command mentioned in the top
        std::cout<<"Command: ";
        std::cin>>command;
        if(!strcmp(command, "exit"))
            break;
        else if(!strcmp(command, "insertAtHead"))
        {
            std::cin>>data;
            ll.insertAtHead(data);
        }
        else if(!strcmp(command, "insertAtTail"))
        {
            std::cin>>data;
            ll.insertAtTail(data);
        }
        else if(!strcmp(command, "insertAt"))
        {
            std::cin>>pos;
            std::cin>>data;
            ll.insertAt(pos, data);
        }
        else if(!strcmp(command, "deleteHead"))
            ll.deleteHead();
        else if(!strcmp(command, "deleteTail"))
            ll.deleteTail();
        else if(!strcmp(command, "deletePos"))
        {
            std::cin>>pos;
            ll.deletePos(pos);
        }
        else if(!strcmp(command, "show"))
            ll.show();
        else if(!strcmp(command, "size"))
            std::cout<<"Size: "<<ll.size()<<'\n';
        else if(!strcmp(command, "clear"))
            for(int i=0; i<ll.size(); i++)
                ll.deleteHead();
        else if(!strcmp(command, "reverse"))
            ll.reverse();
    }
    return 0;
}

void LinkedList::insertAtHead(int data)
{
    if(head == NULL) //When LinkedList (LL) has no Nodes
    {
        //init head and tail to new Node(data)
        head = tail = new Node(data);
        return;
    }
    //else just move ptr to top and change head
    Node* ptr = new Node(data);
    head->prev = ptr;
    ptr->next = head;
    head = ptr;
    updateMap();
}

void LinkedList::insertAtTail(int data)
{
    if(head == NULL) //When LL has no Node
    {
        //init head and tail to new Node(data)
        head = tail = new Node(data);
        return;
    }
    //else just move ptr to bottom and change tail
    Node *ptr = new Node(data);
    tail->next = ptr;
    ptr->prev = tail;
    tail = ptr;
}

void LinkedList::insertAt(int pos, int data)
{
    if(!head) //When LL has no Node
    {
        head = tail = new Node(data);
        return;
    }
    if(pos == 0) //if pos is given to 0
    {
        insertAtHead(data);
        return;
    }
    Node* ptr = head;
    Node* prev;
    //traverse the LL till you get to the pos or
    //LL reached to the end
    while(ptr && --pos >= 0)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    //if LL reached the end that means either
    //pos is to insert at tail or pos>>size()
    //implying insert at tail
    if(prev == tail)
    {
        insertAtTail(data);
        return;
    }
    //else insert the Node at the Position given
    //and adjust the LL accordingly
    Node* next = ptr;
    ptr = new Node(data);
    prev->next = ptr;
    ptr->prev = prev;
    ptr->next = next;
    next->prev = ptr;
    updateMap();
}

void LinkedList::deleteHead()
{
    if(!head) //if LL is empty return
        return;
    //shift the new head and delete the old Node
    Node* tmp = head;
    if(head == tail)
        tail = NULL;
    head = head->next;
    mp[0] = head;
    delete tmp;
    updateMap();
}

void LinkedList::deleteTail()
{
    mp[size()-1] = NULL;
    if(!tail)//if LL is empty return
        return;
    //shift the new tail and delete the old Node
    Node *tmp = tail;
    if(head == tail)
        head = NULL;
    tail = tail->prev;
    if(tail)
        tail->next = NULL;
    delete tmp;
} 

void LinkedList::deletePos(int pos)
{
    //Find the pos to delete
    Node* ptr = head;
    for(int i=0; i!=pos && ptr!=NULL; i++,
        ptr = ptr->next);
    if(ptr == NULL)
        return;
    if(ptr == head)
    {
        deleteHead();
        return;
    }
    else if(ptr == tail)
    {
        deleteTail();
        return;
    }
    //connect the LL prev and next and delete the middle temp
    Node* next = ptr->next;
    Node* tmp = ptr;
    ptr = ptr->prev;
    ptr->next = next;
    next->prev = ptr;
    delete tmp;
    updateMap();
}

void LinkedList::show()
{
    if(!head)
    {
       std::cout<<"[]\n";
       return;
    }
    std::cout<<'['<<(*this)[0]->data<<']';
    for(int i=1; i<this->size(); i++)
        std::cout<<"<->["<<(*this)[i]->data<<"]";
    std::cout<<'\n';
    updateMap();
}

void LinkedList::reverse()
{
    Node* ptr = head;
    Node* tmp;
    while(ptr)
    {
        tmp = ptr->prev;
        ptr->prev = ptr->next;
        ptr->next = tmp;
        tmp = ptr;
        ptr = ptr->prev;
    }
    tail = head;
    head = tmp;
    updateMap();
}

void LinkedList::updateMap()
{
    Node *temp = head;
    int i=0;
    while(temp)
    {
        mp[i++] = temp;
        temp = temp->next;
    }
}