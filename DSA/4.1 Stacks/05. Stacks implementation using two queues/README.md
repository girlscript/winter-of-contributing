# **Implement Stack Using Two Queues**

## **Overview**

We will be implementing a stack class using two STL queue containers. Intresting part is that, both the stack and queue are entirely different data structures but, they can be converted into one another using some special arrangement.
- Stack : Last In First Out(LIFO)
- Queue : First In First Out(FIFO)

<br>

## **Approach**

- The idea is very simple but has its own limitations, we are going to use 2 queues, to implement the overall stack class. At a time, only one of the two queues will be storing the data and the other will be empty
- When we are going to remove an element, we will push the first (n - 1) elements out of the total n elements into the other queue and then remove the last element (current topmost element of the stack) this is how we are going to implement the pop function
- We can even make the push function by pushing the new element into the empty queue and then copying the remaining elements from the other queue into this queue

The disadvantage of this method is that it makes some of the common stack operations like pushing or popping or top ineffiecient

## **Dry-Run Analysis**

<br>

1. Initially inside our stack class object both the queues are empty
```txt
Stack : |Empty|
Queue1 : |Empty|
Queue2 : |Empty|
```
2. Let's say we start with Queue1 and push 7 into it
```txt
Stack : |7| <-- Top
Queue1 : |7| --> Head
Queue2 : |Empty|
```
3. Now let's say we push 8 into our stack
```txt
Stack : |7| <-- |8| <-- Top
Queue1 : |7| --> Head
Queue2 : |8| --> Head

Now we move the elements of Queue1 to Queue2

Queue1 : |Empty|
Queue2 : |7| --> |8| --> Head
```

4. This time let's push 17 into the stack
```txt
Stack : |7| <-- |8| <-- |17| <-- Top
Queue1 : |14| --> Head
Queue2 : |7| --> |8| --> Head

Now we move the elements of Queue2 to Queue1
Queue1 : |7| --> |8| --> |14| --> Head
Queue2 : |Empty|
```

5. Let's perform a pop operation on the stack
```txt
Stack : |7| <-- |8| <-- Top
Queue1 : |7| --> |8| --> Head
Queue2 : |Empty|

This is very simple, we just need to remove the front element of the Queue having the elements
```

<br>

## **Space And Time Complexity Analysis**

### **Time Complexity**
- push() : O(N) since we need to copy all the elements of one queue to the current queue
- pop() : O(1) since we just need to use the pop_front() operation on the active queue, which is order one
- top() : O(1) since we always have the access to the frontmost element of a queue
- size : O(1) this can be easily obtained by just maintaining a size variable
  
### **Space Complexity**
For all the operations the amortized space complexity is going to be O(1) since we are using the second queue only during push operations and even during a push operation the worst memory requirement is O(N + 1) that is when there is single element in one queue and all the remaining elements in the other, so overall if we calculate, our implementation is constant space implementation

<br>

## **Code**

```C++
#include <iostream>
#include <queue>

using namespace std;

template <typename T>
class Stack
{
private:
    queue <T> q1;
    queue <T> q2;
    int size;
    bool flag;

public:
    Stack()
    {
        size = 0;
        flag = true;
    }

    void push(T element)
    {
        size ++;
        if(flag)
        {
            q1.push(element);

            while(!q2.empty())
            {
                q1.push(q2.front());
                q2.pop();
            }
            flag = false;
        }
        else
        {
            q2.push(element);
            
            while(!q1.empty())
            {
                q2.push(q1.front());
                q1.pop();
            }
            flag = true;
        }    
    }

    bool is_empty()
    {
        return size == 0;
    }

    void pop()
    {
        if(!is_empty())
        {
            size --;
            if(flag)
            {
                q2.pop();
            }
            else
            {
                q1.pop();
            }
        }
        else
        {
            cout << "The stack is already Empty" << endl;
        }
    }

    T top()
    {
        if(flag)
            return q2.front();
        return q1.front();
    }

    int get_size()
    {
        return size;
    }
};

template <typename T>
void print_stack(Stack <T> s)
{
    cout << "*********************************************" << endl;
    cout << "The stack is :" << endl;
    while(!s.is_empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << "*********************************************" << endl;
}

int main()
{
    Stack <string> s;

    cout << "Enter the number of elements" << endl;
    int n; 
    cin >> n;

    while(n--)
    {
        string str;
        cin >> str;

        s.push(str);
    }

    print_stack(s);

    return 0;
}
```

<br>

## **Output**

<br>

![image](https://user-images.githubusercontent.com/34866732/143708318-e0743d06-98ae-4bf1-ad26-5594b4930a58.png)
