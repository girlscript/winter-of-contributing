//Our Aim is to implement Queue using Stack 

//Here, we will write an Enqueue and Dequeue function using stacks

//in  the raw code i had taken stack object using stack library and using push ,pop,top  and empty function using stack library
//But i will write push,pop function alse for your comfort


//for implementing queue we have to take two stack objects so that in first we keep on adding values what we have to enqueue in queue
// and in second we just removing top element of stack1 and pushing it to second stack
// and when we remove top element of stack2 then its the same the 1st value of queue which we inserted on stack 1

#include <bits/stdc++.h>
using namespace std;
                       
struct Queue {
    stack<int> s1, s2;  //here we declared two stacks objects using stack keyword using stack library
 
    void enQueue(int x)
    {

        while (!s1.empty()) {  //here untill stack1 is empty we keep on removing top data of stack1 and pushing it into stack2
            s2.push(s1.top());  
            s1.pop();           
        }

        s1.push(x);           //when  stack1 is empty then we push our data which we have to enqueue in stack1
 
        while (!s2.empty()) {  //here, we pushing back all element to stack1 again which we pushed in stack 2 earlier
            s1.push(s2.top()); //we are doing tomaintain FIFO as the 1st element we enqueued will always remain on top of stack1
            s2.pop();               
        }
    }
 
    int deQueue()
    {   //if stack 1 is empty
        if (s1.empty()) {     
            cout << "Q is Empty";
            exit(0);
        }          
        //here , we are getting our result, the 1st element which we enqueued is popping out of stack1

        int x = s1.top();
        s1.pop();       //returning top of S1
        return x;
    }
};


int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(13);
    q.enQueue(33);
    q.enQueue(36);
    q.enQueue(39);
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
 
    return 0;
}

//  Here are the fuctions pushand pop for your reference

/*class stack1{
    public:
    int top;
    int size;
    int *p;
    void create(stack1*s);
};


 
void empty1(stack1 *s){
    if(s->top== -1)
    cout<<"stack is empty\n"<<endl;
    else
    cout<<"stack is not empty  "<<endl;
}

void display(stack1 *s){
    for(int i=s->top;i>=0;i--){
        cout<<s->p[i]<<"  ";
    }
    cout<<endl;
}
void push1(stack1 *s,int x){
if(s->top==s->size-1)
cout<<"stack overflow";
 else{
        s->top++;
        s->p[s->top]=x;
    }
}

int pop1(stack1 *st)
{
 int x=-1;
 
 if(st->top==-1)
 printf("Stack Underflow\n");
 else
 {
 x=st->p[st->top--];
 }
 return x;
}*/