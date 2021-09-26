# Python Queue:bookmark_tabs:
_________________

## Getting staring with Python Audio

</br>

### :point_right: **Audio link** - [Python Queue](https://drive.google.com/file/d/18WTpLxTWnaqYp4TIMN9N7ZgL_cJ4XM9Z/view?usp=sharing)  

</br>

## Audio Content

_________________

Like stack, queue is a linear data structure that stores items in First In First Out (FIFO) manner. With a queue the least recently added item is removed first.

### Need for Queue Data Structure

Suppose you want for a movie one day. In the multiplex, the tickets were issued on the First-Come-First-Serve basis and people were standing behind each other waiting for their turn. So, what will you do??  You must have gone to the back and stood behind the last person waiting for the ticket.

Here, the people are standing one behind the other and they are serviced based on the First-In-First-Out (FIFO) mechanism. Such an arrangement is known as a Queue.

### Operations associated with queue are

* Enqueue: Adds an item to the queue. If the queue is full, then it is said to be an Overflow condition – Time Complexity : O(1)
* Dequeue: Removes an item from the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition – Time Complexity : O(1)
* Front: Get the front item from queue – Time Complexity : O(1)
* Rear: Get the last item from queue – Time Complexity : O(1)
  
  </br>

    ![Queue operation](../python_stack&_queue/img/image.png)

### Implementation

There are various ways to implement a queue in Python. This article covers the implementation of queue using data structures and modules from Python library.
Queue in Python can be implemented by the following ways:

* list
* collections.deque
* queue.Queue

### Applications of Queue

* CPU scheduling, Disk Scheduling
* When data is transferred asynchronously between two processes.The queue is used for synchronization. For example: IO Buffers, pipes, file IO, etc
* Handling of interrupts in real-time systems.
* Call Center phone systems use Queues to hold people calling them in order.
