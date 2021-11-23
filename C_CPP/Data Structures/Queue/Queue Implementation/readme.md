# QUEUE

Queue is a linear data structure which follows a particular order in which operations are performed i.e. **First in First Out** also known as **FIFO**.
FIFO principle implies that the first element inserted will be the first one to be removed.<br>
Real life example of queue can be,line of vehicles on road during heavy traffic.Here the vehicle which came first will be the one to pass the traffic.<br><br>
<img src="https://github.com/ishrutik/winter-of-contributing/blob/C_CPP/C_CPP/Data%20Structures/Queue/Queue%20Implementation/Queue_Real_Life_Example.jpg"/>
<br><br><br>
Queue can be implemented using both linked list and arrays.<br><br>
Implementation using Array<br>
[Queue Implementation using Array](https://github.com/ishrutik/winter-of-contributing/blob/C_CPP/C_CPP/Data%20Structures/Queue/Queue%20Implementation/Queue_Using_Array.cpp)
<br><br>
Implementation using Linked List<br>
[Queue Implementation using Linked List](https://github.com/ishrutik/winter-of-contributing/blob/C_CPP/C_CPP/Data%20Structures/Queue/Queue%20Implementation/Queue_Using_LL.cpp)
<br><br>
Operations which we need to perform on queue are:<br>
- enqueue(element)<br>
  Insert the element in the queue i.e Insert element at rear side of queue.
- dequeue<br>
  Delete the element which was inserted initially i.e Delete element from front of queue.
- front()<br>
  Return the element present at front of queue.
- getSize()<br>
  Return the current size of queue i.e. number of elements present in queue.
- isEmpty()<br>
 Tell if queue is empty or not.<br><br>
  <img src="https://github.com/ishrutik/winter-of-contributing/blob/C_CPP/C_CPP/Data%20Structures/Queue/Queue%20Implementation/Queue.png"/>
  <br><br><br>

 Time complexity of insertion and deletion in queue is **O(1)**<br>

 Queue can also be implemented by using stacks.
 Under STL library inbuilt queue is also present.It performs following operations<br>
 push(element)<br>
 pop()<br>
 front()<br>
 size()<br>
 empty()<br>

