# Queue using collections.deque

Deque is a class in queue module. It has quicker append and pop operations from both the ends of container, as deque provides an O(1) time complexity for append and pop operations. append() and popleft() functions are used instead of enqueue and deque.

# Example

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
