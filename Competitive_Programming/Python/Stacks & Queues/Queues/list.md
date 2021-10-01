# Queue using list

In list, instead of enqueue() and dequeue(), append() and pop() function is used. However, lists are quite slow because inserting or deleting an element at the beginning takes O(n) time.

# Example

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
