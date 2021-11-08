# Implement Stack using Priority Queue or Heap

## What is Priority Queue?
A Priority Queue is a abstract data type similar to queue & stack data structures in which each element has priority associated with it. Every element is given a priority number. In conclusion, the elements with high priority are prefered or served before elements with low priority.

## Algorithm to implement Stack using Priority Queue or Heap :

* First create a class stack with the priority queue. In addition to queue initialise a variable count = 0 inside it.
* Create a function push() which accepts an integer value as a parameter. Increment the count and push the pair of count and element in the priority queue.
* Create function top() and return the element stored in top i.e. second part of the pair stored at top of the priority queue.
* After that, create function isEmpty(). Return true if the priority queue is empty else return false.
* Similarly, create function pop() and check if queue is empty print “Empty Stack”. Else decrement the count and pop the top of the priority queue.
* Traverse the stack and while stack is not empty print the top and pop the top.

## Implement Stack using Priority Queue or Heap in C++ 
```cpp
#include<bits/stdc++.h> 
using namespace std; 
  
typedef pair<int, int> pi; 
  
class myStack{ 
      
    int count; 
    priorityQueue<pair<int, int> > pq; 
    
    public: 
        myStack():count(0){} 
        void push(int n); 
        void pop(); 
        int top(); 
        bool isEmpty(); 
}; 
  
void myStack::push(int n){ 
    count++; 
    pq.push(pi(count, n)); 
} 
  
void myStack::pop(){ 
    if(pq.empty()){ 
        cout<<"Stack is Empty!!!";
    } 
    count--; 
    pq.pop(); 
} 
  
int myStack::top(){ 
    pi temp=pq.top(); 
    return temp.second; 
} 
  
bool myStack::isEmpty(){ 
    return pq.empty(); 
} 
  
int main(){
    
    myStack* s=new myStack(); 
    s->push(1); 
    s->push(2); 
    s->push(3);
    
    while(!s->isEmpty()){ 
        cout<<s->top()<<" "; 
        s->pop(); 
    } 
}
```

## Implement Stack using Priority Queue or Heap in Java 
```java
import java.util.*;
class StackPriorityQueue{
    PriorityQueue<StackElement> queue = new PriorityQueue<>(10, new Comparator<StackElement>(){
        @Override
        public int compare(StackElement o1, StackElement o2) {
            return o2.key - o1.key;
        }
    });
    
    int order = 1;
    
    public void push(int val){
        StackElement element = new StackElement(order++,val);
        queue.add(element);
    }
    
    public Integer pop(){
        
        if(queue.isEmpty()){
            System.out.println("Empty Stack");
            return null;
        }
        
        return queue.poll().value;
    }
    
    public static void main(String[] args){
        
        StackPriorityQueue q = new StackPriorityQueue();
        q.push(1);
        q.push(2);
        q.push(3);
        
        System.out.print(q.pop()+" ");
        System.out.print(q.pop()+" ");
        System.out.print(q.pop()+" ");
    }
}
    
class StackElement {
    int key;
    int value;
    
    public StackElement(int key, int value) {
        this.key = key;
        this.value = value;
    }
}
```

Output for this program<br>
3 2 1
