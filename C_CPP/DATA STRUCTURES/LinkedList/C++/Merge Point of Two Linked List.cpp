#include <iostream>
using namespace std;

class Node{         //declaring node as a class

    public:
        int key;
        bool flag;
        Node *next;

        Node(){
            key = 0;
            flag = false;
            next = NULL;
        }
        Node(int k, bool f){
            key = k;
            flag = f;

        }
};

class List      //declaring list as a class with various methods
{
    public:
        Node* head; 

        List(){
            head = NULL;
        }
        List(Node* n){
            head = n;

        }

        Node* nodeExists(int k){     //method to locate a specific node
            Node* temp = NULL;
            Node* ptr = head;

            while(ptr != NULL)
            {
                if(ptr->key==k)
                {
                    temp = ptr;
                }
                ptr = ptr->next;
            }
            return temp;
        }

        void appendNode(Node* n){        //method to append node in the list
            if(nodeExists(n->key) != NULL){
                cout << "Node Already Exists with key value: "<< n->key <<". Append with some other key value.";
            }
            else{
                if(head == NULL){
                    head = n;
                }
                else{
                    Node* ptr = head;
                    while(ptr->next != NULL){
                        ptr = ptr->next;
                    }
                    ptr->next = n;
                }
            }
        }

        void printlist(){        //method to print the list. Here, this is only used for checking while making the program and is not used for output
            if(head == NULL){
                cout<<"No nodes in this list"<<endl;
            }
            else{
                cout<<"Singly linked list values are as follows: "<<endl;
                Node* temp = head;
                while(temp!=NULL){
                    cout<<"("<<temp->key<<","<<temp->flag<<")-->";
                    temp = temp->next;
                }
                cout<<"NULL"<<endl;
            }
        }

        Node* FindHead(){
            Node* ptr = head;
            return ptr;
        }
};

int MergePoint(List s1, List s2){    //function for finding merge point
    Node* temp = s1.FindHead();
    while(temp != NULL)
    {
        temp->flag = true;
        temp = temp->next;
    }
    temp = s2.FindHead();
    while(temp != NULL)
    {
        if(temp->flag == true)
        {
            return temp->key;
        }
        temp = temp->next;
    }
    return -1;
}

int main()
{
    int i;
    List s1, s2;
    for(i = 0; i<10; i++){                  // put data on list 1
        Node* temp = new Node();
        temp->key = i+1;
        temp->flag = false;
        s1.appendNode(temp);
    }
    for(i = 60; i<66; i++){                 // put data on list 2
        Node* temp = new Node();
        temp->key = i+1;
        temp->flag = false;
        s2.appendNode(temp);
    }
    s2.appendNode(s1.nodeExists(7));

    s1.printlist();                         // print list 1
    cout<<endl;
    s2.printlist();                         // print list 2
    cout<<endl;

    int ans = MergePoint(s1, s2);           //merge point of list 1 and list 2
    if(ans == -1){
        cout<<"The two lists are not connected!"<<endl;
    }
    else{
        cout<<"The two lists merge at key value: "<<ans<<endl;
    }

    return 0;
}
/*Input := list 1 : 1->2->3->4->5->6->7->8->9->10->NULL
and list 2 : 61->62->63->64->65->66->7->8->9->10->NULL

Output := The two lists merge at key value: 7
*/
