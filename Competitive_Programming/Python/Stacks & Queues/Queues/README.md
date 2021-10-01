# Introduction

A queue is a FIFO (First In First Out). A queue, however, dequeues (removes) an element from the top of the queue, ​but it enqueues (inserts) an element at the bottom. Queue is used in solving problems having sequential processing.

<br>

<img src="../assets/queue.png"  style="max-width: 80%; height: auto; background:white"/>
<p>source: studytonight</p>

# Operations associated with queue are:

- Enqueue: Adds an item to the queue. If the queue is full, then it is said to be an Overflow condition.
- Dequeue: Removes an item from the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition.
- Front: Get the front item from queue.
- Rear: Get the last item from queue.

# Implementation

Stacks can be implemented in any of the following ways-

- [List](./list.md)
- [Collections](./collections.md)
- [queue.Queue](./queue.md)
- [Class](./class.md)

# Time Complexity

Dequeuing the first element takes O(1) time complexity.
