# Stacks and Queues

Stacks and queues are similar data structures difference being only in the way of how the elements are removed.

# Stacks

## Introduction

A **stack** is a LIFO (Last In First Out) data structure. A stack pushes (inserts) a new element to the top of the stack and also pops (removes) the element from the top.

<br>

<img width="407" alt="stack" src="https://user-images.githubusercontent.com/80921436/135722823-f739b19e-f89b-43f2-a62c-126562c6f739.png">
<p>source: Programiz</p>

Stack includes the following functions:

- empty() – Returns a boolean value for whether the stack is empty or not.
- size() – Returns the size of the stack.
- top() – Returns a reference to the topmost element of the stack.
- push(item) – Inserts the element ‘item’ at the top of the stack.
- pop() – Deletes the topmost element of the stack.

## Implementation

Stacks can be implemented in any of the following ways-

- List
- Collections
- queue.LifoQueue
- Class

## `Stack using list`

Using list, we have to use **append()** instead of push() to add elements to the top of the stack while **pop()** remains as is.

## Example

```bash

stack = ['x', 'y', 'z'] # list as a stack

# append() function to push element in the stack
stack.append('a')
stack.append('b')
stack.append('c')

print("stack:",stack)

# pop() function to pop element from stack
print('Elements popped from stack:')
print(stack.pop())
print(stack.pop())
print(stack.pop())

print('Stack:',stack)
```

## Output

```bash
stack: ['x', 'y', 'z', 'a', 'b', 'c']
Elements popped from stack:
c
b
a
Stack: ['x', 'y', 'z']
```

## `Stack using collection.deque`

Python stack can be implemented using the deque class from the collections module. Deque provides an O(1) time complexity for append and pop operations as compared to list which provides O(n) time complexity.

## Example

```bash

from collections import deque

stack = deque()

# append() function to push element in the stack
stack.append('a')
stack.append('b')
stack.append('c')

print("stack:",stack)

# pop() function to pop element from stack
print('Elements popped from stack:')
print(stack.pop())
print(stack.pop())

print('Stack after popping:',stack)
```

## Output

```bash
stack: deque(['a', 'b', 'c'])
Elements popped from stack:
c
b
Stack after popping: deque(['a'])
```

## `Stack using queue module`

Queue module also has a LIFO Queue, which is basically a Stack. Data is inserted using the put() function and get() takes data out from the Queue.
<br>
There are various functions available in this module [Read here](https://docs.python.org/3/library/queue.html)

## Example

```bash
# Python program to demonstrate stack implementation using queue module

from queue import LifoQueue

# Initializing a stack
stack = LifoQueue(maxsize = 5)

# qsize() show the number of elements in the stack
print(stack.qsize())

# put() function to push element in the stack
stack.put('a')
stack.put('b')
stack.put('c')
stack.put('d')
stack.put('e')

print("Full: ", stack.full())
print("Size: ", stack.qsize())

# get() function to pop element from stack in LIFO order
print('Elements popped from the stack')
print(stack.get())
print(stack.get())
print(stack.get())

print("Is stack empty?", stack.empty()) # returns a boolean value
```

## Output

```bash
0
Full:  True
Size:  5
Elements popped from the stack
e
d
c
Is stack empty? False
```

## `Stack using user-defined class`

```bash
class Stack:
    def __init__(self):
        self.items = []

    def is_empty(self):
        # return len(self.items) == 0
        return not self.items

    def push(self, item):
        self.items.append(item)

    def pop(self):
        return self.items.pop()

    def peek(self):
        return self.items[-1]

    def size(self):
        return len(self.items)

    def __str__(self):
        return str(self.items)

if __name__ == "__main__":
    s = Stack()
    print(s)
    print(s.is_empty())
    s.push(3)
    print(s)
    s.push(7)
    s.push(5)
    print(s)
    print(s.pop())
    print(s)
    print(s.peek())
    print(s.size())
```

## Output

```bash
[]
True
[3]
[3, 7, 5]
5
[3, 7]
7
2
```

## Time Complexity

- Popping an element from a stack takes O(1) time complexity
- Popping the last element in a stack will take O(n).

# Queues

## Introduction

A queue is a FIFO (First In First Out). A queue, however, dequeues (removes) an element from the top of the queue, ​but it enqueues (inserts) an element at the bottom. Queue is used in solving problems having sequential processing.

<br>

![queue](https://user-images.githubusercontent.com/80921436/135722903-b37ee85b-8965-4fb3-a4e2-dc8304e419e7.png)
<p>source: studytonight</p>

## Operations associated with queue are:

- Enqueue: Adds an item to the queue. If the queue is full, then it is said to be an Overflow condition.
- Dequeue: Removes an item from the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition.
- Front: Get the front item from queue.
- Rear: Get the last item from queue.

## Implementation

Stacks can be implemented in any of the following ways-

- List
- Collections
- queue.Queue

## `Queue using list`

In list, instead of enqueue() and dequeue(), append() and pop() function is used. However, lists are quite slow because inserting or deleting an element at the beginning takes O(n) time.

## Example

```bash
# Initializing a queue
queue = []

# Adding elements to the queue
queue.append('x')
queue.append('y')
queue.append('z')

print("Queue:",queue)

# Removing elements from the queue
print("Elements dequeued from queue")
print(queue.pop(0))
print(queue.pop(0))

print("Queue after removing elements")
print(queue)
```

## Output

```bash
Queue: ['x', 'y', 'z']
Elements dequeued from queue
x
y
z
Queue after removing elements
[]
```

## `Queue using collections.deque`

Deque is a class in queue module. It has quicker append and pop operations from both the ends of container, as deque provides an O(1) time complexity for append and pop operations. append() and popleft() functions are used instead of enqueue and deque.

## Example

```bash
from collections import deque

# Initializing a queue
q = deque()

# Adding elements to a queue
q.append('x')
q.append('y')
q.append('z')

print("Initial queue",q)

# Removing elements from a queue
print("Elements dequeued from the queue")
print(q.popleft())
print(q.popleft())
print(q.popleft())

print("Queue",q)

```

## Output

```bash
Initial queue deque(['x', 'y', 'z'])
Elements dequeued from the queue
x
y
z
Queue deque([])
```

## `Queue using queue.Queue`

queue is a built-in module which has Queue class that follows FIFO rule. Its syntax is `queue.Queue(maxsize)` <br>
There are various functions available in this module [Read here](https://docs.python.org/3/library/queue.html)

## Example

```bash
from queue import Queue

# Initializing a queue
q = Queue(maxsize = 3) # A maxsize of zero ‘0’ means a infinite queue

# printing the maxsize of the Queue
print(q.qsize())

# Adding elements to queue
q.put('x')
q.put('y')

# Return Boolean for Full Queue
print("Full: ", q.full())

# Removing element from queue
print("Elements dequeued from the queue")
print(q.get())
print(q.get())

# Return Boolean for Empty Queue
print("Empty: ", q.empty())

q.put(1)
print("Empty: ", q.empty())
print("Full: ", q.full())
```

## Output

```bash
0
Full:  False
Elements dequeued from the queue
x
y
Empty:  True
Empty:  False
Full:  False
```

# Time Complexity

Dequeuing the first element takes O(1) time complexity.

# Why are Stacks and Queues useful?

Stacks and Queues are commonly used when implementing Breadth-First-Search (BFS) or Depth-First-Search (DFS) for trees and graphs. Queues are commonly used for BFS and Stacks for DFS.

### References

- [Data Structures: Stacks and Queues](https://medium.com/swlh/stacks-and-queues-f281aa5462cf)
- [Stack in Python](https://www.geeksforgeeks.org/stack-in-python/)
- [Queue in Python](www.geeksforgeeks.org/queue-in-python/)
