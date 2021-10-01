# Stack using collection.deque

Python stack can be implemented using the deque class from the collections module. Deque provides an O(1) time complexity for append and pop operations as compared to list which provides O(n) time complexity.

# Example

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
