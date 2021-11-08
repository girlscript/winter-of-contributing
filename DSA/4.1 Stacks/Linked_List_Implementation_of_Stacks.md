# LINKED LIST IMPLEMENTATION OF STACK

## ABOUT STACKS:
Stacks is a kind of data-structure that hold elements in a linear fashion. The principle followed is LIFO which stands Last-In-First-Out. The latter means that , the element inserted at last in stack would be removed first from same. Further the famous pointer “top” is used to highlight the top most element of the stack or last inserted element in stack.
#### A pictorial way of representing stack:
![image](https://user-images.githubusercontent.com/77229404/140744106-207d3f6c-6639-431d-ac12-cb76aebe7df2.png)

[image credit](https://vivadifferences.com/wp-content/uploads/2020/03/Stack-Data-Structure.jpg)

## ABOUT LINKED LIST:
Linked list is a type of data-structure that holds elements  through non contagious memory locations. The memory units are called as nodes that hold the data along with the address of the next unit. This way, we can save chunks of memory and increase the efficiency of the component. The address here acts as a link which helps  user to traverse data , from one node to other.
#### The pictorial representation is below:
![image](https://user-images.githubusercontent.com/77229404/140744224-4d4e2a04-8306-44bc-9822-5d6482738c78.png)

[imagecredit]https://codeforwin.org/wp-content/uploads/2015/09/Linked-list-nodes.png

## IMPLEMENTATION :
The biggest advantage of implementing stack using linked list is , that it allows one to change the size of stack in runtime. The implementation begins by considering a linked list attached within a stack. The top pointer will be the lead to create a stack as it will move along the new inserted nodes. 
#### The pictorial representation is below:
![image](https://user-images.githubusercontent.com/77229404/140744273-198c1716-79ca-4c51-9a04-ed34e2668beb.png)

 
#### OPERATIONS PERFORMED:
-	PUSH:  To insert element into stack using top pointer.
-	POP: To remove element from stack using top pointer.
-	PEEK: Returns the element pointed by top pointer.
-	DISPLAY: To display the element pointed by stack.
-	SPLIT: Split the stack of length n in two stacks, each of length p and q such that p+q=n.
-	COMBINE: Combine((p(i1,i2,i3...ip),q(j1,j2,...jq)) into one stack of length p+q=n. The new stack should contain the elements of the stacks p and q in any combination.

### FOLLOWING IS THE IMPLEMENTATION USING CPP LANGUAGE:

```cpp
#include <iostream>
using namespace std;

//Declare Linked List node
struct node{
    int data;
    struct node* next;
    };

 //inserting node at index 0
 struct node* push(struct node* top,int x)
 {
     struct node* newnode =(struct node*)malloc(sizeof(struct node));
     if(newnode==NULL){                         //if the user is unable to dynamicallly create anymore nodes.
         cout<<"Stack Overflow"<<endl;
     }
     else
     {   newnode->data=x;      newnode->next=top;
     top = newnode;
     return top;
     }
     
 }   

//deleting the nodes
void pop(struct node* top)
{
    if(top==NULL){                              //Checking if stack is empty
    cout<<"Stack Underflow"<<endl;
    }
    
    else{
        struct node* temp = top;
        top= top->next;
        free(temp);
        }
}

//displaying elements
void display(struct node* top){
    while(top != NULL)
    {
        cout<<"ELEMENT: "<<top->data<<" ";
        top= top-> next;
    }
}

//returns element pointed by top 
void peek(struct node* top)
{
    if(top==NULL){                             //Checking if stack is empty
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
        int x = top->data;
        cout<<"ELEMENT POINTED BY TOP: "<<x<<endl;
    }
}

//split two stack
 void split(struct node *top, int p, int q)
 {
     int n = 0;
    struct node *temp;
    temp = top;

 // Find the length of the list
    while (temp != NULL)
   {
        n += 1;
        temp = temp->next;
   }

 // If ratio exceeds the actual length
    if (p + q > n)
   {
        cout << "-1" << endl;return;
   }
 
    temp = top;
    while (p > 1)
   {
        temp = temp->next;
        p -= 1;
   }

 // second head node after splitting
    struct node *top_p =  temp->next;
    temp->next = NULL;
    cout<<"STACK 2:  "<<endl;display(top_p);
    cout<<endl<<"STACK 1: "<<endl;
    display(top);
 }

 //Combine two stacks
void combine(struct node* top){
    struct node* top_p=NULL;
    int cho=0;
    do{
        cout<<"ENTER 1 FOR FILLING STACK 2: | 0 FOR EXIT"<<endl;cin>>cho;
        if(cho==1){
            int val_p;
            cout<<"ENTER VALUE"<<endl;
            cin>>val_p;
            top_p=push(top_p,val_p);
            }
        }while(cho!=0);
        
    if(top==NULL&&top_p==NULL){
        cout<<"LIST IS EMPTY"<<endl;
    }
    
    else if(top==NULL)
    {
        display(top_p);
    }
    else if(top_p==NULL)
    {
        display(top);
    }
    else
    {
        while(top_p != NULL){
            top=push(top,top_p->data);
            top_p=top_p->next;
        }
        display(top);
    }
}

int main()
{
    struct node* top1=NULL;
    struct node* top2=NULL;
    int choice, chara;
    
    do{
        cout<<"ENTER 1 FOR CONTINUE AND 0 FOR EXIT"<<endl;
        cin>>choice;
            if (choice==1)
            {
                cout<<"1: PUSH ELEMENTS IN MAIN STACK: "<<endl<<"2: POP ELEMENT FROM MAIN STACK: "<<endl<<"3: PEEK ELEMENT"<<endl<<"4: SPLIT THE MAIN STACK"<<endl<<"5: COMBINE THE STACKS"<<endl<<"6: DISPLAY STACK: "<<endl;
                
                cin>>chara;

        switch(chara)
        {
            case 1: 
               int val;\
               cout<<"ENTER VALUE: "<<endl;
               cin>>val;
               top1=push(top1,val);
               cout<<"STACK 1 ELEMENTS: " <<endl;
               display(top1);
               cout<<endl;
               break;
            case 2:
               pop(top1);
               cout<<"STACK 1 ELEMENTS: " <<endl;
               display(top1);
               break;
            case 3:
               peek(top1);
               break;
            case 4:
               int p,q;
               cout<<"ENTER RATIO P:Q "<<endl;
               cin>>p>>q;
               cout<<"SPLITTING STACK 1"<<endl;
               split(top1,p,q);
               cout<<endl;break;
            case 5:
               combine (top1);break;
            case 6: 
               display(top1);break;
            default:       
               cout<<endl<<"ENTERED WRONG OPTION:"<<endl;
            }
        }
    }while(choice!=0);
    
    return 0;
    
} 

```
### OUTPUT:
Tested in online compiler:
#### FILLING THE STACK:
![image](https://user-images.githubusercontent.com/77229404/140744394-60d54f8c-8a86-479e-8a1b-f0bd68f4e478.png)
 

#### SPLITTING THE STACK:
 ![image](https://user-images.githubusercontent.com/77229404/140744443-ec5533cc-9911-4c1a-9d01-907c121adb86.png)


#### COMBINING THE STACK:
 ![image](https://user-images.githubusercontent.com/77229404/140744481-b4d7bab7-f8b6-4b62-bca3-a8d724cce870.png)


### REFERENCES:
-	https://www.geeksforgeeks.org/implement-a-stack-using-singly-linked-list/
-	https://www.javatpoint.com/ds-linked-list-implementation-of-stack
