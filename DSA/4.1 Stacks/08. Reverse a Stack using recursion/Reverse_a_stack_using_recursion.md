## Reverse a stack using recursion

Suppose there's a problem statement where you have to write a programme that uses **recursion** to reverse a stack of integers **`st`**. You are not allowed to use loop constructs like **`while`**, **`for`**, etc. It is mandatory to reverse **`st`** using recursion. What do you do?

For Example:

**Input:** st = [7, 19, 100, 12, 10]

**Output:** [10, 12, 100, 19, 7]

A stack typically consists of two operations, namely **`push`** and **`pop`** operations on the stack's top. So, if we need to reverse a stack, we must **`pop`** the elements of the stack and **`push`** them one by one to another auxiliary stack. The auxiliary stack will thus be the same stack in reverse order.

However, we are not looking to use an auxiliary stack, but rather **recursion**. A recursive function, on the other hand, behaves like a stack. So, what we'll do is write a recursive function that pops all stack items and stores the popped item in the function call stack. When the input stack is empty, we move the new item from the call stack to the bottom of the input stack.

![Recursion in stack](https://drive.google.com/uc?export=view&id=1v9_kDXLMlIzTXmGd7nf5h3F__jMbW8Da)

Steps: 

* To reverse the stack, create a recursive function called **recur()**.

* **Pop** the top element in each recursive stack and hold it in the Stack function until we reach the end of the stack.

* **Push** the held element of each recursive call stack to the bottom of the stack as you move back up the recursion tree.

Sample C++ Program

```cpp
#include<iostream>
using namespace std;

stack<char> st;

string ns;
 
char store_bottom(char x)
{
 
    if(st.size() == 0)
    st.push(x);
 
    else
    {     
        char a = st.top();
        st.pop();
        store_bottom(x);
        st.push(a);
    }
}
 

char reverse()
{
    if(st.size()>0)
    {
         
        char x = st.top();
        st.pop();
        reverse();
        store_bottom(x);
    }
}
 
int main()
{
    st.push('7');
    st.push('19');
    st.push('100');
    st.push('12');
    st.push('10');
     
    cout<<"Original Stack"<<endl;
    cout<<"7"<<" "<<"19"<<" "<<"100"<<" "<<"12"<<" "<<"10"<<endl;
  
    reverse();
    cout<<"Reversed Stack"<<endl;
   
    while(!st.empty())
    {
        char p=st.top();
        st.pop();
        ns+=p;
    }
     
    cout<<ns[4]<<" "<<ns[3]<<" "<<ns[2]<<" "<<ns[1]<<" "<<ns[0]<<endl;
    return 0;
}
```

Time Complexity: O(n²)

Space Complexity: O(n)
