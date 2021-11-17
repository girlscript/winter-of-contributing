# **Array with two Stacks**

## **How to implement two stacks in an array ?**  

Here, we will create two stacks, and we will implement these two stacks using only one array, i.e., both the stacks would be using the same array for storing elements.

**There are two approaches to implement two stacks using one array:**

### First Approach :

First, we will divide the array into two sub-arrays. The array will be divided into two equal parts. First, the sub-array would be considered stack1 and another sub array would be considered stack2.

For example, if we have an array of n equal to 8 elements. The array would be divided into two equal parts, i.e., 4 size each shown as below:
<br>

![Implement two stacks in an array](https://raw.githubusercontent.com/hatrixcode11500/public/main/implement-two-stacks-in-an-array.png)

<br>

The first subarray would be stack 1 named as st1, and the second subarray would be stack 2 named as st2. On st1, we would perform push1() and pop1() operations, while in st2, we would perform push2() and pop2() operations. The stack1 would be from 0 to n/2, and stack2 would be from n/2 to n-1.

If the size of the array is odd. For example, the size of an array is 9 then the left subarray would be of 4 size, and the right subarray would be of 5 size shown as below:

<br>

![Implement two stacks in an array 2](https://raw.githubusercontent.com/hatrixcode11500/public/main/implement-two-stacks-in-an-array2.png)

<br>

### **Implementation of the above approach :**  
```cpp
#include <iostream>
#include <stdlib.h>

using namespace std;

class twoStacks {
    int* arr;
    int size;
    int top1, top2;

public:
    // Constructor
    twoStacks(int n)
    {
        size = n;
        arr = new int[n];
        top1 = n / 2 + 1;
        top2 = n / 2;
    }

    // Method to push an element x to stack1
	void push1(int x)
    {
        // There is at least one empty
        // space for new element
        if (top1 > 0) {
            top1--;
            arr[top1] = x;
        }
        else {
            cout << "Stack Overflow"
                << " By element : " << x << endl;
            return;
        }
    }

    // Method to push an element
    // x to stack2
    void push2(int x)
    {

        // There is at least one empty
        // space for new element
        if (top2 < size - 1) {
            top2++;
            arr[top2] = x;
        }
        else {
            cout << "Stack Overflow"
                << " By element : " << x << endl;
            return;
        }
    }

    // Method to pop an element from first stack
    int pop1()
    {
        if (top1 <= size / 2) {
            int x = arr[top1];
            top1++;
            return x;
        }
        else {
            cout << "Stack UnderFlow";
            exit(1);
        }
    }

    // Method to pop an element
    // from second stack
    int pop2()
    {
        if (top2 >= size / 2 + 1) {
            int x = arr[top2];
            top2--;
            return x;
        }
        else {
            cout << "Stack UnderFlow";
            exit(1);
        }
    }
};

/* Driver program to test twoStacks class */
int main()
{
    twoStacks st(5);
    st.push1(5);
    st.push2(10);
    st.push2(15);
    st.push1(11);
    st.push2(7);
    cout << "Popped element from stack1"<< " : " << st.pop1()<< endl;
    st.push2(40);
    cout << "Popped element from stack2"<< " : " << st.pop2()<< endl;
    return 0;
}
```

### Output
```
Stack Overflow By element : 7
Popped element from stack1 : 11
Stack Overflow By element : 40
Popped element from stack2 : 15
```

### **Time Complexity**  
Time for insertion(push) & deletion(pop) operations on stack takes **O(1)**.
>Hence the time complexity is **O(1)** 

### **Space Complexity**  
In this method, We are using array to implement stack so the space required is size of the array.In this method we are not using space efficiently.
>Hence, the space complexity is **O(N).** (N=size of the array)

### Disadvantage of using this approach

Stack overflow condition occurs even if there is a space in the array. In the above example, if we are performing push1() operation on the stack1. Once the element is inserted at the 3rd index and if we try to insert more elements, then it leads to the overflow error even there is a space left in the array.

### Second Approach :

This method efficiently utilizes the available space. It doesn’t cause an overflow if there is space available in arr[]. The idea is to start two stacks from two extreme corners of arr[]. stack1 starts from the leftmost element, the first element in stack1 is pushed at index 0. The stack2 starts from the rightmost corner, the first element in stack2 is pushed at index (n-1). Both stacks grow (or shrink) in opposite direction. To check for overflow, all we need to check is for space between top elements of both stacks. This check is highlighted in the below code. 

<br>

![implementation of array with two stacks 3](https://raw.githubusercontent.com/hatrixcode11500/public/main/implement-two-stacks-in-an-array3.png)

### **Implementation of the above approach :**  
```cpp
#include <iostream>
#include <stdlib.h>

using namespace std;

class twoStacks {
    int* arr;
    int size;
    int top1, top2;

public:
    twoStacks(int n) // constructor
    {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }

    // Method to push an element x to stack1
    void push1(int x)
    {
        // There is at least one empty space for new element
        if (top1 < top2 - 1) {
            top1++;
            arr[top1] = x;
        }
        else {
            cout << "Stack Overflow";
            exit(1);
        }
    }

    // Method to push an element x to stack2
    void push2(int x)
    {
        // There is at least one empty
        // space for new element
        if (top1 < top2 - 1) {
            top2--;
            arr[top2] = x;
        }
        else {
            cout << "Stack Overflow";
            exit(1);
        }
    }

    // Method to pop an element from first stack
    int pop1()
    {
        if (top1 >= 0) {
            int x = arr[top1];
            top1--;
            return x;
        }
        else {
            cout << "Stack UnderFlow";
            exit(1);
        }
    }

    // Method to pop an element from second stack
    int pop2()
    {
        if (top2 < size) {
            int x = arr[top2];
            top2++;
            return x;
        }
        else {
            cout << "Stack UnderFlow";
            exit(1);
        }
    }
};

/* Driver program to test twoStacks class */
int main()
{
    twoStacks st(5);
    st.push1(5);
    st.push2(10);
    st.push2(15);
    st.push1(11);
    st.push2(7);
    cout << "Popped element from stack1 is "
        << st.pop1();
    st.push2(40);
    cout << "\nPopped element from stack2 is "
        << st.pop2();
    return 0;
}
```

### Output
```
Popped element from stack1 is 11
Popped element from stack2 is 40
```

### **Time Complexity**  
Time for insertion(push) & deletion(pop) operations on stack takes **O(1)**.
>Hence the time complexity is **O(1)** 

### **Space Complexity**  
In this method, We are using array to implement stack so the space required is size of the array. This is a space optimized solution.
>Hence, the space complexity is **O(N).** (N=size of the array)