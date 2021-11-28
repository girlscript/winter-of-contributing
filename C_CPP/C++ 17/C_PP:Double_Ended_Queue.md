Double ended queue or simply called “Deque” is a generalized version of Queue.

The difference between Queue and Deque is that it does not follow the FIFO (First In, First Out) approach. The second feature of Deque is that we can insert and remove elements from either front or rear ends.
PROGRAMS ARE:-->
#include&lt;iostream&gt; 
using namespace std; 
   
#define MAX_size 10     // Maximum size of array or Dequeue 
   
// Deque class 
class Deque 
{ 
int  array[MAX_size]; 
int  front; 
int  rear; 
int  size; 
public : 
Deque(int size) { 
front = -1; 
rear = 0; 
this-&gt;size = size; 
    } 
   
    // Operations on Deque: 
void  insertfront(int key); 
void  insertrear(int key); 
void  deletefront(); 
void  deleterear(); 
int  getFront(); 
int  getRear(); 
     
    // Check if Deque is full
bool  isFull(){
return ((front == 0 &amp;&amp; rear == size-1)||front == rear+1);    
    } 
    // Check if Deque is empty 
bool  isEmpty(){
return (front == -1);  
    }
}; 
   
// Insert an element at front of the deque
void Deque::insertfront(int key) 
{ 
if (isFull())  { 
cout &lt;&lt; "Overflow!!\n" &lt;&lt; endl; 
return; 
    } 
   
    // If queue is initially empty,set front=rear=0; start of deque 
if (front == -1)  { 
front = 0; 
rear = 0; 
    } 
else if (front == 0)              // front is first position of queue 
front = size - 1 ; 
else // decrement front 1 position 
front = front-1; 
   
array[front] = key ;            // insert current element into Deque
} 
   
// insert element at the rear end of deque 
void Deque ::insertrear(int key) 
{ 
if (isFull()) { 
cout &lt;&lt; " Overflow!!\n " &lt;&lt; endl; 
return; 
    } 
   
    //  If queue is initially empty,set front=rear=0; start of deque 
if (front == -1) { 
front = 0; 
rear = 0; 
    } 
else if (rear == size-1)               // rear is at last position of queue
rear = 0; 
else                            // increment rear by 1 position 
rear = rear+1; 
   
array[rear] = key ;         // insert current element into Deque
} 
   
// Delete element at front of Deque 
void Deque ::deletefront() 
{ 
if (isEmpty()) 
   { 
cout &lt;&lt; "Queue Underflow!!\n" &lt;&lt; endl; 
return ; 
    } 
   
    // Deque has only one element 
 if (front == rear) 
    { 
front = -1; 
rear = -1; 
    } 
else
        // back to initial position 
if (front == size -1) 
front = 0; 
   
else // remove current front value from Deque;increment front by 1
front = front+1; 
} 
   
// Delete element at rear end of Deque 
void Deque::deleterear() 
{ 
if (isEmpty()) 
    { 
cout &lt;&lt; " Underflow!!\n" &lt;&lt; endl ; 
return ; 
    } 
   
    // Deque has only one element 
if (front == rear) 
    { 
front = -1; 
rear = -1; 
    } 
else if (rear == 0) 
rear = size-1; 
else
rear = rear-1; 
} 
// retrieve front element of Deque 
int Deque::getFront() 
{ 
if (isEmpty())   { 
cout &lt;&lt; " Underflow!!\n" &lt;&lt; endl; 
return -1 ; 
    } 
return array[front]; 
} 
   
// retrieve rear element of Deque 
int Deque::getRear() 
{ 
if(isEmpty() || rear &lt; 0)  { 
cout &lt;&lt; " Underflow!!\n" &lt;&lt; endl; 
return -1 ; 
    } 
return array[rear]; 
} 
   
//main program
int main() 
{ 
    Deque dq(5); 
cout &lt;&lt; "Insert element 1 at rear end \n"; 
dq.insertrear(1); 
   
cout &lt;&lt; "insert element 3 at rear end \n"; 
dq.insertrear(3); 
   
cout &lt;&lt; "rear element of deque " &lt;&lt; " " &lt;&lt; dq.getRear() &lt;&lt; endl; 
   
dq.deleterear(); 
cout &lt;&lt; "After deleterear, rear = " &lt;&lt; dq.getRear() &lt;&lt; endl; 
   
cout &lt;&lt; "inserting element 5 at front end \n"; 
dq.insertfront(5); 
   
cout &lt;&lt; "front element of deque " &lt;&lt; " "
&lt;&lt; dq.getFront() &lt;&lt; endl; 
   
dq.deletefront(); 
   
cout &lt;&lt; "After deletefront, front = " &lt;&lt; dq.getFront() &lt;&lt; endl; 
return 0; 
}
