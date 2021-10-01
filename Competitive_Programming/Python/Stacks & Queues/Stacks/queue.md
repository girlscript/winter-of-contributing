# Stack using queue module

Queue module also has a LIFO Queue, which is basically a Stack. Data is inserted using the put() function and get() takes data out from the Queue.
<br>
There are various functions available in this module [Read here](https://docs.python.org/3/library/queue.html)

# Example

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
