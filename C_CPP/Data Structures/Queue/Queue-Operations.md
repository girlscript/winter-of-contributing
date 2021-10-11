# Queue 

## What is Queue ?

A **queue** is basically a linked list where data can be **inserted** into it only from the **rear end** and can be **deleted** from the **front end**.
A queue is a _first in first out_(**FIFO**) structure.

![Screenshot (16)](https://user-images.githubusercontent.com/76544476/136729206-69bf88f3-79f9-4c6d-ba8b-13f06be9c904.png)

## Queue Operations

There are 4 operations in queue. The queue implementation needs to keep a track of front and rear ends of the queue.

## Enqueue

Insertion of data/element into queue is known as **Enqueue**. Once the data have been inserted, the new elements will be in the rear end of queue.
If there is no more of space/room for another element to be inserted, then the queue is in **Overflow** condition.

![Screenshot (18)](https://user-images.githubusercontent.com/76544476/136730297-db0af07b-c2dd-4efb-92ed-2290de523b24.png)

## Dequeue

Deletion of data/element from queue is known as**Dequeue**. Data at the front of queue can be removed and returned to the user from the queue. 
If there are no data in the queue already and if dequeue is aimed, then the queue is in **Underflow** condition. 

