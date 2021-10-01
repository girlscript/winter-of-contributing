# Queue using queue.Queue

queue is a built-in module which has Queue class that follows FIFO rule. Its syntax is `queue.Queue(maxsize)` <br>
There are various functions available in this module [Read here](https://docs.python.org/3/library/queue.html)

# Example

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
