# Insertion In Linked List
**Video Link**:-[Click Here](https://youtu.be/fLhQqJoAYjY)
<hr>
## Source Code

```cpp
#include<iostream>
using namespace std;
bool done_key[1000]={0};
class Node{
    public:
    int value;
    int key;
    Node* next;
};
class List{
    public:
    Node * head = NULL;
    void insert_at_end(Node * n){
        if(unique_key(n->key,done_key)){
           done_key[n->key]=1;
           Node * temp = head;
           while(temp->next!=NULL){
               temp = temp->next;
           }
           temp ->next = n;
           cout<<"Successfully Inserted!"<<endl;
        }
    }
    void insert_at_beg(Node * n){
        if(unique_key(n->key,done_key)){
           done_key[n->key]=1;
           n->next = head;
           head = n;
           cout<<"Successfully Inserted!"<<endl;
        }
    }
    void insertion_after_key(Node * n,int k){
        if(unique_key(n->key,done_key)){
            done_key[n->key]=1;
            Node * temp = head;
            while(temp->key!=k){
                temp = temp->next;
            }
            n->next = temp->next;
            temp->next = n;
            cout<<"Successfully Inserted!"<<endl;
        }
    }
    bool unique_key(int k,bool done_key[]){
        return !done_key[k];
    }
    void print(){
        Node * temp = head;
        while(temp->next!=NULL){
            cout<<temp->value<<" -> ";
            temp = temp->next;
        }
        cout<<temp->value<<endl;
    }
};
int main(){
    List l1;
    //inserting values into list
    int keys[5]={5,8,4,1,2};
    int values[5]={3,10,12,4,5};
    for(int i=0;i<5;i++){
        Node *temp = new Node();
        temp->key = keys[i];
        temp->value = values[i];
        l1.insert_at_beg(temp);
    }
    l1.print();
    cout<<endl;
    Node * temp = new Node();
    cout<<"Give Key For which value you want to insert:";
    cin>>temp->key;
    cout<<endl;
    cout<<"Enter the value to insert:";
    cin>>temp->value;
    cout<<endl;
    l1.insert_at_end(temp);
    l1.print();
    cout<<endl;
    temp = new Node();
    cout<<"Give Key For which value you want to insert:";
    cin>>temp->key;
    cout<<endl;
    cout<<"Enter the value to insert:";
    cin>>temp->value;
    cout<<endl;
    int k;
    cout<<"Enter the key after which you want to insert:";
    cin>>k;
    l1.insertion_after_key(temp,k);
    l1.print();
    cout<<endl;
    return 0;
}
```
