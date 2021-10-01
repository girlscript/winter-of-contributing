# Stack using list

Using list, we have to use **append()** instead of push() to add elements to the top of the stack while **pop()** remains as is.

# Example

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
