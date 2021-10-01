```bash
from collections import deque


class Queue:
    def __init__(self):
        self.items = deque()

    def is_empty(self):
        return not self.items
        # return len(self.items) == 0

    def enqueue(self, item):
        self.items.append(item)

    def dequeue(self):
        return self.items.popleft()

    def size(self):
        return len(self.items)

    def peek(self):
        return self.items[0]

    def __str__(self):
        return str(self.items)


if __name__ == "__main__":
    q = Queue()
    print(q)
    print(q.is_empty())
    q.enqueue("A")
    q.enqueue("D")
    q.enqueue("F")
    print(q)
    print(q.dequeue())
    print(q.dequeue())
    print(q)
    print(q.size())
    print(q.peek())
    print(q)
```

## Output

```bash
deque([])
True
deque(['A', 'D', 'F'])
A
D
deque(['F'])
1
F
deque(['F'])
```
